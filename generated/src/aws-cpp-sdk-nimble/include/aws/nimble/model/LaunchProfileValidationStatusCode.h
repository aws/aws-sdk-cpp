/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{
  enum class LaunchProfileValidationStatusCode
  {
    NOT_SET,
    VALIDATION_NOT_STARTED,
    VALIDATION_IN_PROGRESS,
    VALIDATION_SUCCESS,
    VALIDATION_FAILED_INVALID_SUBNET_ROUTE_TABLE_ASSOCIATION,
    VALIDATION_FAILED_SUBNET_NOT_FOUND,
    VALIDATION_FAILED_INVALID_SECURITY_GROUP_ASSOCIATION,
    VALIDATION_FAILED_INVALID_ACTIVE_DIRECTORY,
    VALIDATION_FAILED_UNAUTHORIZED,
    VALIDATION_FAILED_INTERNAL_SERVER_ERROR
  };

namespace LaunchProfileValidationStatusCodeMapper
{
AWS_NIMBLESTUDIO_API LaunchProfileValidationStatusCode GetLaunchProfileValidationStatusCodeForName(const Aws::String& name);

AWS_NIMBLESTUDIO_API Aws::String GetNameForLaunchProfileValidationStatusCode(LaunchProfileValidationStatusCode value);
} // namespace LaunchProfileValidationStatusCodeMapper
} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
