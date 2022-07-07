/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/**
 * use __has_trivial_copy instead of std for GCC < 5 compatability
 */
#ifdef LEGACY_GCC
#define IS_TRIVIALLY_COPY_CONSTRUCTIBLE(T) __has_trivial_copy(T)
#else
#define IS_TRIVIALLY_COPY_CONSTRUCTIBLE(T) std::is_trivially_copy_constructible<T>::value
#endif
