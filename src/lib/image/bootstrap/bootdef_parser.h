/* 
 * Copyright (c) 2016, Michael W. Bauer. All rights reserved.
 * 
 * “Singularity” Copyright (c) 2016, The Regents of the University of California,
 * through Lawrence Berkeley National Laboratory (subject to receipt of any
 * required approvals from the U.S. Dept. of Energy).  All rights reserved.
 * 
 * This software is licensed under a customized 3-clause BSD license.  Please
 * consult LICENSE file distributed with the sources of this project regarding
 * your rights to use or distribute this software.
 * 
 * NOTICE.  This Software was developed under funding from the U.S. Department of
 * Energy and the U.S. Government consequently retains certain rights. As such,
 * the U.S. Government has been granted for itself and others acting on its
 * behalf a paid-up, nonexclusive, irrevocable, worldwide license in the Software
 * to reproduce, distribute copies to the public, prepare derivative works, and
 * perform publicly and display publicly, and to permit other to do so. 
 * 
 */

#ifndef __SINGULARITY_BOOTDEF_H_
#define __SINGULARITY_BOOTDEF_H_

    int singularity_bootdef_open(char *bootdef_path);
    void singularity_bootdef_rewind();
    void singularity_bootdef_close();
    char *singularity_bootdef_get_value(char *key);
    int singularity_bootdef_get_version();
    int singularity_bootdef_section_find(char *section_name);
    int singularity_bootdef_section_get(char **script, char *section_name);

#endif
