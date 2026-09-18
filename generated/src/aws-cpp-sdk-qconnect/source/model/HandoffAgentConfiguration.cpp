/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/HandoffAgentConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

HandoffAgentConfiguration::HandoffAgentConfiguration(JsonView jsonValue) { *this = jsonValue; }

HandoffAgentConfiguration& HandoffAgentConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("agentTarget")) {
    m_agentTarget = jsonValue.GetObject("agentTarget");
    m_agentTargetHasBeenSet = true;
  }
  if (jsonValue.ValueExists("instruction")) {
    m_instruction = jsonValue.GetObject("instruction");
    m_instructionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("audioStreamingEnabled")) {
    m_audioStreamingEnabled = jsonValue.GetBool("audioStreamingEnabled");
    m_audioStreamingEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("immediateHandoff")) {
    m_immediateHandoff = jsonValue.GetBool("immediateHandoff");
    m_immediateHandoffHasBeenSet = true;
  }
  return *this;
}

JsonValue HandoffAgentConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_agentTargetHasBeenSet) {
    payload.WithObject("agentTarget", m_agentTarget.Jsonize());
  }

  if (m_instructionHasBeenSet) {
    payload.WithObject("instruction", m_instruction.Jsonize());
  }

  if (m_audioStreamingEnabledHasBeenSet) {
    payload.WithBool("audioStreamingEnabled", m_audioStreamingEnabled);
  }

  if (m_immediateHandoffHasBeenSet) {
    payload.WithBool("immediateHandoff", m_immediateHandoff);
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
