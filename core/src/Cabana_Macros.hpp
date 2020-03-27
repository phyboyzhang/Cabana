/****************************************************************************
 * Copyright (c) 2018-2020 by the Cabana authors                            *
 * All rights reserved.                                                     *
 *                                                                          *
 * This file is part of the Cabana library. Cabana is distributed under a   *
 * BSD 3-clause license. For the licensing terms see the LICENSE file in    *
 * the top-level directory.                                                 *
 *                                                                          *
 * SPDX-License-Identifier: BSD-3-Clause                                    *
 ****************************************************************************/

#ifndef CABANA_MACROS_HPP
#define CABANA_MACROS_HPP

#include <Kokkos_Core.hpp>

#define CABANA_FUNCTION                                                        \
    [[deprecated( "Use KOKKOS_FUNCTION macro instead" )]] KOKKOS_FUNCTION
#define CABANA_INLINE_FUNCTION                                                 \
    [[deprecated(                                                              \
        "Use KOKKOS_INLINE_FUNCTION macro instead" )]] KOKKOS_INLINE_FUNCTION
#define CABANA_FORCEINLINE_FUNCTION                                            \
    [[deprecated( "Use KOKKOS_FORCEINLINE_FUNCTION macro "                     \
                  "instead" )]] KOKKOS_FORCEINLINE_FUNCTION
#define CABANA_DEPRECATED [[deprecated]]

#endif // end CABANA_MACROS_HPP
