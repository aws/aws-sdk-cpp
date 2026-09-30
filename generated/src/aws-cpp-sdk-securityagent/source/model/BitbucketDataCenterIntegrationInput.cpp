/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/BitbucketDataCenterIntegrationInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

BitbucketDataCenterIntegrationInput::BitbucketDataCenterIntegrationInput(JsonView jsonValue) { *this = jsonValue; }

BitbucketDataCenterIntegrationInput& BitbucketDataCenterIntegrationInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("targetUrl")) {
    m_targetUrl = jsonValue.GetString("targetUrl");
    m_targetUrlHasBeenSet = true;
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

JsonValue BitbucketDataCenterIntegrationInput::Jsonize() const {
  JsonValue payload;

  if (m_targetUrlHasBeenSet) {
    payload.WithString("targetUrl", m_targetUrl);
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
