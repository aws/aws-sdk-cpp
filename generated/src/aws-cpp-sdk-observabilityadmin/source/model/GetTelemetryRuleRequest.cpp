/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/observabilityadmin/model/GetTelemetryRuleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ObservabilityAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetTelemetryRuleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ruleIdentifierHasBeenSet)
  {
   payload.WithString("RuleIdentifier", m_ruleIdentifier);

  }

  return payload.View().WriteReadable();
}




