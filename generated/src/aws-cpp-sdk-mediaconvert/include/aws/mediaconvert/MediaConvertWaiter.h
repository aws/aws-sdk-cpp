/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/mediaconvert/MediaConvertClient.h>

#include <algorithm>

namespace Aws {
namespace MediaConvert {

template <typename DerivedClient = MediaConvertClient>
class MediaConvertWaiter {
 public:
};
}  // namespace MediaConvert
}  // namespace Aws
