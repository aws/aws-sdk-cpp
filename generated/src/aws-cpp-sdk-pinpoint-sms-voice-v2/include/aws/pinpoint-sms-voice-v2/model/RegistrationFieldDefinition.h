﻿/**
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
    AWS_PINPOINTSMSVOICEV2_API RegistrationFieldDefinition();
    AWS_PINPOINTSMSVOICEV2_API RegistrationFieldDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API RegistrationFieldDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTSMSVOICEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The section path of the field.</p>
     */
    inline const Aws::String& GetSectionPath() const{ return m_sectionPath; }
    inline bool SectionPathHasBeenSet() const { return m_sectionPathHasBeenSet; }
    inline void SetSectionPath(const Aws::String& value) { m_sectionPathHasBeenSet = true; m_sectionPath = value; }
    inline void SetSectionPath(Aws::String&& value) { m_sectionPathHasBeenSet = true; m_sectionPath = std::move(value); }
    inline void SetSectionPath(const char* value) { m_sectionPathHasBeenSet = true; m_sectionPath.assign(value); }
    inline RegistrationFieldDefinition& WithSectionPath(const Aws::String& value) { SetSectionPath(value); return *this;}
    inline RegistrationFieldDefinition& WithSectionPath(Aws::String&& value) { SetSectionPath(std::move(value)); return *this;}
    inline RegistrationFieldDefinition& WithSectionPath(const char* value) { SetSectionPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path to the registration form field. You can use
     * <a>DescribeRegistrationFieldDefinitions</a> for a list of <b>FieldPaths</b>.</p>
     */
    inline const Aws::String& GetFieldPath() const{ return m_fieldPath; }
    inline bool FieldPathHasBeenSet() const { return m_fieldPathHasBeenSet; }
    inline void SetFieldPath(const Aws::String& value) { m_fieldPathHasBeenSet = true; m_fieldPath = value; }
    inline void SetFieldPath(Aws::String&& value) { m_fieldPathHasBeenSet = true; m_fieldPath = std::move(value); }
    inline void SetFieldPath(const char* value) { m_fieldPathHasBeenSet = true; m_fieldPath.assign(value); }
    inline RegistrationFieldDefinition& WithFieldPath(const Aws::String& value) { SetFieldPath(value); return *this;}
    inline RegistrationFieldDefinition& WithFieldPath(Aws::String&& value) { SetFieldPath(std::move(value)); return *this;}
    inline RegistrationFieldDefinition& WithFieldPath(const char* value) { SetFieldPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of field.</p>
     */
    inline const FieldType& GetFieldType() const{ return m_fieldType; }
    inline bool FieldTypeHasBeenSet() const { return m_fieldTypeHasBeenSet; }
    inline void SetFieldType(const FieldType& value) { m_fieldTypeHasBeenSet = true; m_fieldType = value; }
    inline void SetFieldType(FieldType&& value) { m_fieldTypeHasBeenSet = true; m_fieldType = std::move(value); }
    inline RegistrationFieldDefinition& WithFieldType(const FieldType& value) { SetFieldType(value); return *this;}
    inline RegistrationFieldDefinition& WithFieldType(FieldType&& value) { SetFieldType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies if the field for the registration form is required, conditional or
     * optional.</p>
     */
    inline const FieldRequirement& GetFieldRequirement() const{ return m_fieldRequirement; }
    inline bool FieldRequirementHasBeenSet() const { return m_fieldRequirementHasBeenSet; }
    inline void SetFieldRequirement(const FieldRequirement& value) { m_fieldRequirementHasBeenSet = true; m_fieldRequirement = value; }
    inline void SetFieldRequirement(FieldRequirement&& value) { m_fieldRequirementHasBeenSet = true; m_fieldRequirement = std::move(value); }
    inline RegistrationFieldDefinition& WithFieldRequirement(const FieldRequirement& value) { SetFieldRequirement(value); return *this;}
    inline RegistrationFieldDefinition& WithFieldRequirement(FieldRequirement&& value) { SetFieldRequirement(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validation rules for a select field.</p>
     */
    inline const SelectValidation& GetSelectValidation() const{ return m_selectValidation; }
    inline bool SelectValidationHasBeenSet() const { return m_selectValidationHasBeenSet; }
    inline void SetSelectValidation(const SelectValidation& value) { m_selectValidationHasBeenSet = true; m_selectValidation = value; }
    inline void SetSelectValidation(SelectValidation&& value) { m_selectValidationHasBeenSet = true; m_selectValidation = std::move(value); }
    inline RegistrationFieldDefinition& WithSelectValidation(const SelectValidation& value) { SetSelectValidation(value); return *this;}
    inline RegistrationFieldDefinition& WithSelectValidation(SelectValidation&& value) { SetSelectValidation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validation rules for a text field.</p>
     */
    inline const TextValidation& GetTextValidation() const{ return m_textValidation; }
    inline bool TextValidationHasBeenSet() const { return m_textValidationHasBeenSet; }
    inline void SetTextValidation(const TextValidation& value) { m_textValidationHasBeenSet = true; m_textValidation = value; }
    inline void SetTextValidation(TextValidation&& value) { m_textValidationHasBeenSet = true; m_textValidation = std::move(value); }
    inline RegistrationFieldDefinition& WithTextValidation(const TextValidation& value) { SetTextValidation(value); return *this;}
    inline RegistrationFieldDefinition& WithTextValidation(TextValidation&& value) { SetTextValidation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of RegistrationFieldDisplayHints objects for the field.</p>
     */
    inline const RegistrationFieldDisplayHints& GetDisplayHints() const{ return m_displayHints; }
    inline bool DisplayHintsHasBeenSet() const { return m_displayHintsHasBeenSet; }
    inline void SetDisplayHints(const RegistrationFieldDisplayHints& value) { m_displayHintsHasBeenSet = true; m_displayHints = value; }
    inline void SetDisplayHints(RegistrationFieldDisplayHints&& value) { m_displayHintsHasBeenSet = true; m_displayHints = std::move(value); }
    inline RegistrationFieldDefinition& WithDisplayHints(const RegistrationFieldDisplayHints& value) { SetDisplayHints(value); return *this;}
    inline RegistrationFieldDefinition& WithDisplayHints(RegistrationFieldDisplayHints&& value) { SetDisplayHints(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_sectionPath;
    bool m_sectionPathHasBeenSet = false;

    Aws::String m_fieldPath;
    bool m_fieldPathHasBeenSet = false;

    FieldType m_fieldType;
    bool m_fieldTypeHasBeenSet = false;

    FieldRequirement m_fieldRequirement;
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
