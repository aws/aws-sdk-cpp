/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/panorama/PanoramaClient.h>

#include <algorithm>

namespace Aws {
namespace Panorama {

template <typename DerivedClient = PanoramaClient>
class PanoramaWaiter {
 public:
};
}  // namespace Panorama
}  // namespace Aws
