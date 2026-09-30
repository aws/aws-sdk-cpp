/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/ScopeResult.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

ScopeResult::ScopeResult(JsonView jsonValue) { *this = jsonValue; }

ScopeResult& ScopeResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("decision")) {
    m_decision = ScopeDecisionMapper::GetScopeDecisionForName(jsonValue.GetString("decision"));
    m_decisionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reason")) {
    m_reason = jsonValue.GetString("reason");
    m_reasonHasBeenSet = true;
  }
  return *this;
}

JsonValue ScopeResult::Jsonize() const {
  JsonValue payload;

  if (m_decisionHasBeenSet) {
    payload.WithString("decision", ScopeDecisionMapper::GetNameForScopeDecision(m_decision));
  }

  if (m_reasonHasBeenSet) {
    payload.WithString("reason", m_reason);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
