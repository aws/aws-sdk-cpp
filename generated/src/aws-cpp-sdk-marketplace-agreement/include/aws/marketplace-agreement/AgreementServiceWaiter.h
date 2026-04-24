/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/marketplace-agreement/AgreementServiceClient.h>

#include <algorithm>

namespace Aws {
namespace AgreementService {

template <typename DerivedClient = AgreementServiceClient>
class AgreementServiceWaiter {
 public:
};
}  // namespace AgreementService
}  // namespace Aws
