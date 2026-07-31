/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/TestTemplateParameter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

TestTemplateParameter::TestTemplateParameter(JsonView jsonValue) { *this = jsonValue; }

TestTemplateParameter& TestTemplateParameter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = ParameterTypeMapper::GetParameterTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("required")) {
    m_required = jsonValue.GetBool("required");
    m_requiredHasBeenSet = true;
  }
  if (jsonValue.ValueExists("defaultValue")) {
    m_defaultValue = jsonValue.GetString("defaultValue");
    m_defaultValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxValues")) {
    m_maxValues = jsonValue.GetInteger("maxValues");
    m_maxValuesHasBeenSet = true;
  }
  return *this;
}

JsonValue TestTemplateParameter::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", ParameterTypeMapper::GetNameForParameterType(m_type));
  }

  if (m_requiredHasBeenSet) {
    payload.WithBool("required", m_required);
  }

  if (m_defaultValueHasBeenSet) {
    payload.WithString("defaultValue", m_defaultValue);
  }

  if (m_maxValuesHasBeenSet) {
    payload.WithInteger("maxValues", m_maxValues);
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
