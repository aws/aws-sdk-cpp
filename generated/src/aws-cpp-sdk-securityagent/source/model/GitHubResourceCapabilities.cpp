/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/GitHubResourceCapabilities.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

GitHubResourceCapabilities::GitHubResourceCapabilities(JsonView jsonValue) { *this = jsonValue; }

GitHubResourceCapabilities& GitHubResourceCapabilities::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("triggerFilterGroups")) {
    Aws::Utils::Array<JsonView> triggerFilterGroupsJsonList = jsonValue.GetArray("triggerFilterGroups");
    for (unsigned triggerFilterGroupsIndex = 0; triggerFilterGroupsIndex < triggerFilterGroupsJsonList.GetLength();
         ++triggerFilterGroupsIndex) {
      m_triggerFilterGroups.push_back(triggerFilterGroupsJsonList[triggerFilterGroupsIndex].AsObject());
    }
    m_triggerFilterGroupsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("leaveComments")) {
    m_leaveComments = jsonValue.GetBool("leaveComments");
    m_leaveCommentsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("remediateCode")) {
    m_remediateCode = jsonValue.GetBool("remediateCode");
    m_remediateCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue GitHubResourceCapabilities::Jsonize() const {
  JsonValue payload;

  if (m_triggerFilterGroupsHasBeenSet) {
    Aws::Utils::Array<JsonValue> triggerFilterGroupsJsonList(m_triggerFilterGroups.size());
    for (unsigned triggerFilterGroupsIndex = 0; triggerFilterGroupsIndex < triggerFilterGroupsJsonList.GetLength();
         ++triggerFilterGroupsIndex) {
      triggerFilterGroupsJsonList[triggerFilterGroupsIndex].AsObject(m_triggerFilterGroups[triggerFilterGroupsIndex].Jsonize());
    }
    payload.WithArray("triggerFilterGroups", std::move(triggerFilterGroupsJsonList));
  }

  if (m_leaveCommentsHasBeenSet) {
    payload.WithBool("leaveComments", m_leaveComments);
  }

  if (m_remediateCodeHasBeenSet) {
    payload.WithBool("remediateCode", m_remediateCode);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
