/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SnowDeviceManagement
{
namespace Model
{
  enum class AttachmentStatus
  {
    NOT_SET,
    ATTACHING,
    ATTACHED,
    DETACHING,
    DETACHED
  };

namespace AttachmentStatusMapper
{
AWS_SNOWDEVICEMANAGEMENT_API AttachmentStatus GetAttachmentStatusForName(const Aws::String& name);

AWS_SNOWDEVICEMANAGEMENT_API Aws::String GetNameForAttachmentStatus(AttachmentStatus value);
} // namespace AttachmentStatusMapper
} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
