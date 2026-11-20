/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/payments/PaymentsClient.h>

#include <algorithm>

namespace Aws {
namespace Payments {

template <typename DerivedClient = PaymentsClient>
class PaymentsWaiter {
 public:
};
}  // namespace Payments
}  // namespace Aws
