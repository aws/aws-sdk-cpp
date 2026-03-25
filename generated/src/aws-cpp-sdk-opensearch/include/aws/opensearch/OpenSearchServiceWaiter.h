/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/opensearch/OpenSearchServiceClient.h>

#include <algorithm>

namespace Aws {
namespace OpenSearchService {

template <typename DerivedClient = OpenSearchServiceClient>
class OpenSearchServiceWaiter {
 public:
};
}  // namespace OpenSearchService
}  // namespace Aws
