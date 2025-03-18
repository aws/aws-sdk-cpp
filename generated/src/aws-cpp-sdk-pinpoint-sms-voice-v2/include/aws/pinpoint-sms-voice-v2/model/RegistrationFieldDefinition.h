/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint-sms-voice-v2/model/FieldType.h>
#include <aws/pinpoint-sms-voice-v2/model/FieldRequirement.h>
#include <aws/pinpoint-sms-voice-v2/model/SelectValidation.h>
#include <aws/pinpoint-sms-voice-v2/model/TextValidation.h>
#include <aws/pinpoint-sms-voice-v2/model/RegistrationFieldDisplayHints.h>
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
   * <p>Provides a description of the specified field.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-sms-voice-v2-2022-03-31/RegistrationFieldDefinition">AWS
   * API Reference</a></p>
   */
  class RegistrationFieldDefinition
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API RegistrationFieldDefinition() = default;
    AWS_PINPOINTSMSVOICEV2_API RegistrationFieldDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API RegistrationFieldDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The section path of the field.</p>
     */
    inline const Aws::String& GetSectionPath() const { return m_sectionPath; }
    inline bool SectionPathHasBeenSet() const { return m_sectionPathHasBeenSet; }
    template<typename SectionPathT = Aws::String>
    void SetSectionPath(SectionPathT&& value) { m_sectionPathHasBeenSet = true; m_sectionPath = std::forward<SectionPathT>(value); }
    template<typename SectionPathT = Aws::String>
    RegistrationFieldDefinition& WithSectionPath(SectionPathT&& value) { SetSectionPath(std::forward<SectionPathT>(value)); return *this;}
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
    RegistrationFieldDefinition& WithFieldPath(FieldPathT&& value) { SetFieldPath(std::forward<FieldPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of field.</p>
     */
    inline FieldType GetFieldType() const { return m_fieldType; }
    inline bool FieldTypeHasBeenSet() const { return m_fieldTypeHasBeenSet; }
    inline void SetFieldType(FieldType value) { m_fieldTypeHasBeenSet = true; m_fieldType = value; }
    inline RegistrationFieldDefinition& WithFieldType(FieldType value) { SetFieldType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if the field for the registration form is required, conditional or
     * optional.</p>
     */
    inline FieldRequirement GetFieldRequirement() const { return m_fieldRequirement; }
    inline bool FieldRequirementHasBeenSet() const { return m_fieldRequirementHasBeenSet; }
    inline void SetFieldRequirement(FieldRequirement value) { m_fieldRequirementHasBeenSet = true; m_fieldRequirement = value; }
    inline RegistrationFieldDefinition& WithFieldRequirement(FieldRequirement value) { SetFieldRequirement(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validation rules for a select field.</p>
     */
    inline const SelectValidation& GetSelectValidation() const { return m_selectValidation; }
    inline bool SelectValidationHasBeenSet() const { return m_selectValidationHasBeenSet; }
    template<typename SelectValidationT = SelectValidation>
    void SetSelectValidation(SelectValidationT&& value) { m_selectValidationHasBeenSet = true; m_selectValidation = std::forward<SelectValidationT>(value); }
    template<typename SelectValidationT = SelectValidation>
    RegistrationFieldDefinition& WithSelectValidation(SelectValidationT&& value) { SetSelectValidation(std::forward<SelectValidationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validation rules for a text field.</p>
     */
    inline const TextValidation& GetTextValidation() const { return m_textValidation; }
    inline bool TextValidationHasBeenSet() const { return m_textValidationHasBeenSet; }
    template<typename TextValidationT = TextValidation>
    void SetTextValidation(TextValidationT&& value) { m_textValidationHasBeenSet = true; m_textValidation = std::forward<TextValidationT>(value); }
    template<typename TextValidationT = TextValidation>
    RegistrationFieldDefinition& WithTextValidation(TextValidationT&& value) { SetTextValidation(std::forward<TextValidationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of RegistrationFieldDisplayHints objects for the field.</p>
     */
    inline const RegistrationFieldDisplayHints& GetDisplayHints() const { return m_displayHints; }
    inline bool DisplayHintsHasBeenSet() const { return m_displayHintsHasBeenSet; }
    template<typename DisplayHintsT = RegistrationFieldDisplayHints>
    void SetDisplayHints(DisplayHintsT&& value) { m_displayHintsHasBeenSet = true; m_displayHints = std::forward<DisplayHintsT>(value); }
    template<typename DisplayHintsT = RegistrationFieldDisplayHints>
    RegistrationFieldDefinition& WithDisplayHints(DisplayHintsT&& value) { SetDisplayHints(std::forward<DisplayHintsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sectionPath;
    bool m_sectionPathHasBeenSet = false;

    Aws::String m_fieldPath;
    bool m_fieldPathHasBeenSet = false;

    FieldType m_fieldType{FieldType::NOT_SET};
    bool m_fieldTypeHasBeenSet = false;

    FieldRequirement m_fieldRequirement{FieldRequirement::NOT_SET};
    bool m_fieldRequirementHasBeenSet = false;

    SelectValidation m_selectValidation;
    bool m_selectValidationHasBeenSet = false;

    TextValidation m_textValidation;
    bool m_textValidationHasBeenSet = false;

    RegistrationFieldDisplayHints m_displayHints;
    bool m_displayHintsHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
