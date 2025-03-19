/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

  /**
   */
  class PutRegistrationFieldValueRequest : public PinpointSMSVoiceV2Request
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API PutRegistrationFieldValueRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRegistrationFieldValue"; }

    AWS_PINPOINTSMSVOICEV2_API Aws::String SerializePayload() const override;

    AWS_PINPOINTSMSVOICEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier for the registration.</p>
     */
    inline const Aws::String& GetRegistrationId() const { return m_registrationId; }
    inline bool RegistrationIdHasBeenSet() const { return m_registrationIdHasBeenSet; }
    template<typename RegistrationIdT = Aws::String>
    void SetRegistrationId(RegistrationIdT&& value) { m_registrationIdHasBeenSet = true; m_registrationId = std::forward<RegistrationIdT>(value); }
    template<typename RegistrationIdT = Aws::String>
    PutRegistrationFieldValueRequest& WithRegistrationId(RegistrationIdT&& value) { SetRegistrationId(std::forward<RegistrationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the registration form field. You can use
     * <a>DescribeRegistrationFieldDefinitions</a> for a list of <b>FieldPaths</b>.</p>
     */
    inline const Aws::String& GetFieldPath() const { return m_fieldPath; }
    inline bool FieldPathHasBeenSet() const { return m_fieldPathHasBeenSet; }
    template<typename FieldPathT = Aws::String>
    void SetFieldPath(FieldPathT&& value) { m_fieldPathHasBeenSet = true; m_fieldPath = std::forward<FieldPathT>(value); }
    template<typename FieldPathT = Aws::String>
    PutRegistrationFieldValueRequest& WithFieldPath(FieldPathT&& value) { SetFieldPath(std::forward<FieldPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of values for the form field.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSelectChoices() const { return m_selectChoices; }
    inline bool SelectChoicesHasBeenSet() const { return m_selectChoicesHasBeenSet; }
    template<typename SelectChoicesT = Aws::Vector<Aws::String>>
    void SetSelectChoices(SelectChoicesT&& value) { m_selectChoicesHasBeenSet = true; m_selectChoices = std::forward<SelectChoicesT>(value); }
    template<typename SelectChoicesT = Aws::Vector<Aws::String>>
    PutRegistrationFieldValueRequest& WithSelectChoices(SelectChoicesT&& value) { SetSelectChoices(std::forward<SelectChoicesT>(value)); return *this;}
    template<typename SelectChoicesT = Aws::String>
    PutRegistrationFieldValueRequest& AddSelectChoices(SelectChoicesT&& value) { m_selectChoicesHasBeenSet = true; m_selectChoices.emplace_back(std::forward<SelectChoicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The text data for a free form field.</p>
     */
    inline const Aws::String& GetTextValue() const { return m_textValue; }
    inline bool TextValueHasBeenSet() const { return m_textValueHasBeenSet; }
    template<typename TextValueT = Aws::String>
    void SetTextValue(TextValueT&& value) { m_textValueHasBeenSet = true; m_textValue = std::forward<TextValueT>(value); }
    template<typename TextValueT = Aws::String>
    PutRegistrationFieldValueRequest& WithTextValue(TextValueT&& value) { SetTextValue(std::forward<TextValueT>(value)); return *this;}
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
    PutRegistrationFieldValueRequest& WithRegistrationAttachmentId(RegistrationAttachmentIdT&& value) { SetRegistrationAttachmentId(std::forward<RegistrationAttachmentIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_registrationId;
    bool m_registrationIdHasBeenSet = false;

    Aws::String m_fieldPath;
    bool m_fieldPathHasBeenSet = false;

    Aws::Vector<Aws::String> m_selectChoices;
    bool m_selectChoicesHasBeenSet = false;

    Aws::String m_textValue;
    bool m_textValueHasBeenSet = false;

    Aws::String m_registrationAttachmentId;
    bool m_registrationAttachmentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
