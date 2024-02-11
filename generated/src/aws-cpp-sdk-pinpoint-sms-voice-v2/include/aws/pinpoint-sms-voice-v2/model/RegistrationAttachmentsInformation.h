/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/AttachmentStatus.h>
#include <aws/pinpoint-sms-voice-v2/model/AttachmentUploadErrorReason.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   * <p>Provides information on the specified registration attachments.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/RegistrationAttachmentsInformation">AWS
   * API Reference</a></p>
   */
  class RegistrationAttachmentsInformation
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API RegistrationAttachmentsInformation();
    AWS_PINPOINTSMSVOICEV2_API RegistrationAttachmentsInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API RegistrationAttachmentsInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) for the registration attachment.</p>
     */
    inline const Aws::String& GetRegistrationAttachmentArn() const{ return m_registrationAttachmentArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the registration attachment.</p>
     */
    inline bool RegistrationAttachmentArnHasBeenSet() const { return m_registrationAttachmentArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the registration attachment.</p>
     */
    inline void SetRegistrationAttachmentArn(const Aws::String& value) { m_registrationAttachmentArnHasBeenSet = true; m_registrationAttachmentArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the registration attachment.</p>
     */
    inline void SetRegistrationAttachmentArn(Aws::String&& value) { m_registrationAttachmentArnHasBeenSet = true; m_registrationAttachmentArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the registration attachment.</p>
     */
    inline void SetRegistrationAttachmentArn(const char* value) { m_registrationAttachmentArnHasBeenSet = true; m_registrationAttachmentArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the registration attachment.</p>
     */
    inline RegistrationAttachmentsInformation& WithRegistrationAttachmentArn(const Aws::String& value) { SetRegistrationAttachmentArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the registration attachment.</p>
     */
    inline RegistrationAttachmentsInformation& WithRegistrationAttachmentArn(Aws::String&& value) { SetRegistrationAttachmentArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the registration attachment.</p>
     */
    inline RegistrationAttachmentsInformation& WithRegistrationAttachmentArn(const char* value) { SetRegistrationAttachmentArn(value); return *this;}


    /**
     * <p>The unique identifier for the registration attachment.</p>
     */
    inline const Aws::String& GetRegistrationAttachmentId() const{ return m_registrationAttachmentId; }

    /**
     * <p>The unique identifier for the registration attachment.</p>
     */
    inline bool RegistrationAttachmentIdHasBeenSet() const { return m_registrationAttachmentIdHasBeenSet; }

    /**
     * <p>The unique identifier for the registration attachment.</p>
     */
    inline void SetRegistrationAttachmentId(const Aws::String& value) { m_registrationAttachmentIdHasBeenSet = true; m_registrationAttachmentId = value; }

    /**
     * <p>The unique identifier for the registration attachment.</p>
     */
    inline void SetRegistrationAttachmentId(Aws::String&& value) { m_registrationAttachmentIdHasBeenSet = true; m_registrationAttachmentId = std::move(value); }

    /**
     * <p>The unique identifier for the registration attachment.</p>
     */
    inline void SetRegistrationAttachmentId(const char* value) { m_registrationAttachmentIdHasBeenSet = true; m_registrationAttachmentId.assign(value); }

    /**
     * <p>The unique identifier for the registration attachment.</p>
     */
    inline RegistrationAttachmentsInformation& WithRegistrationAttachmentId(const Aws::String& value) { SetRegistrationAttachmentId(value); return *this;}

    /**
     * <p>The unique identifier for the registration attachment.</p>
     */
    inline RegistrationAttachmentsInformation& WithRegistrationAttachmentId(Aws::String&& value) { SetRegistrationAttachmentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the registration attachment.</p>
     */
    inline RegistrationAttachmentsInformation& WithRegistrationAttachmentId(const char* value) { SetRegistrationAttachmentId(value); return *this;}


    /**
     * <p>The status of the registration attachment. </p> <ul> <li> <p>
     * <code>UPLOAD_IN_PROGRESS</code> The attachment is being uploaded.</p> </li> <li>
     * <p> <code>UPLOAD_COMPLETE</code> The attachment has been uploaded.</p> </li>
     * <li> <p> <code>UPLOAD_FAILED</code> The attachment failed to uploaded.</p> </li>
     * <li> <p> <code>DELETED</code> The attachment has been deleted..</p> </li> </ul>
     */
    inline const AttachmentStatus& GetAttachmentStatus() const{ return m_attachmentStatus; }

    /**
     * <p>The status of the registration attachment. </p> <ul> <li> <p>
     * <code>UPLOAD_IN_PROGRESS</code> The attachment is being uploaded.</p> </li> <li>
     * <p> <code>UPLOAD_COMPLETE</code> The attachment has been uploaded.</p> </li>
     * <li> <p> <code>UPLOAD_FAILED</code> The attachment failed to uploaded.</p> </li>
     * <li> <p> <code>DELETED</code> The attachment has been deleted..</p> </li> </ul>
     */
    inline bool AttachmentStatusHasBeenSet() const { return m_attachmentStatusHasBeenSet; }

    /**
     * <p>The status of the registration attachment. </p> <ul> <li> <p>
     * <code>UPLOAD_IN_PROGRESS</code> The attachment is being uploaded.</p> </li> <li>
     * <p> <code>UPLOAD_COMPLETE</code> The attachment has been uploaded.</p> </li>
     * <li> <p> <code>UPLOAD_FAILED</code> The attachment failed to uploaded.</p> </li>
     * <li> <p> <code>DELETED</code> The attachment has been deleted..</p> </li> </ul>
     */
    inline void SetAttachmentStatus(const AttachmentStatus& value) { m_attachmentStatusHasBeenSet = true; m_attachmentStatus = value; }

    /**
     * <p>The status of the registration attachment. </p> <ul> <li> <p>
     * <code>UPLOAD_IN_PROGRESS</code> The attachment is being uploaded.</p> </li> <li>
     * <p> <code>UPLOAD_COMPLETE</code> The attachment has been uploaded.</p> </li>
     * <li> <p> <code>UPLOAD_FAILED</code> The attachment failed to uploaded.</p> </li>
     * <li> <p> <code>DELETED</code> The attachment has been deleted..</p> </li> </ul>
     */
    inline void SetAttachmentStatus(AttachmentStatus&& value) { m_attachmentStatusHasBeenSet = true; m_attachmentStatus = std::move(value); }

    /**
     * <p>The status of the registration attachment. </p> <ul> <li> <p>
     * <code>UPLOAD_IN_PROGRESS</code> The attachment is being uploaded.</p> </li> <li>
     * <p> <code>UPLOAD_COMPLETE</code> The attachment has been uploaded.</p> </li>
     * <li> <p> <code>UPLOAD_FAILED</code> The attachment failed to uploaded.</p> </li>
     * <li> <p> <code>DELETED</code> The attachment has been deleted..</p> </li> </ul>
     */
    inline RegistrationAttachmentsInformation& WithAttachmentStatus(const AttachmentStatus& value) { SetAttachmentStatus(value); return *this;}

    /**
     * <p>The status of the registration attachment. </p> <ul> <li> <p>
     * <code>UPLOAD_IN_PROGRESS</code> The attachment is being uploaded.</p> </li> <li>
     * <p> <code>UPLOAD_COMPLETE</code> The attachment has been uploaded.</p> </li>
     * <li> <p> <code>UPLOAD_FAILED</code> The attachment failed to uploaded.</p> </li>
     * <li> <p> <code>DELETED</code> The attachment has been deleted..</p> </li> </ul>
     */
    inline RegistrationAttachmentsInformation& WithAttachmentStatus(AttachmentStatus&& value) { SetAttachmentStatus(std::move(value)); return *this;}


    /**
     * <p>A description of why the upload didn't successfully complete.</p>
     */
    inline const AttachmentUploadErrorReason& GetAttachmentUploadErrorReason() const{ return m_attachmentUploadErrorReason; }

    /**
     * <p>A description of why the upload didn't successfully complete.</p>
     */
    inline bool AttachmentUploadErrorReasonHasBeenSet() const { return m_attachmentUploadErrorReasonHasBeenSet; }

    /**
     * <p>A description of why the upload didn't successfully complete.</p>
     */
    inline void SetAttachmentUploadErrorReason(const AttachmentUploadErrorReason& value) { m_attachmentUploadErrorReasonHasBeenSet = true; m_attachmentUploadErrorReason = value; }

    /**
     * <p>A description of why the upload didn't successfully complete.</p>
     */
    inline void SetAttachmentUploadErrorReason(AttachmentUploadErrorReason&& value) { m_attachmentUploadErrorReasonHasBeenSet = true; m_attachmentUploadErrorReason = std::move(value); }

    /**
     * <p>A description of why the upload didn't successfully complete.</p>
     */
    inline RegistrationAttachmentsInformation& WithAttachmentUploadErrorReason(const AttachmentUploadErrorReason& value) { SetAttachmentUploadErrorReason(value); return *this;}

    /**
     * <p>A description of why the upload didn't successfully complete.</p>
     */
    inline RegistrationAttachmentsInformation& WithAttachmentUploadErrorReason(AttachmentUploadErrorReason&& value) { SetAttachmentUploadErrorReason(std::move(value)); return *this;}


    /**
     * <p>The time when the registration attachment was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The time when the registration attachment was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The time when the registration attachment was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The time when the registration attachment was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The time when the registration attachment was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline RegistrationAttachmentsInformation& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The time when the registration attachment was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline RegistrationAttachmentsInformation& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_registrationAttachmentArn;
    bool m_registrationAttachmentArnHasBeenSet = false;

    Aws::String m_registrationAttachmentId;
    bool m_registrationAttachmentIdHasBeenSet = false;

    AttachmentStatus m_attachmentStatus;
    bool m_attachmentStatusHasBeenSet = false;

    AttachmentUploadErrorReason m_attachmentUploadErrorReason;
    bool m_attachmentUploadErrorReasonHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
