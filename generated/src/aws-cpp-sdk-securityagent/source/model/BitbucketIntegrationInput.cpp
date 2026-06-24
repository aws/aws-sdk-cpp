/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/BitbucketIntegrationInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

BitbucketIntegrationInput::BitbucketIntegrationInput(JsonView jsonValue) { *this = jsonValue; }

BitbucketIntegrationInput& BitbucketIntegrationInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("installationId")) {
    m_installationId = jsonValue.GetString("installationId");
    m_installationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("workspace")) {
    m_workspace = jsonValue.GetString("workspace");
    m_workspaceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("code")) {
    m_code = jsonValue.GetString("code");
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = jsonValue.GetString("state");
    m_stateHasBeenSet = true;
  }
  return *this;
}

JsonValue BitbucketIntegrationInput::Jsonize() const {
  JsonValue payload;

  if (m_installationIdHasBeenSet) {
    payload.WithString("installationId", m_installationId);
  }

  if (m_workspaceHasBeenSet) {
    payload.WithString("workspace", m_workspace);
  }

  if (m_codeHasBeenSet) {
    payload.WithString("code", m_code);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("state", m_state);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
