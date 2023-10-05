/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{
  enum class WorkSpaceApplicationLicenseType
  {
    NOT_SET,
    LICENSED,
    UNLICENSED
  };

namespace WorkSpaceApplicationLicenseTypeMapper
{
AWS_WORKSPACES_API WorkSpaceApplicationLicenseType GetWorkSpaceApplicationLicenseTypeForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForWorkSpaceApplicationLicenseType(WorkSpaceApplicationLicenseType value);
} // namespace WorkSpaceApplicationLicenseTypeMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
