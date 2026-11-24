/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payments/Payments_EXPORTS.h>

namespace Aws {
namespace Payments {
namespace Model {
enum class InvoiceFrequency { NOT_SET, ONE_TIME, RECURRING };

namespace InvoiceFrequencyMapper {
AWS_PAYMENTS_API InvoiceFrequency GetInvoiceFrequencyForName(const Aws::String& name);

AWS_PAYMENTS_API Aws::String GetNameForInvoiceFrequency(InvoiceFrequency value);
}  // namespace InvoiceFrequencyMapper
}  // namespace Model
}  // namespace Payments
}  // namespace Aws
