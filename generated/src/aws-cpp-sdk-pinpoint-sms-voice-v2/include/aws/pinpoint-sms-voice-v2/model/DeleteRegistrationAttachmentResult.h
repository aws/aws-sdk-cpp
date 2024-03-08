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
    AWS_PINPOINTSMSVOICEV2_API DeleteRegistrationAttachmentResult();
    AWS_PINPOINTSMSVOICEV2_API DeleteRegistrationAttachmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DeleteRegistrationAttachmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) for the registration attachment.</p>
     */
    inline const Aws::String& GetRegistrationAttachmentArn() const{ return m_registrationAttachmentArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the registration attachment.</p>
     */
    inline void SetRegistrationAttachmentArn(const Aws::String& value) { m_registrationAttachmentArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the registration attachment.</p>
     */
    inline void SetRegistrationAttachmentArn(Aws::String&& value) { m_registrationAttachmentArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the registration attachment.</p>
     */
    inline void SetRegistrationAttachmentArn(const char* value) { m_registrationAttachmentArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the registration attachment.</p>
     */
    inline DeleteRegistrationAttachmentResult& WithRegistrationAttachmentArn(const Aws::String& value) { SetRegistrationAttachmentArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the registration attachment.</p>
     */
    inline DeleteRegistrationAttachmentResult& WithRegistrationAttachmentArn(Aws::String&& value) { SetRegistrationAttachmentArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the registration attachment.</p>
     */
    inline DeleteRegistrationAttachmentResult& WithRegistrationAttachmentArn(const char* value) { SetRegistrationAttachmentArn(value); return *this;}


    /**
     * <p>The unique identifier for the registration attachment.</p>
     */
    inline const Aws::String& GetRegistrationAttachmentId() const{ return m_registrationAttachmentId; }

    /**
     * <p>The unique identifier for the registration attachment.</p>
     */
    inline void SetRegistrationAttachmentId(const Aws::String& value) { m_registrationAttachmentId = value; }

    /**
     * <p>The unique identifier for the registration attachment.</p>
     */
    inline void SetRegistrationAttachmentId(Aws::String&& value) { m_registrationAttachmentId = std::move(value); }

    /**
     * <p>The unique identifier for the registration attachment.</p>
     */
    inline void SetRegistrationAttachmentId(const char* value) { m_registrationAttachmentId.assign(value); }

    /**
     * <p>The unique identifier for the registration attachment.</p>
     */
    inline DeleteRegistrationAttachmentResult& WithRegistrationAttachmentId(const Aws::String& value) { SetRegistrationAttachmentId(value); return *this;}

    /**
     * <p>The unique identifier for the registration attachment.</p>
     */
    inline DeleteRegistrationAttachmentResult& WithRegistrationAttachmentId(Aws::String&& value) { SetRegistrationAttachmentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the registration attachment.</p>
     */
    inline DeleteRegistrationAttachmentResult& WithRegistrationAttachmentId(const char* value) { SetRegistrationAttachmentId(value); return *this;}


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
    inline void SetAttachmentStatus(const AttachmentStatus& value) { m_attachmentStatus = value; }

    /**
     * <p>The status of the registration attachment. </p> <ul> <li> <p>
     * <code>UPLOAD_IN_PROGRESS</code> The attachment is being uploaded.</p> </li> <li>
     * <p> <code>UPLOAD_COMPLETE</code> The attachment has been uploaded.</p> </li>
     * <li> <p> <code>UPLOAD_FAILED</code> The attachment failed to uploaded.</p> </li>
     * <li> <p> <code>DELETED</code> The attachment has been deleted..</p> </li> </ul>
     */
    inline void SetAttachmentStatus(AttachmentStatus&& value) { m_attachmentStatus = std::move(value); }

    /**
     * <p>The status of the registration attachment. </p> <ul> <li> <p>
     * <code>UPLOAD_IN_PROGRESS</code> The attachment is being uploaded.</p> </li> <li>
     * <p> <code>UPLOAD_COMPLETE</code> The attachment has been uploaded.</p> </li>
     * <li> <p> <code>UPLOAD_FAILED</code> The attachment failed to uploaded.</p> </li>
     * <li> <p> <code>DELETED</code> The attachment has been deleted..</p> </li> </ul>
     */
    inline DeleteRegistrationAttachmentResult& WithAttachmentStatus(const AttachmentStatus& value) { SetAttachmentStatus(value); return *this;}

    /**
     * <p>The status of the registration attachment. </p> <ul> <li> <p>
     * <code>UPLOAD_IN_PROGRESS</code> The attachment is being uploaded.</p> </li> <li>
     * <p> <code>UPLOAD_COMPLETE</code> The attachment has been uploaded.</p> </li>
     * <li> <p> <code>UPLOAD_FAILED</code> The attachment failed to uploaded.</p> </li>
     * <li> <p> <code>DELETED</code> The attachment has been deleted..</p> </li> </ul>
     */
    inline DeleteRegistrationAttachmentResult& WithAttachmentStatus(AttachmentStatus&& value) { SetAttachmentStatus(std::move(value)); return *this;}


    /**
     * <p>The error message if the upload failed.</p>
     */
    inline const AttachmentUploadErrorReason& GetAttachmentUploadErrorReason() const{ return m_attachmentUploadErrorReason; }

    /**
     * <p>The error message if the upload failed.</p>
     */
    inline void SetAttachmentUploadErrorReason(const AttachmentUploadErrorReason& value) { m_attachmentUploadErrorReason = value; }

    /**
     * <p>The error message if the upload failed.</p>
     */
    inline void SetAttachmentUploadErrorReason(AttachmentUploadErrorReason&& value) { m_attachmentUploadErrorReason = std::move(value); }

    /**
     * <p>The error message if the upload failed.</p>
     */
    inline DeleteRegistrationAttachmentResult& WithAttachmentUploadErrorReason(const AttachmentUploadErrorReason& value) { SetAttachmentUploadErrorReason(value); return *this;}

    /**
     * <p>The error message if the upload failed.</p>
     */
    inline DeleteRegistrationAttachmentResult& WithAttachmentUploadErrorReason(AttachmentUploadErrorReason&& value) { SetAttachmentUploadErrorReason(std::move(value)); return *this;}


    /**
     * <p>The time when the registration attachment was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The time when the registration attachment was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }

    /**
     * <p>The time when the registration attachment was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }

    /**
     * <p>The time when the registration attachment was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline DeleteRegistrationAttachmentResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The time when the registration attachment was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline DeleteRegistrationAttachmentResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteRegistrationAttachmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteRegistrationAttachmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteRegistrationAttachmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_registrationAttachmentArn;

    Aws::String m_registrationAttachmentId;

    AttachmentStatus m_attachmentStatus;

    AttachmentUploadErrorReason m_attachmentUploadErrorReason;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
