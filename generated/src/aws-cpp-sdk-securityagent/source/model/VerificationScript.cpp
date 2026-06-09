/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/VerificationScript.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

VerificationScript::VerificationScript(JsonView jsonValue) { *this = jsonValue; }

VerificationScript& VerificationScript::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("scriptType")) {
    m_scriptType = jsonValue.GetString("scriptType");
    m_scriptTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scriptUrl")) {
    m_scriptUrl = jsonValue.GetString("scriptUrl");
    m_scriptUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("instructions")) {
    m_instructions = jsonValue.GetString("instructions");
    m_instructionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("envVars")) {
    Aws::Utils::Array<JsonView> envVarsJsonList = jsonValue.GetArray("envVars");
    for (unsigned envVarsIndex = 0; envVarsIndex < envVarsJsonList.GetLength(); ++envVarsIndex) {
      m_envVars.push_back(envVarsJsonList[envVarsIndex].AsObject());
    }
    m_envVarsHasBeenSet = true;
  }
  return *this;
}

JsonValue VerificationScript::Jsonize() const {
  JsonValue payload;

  if (m_scriptTypeHasBeenSet) {
    payload.WithString("scriptType", m_scriptType);
  }

  if (m_scriptUrlHasBeenSet) {
    payload.WithString("scriptUrl", m_scriptUrl);
  }

  if (m_instructionsHasBeenSet) {
    payload.WithString("instructions", m_instructions);
  }

  if (m_envVarsHasBeenSet) {
    Aws::Utils::Array<JsonValue> envVarsJsonList(m_envVars.size());
    for (unsigned envVarsIndex = 0; envVarsIndex < envVarsJsonList.GetLength(); ++envVarsIndex) {
      envVarsJsonList[envVarsIndex].AsObject(m_envVars[envVarsIndex].Jsonize());
    }
    payload.WithArray("envVars", std::move(envVarsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
