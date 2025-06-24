/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkspacesInstances
{
namespace Model
{
  enum class ValidationExceptionReason
  {
    NOT_SET,
    UNKNOWN_OPERATION,
    UNSUPPORTED_OPERATION,
    CANNOT_PARSE,
    FIELD_VALIDATION_FAILED,
    DEPENDENCY_FAILURE,
    OTHER
  };

namespace ValidationExceptionReasonMapper
{
AWS_WORKSPACESINSTANCES_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_WORKSPACESINSTANCES_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
} // namespace ValidationExceptionReasonMapper
} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
