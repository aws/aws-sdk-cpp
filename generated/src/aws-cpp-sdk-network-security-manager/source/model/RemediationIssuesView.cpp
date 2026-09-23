/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/RemediationIssuesView.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

RemediationIssuesView::RemediationIssuesView(JsonView jsonValue) { *this = jsonValue; }

RemediationIssuesView& RemediationIssuesView::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("issues")) {
    Aws::Map<Aws::String, JsonView> issuesJsonMap = jsonValue.GetObject("issues").GetAllObjects();
    for (auto& issuesItem : issuesJsonMap) {
      m_issues[PolicyFirewallTypeMapper::GetPolicyFirewallTypeForName(issuesItem.first)] = issuesItem.second.AsObject();
    }
    m_issuesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("notVisible")) {
    m_notVisible = jsonValue.GetObject("notVisible");
    m_notVisibleHasBeenSet = true;
  }
  return *this;
}

JsonValue RemediationIssuesView::Jsonize() const {
  JsonValue payload;

  if (m_issuesHasBeenSet) {
    JsonValue issuesJsonMap;
    for (auto& issuesItem : m_issues) {
      issuesJsonMap.WithObject(PolicyFirewallTypeMapper::GetNameForPolicyFirewallType(issuesItem.first), issuesItem.second.Jsonize());
    }
    payload.WithObject("issues", std::move(issuesJsonMap));
  }

  if (m_notVisibleHasBeenSet) {
    payload.WithObject("notVisible", m_notVisible.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
