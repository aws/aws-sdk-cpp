/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/GitHubIntegrationInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

GitHubIntegrationInput::GitHubIntegrationInput(JsonView jsonValue) { *this = jsonValue; }

GitHubIntegrationInput& GitHubIntegrationInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("code")) {
    m_code = jsonValue.GetString("code");
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = jsonValue.GetString("state");
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("organizationName")) {
    m_organizationName = jsonValue.GetString("organizationName");
    m_organizationNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("targetUrl")) {
    m_targetUrl = jsonValue.GetString("targetUrl");
    m_targetUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("installationId")) {
    m_installationId = jsonValue.GetString("installationId");
    m_installationIdHasBeenSet = true;
  }
  return *this;
}

JsonValue GitHubIntegrationInput::Jsonize() const {
  JsonValue payload;

  if (m_codeHasBeenSet) {
    payload.WithString("code", m_code);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("state", m_state);
  }

  if (m_organizationNameHasBeenSet) {
    payload.WithString("organizationName", m_organizationName);
  }

  if (m_targetUrlHasBeenSet) {
    payload.WithString("targetUrl", m_targetUrl);
  }

  if (m_installationIdHasBeenSet) {
    payload.WithString("installationId", m_installationId);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
