/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/CreateCodeReviewRequest.h>

#include <utility>

using namespace Aws::SecurityAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateCodeReviewRequest::SerializePayload() const {
  JsonValue payload;

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  if (m_agentSpaceIdHasBeenSet) {
    payload.WithString("agentSpaceId", m_agentSpaceId);
  }

  if (m_assetsHasBeenSet) {
    payload.WithObject("assets", m_assets.Jsonize());
  }

  if (m_serviceRoleHasBeenSet) {
    payload.WithString("serviceRole", m_serviceRole);
  }

  if (m_logConfigHasBeenSet) {
    payload.WithObject("logConfig", m_logConfig.Jsonize());
  }

  if (m_codeRemediationStrategyHasBeenSet) {
    payload.WithString("codeRemediationStrategy",
                       CodeRemediationStrategyMapper::GetNameForCodeRemediationStrategy(m_codeRemediationStrategy));
  }

  return payload.View().WriteReadable();
}
