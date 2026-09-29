/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/AzureDevOpsIntegrationInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

AzureDevOpsIntegrationInput::AzureDevOpsIntegrationInput(JsonView jsonValue) { *this = jsonValue; }

AzureDevOpsIntegrationInput& AzureDevOpsIntegrationInput::operator=(JsonView jsonValue) {
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
  return *this;
}

JsonValue AzureDevOpsIntegrationInput::Jsonize() const {
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

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
