/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/resiliencehubv2/model/DevOpsAgentConfigurationView.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

DevOpsAgentConfigurationView::DevOpsAgentConfigurationView(JsonView jsonValue) { *this = jsonValue; }

DevOpsAgentConfigurationView& DevOpsAgentConfigurationView::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("agentSpaceArn")) {
    m_agentSpaceArn = jsonValue.GetString("agentSpaceArn");
    m_agentSpaceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agentSpaceId")) {
    m_agentSpaceId = jsonValue.GetString("agentSpaceId");
    m_agentSpaceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("region")) {
    m_region = jsonValue.GetString("region");
    m_regionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = DevOpsAgentConnectionStatusMapper::GetDevOpsAgentConnectionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("operatorAppUrl")) {
    m_operatorAppUrl = jsonValue.GetString("operatorAppUrl");
    m_operatorAppUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("connectedAt")) {
    m_connectedAt = jsonValue.GetDouble("connectedAt");
    m_connectedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReason")) {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  return *this;
}

JsonValue DevOpsAgentConfigurationView::Jsonize() const {
  JsonValue payload;

  if (m_agentSpaceArnHasBeenSet) {
    payload.WithString("agentSpaceArn", m_agentSpaceArn);
  }

  if (m_agentSpaceIdHasBeenSet) {
    payload.WithString("agentSpaceId", m_agentSpaceId);
  }

  if (m_regionHasBeenSet) {
    payload.WithString("region", m_region);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", DevOpsAgentConnectionStatusMapper::GetNameForDevOpsAgentConnectionStatus(m_status));
  }

  if (m_operatorAppUrlHasBeenSet) {
    payload.WithString("operatorAppUrl", m_operatorAppUrl);
  }

  if (m_connectedAtHasBeenSet) {
    payload.WithDouble("connectedAt", m_connectedAt.SecondsWithMSPrecision());
  }

  if (m_statusReasonHasBeenSet) {
    payload.WithString("statusReason", m_statusReason);
  }

  return payload;
}

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
