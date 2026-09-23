/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/OutOfSyncReasonsView.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

OutOfSyncReasonsView::OutOfSyncReasonsView(JsonView jsonValue) { *this = jsonValue; }

OutOfSyncReasonsView& OutOfSyncReasonsView::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("reasons")) {
    Aws::Map<Aws::String, JsonView> reasonsJsonMap = jsonValue.GetObject("reasons").GetAllObjects();
    for (auto& reasonsItem : reasonsJsonMap) {
      m_reasons[PolicyFirewallTypeMapper::GetPolicyFirewallTypeForName(reasonsItem.first)] = reasonsItem.second.AsObject();
    }
    m_reasonsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("notVisible")) {
    m_notVisible = jsonValue.GetObject("notVisible");
    m_notVisibleHasBeenSet = true;
  }
  return *this;
}

JsonValue OutOfSyncReasonsView::Jsonize() const {
  JsonValue payload;

  if (m_reasonsHasBeenSet) {
    JsonValue reasonsJsonMap;
    for (auto& reasonsItem : m_reasons) {
      reasonsJsonMap.WithObject(PolicyFirewallTypeMapper::GetNameForPolicyFirewallType(reasonsItem.first), reasonsItem.second.Jsonize());
    }
    payload.WithObject("reasons", std::move(reasonsJsonMap));
  }

  if (m_notVisibleHasBeenSet) {
    payload.WithObject("notVisible", m_notVisible.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
