/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/AgentTarget.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

AgentTarget::AgentTarget(JsonView jsonValue) { *this = jsonValue; }

AgentTarget& AgentTarget::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("aiAgentId")) {
    m_aiAgentId = jsonValue.GetString("aiAgentId");
    m_aiAgentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("applicationId")) {
    m_applicationId = jsonValue.GetString("applicationId");
    m_applicationIdHasBeenSet = true;
  }
  return *this;
}

JsonValue AgentTarget::Jsonize() const {
  JsonValue payload;

  if (m_aiAgentIdHasBeenSet) {
    payload.WithString("aiAgentId", m_aiAgentId);
  }

  if (m_applicationIdHasBeenSet) {
    payload.WithString("applicationId", m_applicationId);
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
