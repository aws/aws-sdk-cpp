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
  enum class DeviceSoftwareSetComplianceStatus
  {
    NOT_SET,
    NONE,
    COMPLIANT,
    NOT_COMPLIANT
  };

namespace DeviceSoftwareSetComplianceStatusMapper
{
AWS_WORKSPACESTHINCLIENT_API DeviceSoftwareSetComplianceStatus GetDeviceSoftwareSetComplianceStatusForName(const Aws::String& name);

AWS_WORKSPACESTHINCLIENT_API Aws::String GetNameForDeviceSoftwareSetComplianceStatus(DeviceSoftwareSetComplianceStatus value);
} // namespace DeviceSoftwareSetComplianceStatusMapper
} // namespace Model
} // namespace WorkSpacesThinClient
} // namespace Aws
