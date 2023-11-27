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
  enum class SoftwareSetUpdateSchedule
  {
    NOT_SET,
    USE_MAINTENANCE_WINDOW,
    APPLY_IMMEDIATELY
  };

namespace SoftwareSetUpdateScheduleMapper
{
AWS_WORKSPACESTHINCLIENT_API SoftwareSetUpdateSchedule GetSoftwareSetUpdateScheduleForName(const Aws::String& name);

AWS_WORKSPACESTHINCLIENT_API Aws::String GetNameForSoftwareSetUpdateSchedule(SoftwareSetUpdateSchedule value);
} // namespace SoftwareSetUpdateScheduleMapper
} // namespace Model
} // namespace WorkSpacesThinClient
} // namespace Aws
