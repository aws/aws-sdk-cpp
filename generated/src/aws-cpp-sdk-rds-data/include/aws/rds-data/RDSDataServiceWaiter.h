/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/rds-data/RDSDataServiceClient.h>

#include <algorithm>

namespace Aws {
namespace RDSDataService {

template <typename DerivedClient = RDSDataServiceClient>
class RDSDataServiceWaiter {
 public:
};
}  // namespace RDSDataService
}  // namespace Aws
