/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/BatchSecurityRequirementError.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

BatchSecurityRequirementError::BatchSecurityRequirementError(JsonView jsonValue) { *this = jsonValue; }

BatchSecurityRequirementError& BatchSecurityRequirementError::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("securityRequirementName")) {
    m_securityRequirementName = jsonValue.GetString("securityRequirementName");
    m_securityRequirementNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("code")) {
    m_code = jsonValue.GetString("code");
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchSecurityRequirementError::Jsonize() const {
  JsonValue payload;

  if (m_securityRequirementNameHasBeenSet) {
    payload.WithString("securityRequirementName", m_securityRequirementName);
  }

  if (m_codeHasBeenSet) {
    payload.WithString("code", m_code);
  }

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
