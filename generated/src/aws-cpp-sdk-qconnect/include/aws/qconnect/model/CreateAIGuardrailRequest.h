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
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class CreateAIGuardrailRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API CreateAIGuardrailRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAIGuardrail"; }

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
    CreateAIGuardrailRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
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
    CreateAIGuardrailRequest& WithAssistantId(AssistantIdT&& value) { SetAssistantId(std::forward<AssistantIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the AI Guardrail.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateAIGuardrailRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    CreateAIGuardrailRequest& WithBlockedInputMessaging(BlockedInputMessagingT&& value) { SetBlockedInputMessaging(std::forward<BlockedInputMessagingT>(value)); return *this;}
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
    CreateAIGuardrailRequest& WithBlockedOutputsMessaging(BlockedOutputsMessagingT&& value) { SetBlockedOutputsMessaging(std::forward<BlockedOutputsMessagingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility status of the AI Guardrail.</p>
     */
    inline VisibilityStatus GetVisibilityStatus() const { return m_visibilityStatus; }
    inline bool VisibilityStatusHasBeenSet() const { return m_visibilityStatusHasBeenSet; }
    inline void SetVisibilityStatus(VisibilityStatus value) { m_visibilityStatusHasBeenSet = true; m_visibilityStatus = value; }
    inline CreateAIGuardrailRequest& WithVisibilityStatus(VisibilityStatus value) { SetVisibilityStatus(value); return *this;}
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
    CreateAIGuardrailRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    CreateAIGuardrailRequest& WithTopicPolicyConfig(TopicPolicyConfigT&& value) { SetTopicPolicyConfig(std::forward<TopicPolicyConfigT>(value)); return *this;}
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
    CreateAIGuardrailRequest& WithContentPolicyConfig(ContentPolicyConfigT&& value) { SetContentPolicyConfig(std::forward<ContentPolicyConfigT>(value)); return *this;}
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
    CreateAIGuardrailRequest& WithWordPolicyConfig(WordPolicyConfigT&& value) { SetWordPolicyConfig(std::forward<WordPolicyConfigT>(value)); return *this;}
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
    CreateAIGuardrailRequest& WithSensitiveInformationPolicyConfig(SensitiveInformationPolicyConfigT&& value) { SetSensitiveInformationPolicyConfig(std::forward<SensitiveInformationPolicyConfigT>(value)); return *this;}
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
    CreateAIGuardrailRequest& WithContextualGroundingPolicyConfig(ContextualGroundingPolicyConfigT&& value) { SetContextualGroundingPolicyConfig(std::forward<ContextualGroundingPolicyConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateAIGuardrailRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateAIGuardrailRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_blockedInputMessaging;
    bool m_blockedInputMessagingHasBeenSet = false;

    Aws::String m_blockedOutputsMessaging;
    bool m_blockedOutputsMessagingHasBeenSet = false;

    VisibilityStatus m_visibilityStatus{VisibilityStatus::NOT_SET};
    bool m_visibilityStatusHasBeenSet = false;

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

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
