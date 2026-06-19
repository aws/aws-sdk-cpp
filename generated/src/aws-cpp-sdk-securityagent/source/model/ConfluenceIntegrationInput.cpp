/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/ConfluenceIntegrationInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

ConfluenceIntegrationInput::ConfluenceIntegrationInput(JsonView jsonValue) { *this = jsonValue; }

ConfluenceIntegrationInput& ConfluenceIntegrationInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("installationId")) {
    m_installationId = jsonValue.GetString("installationId");
    m_installationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("code")) {
    m_code = jsonValue.GetString("code");
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("state")) {
    m_state = jsonValue.GetString("state");
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("siteUrl")) {
    m_siteUrl = jsonValue.GetString("siteUrl");
    m_siteUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue ConfluenceIntegrationInput::Jsonize() const {
  JsonValue payload;

  if (m_installationIdHasBeenSet) {
    payload.WithString("installationId", m_installationId);
  }

  if (m_codeHasBeenSet) {
    payload.WithString("code", m_code);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("state", m_state);
  }

  if (m_siteUrlHasBeenSet) {
    payload.WithString("siteUrl", m_siteUrl);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
