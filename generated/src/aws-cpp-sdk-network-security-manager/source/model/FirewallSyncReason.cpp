/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/FirewallSyncReason.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

FirewallSyncReason::FirewallSyncReason(JsonView jsonValue) { *this = jsonValue; }

FirewallSyncReason& FirewallSyncReason::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("missingFirewall")) {
    m_missingFirewall = jsonValue.GetString("missingFirewall");
    m_missingFirewallHasBeenSet = true;
  }
  if (jsonValue.ValueExists("invalidFirewall")) {
    m_invalidFirewall = jsonValue.GetObject("invalidFirewall");
    m_invalidFirewallHasBeenSet = true;
  }
  if (jsonValue.ValueExists("invalidResource")) {
    Aws::Map<Aws::String, JsonView> invalidResourceJsonMap = jsonValue.GetObject("invalidResource").GetAllObjects();
    for (auto& invalidResourceItem : invalidResourceJsonMap) {
      Aws::Utils::Array<JsonView> invalidResourceIssueList2JsonList = invalidResourceItem.second.AsArray();
      Aws::Vector<InvalidResourceIssue> invalidResourceIssueList2List;
      invalidResourceIssueList2List.reserve((size_t)invalidResourceIssueList2JsonList.GetLength());
      for (unsigned invalidResourceIssueList2Index = 0; invalidResourceIssueList2Index < invalidResourceIssueList2JsonList.GetLength();
           ++invalidResourceIssueList2Index) {
        invalidResourceIssueList2List.push_back(invalidResourceIssueList2JsonList[invalidResourceIssueList2Index].AsObject());
      }
      m_invalidResource[ScopeResourceTypeMapper::GetScopeResourceTypeForName(invalidResourceItem.first)] =
          std::move(invalidResourceIssueList2List);
    }
    m_invalidResourceHasBeenSet = true;
  }
  return *this;
}

JsonValue FirewallSyncReason::Jsonize() const {
  JsonValue payload;

  if (m_missingFirewallHasBeenSet) {
    payload.WithString("missingFirewall", m_missingFirewall);
  }

  if (m_invalidFirewallHasBeenSet) {
    payload.WithObject("invalidFirewall", m_invalidFirewall.Jsonize());
  }

  if (m_invalidResourceHasBeenSet) {
    JsonValue invalidResourceJsonMap;
    for (auto& invalidResourceItem : m_invalidResource) {
      Aws::Utils::Array<JsonValue> invalidResourceIssueListJsonList(invalidResourceItem.second.size());
      for (unsigned invalidResourceIssueListIndex = 0; invalidResourceIssueListIndex < invalidResourceIssueListJsonList.GetLength();
           ++invalidResourceIssueListIndex) {
        invalidResourceIssueListJsonList[invalidResourceIssueListIndex].AsObject(
            invalidResourceItem.second[invalidResourceIssueListIndex].Jsonize());
      }
      invalidResourceJsonMap.WithArray(ScopeResourceTypeMapper::GetNameForScopeResourceType(invalidResourceItem.first),
                                       std::move(invalidResourceIssueListJsonList));
    }
    payload.WithObject("invalidResource", std::move(invalidResourceJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
