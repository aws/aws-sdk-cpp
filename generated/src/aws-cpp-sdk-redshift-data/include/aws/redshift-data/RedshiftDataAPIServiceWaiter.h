/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/redshift-data/RedshiftDataAPIServiceClient.h>

#include <algorithm>

namespace Aws {
namespace RedshiftDataAPIService {

template <typename DerivedClient = RedshiftDataAPIServiceClient>
class RedshiftDataAPIServiceWaiter {
 public:
};
}  // namespace RedshiftDataAPIService
}  // namespace Aws
