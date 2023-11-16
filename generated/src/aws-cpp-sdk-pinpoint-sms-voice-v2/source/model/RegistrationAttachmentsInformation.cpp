/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/RegistrationAttachmentsInformation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

RegistrationAttachmentsInformation::RegistrationAttachmentsInformation() : 
    m_registrationAttachmentArnHasBeenSet(false),
    m_registrationAttachmentIdHasBeenSet(false),
    m_attachmentStatus(AttachmentStatus::NOT_SET),
    m_attachmentStatusHasBeenSet(false),
    m_attachmentUploadErrorReason(AttachmentUploadErrorReason::NOT_SET),
    m_attachmentUploadErrorReasonHasBeenSet(false),
    m_createdTimestampHasBeenSet(false)
{
}

RegistrationAttachmentsInformation::RegistrationAttachmentsInformation(JsonView jsonValue) : 
    m_registrationAttachmentArnHasBeenSet(false),
    m_registrationAttachmentIdHasBeenSet(false),
    m_attachmentStatus(AttachmentStatus::NOT_SET),
    m_attachmentStatusHasBeenSet(false),
    m_attachmentUploadErrorReason(AttachmentUploadErrorReason::NOT_SET),
    m_attachmentUploadErrorReasonHasBeenSet(false),
    m_createdTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

RegistrationAttachmentsInformation& RegistrationAttachmentsInformation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RegistrationAttachmentArn"))
  {
    m_registrationAttachmentArn = jsonValue.GetString("RegistrationAttachmentArn");

    m_registrationAttachmentArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegistrationAttachmentId"))
  {
    m_registrationAttachmentId = jsonValue.GetString("RegistrationAttachmentId");

    m_registrationAttachmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttachmentStatus"))
  {
    m_attachmentStatus = AttachmentStatusMapper::GetAttachmentStatusForName(jsonValue.GetString("AttachmentStatus"));

    m_attachmentStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttachmentUploadErrorReason"))
  {
    m_attachmentUploadErrorReason = AttachmentUploadErrorReasonMapper::GetAttachmentUploadErrorReasonForName(jsonValue.GetString("AttachmentUploadErrorReason"));

    m_attachmentUploadErrorReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue RegistrationAttachmentsInformation::Jsonize() const
{
  JsonValue payload;

  if(m_registrationAttachmentArnHasBeenSet)
  {
   payload.WithString("RegistrationAttachmentArn", m_registrationAttachmentArn);

  }

  if(m_registrationAttachmentIdHasBeenSet)
  {
   payload.WithString("RegistrationAttachmentId", m_registrationAttachmentId);

  }

  if(m_attachmentStatusHasBeenSet)
  {
   payload.WithString("AttachmentStatus", AttachmentStatusMapper::GetNameForAttachmentStatus(m_attachmentStatus));
  }

  if(m_attachmentUploadErrorReasonHasBeenSet)
  {
   payload.WithString("AttachmentUploadErrorReason", AttachmentUploadErrorReasonMapper::GetNameForAttachmentUploadErrorReason(m_attachmentUploadErrorReason));
  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("CreatedTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
