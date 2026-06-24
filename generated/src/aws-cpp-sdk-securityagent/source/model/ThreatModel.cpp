/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/ThreatModel.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

ThreatModel::ThreatModel(JsonView jsonValue) { *this = jsonValue; }

ThreatModel& ThreatModel::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("threatModelId")) {
    m_threatModelId = jsonValue.GetString("threatModelId");
    m_threatModelIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agentSpaceId")) {
    m_agentSpaceId = jsonValue.GetString("agentSpaceId");
    m_agentSpaceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("assets")) {
    m_assets = jsonValue.GetObject("assets");
    m_assetsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scopeDocs")) {
    Aws::Utils::Array<JsonView> scopeDocsJsonList = jsonValue.GetArray("scopeDocs");
    for (unsigned scopeDocsIndex = 0; scopeDocsIndex < scopeDocsJsonList.GetLength(); ++scopeDocsIndex) {
      m_scopeDocs.push_back(scopeDocsJsonList[scopeDocsIndex].AsObject());
    }
    m_scopeDocsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceRole")) {
    m_serviceRole = jsonValue.GetString("serviceRole");
    m_serviceRoleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logConfig")) {
    m_logConfig = jsonValue.GetObject("logConfig");
    m_logConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue ThreatModel::Jsonize() const {
  JsonValue payload;

  if (m_threatModelIdHasBeenSet) {
    payload.WithString("threatModelId", m_threatModelId);
  }

  if (m_agentSpaceIdHasBeenSet) {
    payload.WithString("agentSpaceId", m_agentSpaceId);
  }

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_assetsHasBeenSet) {
    payload.WithObject("assets", m_assets.Jsonize());
  }

  if (m_scopeDocsHasBeenSet) {
    Aws::Utils::Array<JsonValue> scopeDocsJsonList(m_scopeDocs.size());
    for (unsigned scopeDocsIndex = 0; scopeDocsIndex < scopeDocsJsonList.GetLength(); ++scopeDocsIndex) {
      scopeDocsJsonList[scopeDocsIndex].AsObject(m_scopeDocs[scopeDocsIndex].Jsonize());
    }
    payload.WithArray("scopeDocs", std::move(scopeDocsJsonList));
  }

  if (m_serviceRoleHasBeenSet) {
    payload.WithString("serviceRole", m_serviceRole);
  }

  if (m_logConfigHasBeenSet) {
    payload.WithObject("logConfig", m_logConfig.Jsonize());
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
