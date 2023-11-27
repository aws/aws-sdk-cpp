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
  enum class EnvironmentSoftwareSetComplianceStatus
  {
    NOT_SET,
    NO_REGISTERED_DEVICES,
    COMPLIANT,
    NOT_COMPLIANT
  };

namespace EnvironmentSoftwareSetComplianceStatusMapper
{
AWS_WORKSPACESTHINCLIENT_API EnvironmentSoftwareSetComplianceStatus GetEnvironmentSoftwareSetComplianceStatusForName(const Aws::String& name);

AWS_WORKSPACESTHINCLIENT_API Aws::String GetNameForEnvironmentSoftwareSetComplianceStatus(EnvironmentSoftwareSetComplianceStatus value);
} // namespace EnvironmentSoftwareSetComplianceStatusMapper
} // namespace Model
} // namespace WorkSpacesThinClient
} // namespace Aws
