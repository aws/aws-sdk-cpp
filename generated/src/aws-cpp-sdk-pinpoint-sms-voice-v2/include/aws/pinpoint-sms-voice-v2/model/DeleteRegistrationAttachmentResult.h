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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace PinpointSMSVoiceV2
{
namespace Model
{
  class DeleteRegistrationAttachmentResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DeleteRegistrationAttachmentResult() = default;
    AWS_PINPOINTSMSVOICEV2_API DeleteRegistrationAttachmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DeleteRegistrationAttachmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the registration attachment.</p>
     */
    inline const Aws::String& GetRegistrationAttachmentArn() const { return m_registrationAttachmentArn; }
    template<typename RegistrationAttachmentArnT = Aws::String>
    void SetRegistrationAttachmentArn(RegistrationAttachmentArnT&& value) { m_registrationAttachmentArnHasBeenSet = true; m_registrationAttachmentArn = std::forward<RegistrationAttachmentArnT>(value); }
    template<typename RegistrationAttachmentArnT = Aws::String>
    DeleteRegistrationAttachmentResult& WithRegistrationAttachmentArn(RegistrationAttachmentArnT&& value) { SetRegistrationAttachmentArn(std::forward<RegistrationAttachmentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the registration attachment.</p>
     */
    inline const Aws::String& GetRegistrationAttachmentId() const { return m_registrationAttachmentId; }
    template<typename RegistrationAttachmentIdT = Aws::String>
    void SetRegistrationAttachmentId(RegistrationAttachmentIdT&& value) { m_registrationAttachmentIdHasBeenSet = true; m_registrationAttachmentId = std::forward<RegistrationAttachmentIdT>(value); }
    template<typename RegistrationAttachmentIdT = Aws::String>
    DeleteRegistrationAttachmentResult& WithRegistrationAttachmentId(RegistrationAttachmentIdT&& value) { SetRegistrationAttachmentId(std::forward<RegistrationAttachmentIdT>(value)); return *this;}
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
    inline void SetAttachmentStatus(AttachmentStatus value) { m_attachmentStatusHasBeenSet = true; m_attachmentStatus = value; }
    inline DeleteRegistrationAttachmentResult& WithAttachmentStatus(AttachmentStatus value) { SetAttachmentStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message if the upload failed.</p>
     */
    inline AttachmentUploadErrorReason GetAttachmentUploadErrorReason() const { return m_attachmentUploadErrorReason; }
    inline void SetAttachmentUploadErrorReason(AttachmentUploadErrorReason value) { m_attachmentUploadErrorReasonHasBeenSet = true; m_attachmentUploadErrorReason = value; }
    inline DeleteRegistrationAttachmentResult& WithAttachmentUploadErrorReason(AttachmentUploadErrorReason value) { SetAttachmentUploadErrorReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the registration attachment was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    DeleteRegistrationAttachmentResult& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteRegistrationAttachmentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
