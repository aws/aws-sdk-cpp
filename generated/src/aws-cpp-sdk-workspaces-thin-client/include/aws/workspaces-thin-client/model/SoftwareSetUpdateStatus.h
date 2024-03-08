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
  enum class SoftwareSetUpdateStatus
  {
    NOT_SET,
    AVAILABLE,
    IN_PROGRESS,
    UP_TO_DATE
  };

namespace SoftwareSetUpdateStatusMapper
{
AWS_WORKSPACESTHINCLIENT_API SoftwareSetUpdateStatus GetSoftwareSetUpdateStatusForName(const Aws::String& name);

AWS_WORKSPACESTHINCLIENT_API Aws::String GetNameForSoftwareSetUpdateStatus(SoftwareSetUpdateStatus value);
} // namespace SoftwareSetUpdateStatusMapper
} // namespace Model
} // namespace WorkSpacesThinClient
} // namespace Aws
