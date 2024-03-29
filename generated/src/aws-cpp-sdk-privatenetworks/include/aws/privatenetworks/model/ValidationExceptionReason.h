﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PrivateNetworks
{
namespace Model
{
  enum class ValidationExceptionReason
  {
    NOT_SET,
    UNKNOWN_OPERATION,
    CANNOT_PARSE,
    CANNOT_ASSUME_ROLE,
    FIELD_VALIDATION_FAILED,
    OTHER
  };

namespace ValidationExceptionReasonMapper
{
AWS_PRIVATENETWORKS_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_PRIVATENETWORKS_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
} // namespace ValidationExceptionReasonMapper
} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
