/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/SpanAttributes.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

SpanAttributes::SpanAttributes(JsonView jsonValue) { *this = jsonValue; }

SpanAttributes& SpanAttributes::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("operationName")) {
    m_operationName = jsonValue.GetString("operationName");
    m_operationNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("providerName")) {
    m_providerName = jsonValue.GetString("providerName");
    m_providerNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorType")) {
    m_errorType = jsonValue.GetString("errorType");
    m_errorTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agentId")) {
    m_agentId = jsonValue.GetString("agentId");
    m_agentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("instanceArn")) {
    m_instanceArn = jsonValue.GetString("instanceArn");
    m_instanceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("contactId")) {
    m_contactId = jsonValue.GetString("contactId");
    m_contactIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("initialContactId")) {
    m_initialContactId = jsonValue.GetString("initialContactId");
    m_initialContactIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sessionName")) {
    m_sessionName = jsonValue.GetString("sessionName");
    m_sessionNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("aiAgentArn")) {
    m_aiAgentArn = jsonValue.GetString("aiAgentArn");
    m_aiAgentArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("aiAgentType")) {
    m_aiAgentType = AIAgentTypeMapper::GetAIAgentTypeForName(jsonValue.GetString("aiAgentType"));
    m_aiAgentTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("aiAgentName")) {
    m_aiAgentName = jsonValue.GetString("aiAgentName");
    m_aiAgentNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("aiAgentId")) {
    m_aiAgentId = jsonValue.GetString("aiAgentId");
    m_aiAgentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("aiAgentVersion")) {
    m_aiAgentVersion = jsonValue.GetInteger("aiAgentVersion");
    m_aiAgentVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("aiAgentInvoker")) {
    m_aiAgentInvoker = jsonValue.GetString("aiAgentInvoker");
    m_aiAgentInvokerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("aiAgentOrchestratorUseCase")) {
    m_aiAgentOrchestratorUseCase = jsonValue.GetString("aiAgentOrchestratorUseCase");
    m_aiAgentOrchestratorUseCaseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("requestModel")) {
    m_requestModel = jsonValue.GetString("requestModel");
    m_requestModelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("requestMaxTokens")) {
    m_requestMaxTokens = jsonValue.GetInteger("requestMaxTokens");
    m_requestMaxTokensHasBeenSet = true;
  }
  if (jsonValue.ValueExists("temperature")) {
    m_temperature = jsonValue.GetDouble("temperature");
    m_temperatureHasBeenSet = true;
  }
  if (jsonValue.ValueExists("topP")) {
    m_topP = jsonValue.GetDouble("topP");
    m_topPHasBeenSet = true;
  }
  if (jsonValue.ValueExists("responseModel")) {
    m_responseModel = jsonValue.GetString("responseModel");
    m_responseModelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("responseFinishReasons")) {
    Aws::Utils::Array<JsonView> responseFinishReasonsJsonList = jsonValue.GetArray("responseFinishReasons");
    for (unsigned responseFinishReasonsIndex = 0; responseFinishReasonsIndex < responseFinishReasonsJsonList.GetLength();
         ++responseFinishReasonsIndex) {
      m_responseFinishReasons.push_back(responseFinishReasonsJsonList[responseFinishReasonsIndex].AsString());
    }
    m_responseFinishReasonsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("usageInputTokens")) {
    m_usageInputTokens = jsonValue.GetInteger("usageInputTokens");
    m_usageInputTokensHasBeenSet = true;
  }
  if (jsonValue.ValueExists("usageOutputTokens")) {
    m_usageOutputTokens = jsonValue.GetInteger("usageOutputTokens");
    m_usageOutputTokensHasBeenSet = true;
  }
  if (jsonValue.ValueExists("usageTotalTokens")) {
    m_usageTotalTokens = jsonValue.GetInteger("usageTotalTokens");
    m_usageTotalTokensHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cacheReadInputTokens")) {
    m_cacheReadInputTokens = jsonValue.GetInteger("cacheReadInputTokens");
    m_cacheReadInputTokensHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cacheWriteInputTokens")) {
    m_cacheWriteInputTokens = jsonValue.GetInteger("cacheWriteInputTokens");
    m_cacheWriteInputTokensHasBeenSet = true;
  }
  if (jsonValue.ValueExists("inputMessages")) {
    Aws::Utils::Array<JsonView> inputMessagesJsonList = jsonValue.GetArray("inputMessages");
    for (unsigned inputMessagesIndex = 0; inputMessagesIndex < inputMessagesJsonList.GetLength(); ++inputMessagesIndex) {
      m_inputMessages.push_back(inputMessagesJsonList[inputMessagesIndex].AsObject());
    }
    m_inputMessagesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("outputMessages")) {
    Aws::Utils::Array<JsonView> outputMessagesJsonList = jsonValue.GetArray("outputMessages");
    for (unsigned outputMessagesIndex = 0; outputMessagesIndex < outputMessagesJsonList.GetLength(); ++outputMessagesIndex) {
      m_outputMessages.push_back(outputMessagesJsonList[outputMessagesIndex].AsObject());
    }
    m_outputMessagesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("systemInstructions")) {
    Aws::Utils::Array<JsonView> systemInstructionsJsonList = jsonValue.GetArray("systemInstructions");
    for (unsigned systemInstructionsIndex = 0; systemInstructionsIndex < systemInstructionsJsonList.GetLength();
         ++systemInstructionsIndex) {
      m_systemInstructions.push_back(systemInstructionsJsonList[systemInstructionsIndex].AsObject());
    }
    m_systemInstructionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("promptArn")) {
    m_promptArn = jsonValue.GetString("promptArn");
    m_promptArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("promptId")) {
    m_promptId = jsonValue.GetString("promptId");
    m_promptIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("promptType")) {
    m_promptType = AIPromptTypeMapper::GetAIPromptTypeForName(jsonValue.GetString("promptType"));
    m_promptTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("promptName")) {
    m_promptName = jsonValue.GetString("promptName");
    m_promptNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("promptVersion")) {
    m_promptVersion = jsonValue.GetInteger("promptVersion");
    m_promptVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue SpanAttributes::Jsonize() const {
  JsonValue payload;

  if (m_operationNameHasBeenSet) {
    payload.WithString("operationName", m_operationName);
  }

  if (m_providerNameHasBeenSet) {
    payload.WithString("providerName", m_providerName);
  }

  if (m_errorTypeHasBeenSet) {
    payload.WithString("errorType", m_errorType);
  }

  if (m_agentIdHasBeenSet) {
    payload.WithString("agentId", m_agentId);
  }

  if (m_instanceArnHasBeenSet) {
    payload.WithString("instanceArn", m_instanceArn);
  }

  if (m_contactIdHasBeenSet) {
    payload.WithString("contactId", m_contactId);
  }

  if (m_initialContactIdHasBeenSet) {
    payload.WithString("initialContactId", m_initialContactId);
  }

  if (m_sessionNameHasBeenSet) {
    payload.WithString("sessionName", m_sessionName);
  }

  if (m_aiAgentArnHasBeenSet) {
    payload.WithString("aiAgentArn", m_aiAgentArn);
  }

  if (m_aiAgentTypeHasBeenSet) {
    payload.WithString("aiAgentType", AIAgentTypeMapper::GetNameForAIAgentType(m_aiAgentType));
  }

  if (m_aiAgentNameHasBeenSet) {
    payload.WithString("aiAgentName", m_aiAgentName);
  }

  if (m_aiAgentIdHasBeenSet) {
    payload.WithString("aiAgentId", m_aiAgentId);
  }

  if (m_aiAgentVersionHasBeenSet) {
    payload.WithInteger("aiAgentVersion", m_aiAgentVersion);
  }

  if (m_aiAgentInvokerHasBeenSet) {
    payload.WithString("aiAgentInvoker", m_aiAgentInvoker);
  }

  if (m_aiAgentOrchestratorUseCaseHasBeenSet) {
    payload.WithString("aiAgentOrchestratorUseCase", m_aiAgentOrchestratorUseCase);
  }

  if (m_requestModelHasBeenSet) {
    payload.WithString("requestModel", m_requestModel);
  }

  if (m_requestMaxTokensHasBeenSet) {
    payload.WithInteger("requestMaxTokens", m_requestMaxTokens);
  }

  if (m_temperatureHasBeenSet) {
    payload.WithDouble("temperature", m_temperature);
  }

  if (m_topPHasBeenSet) {
    payload.WithDouble("topP", m_topP);
  }

  if (m_responseModelHasBeenSet) {
    payload.WithString("responseModel", m_responseModel);
  }

  if (m_responseFinishReasonsHasBeenSet) {
    Aws::Utils::Array<JsonValue> responseFinishReasonsJsonList(m_responseFinishReasons.size());
    for (unsigned responseFinishReasonsIndex = 0; responseFinishReasonsIndex < responseFinishReasonsJsonList.GetLength();
         ++responseFinishReasonsIndex) {
      responseFinishReasonsJsonList[responseFinishReasonsIndex].AsString(m_responseFinishReasons[responseFinishReasonsIndex]);
    }
    payload.WithArray("responseFinishReasons", std::move(responseFinishReasonsJsonList));
  }

  if (m_usageInputTokensHasBeenSet) {
    payload.WithInteger("usageInputTokens", m_usageInputTokens);
  }

  if (m_usageOutputTokensHasBeenSet) {
    payload.WithInteger("usageOutputTokens", m_usageOutputTokens);
  }

  if (m_usageTotalTokensHasBeenSet) {
    payload.WithInteger("usageTotalTokens", m_usageTotalTokens);
  }

  if (m_cacheReadInputTokensHasBeenSet) {
    payload.WithInteger("cacheReadInputTokens", m_cacheReadInputTokens);
  }

  if (m_cacheWriteInputTokensHasBeenSet) {
    payload.WithInteger("cacheWriteInputTokens", m_cacheWriteInputTokens);
  }

  if (m_inputMessagesHasBeenSet) {
    Aws::Utils::Array<JsonValue> inputMessagesJsonList(m_inputMessages.size());
    for (unsigned inputMessagesIndex = 0; inputMessagesIndex < inputMessagesJsonList.GetLength(); ++inputMessagesIndex) {
      inputMessagesJsonList[inputMessagesIndex].AsObject(m_inputMessages[inputMessagesIndex].Jsonize());
    }
    payload.WithArray("inputMessages", std::move(inputMessagesJsonList));
  }

  if (m_outputMessagesHasBeenSet) {
    Aws::Utils::Array<JsonValue> outputMessagesJsonList(m_outputMessages.size());
    for (unsigned outputMessagesIndex = 0; outputMessagesIndex < outputMessagesJsonList.GetLength(); ++outputMessagesIndex) {
      outputMessagesJsonList[outputMessagesIndex].AsObject(m_outputMessages[outputMessagesIndex].Jsonize());
    }
    payload.WithArray("outputMessages", std::move(outputMessagesJsonList));
  }

  if (m_systemInstructionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> systemInstructionsJsonList(m_systemInstructions.size());
    for (unsigned systemInstructionsIndex = 0; systemInstructionsIndex < systemInstructionsJsonList.GetLength();
         ++systemInstructionsIndex) {
      systemInstructionsJsonList[systemInstructionsIndex].AsObject(m_systemInstructions[systemInstructionsIndex].Jsonize());
    }
    payload.WithArray("systemInstructions", std::move(systemInstructionsJsonList));
  }

  if (m_promptArnHasBeenSet) {
    payload.WithString("promptArn", m_promptArn);
  }

  if (m_promptIdHasBeenSet) {
    payload.WithString("promptId", m_promptId);
  }

  if (m_promptTypeHasBeenSet) {
    payload.WithString("promptType", AIPromptTypeMapper::GetNameForAIPromptType(m_promptType));
  }

  if (m_promptNameHasBeenSet) {
    payload.WithString("promptName", m_promptName);
  }

  if (m_promptVersionHasBeenSet) {
    payload.WithInteger("promptVersion", m_promptVersion);
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
