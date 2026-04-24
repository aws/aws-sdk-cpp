/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/model/ProxyRuleGroup.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

ProxyRuleGroup::ProxyRuleGroup(JsonView jsonValue) { *this = jsonValue; }

ProxyRuleGroup& ProxyRuleGroup::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ProxyRuleGroupName")) {
    m_proxyRuleGroupName = jsonValue.GetString("ProxyRuleGroupName");
    m_proxyRuleGroupNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ProxyRuleGroupArn")) {
    m_proxyRuleGroupArn = jsonValue.GetString("ProxyRuleGroupArn");
    m_proxyRuleGroupArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreateTime")) {
    m_createTime = jsonValue.GetDouble("CreateTime");
    m_createTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DeleteTime")) {
    m_deleteTime = jsonValue.GetDouble("DeleteTime");
    m_deleteTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Rules")) {
    m_rules = jsonValue.GetObject("Rules");
    m_rulesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
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

JsonValue ProxyRuleGroup::Jsonize() const {
  JsonValue payload;

  if (m_proxyRuleGroupNameHasBeenSet) {
    payload.WithString("ProxyRuleGroupName", m_proxyRuleGroupName);
  }

  if (m_proxyRuleGroupArnHasBeenSet) {
    payload.WithString("ProxyRuleGroupArn", m_proxyRuleGroupArn);
  }

  if (m_createTimeHasBeenSet) {
    payload.WithDouble("CreateTime", m_createTime.SecondsWithMSPrecision());
  }

  if (m_deleteTimeHasBeenSet) {
    payload.WithDouble("DeleteTime", m_deleteTime.SecondsWithMSPrecision());
  }

  if (m_rulesHasBeenSet) {
    payload.WithObject("Rules", m_rules.Jsonize());
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
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
