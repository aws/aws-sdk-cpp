/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/AttachmentStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/pinpoint-sms-voice-v2/model/Tag.h>
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
  class CreateRegistrationAttachmentResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API CreateRegistrationAttachmentResult();
    AWS_PINPOINTSMSVOICEV2_API CreateRegistrationAttachmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API CreateRegistrationAttachmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the registration attachment.</p>
     */
    inline const Aws::String& GetRegistrationAttachmentArn() const{ return m_registrationAttachmentArn; }
    inline void SetRegistrationAttachmentArn(const Aws::String& value) { m_registrationAttachmentArn = value; }
    inline void SetRegistrationAttachmentArn(Aws::String&& value) { m_registrationAttachmentArn = std::move(value); }
    inline void SetRegistrationAttachmentArn(const char* value) { m_registrationAttachmentArn.assign(value); }
    inline CreateRegistrationAttachmentResult& WithRegistrationAttachmentArn(const Aws::String& value) { SetRegistrationAttachmentArn(value); return *this;}
    inline CreateRegistrationAttachmentResult& WithRegistrationAttachmentArn(Aws::String&& value) { SetRegistrationAttachmentArn(std::move(value)); return *this;}
    inline CreateRegistrationAttachmentResult& WithRegistrationAttachmentArn(const char* value) { SetRegistrationAttachmentArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the registration attachment.</p>
     */
    inline const Aws::String& GetRegistrationAttachmentId() const{ return m_registrationAttachmentId; }
    inline void SetRegistrationAttachmentId(const Aws::String& value) { m_registrationAttachmentId = value; }
    inline void SetRegistrationAttachmentId(Aws::String&& value) { m_registrationAttachmentId = std::move(value); }
    inline void SetRegistrationAttachmentId(const char* value) { m_registrationAttachmentId.assign(value); }
    inline CreateRegistrationAttachmentResult& WithRegistrationAttachmentId(const Aws::String& value) { SetRegistrationAttachmentId(value); return *this;}
    inline CreateRegistrationAttachmentResult& WithRegistrationAttachmentId(Aws::String&& value) { SetRegistrationAttachmentId(std::move(value)); return *this;}
    inline CreateRegistrationAttachmentResult& WithRegistrationAttachmentId(const char* value) { SetRegistrationAttachmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the registration attachment. </p> <ul> <li> <p>
     * <code>UPLOAD_IN_PROGRESS</code> The attachment is being uploaded.</p> </li> <li>
     * <p> <code>UPLOAD_COMPLETE</code> The attachment has been uploaded.</p> </li>
     * <li> <p> <code>UPLOAD_FAILED</code> The attachment failed to uploaded.</p> </li>
     * <li> <p> <code>DELETED</code> The attachment has been deleted..</p> </li> </ul>
     */
    inline const AttachmentStatus& GetAttachmentStatus() const{ return m_attachmentStatus; }
    inline void SetAttachmentStatus(const AttachmentStatus& value) { m_attachmentStatus = value; }
    inline void SetAttachmentStatus(AttachmentStatus&& value) { m_attachmentStatus = std::move(value); }
    inline CreateRegistrationAttachmentResult& WithAttachmentStatus(const AttachmentStatus& value) { SetAttachmentStatus(value); return *this;}
    inline CreateRegistrationAttachmentResult& WithAttachmentStatus(AttachmentStatus&& value) { SetAttachmentStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of tags (key and value pairs) to associate with the registration
     * attachment.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }
    inline CreateRegistrationAttachmentResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateRegistrationAttachmentResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateRegistrationAttachmentResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }
    inline CreateRegistrationAttachmentResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time when the registration attachment was created, in <a
     * href="https://www.epochconverter.com/">UNIX epoch time</a> format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }
    inline CreateRegistrationAttachmentResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline CreateRegistrationAttachmentResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateRegistrationAttachmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateRegistrationAttachmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateRegistrationAttachmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_registrationAttachmentArn;

    Aws::String m_registrationAttachmentId;

    AttachmentStatus m_attachmentStatus;

    Aws::Vector<Tag> m_tags;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
