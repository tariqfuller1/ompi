/* -*- Mode: C; c-basic-offset:4 ; indent-tabs-mode:nil -*- */
/*
 * Copyright (c) 2004-2005 The Trustees of Indiana University and Indiana
 *                         University Research and Technology
 *                         Corporation.  All rights reserved.
 * Copyright (c) 2004-2005 The University of Tennessee and The University
 *                         of Tennessee Research Foundation.  All rights
 *                         reserved.
 * Copyright (c) 2004-2005 High Performance Computing Center Stuttgart,
 *                         University of Stuttgart.  All rights reserved.
 * Copyright (c) 2004-2005 The Regents of the University of California.
 *                         All rights reserved.
 * Copyright (c) 2007-2016 Los Alamos National Security, LLC.  All rights
 *                         reserved.
 * Copyright (c) 2015      Research Organization for Information Science
 *                         and Technology (RIST). All rights reserved.
 * Copyright (c) 2019      Sandia National Laboratories.  All rights reserved.
 *
 * $COPYRIGHT$
 *
 * Additional copyrights may follow
 *
 * $HEADER$
 */

#ifndef OPAL_MCA_THREADS_QTHREADS_THREADS_QTHREADS_THREADS_H
#define OPAL_MCA_THREADS_QTHREADS_THREADS_QTHREADS_THREADS_H 1

#include <signal.h>
#include "opal/mca/threads/qthreads/threads_qthreads.h"

struct opal_thread_t {
    opal_object_t super;
    opal_thread_fn_t t_run;
    void *t_arg;
    void *t_ret;
    aligned_t t_thread_ret;
    aligned_t *t_thread_ret_ptr;
};

#endif /* OPAL_MCA_THREADS_QTHREADS_THREADS_QTHREADS_THREADS_H */
