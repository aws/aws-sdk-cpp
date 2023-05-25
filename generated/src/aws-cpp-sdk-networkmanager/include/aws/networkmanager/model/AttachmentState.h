/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NetworkManager
{
namespace Model
{
  enum class AttachmentState
  {
    NOT_SET,
    REJECTED,
    PENDING_ATTACHMENT_ACCEPTANCE,
    CREATING,
    FAILED,
    AVAILABLE,
    UPDATING,
    PENDING_NETWORK_UPDATE,
    PENDING_TAG_ACCEPTANCE,
    DELETING
  };

namespace AttachmentStateMapper
{
AWS_NETWORKMANAGER_API AttachmentState GetAttachmentStateForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForAttachmentState(AttachmentState value);
} // namespace AttachmentStateMapper
} // namespace Model
} // namespace NetworkManager
} // namespace Aws
