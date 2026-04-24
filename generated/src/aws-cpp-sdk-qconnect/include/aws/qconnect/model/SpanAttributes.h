/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/AIAgentType.h>
#include <aws/qconnect/model/AIPromptType.h>
#include <aws/qconnect/model/SpanMessage.h>
#include <aws/qconnect/model/SpanMessageValue.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QConnect {
namespace Model {

/**
 * <p>Contextual attributes capturing operation details, LLM configuration, usage
 * metrics, and conversation data</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/SpanAttributes">AWS
 * API Reference</a></p>
 */
class SpanAttributes {
 public:
  AWS_QCONNECT_API SpanAttributes() = default;
  AWS_QCONNECT_API SpanAttributes(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API SpanAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Action being performed</p>
   */
  inline const Aws::String& GetOperationName() const { return m_operationName; }
  inline bool OperationNameHasBeenSet() const { return m_operationNameHasBeenSet; }
  template <typename OperationNameT = Aws::String>
  void SetOperationName(OperationNameT&& value) {
    m_operationNameHasBeenSet = true;
    m_operationName = std::forward<OperationNameT>(value);
  }
  template <typename OperationNameT = Aws::String>
  SpanAttributes& WithOperationName(OperationNameT&& value) {
    SetOperationName(std::forward<OperationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Model provider identifier (e.g., aws.bedrock)</p>
   */
  inline const Aws::String& GetProviderName() const { return m_providerName; }
  inline bool ProviderNameHasBeenSet() const { return m_providerNameHasBeenSet; }
  template <typename ProviderNameT = Aws::String>
  void SetProviderName(ProviderNameT&& value) {
    m_providerNameHasBeenSet = true;
    m_providerName = std::forward<ProviderNameT>(value);
  }
  template <typename ProviderNameT = Aws::String>
  SpanAttributes& WithProviderName(ProviderNameT&& value) {
    SetProviderName(std::forward<ProviderNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Error classification if span failed (e.g., throttle, timeout)</p>
   */
  inline const Aws::String& GetErrorType() const { return m_errorType; }
  inline bool ErrorTypeHasBeenSet() const { return m_errorTypeHasBeenSet; }
  template <typename ErrorTypeT = Aws::String>
  void SetErrorType(ErrorTypeT&& value) {
    m_errorTypeHasBeenSet = true;
    m_errorType = std::forward<ErrorTypeT>(value);
  }
  template <typename ErrorTypeT = Aws::String>
  SpanAttributes& WithErrorType(ErrorTypeT&& value) {
    SetErrorType(std::forward<ErrorTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Amazon Connect agent ID</p>
   */
  inline const Aws::String& GetAgentId() const { return m_agentId; }
  inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
  template <typename AgentIdT = Aws::String>
  void SetAgentId(AgentIdT&& value) {
    m_agentIdHasBeenSet = true;
    m_agentId = std::forward<AgentIdT>(value);
  }
  template <typename AgentIdT = Aws::String>
  SpanAttributes& WithAgentId(AgentIdT&& value) {
    SetAgentId(std::forward<AgentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Amazon Connect instance ARN</p>
   */
  inline const Aws::String& GetInstanceArn() const { return m_instanceArn; }
  inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
  template <typename InstanceArnT = Aws::String>
  void SetInstanceArn(InstanceArnT&& value) {
    m_instanceArnHasBeenSet = true;
    m_instanceArn = std::forward<InstanceArnT>(value);
  }
  template <typename InstanceArnT = Aws::String>
  SpanAttributes& WithInstanceArn(InstanceArnT&& value) {
    SetInstanceArn(std::forward<InstanceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Amazon Connect contact identifier</p>
   */
  inline const Aws::String& GetContactId() const { return m_contactId; }
  inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }
  template <typename ContactIdT = Aws::String>
  void SetContactId(ContactIdT&& value) {
    m_contactIdHasBeenSet = true;
    m_contactId = std::forward<ContactIdT>(value);
  }
  template <typename ContactIdT = Aws::String>
  SpanAttributes& WithContactId(ContactIdT&& value) {
    SetContactId(std::forward<ContactIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Amazon Connect contact identifier</p>
   */
  inline const Aws::String& GetInitialContactId() const { return m_initialContactId; }
  inline bool InitialContactIdHasBeenSet() const { return m_initialContactIdHasBeenSet; }
  template <typename InitialContactIdT = Aws::String>
  void SetInitialContactId(InitialContactIdT&& value) {
    m_initialContactIdHasBeenSet = true;
    m_initialContactId = std::forward<InitialContactIdT>(value);
  }
  template <typename InitialContactIdT = Aws::String>
  SpanAttributes& WithInitialContactId(InitialContactIdT&& value) {
    SetInitialContactId(std::forward<InitialContactIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Session name</p>
   */
  inline const Aws::String& GetSessionName() const { return m_sessionName; }
  inline bool SessionNameHasBeenSet() const { return m_sessionNameHasBeenSet; }
  template <typename SessionNameT = Aws::String>
  void SetSessionName(SessionNameT&& value) {
    m_sessionNameHasBeenSet = true;
    m_sessionName = std::forward<SessionNameT>(value);
  }
  template <typename SessionNameT = Aws::String>
  SpanAttributes& WithSessionName(SessionNameT&& value) {
    SetSessionName(std::forward<SessionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>AI agent ARN</p>
   */
  inline const Aws::String& GetAiAgentArn() const { return m_aiAgentArn; }
  inline bool AiAgentArnHasBeenSet() const { return m_aiAgentArnHasBeenSet; }
  template <typename AiAgentArnT = Aws::String>
  void SetAiAgentArn(AiAgentArnT&& value) {
    m_aiAgentArnHasBeenSet = true;
    m_aiAgentArn = std::forward<AiAgentArnT>(value);
  }
  template <typename AiAgentArnT = Aws::String>
  SpanAttributes& WithAiAgentArn(AiAgentArnT&& value) {
    SetAiAgentArn(std::forward<AiAgentArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>AI agent type</p>
   */
  inline AIAgentType GetAiAgentType() const { return m_aiAgentType; }
  inline bool AiAgentTypeHasBeenSet() const { return m_aiAgentTypeHasBeenSet; }
  inline void SetAiAgentType(AIAgentType value) {
    m_aiAgentTypeHasBeenSet = true;
    m_aiAgentType = value;
  }
  inline SpanAttributes& WithAiAgentType(AIAgentType value) {
    SetAiAgentType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>AI agent name</p>
   */
  inline const Aws::String& GetAiAgentName() const { return m_aiAgentName; }
  inline bool AiAgentNameHasBeenSet() const { return m_aiAgentNameHasBeenSet; }
  template <typename AiAgentNameT = Aws::String>
  void SetAiAgentName(AiAgentNameT&& value) {
    m_aiAgentNameHasBeenSet = true;
    m_aiAgentName = std::forward<AiAgentNameT>(value);
  }
  template <typename AiAgentNameT = Aws::String>
  SpanAttributes& WithAiAgentName(AiAgentNameT&& value) {
    SetAiAgentName(std::forward<AiAgentNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>AI agent identifier</p>
   */
  inline const Aws::String& GetAiAgentId() const { return m_aiAgentId; }
  inline bool AiAgentIdHasBeenSet() const { return m_aiAgentIdHasBeenSet; }
  template <typename AiAgentIdT = Aws::String>
  void SetAiAgentId(AiAgentIdT&& value) {
    m_aiAgentIdHasBeenSet = true;
    m_aiAgentId = std::forward<AiAgentIdT>(value);
  }
  template <typename AiAgentIdT = Aws::String>
  SpanAttributes& WithAiAgentId(AiAgentIdT&& value) {
    SetAiAgentId(std::forward<AiAgentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>AI agent version number</p>
   */
  inline int GetAiAgentVersion() const { return m_aiAgentVersion; }
  inline bool AiAgentVersionHasBeenSet() const { return m_aiAgentVersionHasBeenSet; }
  inline void SetAiAgentVersion(int value) {
    m_aiAgentVersionHasBeenSet = true;
    m_aiAgentVersion = value;
  }
  inline SpanAttributes& WithAiAgentVersion(int value) {
    SetAiAgentVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Entity that invoked the AI agent</p>
   */
  inline const Aws::String& GetAiAgentInvoker() const { return m_aiAgentInvoker; }
  inline bool AiAgentInvokerHasBeenSet() const { return m_aiAgentInvokerHasBeenSet; }
  template <typename AiAgentInvokerT = Aws::String>
  void SetAiAgentInvoker(AiAgentInvokerT&& value) {
    m_aiAgentInvokerHasBeenSet = true;
    m_aiAgentInvoker = std::forward<AiAgentInvokerT>(value);
  }
  template <typename AiAgentInvokerT = Aws::String>
  SpanAttributes& WithAiAgentInvoker(AiAgentInvokerT&& value) {
    SetAiAgentInvoker(std::forward<AiAgentInvokerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>AI agent orchestrator use case</p>
   */
  inline const Aws::String& GetAiAgentOrchestratorUseCase() const { return m_aiAgentOrchestratorUseCase; }
  inline bool AiAgentOrchestratorUseCaseHasBeenSet() const { return m_aiAgentOrchestratorUseCaseHasBeenSet; }
  template <typename AiAgentOrchestratorUseCaseT = Aws::String>
  void SetAiAgentOrchestratorUseCase(AiAgentOrchestratorUseCaseT&& value) {
    m_aiAgentOrchestratorUseCaseHasBeenSet = true;
    m_aiAgentOrchestratorUseCase = std::forward<AiAgentOrchestratorUseCaseT>(value);
  }
  template <typename AiAgentOrchestratorUseCaseT = Aws::String>
  SpanAttributes& WithAiAgentOrchestratorUseCase(AiAgentOrchestratorUseCaseT&& value) {
    SetAiAgentOrchestratorUseCase(std::forward<AiAgentOrchestratorUseCaseT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>LLM model ID for request (e.g., anthropic.claude-3-sonnet)</p>
   */
  inline const Aws::String& GetRequestModel() const { return m_requestModel; }
  inline bool RequestModelHasBeenSet() const { return m_requestModelHasBeenSet; }
  template <typename RequestModelT = Aws::String>
  void SetRequestModel(RequestModelT&& value) {
    m_requestModelHasBeenSet = true;
    m_requestModel = std::forward<RequestModelT>(value);
  }
  template <typename RequestModelT = Aws::String>
  SpanAttributes& WithRequestModel(RequestModelT&& value) {
    SetRequestModel(std::forward<RequestModelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Maximum tokens configured for generation</p>
   */
  inline int GetRequestMaxTokens() const { return m_requestMaxTokens; }
  inline bool RequestMaxTokensHasBeenSet() const { return m_requestMaxTokensHasBeenSet; }
  inline void SetRequestMaxTokens(int value) {
    m_requestMaxTokensHasBeenSet = true;
    m_requestMaxTokens = value;
  }
  inline SpanAttributes& WithRequestMaxTokens(int value) {
    SetRequestMaxTokens(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Sampling temperature for generation</p>
   */
  inline double GetTemperature() const { return m_temperature; }
  inline bool TemperatureHasBeenSet() const { return m_temperatureHasBeenSet; }
  inline void SetTemperature(double value) {
    m_temperatureHasBeenSet = true;
    m_temperature = value;
  }
  inline SpanAttributes& WithTemperature(double value) {
    SetTemperature(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Top-p sampling parameter for generation</p>
   */
  inline double GetTopP() const { return m_topP; }
  inline bool TopPHasBeenSet() const { return m_topPHasBeenSet; }
  inline void SetTopP(double value) {
    m_topPHasBeenSet = true;
    m_topP = value;
  }
  inline SpanAttributes& WithTopP(double value) {
    SetTopP(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Actual model used for response (usually matches requestModel)</p>
   */
  inline const Aws::String& GetResponseModel() const { return m_responseModel; }
  inline bool ResponseModelHasBeenSet() const { return m_responseModelHasBeenSet; }
  template <typename ResponseModelT = Aws::String>
  void SetResponseModel(ResponseModelT&& value) {
    m_responseModelHasBeenSet = true;
    m_responseModel = std::forward<ResponseModelT>(value);
  }
  template <typename ResponseModelT = Aws::String>
  SpanAttributes& WithResponseModel(ResponseModelT&& value) {
    SetResponseModel(std::forward<ResponseModelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Generation termination reasons (e.g., stop, max_tokens)</p>
   */
  inline const Aws::Vector<Aws::String>& GetResponseFinishReasons() const { return m_responseFinishReasons; }
  inline bool ResponseFinishReasonsHasBeenSet() const { return m_responseFinishReasonsHasBeenSet; }
  template <typename ResponseFinishReasonsT = Aws::Vector<Aws::String>>
  void SetResponseFinishReasons(ResponseFinishReasonsT&& value) {
    m_responseFinishReasonsHasBeenSet = true;
    m_responseFinishReasons = std::forward<ResponseFinishReasonsT>(value);
  }
  template <typename ResponseFinishReasonsT = Aws::Vector<Aws::String>>
  SpanAttributes& WithResponseFinishReasons(ResponseFinishReasonsT&& value) {
    SetResponseFinishReasons(std::forward<ResponseFinishReasonsT>(value));
    return *this;
  }
  template <typename ResponseFinishReasonsT = Aws::String>
  SpanAttributes& AddResponseFinishReasons(ResponseFinishReasonsT&& value) {
    m_responseFinishReasonsHasBeenSet = true;
    m_responseFinishReasons.emplace_back(std::forward<ResponseFinishReasonsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Number of input tokens in prompt</p>
   */
  inline int GetUsageInputTokens() const { return m_usageInputTokens; }
  inline bool UsageInputTokensHasBeenSet() const { return m_usageInputTokensHasBeenSet; }
  inline void SetUsageInputTokens(int value) {
    m_usageInputTokensHasBeenSet = true;
    m_usageInputTokens = value;
  }
  inline SpanAttributes& WithUsageInputTokens(int value) {
    SetUsageInputTokens(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Number of output tokens in response</p>
   */
  inline int GetUsageOutputTokens() const { return m_usageOutputTokens; }
  inline bool UsageOutputTokensHasBeenSet() const { return m_usageOutputTokensHasBeenSet; }
  inline void SetUsageOutputTokens(int value) {
    m_usageOutputTokensHasBeenSet = true;
    m_usageOutputTokens = value;
  }
  inline SpanAttributes& WithUsageOutputTokens(int value) {
    SetUsageOutputTokens(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Total tokens consumed (input + output)</p>
   */
  inline int GetUsageTotalTokens() const { return m_usageTotalTokens; }
  inline bool UsageTotalTokensHasBeenSet() const { return m_usageTotalTokensHasBeenSet; }
  inline void SetUsageTotalTokens(int value) {
    m_usageTotalTokensHasBeenSet = true;
    m_usageTotalTokens = value;
  }
  inline SpanAttributes& WithUsageTotalTokens(int value) {
    SetUsageTotalTokens(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Number of input tokens that were retrieved from cache</p>
   */
  inline int GetCacheReadInputTokens() const { return m_cacheReadInputTokens; }
  inline bool CacheReadInputTokensHasBeenSet() const { return m_cacheReadInputTokensHasBeenSet; }
  inline void SetCacheReadInputTokens(int value) {
    m_cacheReadInputTokensHasBeenSet = true;
    m_cacheReadInputTokens = value;
  }
  inline SpanAttributes& WithCacheReadInputTokens(int value) {
    SetCacheReadInputTokens(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Number of input tokens that were written to cache in this request</p>
   */
  inline int GetCacheWriteInputTokens() const { return m_cacheWriteInputTokens; }
  inline bool CacheWriteInputTokensHasBeenSet() const { return m_cacheWriteInputTokensHasBeenSet; }
  inline void SetCacheWriteInputTokens(int value) {
    m_cacheWriteInputTokensHasBeenSet = true;
    m_cacheWriteInputTokens = value;
  }
  inline SpanAttributes& WithCacheWriteInputTokens(int value) {
    SetCacheWriteInputTokens(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Input message collection sent to LLM</p>
   */
  inline const Aws::Vector<SpanMessage>& GetInputMessages() const { return m_inputMessages; }
  inline bool InputMessagesHasBeenSet() const { return m_inputMessagesHasBeenSet; }
  template <typename InputMessagesT = Aws::Vector<SpanMessage>>
  void SetInputMessages(InputMessagesT&& value) {
    m_inputMessagesHasBeenSet = true;
    m_inputMessages = std::forward<InputMessagesT>(value);
  }
  template <typename InputMessagesT = Aws::Vector<SpanMessage>>
  SpanAttributes& WithInputMessages(InputMessagesT&& value) {
    SetInputMessages(std::forward<InputMessagesT>(value));
    return *this;
  }
  template <typename InputMessagesT = SpanMessage>
  SpanAttributes& AddInputMessages(InputMessagesT&& value) {
    m_inputMessagesHasBeenSet = true;
    m_inputMessages.emplace_back(std::forward<InputMessagesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Output message collection received from LLM</p>
   */
  inline const Aws::Vector<SpanMessage>& GetOutputMessages() const { return m_outputMessages; }
  inline bool OutputMessagesHasBeenSet() const { return m_outputMessagesHasBeenSet; }
  template <typename OutputMessagesT = Aws::Vector<SpanMessage>>
  void SetOutputMessages(OutputMessagesT&& value) {
    m_outputMessagesHasBeenSet = true;
    m_outputMessages = std::forward<OutputMessagesT>(value);
  }
  template <typename OutputMessagesT = Aws::Vector<SpanMessage>>
  SpanAttributes& WithOutputMessages(OutputMessagesT&& value) {
    SetOutputMessages(std::forward<OutputMessagesT>(value));
    return *this;
  }
  template <typename OutputMessagesT = SpanMessage>
  SpanAttributes& AddOutputMessages(OutputMessagesT&& value) {
    m_outputMessagesHasBeenSet = true;
    m_outputMessages.emplace_back(std::forward<OutputMessagesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>System prompt instructions</p>
   */
  inline const Aws::Vector<SpanMessageValue>& GetSystemInstructions() const { return m_systemInstructions; }
  inline bool SystemInstructionsHasBeenSet() const { return m_systemInstructionsHasBeenSet; }
  template <typename SystemInstructionsT = Aws::Vector<SpanMessageValue>>
  void SetSystemInstructions(SystemInstructionsT&& value) {
    m_systemInstructionsHasBeenSet = true;
    m_systemInstructions = std::forward<SystemInstructionsT>(value);
  }
  template <typename SystemInstructionsT = Aws::Vector<SpanMessageValue>>
  SpanAttributes& WithSystemInstructions(SystemInstructionsT&& value) {
    SetSystemInstructions(std::forward<SystemInstructionsT>(value));
    return *this;
  }
  template <typename SystemInstructionsT = SpanMessageValue>
  SpanAttributes& AddSystemInstructions(SystemInstructionsT&& value) {
    m_systemInstructionsHasBeenSet = true;
    m_systemInstructions.emplace_back(std::forward<SystemInstructionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>AI prompt ARN</p>
   */
  inline const Aws::String& GetPromptArn() const { return m_promptArn; }
  inline bool PromptArnHasBeenSet() const { return m_promptArnHasBeenSet; }
  template <typename PromptArnT = Aws::String>
  void SetPromptArn(PromptArnT&& value) {
    m_promptArnHasBeenSet = true;
    m_promptArn = std::forward<PromptArnT>(value);
  }
  template <typename PromptArnT = Aws::String>
  SpanAttributes& WithPromptArn(PromptArnT&& value) {
    SetPromptArn(std::forward<PromptArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>AI prompt identifier</p>
   */
  inline const Aws::String& GetPromptId() const { return m_promptId; }
  inline bool PromptIdHasBeenSet() const { return m_promptIdHasBeenSet; }
  template <typename PromptIdT = Aws::String>
  void SetPromptId(PromptIdT&& value) {
    m_promptIdHasBeenSet = true;
    m_promptId = std::forward<PromptIdT>(value);
  }
  template <typename PromptIdT = Aws::String>
  SpanAttributes& WithPromptId(PromptIdT&& value) {
    SetPromptId(std::forward<PromptIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>AI prompt type</p>
   */
  inline AIPromptType GetPromptType() const { return m_promptType; }
  inline bool PromptTypeHasBeenSet() const { return m_promptTypeHasBeenSet; }
  inline void SetPromptType(AIPromptType value) {
    m_promptTypeHasBeenSet = true;
    m_promptType = value;
  }
  inline SpanAttributes& WithPromptType(AIPromptType value) {
    SetPromptType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>AI prompt name</p>
   */
  inline const Aws::String& GetPromptName() const { return m_promptName; }
  inline bool PromptNameHasBeenSet() const { return m_promptNameHasBeenSet; }
  template <typename PromptNameT = Aws::String>
  void SetPromptName(PromptNameT&& value) {
    m_promptNameHasBeenSet = true;
    m_promptName = std::forward<PromptNameT>(value);
  }
  template <typename PromptNameT = Aws::String>
  SpanAttributes& WithPromptName(PromptNameT&& value) {
    SetPromptName(std::forward<PromptNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>AI prompt version number</p>
   */
  inline int GetPromptVersion() const { return m_promptVersion; }
  inline bool PromptVersionHasBeenSet() const { return m_promptVersionHasBeenSet; }
  inline void SetPromptVersion(int value) {
    m_promptVersionHasBeenSet = true;
    m_promptVersion = value;
  }
  inline SpanAttributes& WithPromptVersion(int value) {
    SetPromptVersion(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_operationName;

  Aws::String m_providerName;

  Aws::String m_errorType;

  Aws::String m_agentId;

  Aws::String m_instanceArn;

  Aws::String m_contactId;

  Aws::String m_initialContactId;

  Aws::String m_sessionName;

  Aws::String m_aiAgentArn;

  AIAgentType m_aiAgentType{AIAgentType::NOT_SET};

  Aws::String m_aiAgentName;

  Aws::String m_aiAgentId;

  int m_aiAgentVersion{0};

  Aws::String m_aiAgentInvoker;

  Aws::String m_aiAgentOrchestratorUseCase;

  Aws::String m_requestModel;

  int m_requestMaxTokens{0};

  double m_temperature{0.0};

  double m_topP{0.0};

  Aws::String m_responseModel;

  Aws::Vector<Aws::String> m_responseFinishReasons;

  int m_usageInputTokens{0};

  int m_usageOutputTokens{0};

  int m_usageTotalTokens{0};

  int m_cacheReadInputTokens{0};

  int m_cacheWriteInputTokens{0};

  Aws::Vector<SpanMessage> m_inputMessages;

  Aws::Vector<SpanMessage> m_outputMessages;

  Aws::Vector<SpanMessageValue> m_systemInstructions;

  Aws::String m_promptArn;

  Aws::String m_promptId;

  AIPromptType m_promptType{AIPromptType::NOT_SET};

  Aws::String m_promptName;

  int m_promptVersion{0};
  bool m_operationNameHasBeenSet = false;
  bool m_providerNameHasBeenSet = false;
  bool m_errorTypeHasBeenSet = false;
  bool m_agentIdHasBeenSet = false;
  bool m_instanceArnHasBeenSet = false;
  bool m_contactIdHasBeenSet = false;
  bool m_initialContactIdHasBeenSet = false;
  bool m_sessionNameHasBeenSet = false;
  bool m_aiAgentArnHasBeenSet = false;
  bool m_aiAgentTypeHasBeenSet = false;
  bool m_aiAgentNameHasBeenSet = false;
  bool m_aiAgentIdHasBeenSet = false;
  bool m_aiAgentVersionHasBeenSet = false;
  bool m_aiAgentInvokerHasBeenSet = false;
  bool m_aiAgentOrchestratorUseCaseHasBeenSet = false;
  bool m_requestModelHasBeenSet = false;
  bool m_requestMaxTokensHasBeenSet = false;
  bool m_temperatureHasBeenSet = false;
  bool m_topPHasBeenSet = false;
  bool m_responseModelHasBeenSet = false;
  bool m_responseFinishReasonsHasBeenSet = false;
  bool m_usageInputTokensHasBeenSet = false;
  bool m_usageOutputTokensHasBeenSet = false;
  bool m_usageTotalTokensHasBeenSet = false;
  bool m_cacheReadInputTokensHasBeenSet = false;
  bool m_cacheWriteInputTokensHasBeenSet = false;
  bool m_inputMessagesHasBeenSet = false;
  bool m_outputMessagesHasBeenSet = false;
  bool m_systemInstructionsHasBeenSet = false;
  bool m_promptArnHasBeenSet = false;
  bool m_promptIdHasBeenSet = false;
  bool m_promptTypeHasBeenSet = false;
  bool m_promptNameHasBeenSet = false;
  bool m_promptVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
