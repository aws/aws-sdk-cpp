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
    AWS_PINPOINTSMSVOICEV2_API RegistrationAttachmentsInformation() = default;
    AWS_PINPOINTSMSVOICEV2_API RegistrationAttachmentsInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API RegistrationAttachmentsInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the registration attachment.</p>
     */
    inline const Aws::String& GetRegistrationAttachmentArn() const { return m_registrationAttachmentArn; }
    inline bool RegistrationAttachmentArnHasBeenSet() const { return m_registrationAttachmentArnHasBeenSet; }
    template<typename RegistrationAttachmentArnT = Aws::String>
    void SetRegistrationAttachmentArn(RegistrationAttachmentArnT&& value) { m_registrationAttachmentArnHasBeenSet = true; m_registrationAttachmentArn = std::forward<RegistrationAttachmentArnT>(value); }
    template<typename RegistrationAttachmentArnT = Aws::String>
    RegistrationAttachmentsInformation& WithRegistrationAttachmentArn(RegistrationAttachmentArnT&& value) { SetRegistrationAttachmentArn(std::forward<RegistrationAttachmentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the registration attachment.</p>
     */
    inline const Aws::String& GetRegistrationAttachmentId() const { return m_registrationAttachmentId; }
    inline bool RegistrationAttachmentIdHasBeenSet() const { return m_registrationAttachmentIdHasBeenSet; }
    template<typename RegistrationAttachmentIdT = Aws::String>
    void SetRegistrationAttachmentId(RegistrationAttachmentIdT&& value) { m_registrationAttachmentIdHasBeenSet = true; m_registrationAttachmentId = std::forward<RegistrationAttachmentIdT>(value); }
    template<typename RegistrationAttachmentIdT = Aws::String>
    RegistrationAttachmentsInformation& WithRegistrationAttachmentId(RegistrationAttachmentIdT&& value) { SetRegistrationAttachmentId(std::forward<RegistrationAttachmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the registration attachment. </p> <ul> <li> <p>
     * <code>UPLOAD_IN_PROGRESS</code> The attachment is being uploaded.</p> </li> <li>
     * <p> <code>UPLOAD_COMPLETE</code> The attachment has been uploaded.</p> </li>
     * <li> <p> <code>UPLOAD_FAILED</code> The attachment failed to uploaded.</p> </li>
     * <li> <p> <code>DELETED</code> The attachment has been deleted..</p> </li> </ul>
     */
    inline AttachmentStatus GetAttachmentStatus() const { return m_attachmentStatus; }
    inline bool AttachmentStatusHasBeenSet() const { return m_attachmentStatusHasBeenSet; }
    inline void SetAttachmentStatus(AttachmentStatus value) { m_attachmentStatusHasBeenSet = true; m_attachmentStatus = value; }
    inline RegistrationAttachmentsInformation& WithAttachmentStatus(AttachmentStatus value) { SetAttachmentStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of why the upload didn't successfully complete.</p>
     */
    inline AttachmentUploadErrorReason GetAttachmentUploadErrorReason() const { return m_attachmentUploadErrorReason; }
    inline bool AttachmentUploadErrorReasonHasBeenSet() const { return m_attachmentUploadErrorReasonHasBeenSet; }
    inline void SetAttachmentUploadErrorReason(AttachmentUploadErrorReason value) { m_attachmentUploadErrorReasonHasBeenSet = true; m_attachmentUploadErrorReason = value; }
    inline RegistrationAttachmentsInformation& WithAttachmentUploadErrorReason(AttachmentUploadErrorReason value) { SetAttachmentUploadErrorReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the registration attachment was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    RegistrationAttachmentsInformation& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_registrationAttachmentArn;
    bool m_registrationAttachmentArnHasBeenSet = false;

    Aws::String m_registrationAttachmentId;
    bool m_registrationAttachmentIdHasBeenSet = false;

    AttachmentStatus m_attachmentStatus{AttachmentStatus::NOT_SET};
    bool m_attachmentStatusHasBeenSet = false;

    AttachmentUploadErrorReason m_attachmentUploadErrorReason{AttachmentUploadErrorReason::NOT_SET};
    bool m_attachmentUploadErrorReasonHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
