/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/JiraResourceCapabilities.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

JiraResourceCapabilities::JiraResourceCapabilities(JsonView jsonValue) { *this = jsonValue; }

JiraResourceCapabilities& JiraResourceCapabilities::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("createIssue")) {
    m_createIssue = jsonValue.GetBool("createIssue");
    m_createIssueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("commentIssue")) {
    m_commentIssue = jsonValue.GetBool("commentIssue");
    m_commentIssueHasBeenSet = true;
  }
  return *this;
}

JsonValue JiraResourceCapabilities::Jsonize() const {
  JsonValue payload;

  if (m_createIssueHasBeenSet) {
    payload.WithBool("createIssue", m_createIssue);
  }

  if (m_commentIssueHasBeenSet) {
    payload.WithBool("commentIssue", m_commentIssue);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
