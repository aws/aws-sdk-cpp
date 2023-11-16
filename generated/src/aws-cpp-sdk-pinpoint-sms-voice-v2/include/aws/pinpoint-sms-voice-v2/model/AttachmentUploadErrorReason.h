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
  enum class AttachmentUploadErrorReason
  {
    NOT_SET,
    INTERNAL_ERROR
  };

namespace AttachmentUploadErrorReasonMapper
{
AWS_PINPOINTSMSVOICEV2_API AttachmentUploadErrorReason GetAttachmentUploadErrorReasonForName(const Aws::String& name);

AWS_PINPOINTSMSVOICEV2_API Aws::String GetNameForAttachmentUploadErrorReason(AttachmentUploadErrorReason value);
} // namespace AttachmentUploadErrorReasonMapper
} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
