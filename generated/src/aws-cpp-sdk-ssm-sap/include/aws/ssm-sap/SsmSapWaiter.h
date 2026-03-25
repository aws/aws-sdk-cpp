/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/ssm-sap/SsmSapClient.h>

#include <algorithm>

namespace Aws {
namespace SsmSap {

template <typename DerivedClient = SsmSapClient>
class SsmSapWaiter {
 public:
};
}  // namespace SsmSap
}  // namespace Aws
