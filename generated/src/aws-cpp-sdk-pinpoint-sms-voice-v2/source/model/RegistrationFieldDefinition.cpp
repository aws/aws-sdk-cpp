/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint-sms-voice-v2/model/RegistrationFieldDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PinpointSMSVoiceV2
{
namespace Model
{

RegistrationFieldDefinition::RegistrationFieldDefinition() : 
    m_sectionPathHasBeenSet(false),
    m_fieldPathHasBeenSet(false),
    m_fieldType(FieldType::NOT_SET),
    m_fieldTypeHasBeenSet(false),
    m_fieldRequirement(FieldRequirement::NOT_SET),
    m_fieldRequirementHasBeenSet(false),
    m_selectValidationHasBeenSet(false),
    m_textValidationHasBeenSet(false),
    m_displayHintsHasBeenSet(false)
{
}

RegistrationFieldDefinition::RegistrationFieldDefinition(JsonView jsonValue) : 
    m_sectionPathHasBeenSet(false),
    m_fieldPathHasBeenSet(false),
    m_fieldType(FieldType::NOT_SET),
    m_fieldTypeHasBeenSet(false),
    m_fieldRequirement(FieldRequirement::NOT_SET),
    m_fieldRequirementHasBeenSet(false),
    m_selectValidationHasBeenSet(false),
    m_textValidationHasBeenSet(false),
    m_displayHintsHasBeenSet(false)
{
  *this = jsonValue;
}

RegistrationFieldDefinition& RegistrationFieldDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SectionPath"))
  {
    m_sectionPath = jsonValue.GetString("SectionPath");

    m_sectionPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FieldPath"))
  {
    m_fieldPath = jsonValue.GetString("FieldPath");

    m_fieldPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FieldType"))
  {
    m_fieldType = FieldTypeMapper::GetFieldTypeForName(jsonValue.GetString("FieldType"));

    m_fieldTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FieldRequirement"))
  {
    m_fieldRequirement = FieldRequirementMapper::GetFieldRequirementForName(jsonValue.GetString("FieldRequirement"));

    m_fieldRequirementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SelectValidation"))
  {
    m_selectValidation = jsonValue.GetObject("SelectValidation");

    m_selectValidationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TextValidation"))
  {
    m_textValidation = jsonValue.GetObject("TextValidation");

    m_textValidationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DisplayHints"))
  {
    m_displayHints = jsonValue.GetObject("DisplayHints");

    m_displayHintsHasBeenSet = true;
  }

  return *this;
}

JsonValue RegistrationFieldDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_sectionPathHasBeenSet)
  {
   payload.WithString("SectionPath", m_sectionPath);

  }

  if(m_fieldPathHasBeenSet)
  {
   payload.WithString("FieldPath", m_fieldPath);

  }

  if(m_fieldTypeHasBeenSet)
  {
   payload.WithString("FieldType", FieldTypeMapper::GetNameForFieldType(m_fieldType));
  }

  if(m_fieldRequirementHasBeenSet)
  {
   payload.WithString("FieldRequirement", FieldRequirementMapper::GetNameForFieldRequirement(m_fieldRequirement));
  }

  if(m_selectValidationHasBeenSet)
  {
   payload.WithObject("SelectValidation", m_selectValidation.Jsonize());

  }

  if(m_textValidationHasBeenSet)
  {
   payload.WithObject("TextValidation", m_textValidation.Jsonize());

  }

  if(m_displayHintsHasBeenSet)
  {
   payload.WithObject("DisplayHints", m_displayHints.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
