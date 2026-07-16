/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/HealthCheck.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

HealthCheck::HealthCheck(JsonView jsonValue) { *this = jsonValue; }

HealthCheck& HealthCheck::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ConnectorStatus")) {
    m_connectorStatus = ConnectorStatusMapper::GetConnectorStatusForName(jsonValue.GetString("ConnectorStatus"));
    m_connectorStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Message")) {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastCheckedAt")) {
    m_lastCheckedAt = jsonValue.GetString("LastCheckedAt");
    m_lastCheckedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Issues")) {
    Aws::Utils::Array<JsonView> issuesJsonList = jsonValue.GetArray("Issues");
    for (unsigned issuesIndex = 0; issuesIndex < issuesJsonList.GetLength(); ++issuesIndex) {
      m_issues.push_back(issuesJsonList[issuesIndex].AsObject());
    }
    m_issuesHasBeenSet = true;
  }
  return *this;
}

JsonValue HealthCheck::Jsonize() const {
  JsonValue payload;

  if (m_connectorStatusHasBeenSet) {
    payload.WithString("ConnectorStatus", ConnectorStatusMapper::GetNameForConnectorStatus(m_connectorStatus));
  }

  if (m_messageHasBeenSet) {
    payload.WithString("Message", m_message);
  }

  if (m_lastCheckedAtHasBeenSet) {
    payload.WithString("LastCheckedAt", m_lastCheckedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_issuesHasBeenSet) {
    Aws::Utils::Array<JsonValue> issuesJsonList(m_issues.size());
    for (unsigned issuesIndex = 0; issuesIndex < issuesJsonList.GetLength(); ++issuesIndex) {
      issuesJsonList[issuesIndex].AsObject(m_issues[issuesIndex].Jsonize());
    }
    payload.WithArray("Issues", std::move(issuesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
