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
  enum class WorkspaceImageErrorDetailCode
  {
    NOT_SET,
    OutdatedPowershellVersion,
    OfficeInstalled,
    PCoIPAgentInstalled,
    WindowsUpdatesEnabled,
    AutoMountDisabled,
    WorkspacesBYOLAccountNotFound,
    WorkspacesBYOLAccountDisabled,
    DHCPDisabled,
    DiskFreeSpace,
    AdditionalDrivesAttached,
    OSNotSupported,
    DomainJoined,
    AzureDomainJoined,
    FirewallEnabled,
    VMWareToolsInstalled,
    DiskSizeExceeded,
    IncompatiblePartitioning,
    PendingReboot,
    AutoLogonEnabled,
    RealTimeUniversalDisabled,
    MultipleBootPartition,
    Requires64BitOS,
    ZeroRearmCount,
    InPlaceUpgrade,
    AntiVirusInstalled,
    UEFINotSupported
  };

namespace WorkspaceImageErrorDetailCodeMapper
{
AWS_WORKSPACES_API WorkspaceImageErrorDetailCode GetWorkspaceImageErrorDetailCodeForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForWorkspaceImageErrorDetailCode(WorkspaceImageErrorDetailCode value);
} // namespace WorkspaceImageErrorDetailCodeMapper
} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
