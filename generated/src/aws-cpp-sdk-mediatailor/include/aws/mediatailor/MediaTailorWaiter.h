/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/mediatailor/MediaTailorClient.h>

#include <algorithm>

namespace Aws {
namespace MediaTailor {

template <typename DerivedClient = MediaTailorClient>
class MediaTailorWaiter {
 public:
};
}  // namespace MediaTailor
}  // namespace Aws
