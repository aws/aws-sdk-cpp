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
enum class DueStatus { NOT_SET, DUE, PAST_DUE };

namespace DueStatusMapper {
AWS_PAYMENTS_API DueStatus GetDueStatusForName(const Aws::String& name);

AWS_PAYMENTS_API Aws::String GetNameForDueStatus(DueStatus value);
}  // namespace DueStatusMapper
}  // namespace Model
}  // namespace Payments
}  // namespace Aws
