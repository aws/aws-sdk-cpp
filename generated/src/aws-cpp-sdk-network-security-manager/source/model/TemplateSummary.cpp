/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/TemplateSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

TemplateSummary::TemplateSummary(JsonView jsonValue) { *this = jsonValue; }

TemplateSummary& TemplateSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("templateId")) {
    m_templateId = jsonValue.GetString("templateId");
    m_templateIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("templateArn")) {
    m_templateArn = jsonValue.GetString("templateArn");
    m_templateArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("templateName")) {
    m_templateName = jsonValue.GetString("templateName");
    m_templateNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = EntityStatusMapper::GetEntityStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("version")) {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("hasPublishedVersion")) {
    m_hasPublishedVersion = jsonValue.GetBool("hasPublishedVersion");
    m_hasPublishedVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("firewallType")) {
    m_firewallType = TemplateFirewallTypeMapper::GetTemplateFirewallTypeForName(jsonValue.GetString("firewallType"));
    m_firewallTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue TemplateSummary::Jsonize() const {
  JsonValue payload;

  if (m_templateIdHasBeenSet) {
    payload.WithString("templateId", m_templateId);
  }

  if (m_templateArnHasBeenSet) {
    payload.WithString("templateArn", m_templateArn);
  }

  if (m_templateNameHasBeenSet) {
    payload.WithString("templateName", m_templateName);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", EntityStatusMapper::GetNameForEntityStatus(m_status));
  }

  if (m_versionHasBeenSet) {
    payload.WithString("version", m_version);
  }

  if (m_hasPublishedVersionHasBeenSet) {
    payload.WithBool("hasPublishedVersion", m_hasPublishedVersion);
  }

  if (m_firewallTypeHasBeenSet) {
    payload.WithString("firewallType", TemplateFirewallTypeMapper::GetNameForTemplateFirewallType(m_firewallType));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
