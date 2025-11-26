/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/ProxyConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

ProxyConfiguration::ProxyConfiguration(JsonView jsonValue) { *this = jsonValue; }

ProxyConfiguration& ProxyConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ProxyConfigurationName")) {
    m_proxyConfigurationName = jsonValue.GetString("ProxyConfigurationName");
    m_proxyConfigurationNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProxyConfigurationArn")) {
    m_proxyConfigurationArn = jsonValue.GetString("ProxyConfigurationArn");
    m_proxyConfigurationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateTime")) {
    m_createTime = jsonValue.GetDouble("CreateTime");
    m_createTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DeleteTime")) {
    m_deleteTime = jsonValue.GetDouble("DeleteTime");
    m_deleteTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RuleGroups")) {
    Aws::Utils::Array<JsonView> ruleGroupsJsonList = jsonValue.GetArray("RuleGroups");
    for (unsigned ruleGroupsIndex = 0; ruleGroupsIndex < ruleGroupsJsonList.GetLength(); ++ruleGroupsIndex) {
      m_ruleGroups.push_back(ruleGroupsJsonList[ruleGroupsIndex].AsObject());
    }
    m_ruleGroupsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DefaultRulePhaseActions")) {
    m_defaultRulePhaseActions = jsonValue.GetObject("DefaultRulePhaseActions");
    m_defaultRulePhaseActionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Tags")) {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue ProxyConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_proxyConfigurationNameHasBeenSet) {
    payload.WithString("ProxyConfigurationName", m_proxyConfigurationName);
  }

  if (m_proxyConfigurationArnHasBeenSet) {
    payload.WithString("ProxyConfigurationArn", m_proxyConfigurationArn);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_createTimeHasBeenSet) {
    payload.WithDouble("CreateTime", m_createTime.SecondsWithMSPrecision());
  }

  if (m_deleteTimeHasBeenSet) {
    payload.WithDouble("DeleteTime", m_deleteTime.SecondsWithMSPrecision());
  }

  if (m_ruleGroupsHasBeenSet) {
    Aws::Utils::Array<JsonValue> ruleGroupsJsonList(m_ruleGroups.size());
    for (unsigned ruleGroupsIndex = 0; ruleGroupsIndex < ruleGroupsJsonList.GetLength(); ++ruleGroupsIndex) {
      ruleGroupsJsonList[ruleGroupsIndex].AsObject(m_ruleGroups[ruleGroupsIndex].Jsonize());
    }
    payload.WithArray("RuleGroups", std::move(ruleGroupsJsonList));
  }

  if (m_defaultRulePhaseActionsHasBeenSet) {
    payload.WithObject("DefaultRulePhaseActions", m_defaultRulePhaseActions.Jsonize());
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("Tags", std::move(tagsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
