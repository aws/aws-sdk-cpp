/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{
  enum class AttachmentStatus
  {
    NOT_SET,
    UPLOAD_IN_PROGRESS,
    UPLOAD_COMPLETE,
    UPLOAD_FAILED,
    DELETED
  };

namespace AttachmentStatusMapper
{
AWS_PINPOINTSMSVOICEV2_API AttachmentStatus GetAttachmentStatusForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForAttachmentStatus(AttachmentStatus value);
} // namespace AttachmentStatusMapper
} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
