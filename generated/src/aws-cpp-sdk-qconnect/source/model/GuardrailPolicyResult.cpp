/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/GuardrailPolicyResult.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

GuardrailPolicyResult::GuardrailPolicyResult(JsonView jsonValue) { *this = jsonValue; }

GuardrailPolicyResult& GuardrailPolicyResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("policyType")) {
    m_policyType = GuardrailPolicyTypeMapper::GetGuardrailPolicyTypeForName(jsonValue.GetString("policyType"));
    m_policyTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("action")) {
    m_action = GuardrailActionMapper::GetGuardrailActionForName(jsonValue.GetString("action"));
    m_actionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("details")) {
    m_details = jsonValue.GetString("details");
    m_detailsHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailPolicyResult::Jsonize() const {
  JsonValue payload;

  if (m_policyTypeHasBeenSet) {
    payload.WithString("policyType", GuardrailPolicyTypeMapper::GetNameForGuardrailPolicyType(m_policyType));
  }

  if (m_actionHasBeenSet) {
    payload.WithString("action", GuardrailActionMapper::GetNameForGuardrailAction(m_action));
  }

  if (m_detailsHasBeenSet) {
    payload.WithString("details", m_details);
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
