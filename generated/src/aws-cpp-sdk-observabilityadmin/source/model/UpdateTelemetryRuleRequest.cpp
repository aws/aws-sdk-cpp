/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/observabilityadmin/model/UpdateTelemetryRuleRequest.h>

#include <utility>

using namespace Aws::ObservabilityAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateTelemetryRuleRequest::SerializePayload() const {
  JsonValue payload;

  if (m_ruleIdentifierHasBeenSet) {
    payload.WithString("RuleIdentifier", m_ruleIdentifier);
  }

  if (m_ruleHasBeenSet) {
    payload.WithObject("Rule", m_rule.Jsonize());
  }

  return payload.View().WriteReadable();
}
