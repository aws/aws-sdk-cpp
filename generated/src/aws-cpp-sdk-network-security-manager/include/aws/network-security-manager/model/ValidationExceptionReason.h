/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {
enum class ValidationExceptionReason { NOT_SET, ACCOUNT_NOT_ONBOARDED, FIELD_VALIDATION_FAILED, OTHER };

namespace ValidationExceptionReasonMapper {
AWS_NETWORKSECURITYMANAGER_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_NETWORKSECURITYMANAGER_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
}  // namespace ValidationExceptionReasonMapper
}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
