/* ====================================================================
 * Copyright (c) 1996-2000 Carnegie Mellon University.  All rights 
 * reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer. 
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. The names "Sphinx" and "Carnegie Mellon" must not be used to
 *    endorse or promote products derived from this software without
 *    prior written permission. To obtain permission, contact 
 *    sphinx@cs.cmu.edu.
 *
 * 4. Products derived from this software may not be called "Sphinx"
 *    nor may "Sphinx" appear in their names without prior written
 *    permission of Carnegie Mellon University. To obtain permission,
 *    contact sphinx@cs.cmu.edu.
 *
 * 5. Redistributions of any form whatsoever must retain the following
 *    acknowledgment:
 *    "This product includes software developed by Carnegie
 *    Mellon University (http://www.speech.cs.cmu.edu/)."
 *
 * THIS SOFTWARE IS PROVIDED BY CARNEGIE MELLON UNIVERSITY ``AS IS'' AND 
 * ANY EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, 
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL CARNEGIE MELLON UNIVERSITY
 * NOR ITS EMPLOYEES BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, 
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY 
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * ====================================================================
 *
 */
/*
 * time_align.h
 */


void time_align_set_beam_width(double bw);

int time_align_init(void);

void time_align_set_input(float *c,
			  float *d,
			  float *d_80,
			  float *p,
			  float *dd,
			  int n_f);

int time_align_word_sequence(char const * utt,
			     char const *left_word,
			     char *word_seq,
			     char const *right_word);

int time_align_seg_output(unsigned short **seg,
			  int *seg_cnt);
char *time_align_best_word_string(void);

#define NONE	-1
#define NO_ID	-1
#define NO_FRAME	-1
#define NO_EVAL	-1
#define NO_BP	-1

#define NO_SEGMENTATION	-1
#define NO_MEMORY	-2

#define FILLER_PHONE_SEQ -1
#define UNDEFINED	-1
#define INTERNAL_PHONE	-2

#define RIGHT_ADJACENT	1
#define LEFT_ADJACENT	-1
#define NOT_ADJACENT	0

#define NODE_CNT	(HMM_LAST_STATE+1)
#define MAX_NON_SIL_RC	10
#define MAX_SIL_RC	10

#define MAX_NODES	1024

#define MAX_COMPOUND_LEN	4

typedef struct compound_word_struct {
    int   word_id;		/* dictionary word id of the compound word */
    char const *word_str;	/* dictionary word string of the compound word */
    char const *match_str;	/* string to match against the input word sequence */
    int   word_cnt;		/* number of words in the match_str component */
} COMPOUND_WORD_T;

typedef struct dynmodel_struct {
    int model_best_score;	/* over all states in the model, the best score */
    int sseq_id;		/* senone sequence */
    int score[NODE_CNT];	/* best acoustic score to each state */
    int wbp[NODE_CNT];		/* word back pointer table index per state*/
    int pbp[NODE_CNT];		/* phone back pointer table index per state */
    int sbp[NODE_CNT];		/* state back pointer table index per state */
    int next_cnt;		/* number of successors to this model */
    int *next;			/* the indices of the successors to this model */
} DYNMODEL_T;

typedef struct {
    int id;			/* an identifier of the word/phone/state exited */
    int end_frame;		/* the time frame when the word/phone/state was exited */
    int score;			/* the score of the path at the point when the word/phone/state
				   was exited */
    int prev;			/* The index into the back pointer table of the prior back pointer */
} BACK_POINTER_T;

typedef struct {
    char const *name;		/* a string representation of the word/phone associated w/ the
				   time segment */
    int id;			/* integer representation of the word/phone/state segment */
    int start;			/* the frame when the word/phone was entered */
    int end;			/* the frame when the word/phone was exited */
    int score;			/* the acoustic score associated with the time segment.  Computed
				   as the difference of the back pointer score of the word/phone
				   end and the prior back pointer score */
} SEGMENT_T;

/* state segmentation will be handled w/ a simpler scheme since there is a one-to-one
   correspondence between states as frames.  So the start/end information need not be
   kept. */
    

typedef enum {WORD_SEGMENTATION, PHONE_SEGMENTATION, STATE_SEGMENTATION} seg_kind_t;

SEGMENT_T *time_align_get_segmentation(seg_kind_t kind, int *seg_cnt);
