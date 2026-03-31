/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/payment-cryptography/PaymentCryptographyClient.h>

#include <algorithm>

namespace Aws {
namespace PaymentCryptography {

template <typename DerivedClient = PaymentCryptographyClient>
class PaymentCryptographyWaiter {
 public:
};
}  // namespace PaymentCryptography
}  // namespace Aws
