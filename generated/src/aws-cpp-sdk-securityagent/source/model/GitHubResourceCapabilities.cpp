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
