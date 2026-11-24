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
enum class BatchErrorCode { NOT_SET, NOT_FOUND, INTERNAL_ERROR };

namespace BatchErrorCodeMapper {
AWS_PAYMENTS_API BatchErrorCode GetBatchErrorCodeForName(const Aws::String& name);

AWS_PAYMENTS_API Aws::String GetNameForBatchErrorCode(BatchErrorCode value);
}  // namespace BatchErrorCodeMapper
}  // namespace Model
}  // namespace Payments
}  // namespace Aws
