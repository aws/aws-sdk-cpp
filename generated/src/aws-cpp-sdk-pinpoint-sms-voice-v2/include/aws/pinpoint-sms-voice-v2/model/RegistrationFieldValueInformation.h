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
   * <p>Provides the values of the specified field.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/RegistrationFieldValueInformation">AWS
   * API Reference</a></p>
   */
  class RegistrationFieldValueInformation
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API RegistrationFieldValueInformation() = default;
    AWS_PINPOINTSMSVOICEV2_API RegistrationFieldValueInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API RegistrationFieldValueInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    RegistrationFieldValueInformation& WithFieldPath(FieldPathT&& value) { SetFieldPath(std::forward<FieldPathT>(value)); return *this;}
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
    RegistrationFieldValueInformation& WithSelectChoices(SelectChoicesT&& value) { SetSelectChoices(std::forward<SelectChoicesT>(value)); return *this;}
    template<typename SelectChoicesT = Aws::String>
    RegistrationFieldValueInformation& AddSelectChoices(SelectChoicesT&& value) { m_selectChoicesHasBeenSet = true; m_selectChoices.emplace_back(std::forward<SelectChoicesT>(value)); return *this; }
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
    RegistrationFieldValueInformation& WithTextValue(TextValueT&& value) { SetTextValue(std::forward<TextValueT>(value)); return *this;}
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
    RegistrationFieldValueInformation& WithRegistrationAttachmentId(RegistrationAttachmentIdT&& value) { SetRegistrationAttachmentId(std::forward<RegistrationAttachmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of why the registration was denied.</p>
     */
    inline const Aws::String& GetDeniedReason() const { return m_deniedReason; }
    inline bool DeniedReasonHasBeenSet() const { return m_deniedReasonHasBeenSet; }
    template<typename DeniedReasonT = Aws::String>
    void SetDeniedReason(DeniedReasonT&& value) { m_deniedReasonHasBeenSet = true; m_deniedReason = std::forward<DeniedReasonT>(value); }
    template<typename DeniedReasonT = Aws::String>
    RegistrationFieldValueInformation& WithDeniedReason(DeniedReasonT&& value) { SetDeniedReason(std::forward<DeniedReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fieldPath;
    bool m_fieldPathHasBeenSet = false;

    Aws::Vector<Aws::String> m_selectChoices;
    bool m_selectChoicesHasBeenSet = false;

    Aws::String m_textValue;
    bool m_textValueHasBeenSet = false;

    Aws::String m_registrationAttachmentId;
    bool m_registrationAttachmentIdHasBeenSet = false;

    Aws::String m_deniedReason;
    bool m_deniedReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
