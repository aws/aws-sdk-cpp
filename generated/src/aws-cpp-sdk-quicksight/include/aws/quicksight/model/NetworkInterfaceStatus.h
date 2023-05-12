/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class NetworkInterfaceStatus
  {
    NOT_SET,
    CREATING,
    AVAILABLE,
    CREATION_FAILED,
    UPDATING,
    UPDATE_FAILED,
    DELETING,
    DELETED,
    DELETION_FAILED,
    DELETION_SCHEDULED,
    ATTACHMENT_FAILED_ROLLBACK_FAILED
  };

namespace NetworkInterfaceStatusMapper
{
AWS_QUICKSIGHT_API NetworkInterfaceStatus GetNetworkInterfaceStatusForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForNetworkInterfaceStatus(NetworkInterfaceStatus value);
} // namespace NetworkInterfaceStatusMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
