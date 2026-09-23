/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/model/RemediationIssueDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkSecurityManager {
namespace Model {

RemediationIssueDetails::RemediationIssueDetails(JsonView jsonValue) { *this = jsonValue; }

RemediationIssueDetails& RemediationIssueDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("issueType")) {
    m_issueType = jsonValue.GetString("issueType");
    m_issueTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("correctiveAction")) {
    m_correctiveAction = jsonValue.GetString("correctiveAction");
    m_correctiveActionHasBeenSet = true;
  }
  return *this;
}

JsonValue RemediationIssueDetails::Jsonize() const {
  JsonValue payload;

  if (m_issueTypeHasBeenSet) {
    payload.WithString("issueType", m_issueType);
  }

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  if (m_correctiveActionHasBeenSet) {
    payload.WithString("correctiveAction", m_correctiveAction);
  }

  return payload;
}

}  // namespace Model
}  // namespace NetworkSecurityManager
}  // namespace Aws
