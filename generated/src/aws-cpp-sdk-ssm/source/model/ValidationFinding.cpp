/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ssm/model/ValidationFinding.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SSM {
namespace Model {

ValidationFinding::ValidationFinding(JsonView jsonValue) { *this = jsonValue; }

ValidationFinding& ValidationFinding::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Type")) {
    m_type = ValidationFindingTypeMapper::GetValidationFindingTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Code")) {
    m_code = ValidationFindingCodeMapper::GetValidationFindingCodeForName(jsonValue.GetString("Code"));
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Message")) {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProviderMessage")) {
    m_providerMessage = jsonValue.GetString("ProviderMessage");
    m_providerMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Scope")) {
    m_scope = jsonValue.GetObject("Scope");
    m_scopeHasBeenSet = true;
  }
  return *this;
}

JsonValue ValidationFinding::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("Type", ValidationFindingTypeMapper::GetNameForValidationFindingType(m_type));
  }

  if (m_codeHasBeenSet) {
    payload.WithString("Code", ValidationFindingCodeMapper::GetNameForValidationFindingCode(m_code));
  }

  if (m_messageHasBeenSet) {
    payload.WithString("Message", m_message);
  }

  if (m_providerMessageHasBeenSet) {
    payload.WithString("ProviderMessage", m_providerMessage);
  }

  if (m_scopeHasBeenSet) {
    payload.WithObject("Scope", m_scope.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace SSM
}  // namespace Aws
