/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/mediastore/MediaStoreClient.h>

#include <algorithm>

namespace Aws {
namespace MediaStore {

template <typename DerivedClient = MediaStoreClient>
class MediaStoreWaiter {
 public:
};
}  // namespace MediaStore
}  // namespace Aws
