/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/SpanGuardrailAssessment.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

SpanGuardrailAssessment::SpanGuardrailAssessment(JsonView jsonValue) { *this = jsonValue; }

SpanGuardrailAssessment& SpanGuardrailAssessment::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("guardrailId")) {
    m_guardrailId = jsonValue.GetString("guardrailId");
    m_guardrailIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("guardrailName")) {
    m_guardrailName = jsonValue.GetString("guardrailName");
    m_guardrailNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("source")) {
    m_source = GuardrailSourceMapper::GetGuardrailSourceForName(jsonValue.GetString("source"));
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("action")) {
    m_action = GuardrailActionMapper::GetGuardrailActionForName(jsonValue.GetString("action"));
    m_actionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("policies")) {
    Aws::Utils::Array<JsonView> policiesJsonList = jsonValue.GetArray("policies");
    for (unsigned policiesIndex = 0; policiesIndex < policiesJsonList.GetLength(); ++policiesIndex) {
      m_policies.push_back(policiesJsonList[policiesIndex].AsObject());
    }
    m_policiesHasBeenSet = true;
  }
  return *this;
}

JsonValue SpanGuardrailAssessment::Jsonize() const {
  JsonValue payload;

  if (m_guardrailIdHasBeenSet) {
    payload.WithString("guardrailId", m_guardrailId);
  }

  if (m_guardrailNameHasBeenSet) {
    payload.WithString("guardrailName", m_guardrailName);
  }

  if (m_sourceHasBeenSet) {
    payload.WithString("source", GuardrailSourceMapper::GetNameForGuardrailSource(m_source));
  }

  if (m_actionHasBeenSet) {
    payload.WithString("action", GuardrailActionMapper::GetNameForGuardrailAction(m_action));
  }

  if (m_policiesHasBeenSet) {
    Aws::Utils::Array<JsonValue> policiesJsonList(m_policies.size());
    for (unsigned policiesIndex = 0; policiesIndex < policiesJsonList.GetLength(); ++policiesIndex) {
      policiesJsonList[policiesIndex].AsObject(m_policies[policiesIndex].Jsonize());
    }
    payload.WithArray("policies", std::move(policiesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
