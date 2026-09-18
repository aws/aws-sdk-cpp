/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/DelegateAgentConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

DelegateAgentConfiguration::DelegateAgentConfiguration(JsonView jsonValue) { *this = jsonValue; }

DelegateAgentConfiguration& DelegateAgentConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("agentTarget")) {
    m_agentTarget = jsonValue.GetObject("agentTarget");
    m_agentTargetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("instruction")) {
    m_instruction = jsonValue.GetObject("instruction");
    m_instructionHasBeenSet = true;
  }
  return *this;
}

JsonValue DelegateAgentConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_agentTargetHasBeenSet) {
    payload.WithObject("agentTarget", m_agentTarget.Jsonize());
  }

  if (m_instructionHasBeenSet) {
    payload.WithObject("instruction", m_instruction.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
