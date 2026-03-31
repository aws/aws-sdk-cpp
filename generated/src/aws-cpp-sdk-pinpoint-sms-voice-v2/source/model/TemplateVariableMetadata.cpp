/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pinpoint-sms-voice-v2/model/TemplateVariableMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PinpointSMSVoiceV2 {
namespace Model {

TemplateVariableMetadata::TemplateVariableMetadata(JsonView jsonValue) { *this = jsonValue; }

TemplateVariableMetadata& TemplateVariableMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Type")) {
    m_type = TemplateVariableTypeMapper::GetTemplateVariableTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Required")) {
    m_required = jsonValue.GetBool("Required");
    m_requiredHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MaxLength")) {
    m_maxLength = jsonValue.GetInteger("MaxLength");
    m_maxLengthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MinValue")) {
    m_minValue = jsonValue.GetInteger("MinValue");
    m_minValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MaxValue")) {
    m_maxValue = jsonValue.GetInteger("MaxValue");
    m_maxValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DefaultValue")) {
    m_defaultValue = jsonValue.GetString("DefaultValue");
    m_defaultValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Pattern")) {
    m_pattern = jsonValue.GetString("Pattern");
    m_patternHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Sample")) {
    m_sample = jsonValue.GetString("Sample");
    m_sampleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Source")) {
    m_source = TemplateVariableSourceMapper::GetTemplateVariableSourceForName(jsonValue.GetString("Source"));
    m_sourceHasBeenSet = true;
  }
  return *this;
}

JsonValue TemplateVariableMetadata::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("Type", TemplateVariableTypeMapper::GetNameForTemplateVariableType(m_type));
  }

  if (m_requiredHasBeenSet) {
    payload.WithBool("Required", m_required);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_maxLengthHasBeenSet) {
    payload.WithInteger("MaxLength", m_maxLength);
  }

  if (m_minValueHasBeenSet) {
    payload.WithInteger("MinValue", m_minValue);
  }

  if (m_maxValueHasBeenSet) {
    payload.WithInteger("MaxValue", m_maxValue);
  }

  if (m_defaultValueHasBeenSet) {
    payload.WithString("DefaultValue", m_defaultValue);
  }

  if (m_patternHasBeenSet) {
    payload.WithString("Pattern", m_pattern);
  }

  if (m_sampleHasBeenSet) {
    payload.WithString("Sample", m_sample);
  }

  if (m_sourceHasBeenSet) {
    payload.WithString("Source", TemplateVariableSourceMapper::GetNameForTemplateVariableSource(m_source));
  }

  return payload;
}

}  // namespace Model
}  // namespace PinpointSMSVoiceV2
}  // namespace Aws
