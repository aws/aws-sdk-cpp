/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class DeleteRegistrationFieldValueResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API DeleteRegistrationFieldValueResult();
    AWS_PINPOINTSMSVOICEV2_API DeleteRegistrationFieldValueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API DeleteRegistrationFieldValueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the registration.</p>
     */
    inline const Aws::String& GetRegistrationArn() const{ return m_registrationArn; }
    inline void SetRegistrationArn(const Aws::String& value) { m_registrationArn = value; }
    inline void SetRegistrationArn(Aws::String&& value) { m_registrationArn = std::move(value); }
    inline void SetRegistrationArn(const char* value) { m_registrationArn.assign(value); }
    inline DeleteRegistrationFieldValueResult& WithRegistrationArn(const Aws::String& value) { SetRegistrationArn(value); return *this;}
    inline DeleteRegistrationFieldValueResult& WithRegistrationArn(Aws::String&& value) { SetRegistrationArn(std::move(value)); return *this;}
    inline DeleteRegistrationFieldValueResult& WithRegistrationArn(const char* value) { SetRegistrationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline const Aws::String& GetRegistrationId() const{ return m_registrationId; }
    inline void SetRegistrationId(const Aws::String& value) { m_registrationId = value; }
    inline void SetRegistrationId(Aws::String&& value) { m_registrationId = std::move(value); }
    inline void SetRegistrationId(const char* value) { m_registrationId.assign(value); }
    inline DeleteRegistrationFieldValueResult& WithRegistrationId(const Aws::String& value) { SetRegistrationId(value); return *this;}
    inline DeleteRegistrationFieldValueResult& WithRegistrationId(Aws::String&& value) { SetRegistrationId(std::move(value)); return *this;}
    inline DeleteRegistrationFieldValueResult& WithRegistrationId(const char* value) { SetRegistrationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the registration.</p>
     */
    inline long long GetVersionNumber() const{ return m_versionNumber; }
    inline void SetVersionNumber(long long value) { m_versionNumber = value; }
    inline DeleteRegistrationFieldValueResult& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the registration form field.</p>
     */
    inline const Aws::String& GetFieldPath() const{ return m_fieldPath; }
    inline void SetFieldPath(const Aws::String& value) { m_fieldPath = value; }
    inline void SetFieldPath(Aws::String&& value) { m_fieldPath = std::move(value); }
    inline void SetFieldPath(const char* value) { m_fieldPath.assign(value); }
    inline DeleteRegistrationFieldValueResult& WithFieldPath(const Aws::String& value) { SetFieldPath(value); return *this;}
    inline DeleteRegistrationFieldValueResult& WithFieldPath(Aws::String&& value) { SetFieldPath(std::move(value)); return *this;}
    inline DeleteRegistrationFieldValueResult& WithFieldPath(const char* value) { SetFieldPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of values for the form field.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSelectChoices() const{ return m_selectChoices; }
    inline void SetSelectChoices(const Aws::Vector<Aws::String>& value) { m_selectChoices = value; }
    inline void SetSelectChoices(Aws::Vector<Aws::String>&& value) { m_selectChoices = std::move(value); }
    inline DeleteRegistrationFieldValueResult& WithSelectChoices(const Aws::Vector<Aws::String>& value) { SetSelectChoices(value); return *this;}
    inline DeleteRegistrationFieldValueResult& WithSelectChoices(Aws::Vector<Aws::String>&& value) { SetSelectChoices(std::move(value)); return *this;}
    inline DeleteRegistrationFieldValueResult& AddSelectChoices(const Aws::String& value) { m_selectChoices.push_back(value); return *this; }
    inline DeleteRegistrationFieldValueResult& AddSelectChoices(Aws::String&& value) { m_selectChoices.push_back(std::move(value)); return *this; }
    inline DeleteRegistrationFieldValueResult& AddSelectChoices(const char* value) { m_selectChoices.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The text data for a free form field.</p>
     */
    inline const Aws::String& GetTextValue() const{ return m_textValue; }
    inline void SetTextValue(const Aws::String& value) { m_textValue = value; }
    inline void SetTextValue(Aws::String&& value) { m_textValue = std::move(value); }
    inline void SetTextValue(const char* value) { m_textValue.assign(value); }
    inline DeleteRegistrationFieldValueResult& WithTextValue(const Aws::String& value) { SetTextValue(value); return *this;}
    inline DeleteRegistrationFieldValueResult& WithTextValue(Aws::String&& value) { SetTextValue(std::move(value)); return *this;}
    inline DeleteRegistrationFieldValueResult& WithTextValue(const char* value) { SetTextValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the registration attachment.</p>
     */
    inline const Aws::String& GetRegistrationAttachmentId() const{ return m_registrationAttachmentId; }
    inline void SetRegistrationAttachmentId(const Aws::String& value) { m_registrationAttachmentId = value; }
    inline void SetRegistrationAttachmentId(Aws::String&& value) { m_registrationAttachmentId = std::move(value); }
    inline void SetRegistrationAttachmentId(const char* value) { m_registrationAttachmentId.assign(value); }
    inline DeleteRegistrationFieldValueResult& WithRegistrationAttachmentId(const Aws::String& value) { SetRegistrationAttachmentId(value); return *this;}
    inline DeleteRegistrationFieldValueResult& WithRegistrationAttachmentId(Aws::String&& value) { SetRegistrationAttachmentId(std::move(value)); return *this;}
    inline DeleteRegistrationFieldValueResult& WithRegistrationAttachmentId(const char* value) { SetRegistrationAttachmentId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteRegistrationFieldValueResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteRegistrationFieldValueResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteRegistrationFieldValueResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_registrationArn;

    Aws::String m_registrationId;

    long long m_versionNumber;

    Aws::String m_fieldPath;

    Aws::Vector<Aws::String> m_selectChoices;

    Aws::String m_textValue;

    Aws::String m_registrationAttachmentId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
