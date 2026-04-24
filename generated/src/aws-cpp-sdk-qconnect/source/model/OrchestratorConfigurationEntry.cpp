/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/OrchestratorConfigurationEntry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

OrchestratorConfigurationEntry::OrchestratorConfigurationEntry(JsonView jsonValue) { *this = jsonValue; }

OrchestratorConfigurationEntry& OrchestratorConfigurationEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("aiAgentId")) {
    m_aiAgentId = jsonValue.GetString("aiAgentId");
    m_aiAgentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("orchestratorUseCase")) {
    m_orchestratorUseCase = jsonValue.GetString("orchestratorUseCase");
    m_orchestratorUseCaseHasBeenSet = true;
  }
  return *this;
}

JsonValue OrchestratorConfigurationEntry::Jsonize() const {
  JsonValue payload;

  if (m_aiAgentIdHasBeenSet) {
    payload.WithString("aiAgentId", m_aiAgentId);
  }

  if (m_orchestratorUseCaseHasBeenSet) {
    payload.WithString("orchestratorUseCase", m_orchestratorUseCase);
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
