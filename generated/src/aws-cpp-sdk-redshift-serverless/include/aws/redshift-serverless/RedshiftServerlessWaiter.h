/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/redshift-serverless/RedshiftServerlessClient.h>

#include <algorithm>

namespace Aws {
namespace RedshiftServerless {

template <typename DerivedClient = RedshiftServerlessClient>
class RedshiftServerlessWaiter {
 public:
};
}  // namespace RedshiftServerless
}  // namespace Aws
