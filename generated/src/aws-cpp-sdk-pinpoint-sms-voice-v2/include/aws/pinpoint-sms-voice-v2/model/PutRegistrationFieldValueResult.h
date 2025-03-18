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
  class PutRegistrationFieldValueResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API PutRegistrationFieldValueResult() = default;
    AWS_PINPOINTSMSVOICEV2_API PutRegistrationFieldValueResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API PutRegistrationFieldValueResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the registration.</p>
     */
    inline const Aws::String& GetRegistrationArn() const { return m_registrationArn; }
    template<typename RegistrationArnT = Aws::String>
    void SetRegistrationArn(RegistrationArnT&& value) { m_registrationArnHasBeenSet = true; m_registrationArn = std::forward<RegistrationArnT>(value); }
    template<typename RegistrationArnT = Aws::String>
    PutRegistrationFieldValueResult& WithRegistrationArn(RegistrationArnT&& value) { SetRegistrationArn(std::forward<RegistrationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline const Aws::String& GetRegistrationId() const { return m_registrationId; }
    template<typename RegistrationIdT = Aws::String>
    void SetRegistrationId(RegistrationIdT&& value) { m_registrationIdHasBeenSet = true; m_registrationId = std::forward<RegistrationIdT>(value); }
    template<typename RegistrationIdT = Aws::String>
    PutRegistrationFieldValueResult& WithRegistrationId(RegistrationIdT&& value) { SetRegistrationId(std::forward<RegistrationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the registration.</p>
     */
    inline long long GetVersionNumber() const { return m_versionNumber; }
    inline void SetVersionNumber(long long value) { m_versionNumberHasBeenSet = true; m_versionNumber = value; }
    inline PutRegistrationFieldValueResult& WithVersionNumber(long long value) { SetVersionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the registration form field. You can use
     * <a>DescribeRegistrationFieldDefinitions</a> for a list of <b>FieldPaths</b>.</p>
     */
    inline const Aws::String& GetFieldPath() const { return m_fieldPath; }
    template<typename FieldPathT = Aws::String>
    void SetFieldPath(FieldPathT&& value) { m_fieldPathHasBeenSet = true; m_fieldPath = std::forward<FieldPathT>(value); }
    template<typename FieldPathT = Aws::String>
    PutRegistrationFieldValueResult& WithFieldPath(FieldPathT&& value) { SetFieldPath(std::forward<FieldPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of values for the form field.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSelectChoices() const { return m_selectChoices; }
    template<typename SelectChoicesT = Aws::Vector<Aws::String>>
    void SetSelectChoices(SelectChoicesT&& value) { m_selectChoicesHasBeenSet = true; m_selectChoices = std::forward<SelectChoicesT>(value); }
    template<typename SelectChoicesT = Aws::Vector<Aws::String>>
    PutRegistrationFieldValueResult& WithSelectChoices(SelectChoicesT&& value) { SetSelectChoices(std::forward<SelectChoicesT>(value)); return *this;}
    template<typename SelectChoicesT = Aws::String>
    PutRegistrationFieldValueResult& AddSelectChoices(SelectChoicesT&& value) { m_selectChoicesHasBeenSet = true; m_selectChoices.emplace_back(std::forward<SelectChoicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The text data for a free form field.</p>
     */
    inline const Aws::String& GetTextValue() const { return m_textValue; }
    template<typename TextValueT = Aws::String>
    void SetTextValue(TextValueT&& value) { m_textValueHasBeenSet = true; m_textValue = std::forward<TextValueT>(value); }
    template<typename TextValueT = Aws::String>
    PutRegistrationFieldValueResult& WithTextValue(TextValueT&& value) { SetTextValue(std::forward<TextValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the registration attachment.</p>
     */
    inline const Aws::String& GetRegistrationAttachmentId() const { return m_registrationAttachmentId; }
    template<typename RegistrationAttachmentIdT = Aws::String>
    void SetRegistrationAttachmentId(RegistrationAttachmentIdT&& value) { m_registrationAttachmentIdHasBeenSet = true; m_registrationAttachmentId = std::forward<RegistrationAttachmentIdT>(value); }
    template<typename RegistrationAttachmentIdT = Aws::String>
    PutRegistrationFieldValueResult& WithRegistrationAttachmentId(RegistrationAttachmentIdT&& value) { SetRegistrationAttachmentId(std::forward<RegistrationAttachmentIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutRegistrationFieldValueResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_registrationArn;
    bool m_registrationArnHasBeenSet = false;

    Aws::String m_registrationId;
    bool m_registrationIdHasBeenSet = false;

    long long m_versionNumber{0};
    bool m_versionNumberHasBeenSet = false;

    Aws::String m_fieldPath;
    bool m_fieldPathHasBeenSet = false;

    Aws::Vector<Aws::String> m_selectChoices;
    bool m_selectChoicesHasBeenSet = false;

    Aws::String m_textValue;
    bool m_textValueHasBeenSet = false;

    Aws::String m_registrationAttachmentId;
    bool m_registrationAttachmentIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
