/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-thin-client/WorkSpacesThinClient_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkSpacesThinClient
{
namespace Model
{
  enum class SoftwareSetValidationStatus
  {
    NOT_SET,
    VALIDATED,
    NOT_VALIDATED
  };

namespace SoftwareSetValidationStatusMapper
{
AWS_WORKSPACESTHINCLIENT_API SoftwareSetValidationStatus GetSoftwareSetValidationStatusForName(const Aws::String& name);

AWS_WORKSPACESTHINCLIENT_API Aws::String GetNameForSoftwareSetValidationStatus(SoftwareSetValidationStatus value);
} // namespace SoftwareSetValidationStatusMapper
} // namespace Model
} // namespace WorkSpacesThinClient
} // namespace Aws
