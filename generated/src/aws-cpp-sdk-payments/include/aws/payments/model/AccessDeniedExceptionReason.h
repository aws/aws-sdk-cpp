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
enum class AccessDeniedExceptionReason { NOT_SET, NOT_AUTHORIZED, INVALID_ACCOUNT_STATE, OTHER };

namespace AccessDeniedExceptionReasonMapper {
AWS_PAYMENTS_API AccessDeniedExceptionReason GetAccessDeniedExceptionReasonForName(const Aws::String& name);

AWS_PAYMENTS_API Aws::String GetNameForAccessDeniedExceptionReason(AccessDeniedExceptionReason value);
}  // namespace AccessDeniedExceptionReasonMapper
}  // namespace Model
}  // namespace Payments
}  // namespace Aws
