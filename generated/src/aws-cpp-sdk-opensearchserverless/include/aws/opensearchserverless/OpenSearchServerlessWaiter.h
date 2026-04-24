/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/opensearchserverless/OpenSearchServerlessClient.h>

#include <algorithm>

namespace Aws {
namespace OpenSearchServerless {

template <typename DerivedClient = OpenSearchServerlessClient>
class OpenSearchServerlessWaiter {
 public:
};
}  // namespace OpenSearchServerless
}  // namespace Aws
