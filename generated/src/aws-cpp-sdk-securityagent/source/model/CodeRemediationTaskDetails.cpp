/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/CodeRemediationTaskDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

CodeRemediationTaskDetails::CodeRemediationTaskDetails(JsonView jsonValue) { *this = jsonValue; }

CodeRemediationTaskDetails& CodeRemediationTaskDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("repoName")) {
    m_repoName = jsonValue.GetString("repoName");
    m_repoNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("codeDiffLink")) {
    m_codeDiffLink = jsonValue.GetString("codeDiffLink");
    m_codeDiffLinkHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pullRequestLink")) {
    m_pullRequestLink = jsonValue.GetString("pullRequestLink");
    m_pullRequestLinkHasBeenSet = true;
  }
  return *this;
}

JsonValue CodeRemediationTaskDetails::Jsonize() const {
  JsonValue payload;

  if (m_repoNameHasBeenSet) {
    payload.WithString("repoName", m_repoName);
  }

  if (m_codeDiffLinkHasBeenSet) {
    payload.WithString("codeDiffLink", m_codeDiffLink);
  }

  if (m_pullRequestLinkHasBeenSet) {
    payload.WithString("pullRequestLink", m_pullRequestLink);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
