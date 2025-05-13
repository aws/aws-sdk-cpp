/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/VisibilityStatus.h>
#include <aws/qconnect/model/AIGuardrailTopicPolicyConfig.h>
#include <aws/qconnect/model/AIGuardrailContentPolicyConfig.h>
#include <aws/qconnect/model/AIGuardrailWordPolicyConfig.h>
#include <aws/qconnect/model/AIGuardrailSensitiveInformationPolicyConfig.h>
#include <aws/qconnect/model/AIGuardrailContextualGroundingPolicyConfig.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace QConnect
{
namespace Model
{

  /**
   */
  class UpdateAIGuardrailRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API UpdateAIGuardrailRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAIGuardrail"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="http://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>..</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    UpdateAIGuardrailRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Q in Connect assistant. Can be either the ID or
     * the ARN. URLs cannot contain the ARN.</p>
     */
    inline const Aws::String& GetAssistantId() const { return m_assistantId; }
    inline bool AssistantIdHasBeenSet() const { return m_assistantIdHasBeenSet; }
    template<typename AssistantIdT = Aws::String>
    void SetAssistantId(AssistantIdT&& value) { m_assistantIdHasBeenSet = true; m_assistantId = std::forward<AssistantIdT>(value); }
    template<typename AssistantIdT = Aws::String>
    UpdateAIGuardrailRequest& WithAssistantId(AssistantIdT&& value) { SetAssistantId(std::forward<AssistantIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Q in Connect AI Guardrail.</p>
     */
    inline const Aws::String& GetAiGuardrailId() const { return m_aiGuardrailId; }
    inline bool AiGuardrailIdHasBeenSet() const { return m_aiGuardrailIdHasBeenSet; }
    template<typename AiGuardrailIdT = Aws::String>
    void SetAiGuardrailId(AiGuardrailIdT&& value) { m_aiGuardrailIdHasBeenSet = true; m_aiGuardrailId = std::forward<AiGuardrailIdT>(value); }
    template<typename AiGuardrailIdT = Aws::String>
    UpdateAIGuardrailRequest& WithAiGuardrailId(AiGuardrailIdT&& value) { SetAiGuardrailId(std::forward<AiGuardrailIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility status of the Amazon Q in Connect AI Guardrail.</p>
     */
    inline VisibilityStatus GetVisibilityStatus() const { return m_visibilityStatus; }
    inline bool VisibilityStatusHasBeenSet() const { return m_visibilityStatusHasBeenSet; }
    inline void SetVisibilityStatus(VisibilityStatus value) { m_visibilityStatusHasBeenSet = true; m_visibilityStatus = value; }
    inline UpdateAIGuardrailRequest& WithVisibilityStatus(VisibilityStatus value) { SetVisibilityStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message to return when the AI Guardrail blocks a prompt.</p>
     */
    inline const Aws::String& GetBlockedInputMessaging() const { return m_blockedInputMessaging; }
    inline bool BlockedInputMessagingHasBeenSet() const { return m_blockedInputMessagingHasBeenSet; }
    template<typename BlockedInputMessagingT = Aws::String>
    void SetBlockedInputMessaging(BlockedInputMessagingT&& value) { m_blockedInputMessagingHasBeenSet = true; m_blockedInputMessaging = std::forward<BlockedInputMessagingT>(value); }
    template<typename BlockedInputMessagingT = Aws::String>
    UpdateAIGuardrailRequest& WithBlockedInputMessaging(BlockedInputMessagingT&& value) { SetBlockedInputMessaging(std::forward<BlockedInputMessagingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message to return when the AI Guardrail blocks a model response.</p>
     */
    inline const Aws::String& GetBlockedOutputsMessaging() const { return m_blockedOutputsMessaging; }
    inline bool BlockedOutputsMessagingHasBeenSet() const { return m_blockedOutputsMessagingHasBeenSet; }
    template<typename BlockedOutputsMessagingT = Aws::String>
    void SetBlockedOutputsMessaging(BlockedOutputsMessagingT&& value) { m_blockedOutputsMessagingHasBeenSet = true; m_blockedOutputsMessaging = std::forward<BlockedOutputsMessagingT>(value); }
    template<typename BlockedOutputsMessagingT = Aws::String>
    UpdateAIGuardrailRequest& WithBlockedOutputsMessaging(BlockedOutputsMessagingT&& value) { SetBlockedOutputsMessaging(std::forward<BlockedOutputsMessagingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the AI Guardrail.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateAIGuardrailRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The topic policies to configure for the AI Guardrail.</p>
     */
    inline const AIGuardrailTopicPolicyConfig& GetTopicPolicyConfig() const { return m_topicPolicyConfig; }
    inline bool TopicPolicyConfigHasBeenSet() const { return m_topicPolicyConfigHasBeenSet; }
    template<typename TopicPolicyConfigT = AIGuardrailTopicPolicyConfig>
    void SetTopicPolicyConfig(TopicPolicyConfigT&& value) { m_topicPolicyConfigHasBeenSet = true; m_topicPolicyConfig = std::forward<TopicPolicyConfigT>(value); }
    template<typename TopicPolicyConfigT = AIGuardrailTopicPolicyConfig>
    UpdateAIGuardrailRequest& WithTopicPolicyConfig(TopicPolicyConfigT&& value) { SetTopicPolicyConfig(std::forward<TopicPolicyConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content filter policies to configure for the AI Guardrail.</p>
     */
    inline const AIGuardrailContentPolicyConfig& GetContentPolicyConfig() const { return m_contentPolicyConfig; }
    inline bool ContentPolicyConfigHasBeenSet() const { return m_contentPolicyConfigHasBeenSet; }
    template<typename ContentPolicyConfigT = AIGuardrailContentPolicyConfig>
    void SetContentPolicyConfig(ContentPolicyConfigT&& value) { m_contentPolicyConfigHasBeenSet = true; m_contentPolicyConfig = std::forward<ContentPolicyConfigT>(value); }
    template<typename ContentPolicyConfigT = AIGuardrailContentPolicyConfig>
    UpdateAIGuardrailRequest& WithContentPolicyConfig(ContentPolicyConfigT&& value) { SetContentPolicyConfig(std::forward<ContentPolicyConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The word policy you configure for the AI Guardrail.</p>
     */
    inline const AIGuardrailWordPolicyConfig& GetWordPolicyConfig() const { return m_wordPolicyConfig; }
    inline bool WordPolicyConfigHasBeenSet() const { return m_wordPolicyConfigHasBeenSet; }
    template<typename WordPolicyConfigT = AIGuardrailWordPolicyConfig>
    void SetWordPolicyConfig(WordPolicyConfigT&& value) { m_wordPolicyConfigHasBeenSet = true; m_wordPolicyConfig = std::forward<WordPolicyConfigT>(value); }
    template<typename WordPolicyConfigT = AIGuardrailWordPolicyConfig>
    UpdateAIGuardrailRequest& WithWordPolicyConfig(WordPolicyConfigT&& value) { SetWordPolicyConfig(std::forward<WordPolicyConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sensitive information policy to configure for the AI Guardrail.</p>
     */
    inline const AIGuardrailSensitiveInformationPolicyConfig& GetSensitiveInformationPolicyConfig() const { return m_sensitiveInformationPolicyConfig; }
    inline bool SensitiveInformationPolicyConfigHasBeenSet() const { return m_sensitiveInformationPolicyConfigHasBeenSet; }
    template<typename SensitiveInformationPolicyConfigT = AIGuardrailSensitiveInformationPolicyConfig>
    void SetSensitiveInformationPolicyConfig(SensitiveInformationPolicyConfigT&& value) { m_sensitiveInformationPolicyConfigHasBeenSet = true; m_sensitiveInformationPolicyConfig = std::forward<SensitiveInformationPolicyConfigT>(value); }
    template<typename SensitiveInformationPolicyConfigT = AIGuardrailSensitiveInformationPolicyConfig>
    UpdateAIGuardrailRequest& WithSensitiveInformationPolicyConfig(SensitiveInformationPolicyConfigT&& value) { SetSensitiveInformationPolicyConfig(std::forward<SensitiveInformationPolicyConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contextual grounding policy configuration used to create an AI
     * Guardrail.</p>
     */
    inline const AIGuardrailContextualGroundingPolicyConfig& GetContextualGroundingPolicyConfig() const { return m_contextualGroundingPolicyConfig; }
    inline bool ContextualGroundingPolicyConfigHasBeenSet() const { return m_contextualGroundingPolicyConfigHasBeenSet; }
    template<typename ContextualGroundingPolicyConfigT = AIGuardrailContextualGroundingPolicyConfig>
    void SetContextualGroundingPolicyConfig(ContextualGroundingPolicyConfigT&& value) { m_contextualGroundingPolicyConfigHasBeenSet = true; m_contextualGroundingPolicyConfig = std::forward<ContextualGroundingPolicyConfigT>(value); }
    template<typename ContextualGroundingPolicyConfigT = AIGuardrailContextualGroundingPolicyConfig>
    UpdateAIGuardrailRequest& WithContextualGroundingPolicyConfig(ContextualGroundingPolicyConfigT&& value) { SetContextualGroundingPolicyConfig(std::forward<ContextualGroundingPolicyConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;

    Aws::String m_aiGuardrailId;
    bool m_aiGuardrailIdHasBeenSet = false;

    VisibilityStatus m_visibilityStatus{VisibilityStatus::NOT_SET};
    bool m_visibilityStatusHasBeenSet = false;

    Aws::String m_blockedInputMessaging;
    bool m_blockedInputMessagingHasBeenSet = false;

    Aws::String m_blockedOutputsMessaging;
    bool m_blockedOutputsMessagingHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    AIGuardrailTopicPolicyConfig m_topicPolicyConfig;
    bool m_topicPolicyConfigHasBeenSet = false;

    AIGuardrailContentPolicyConfig m_contentPolicyConfig;
    bool m_contentPolicyConfigHasBeenSet = false;

    AIGuardrailWordPolicyConfig m_wordPolicyConfig;
    bool m_wordPolicyConfigHasBeenSet = false;

    AIGuardrailSensitiveInformationPolicyConfig m_sensitiveInformationPolicyConfig;
    bool m_sensitiveInformationPolicyConfigHasBeenSet = false;

    AIGuardrailContextualGroundingPolicyConfig m_contextualGroundingPolicyConfig;
    bool m_contextualGroundingPolicyConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
