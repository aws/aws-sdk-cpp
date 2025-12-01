/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/ConversationContext.h>
#include <aws/qconnect/model/MessageConfiguration.h>
#include <aws/qconnect/model/MessageInput.h>
#include <aws/qconnect/model/MessageType.h>

#include <utility>

namespace Aws {
namespace QConnect {
namespace Model {

/**
 */
class SendMessageRequest : public QConnectRequest {
 public:
  AWS_QCONNECT_API SendMessageRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SendMessage"; }

  AWS_QCONNECT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the Amazon Q in Connect assistant.</p>
   */
  inline const Aws::String& GetAssistantId() const { return m_assistantId; }
  inline bool AssistantIdHasBeenSet() const { return m_assistantIdHasBeenSet; }
  template <typename AssistantIdT = Aws::String>
  void SetAssistantId(AssistantIdT&& value) {
    m_assistantIdHasBeenSet = true;
    m_assistantId = std::forward<AssistantIdT>(value);
  }
  template <typename AssistantIdT = Aws::String>
  SendMessageRequest& WithAssistantId(AssistantIdT&& value) {
    SetAssistantId(std::forward<AssistantIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the Amazon Q in Connect session.</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  SendMessageRequest& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The message type.</p>
   */
  inline MessageType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(MessageType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline SendMessageRequest& WithType(MessageType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The message data to submit to the Amazon Q in Connect session.</p>
   */
  inline const MessageInput& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = MessageInput>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = MessageInput>
  SendMessageRequest& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the AI Agent to use for processing the message.</p>
   */
  inline const Aws::String& GetAiAgentId() const { return m_aiAgentId; }
  inline bool AiAgentIdHasBeenSet() const { return m_aiAgentIdHasBeenSet; }
  template <typename AiAgentIdT = Aws::String>
  void SetAiAgentId(AiAgentIdT&& value) {
    m_aiAgentIdHasBeenSet = true;
    m_aiAgentId = std::forward<AiAgentIdT>(value);
  }
  template <typename AiAgentIdT = Aws::String>
  SendMessageRequest& WithAiAgentId(AiAgentIdT&& value) {
    SetAiAgentId(std::forward<AiAgentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The conversation context before the Amazon Q in Connect session.</p>
   */
  inline const ConversationContext& GetConversationContext() const { return m_conversationContext; }
  inline bool ConversationContextHasBeenSet() const { return m_conversationContextHasBeenSet; }
  template <typename ConversationContextT = ConversationContext>
  void SetConversationContext(ConversationContextT&& value) {
    m_conversationContextHasBeenSet = true;
    m_conversationContext = std::forward<ConversationContextT>(value);
  }
  template <typename ConversationContextT = ConversationContext>
  SendMessageRequest& WithConversationContext(ConversationContextT&& value) {
    SetConversationContext(std::forward<ConversationContextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration of the <a
   * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_amazon-q-connect_SendMessage.html">SendMessage</a>
   * request.</p>
   */
  inline const MessageConfiguration& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = MessageConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = MessageConfiguration>
  SendMessageRequest& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. If not provided, the AWS SDK populates this
   * field.For more information about idempotency, see Making retries safe with
   * idempotent APIs.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  SendMessageRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The orchestrator use case for message processing.</p>
   */
  inline const Aws::String& GetOrchestratorUseCase() const { return m_orchestratorUseCase; }
  inline bool OrchestratorUseCaseHasBeenSet() const { return m_orchestratorUseCaseHasBeenSet; }
  template <typename OrchestratorUseCaseT = Aws::String>
  void SetOrchestratorUseCase(OrchestratorUseCaseT&& value) {
    m_orchestratorUseCaseHasBeenSet = true;
    m_orchestratorUseCase = std::forward<OrchestratorUseCaseT>(value);
  }
  template <typename OrchestratorUseCaseT = Aws::String>
  SendMessageRequest& WithOrchestratorUseCase(OrchestratorUseCaseT&& value) {
    SetOrchestratorUseCase(std::forward<OrchestratorUseCaseT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional metadata for the message.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const { return m_metadata; }
  inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::String>>
  void SetMetadata(MetadataT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata = std::forward<MetadataT>(value);
  }
  template <typename MetadataT = Aws::Map<Aws::String, Aws::String>>
  SendMessageRequest& WithMetadata(MetadataT&& value) {
    SetMetadata(std::forward<MetadataT>(value));
    return *this;
  }
  template <typename MetadataKeyT = Aws::String, typename MetadataValueT = Aws::String>
  SendMessageRequest& AddMetadata(MetadataKeyT&& key, MetadataValueT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata.emplace(std::forward<MetadataKeyT>(key), std::forward<MetadataValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_assistantId;
  bool m_assistantIdHasBeenSet = false;

  Aws::String m_sessionId;
  bool m_sessionIdHasBeenSet = false;

  MessageType m_type{MessageType::NOT_SET};
  bool m_typeHasBeenSet = false;

  MessageInput m_message;
  bool m_messageHasBeenSet = false;

  Aws::String m_aiAgentId;
  bool m_aiAgentIdHasBeenSet = false;

  ConversationContext m_conversationContext;
  bool m_conversationContextHasBeenSet = false;

  MessageConfiguration m_configuration;
  bool m_configurationHasBeenSet = false;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_clientTokenHasBeenSet = true;

  Aws::String m_orchestratorUseCase;
  bool m_orchestratorUseCaseHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_metadata;
  bool m_metadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
