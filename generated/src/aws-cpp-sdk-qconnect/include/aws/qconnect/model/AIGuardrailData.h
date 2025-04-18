/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/VisibilityStatus.h>
#include <aws/qconnect/model/AIGuardrailTopicPolicyConfig.h>
#include <aws/qconnect/model/AIGuardrailContentPolicyConfig.h>
#include <aws/qconnect/model/AIGuardrailWordPolicyConfig.h>
#include <aws/qconnect/model/AIGuardrailSensitiveInformationPolicyConfig.h>
#include <aws/qconnect/model/AIGuardrailContextualGroundingPolicyConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/qconnect/model/Status.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QConnect
{
namespace Model
{

  /**
   * <p>The data for the AI Guardrail</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/AIGuardrailData">AWS
   * API Reference</a></p>
   */
  class AIGuardrailData
  {
  public:
    AWS_QCONNECT_API AIGuardrailData() = default;
    AWS_QCONNECT_API AIGuardrailData(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API AIGuardrailData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    AIGuardrailData& WithAssistantId(AssistantIdT&& value) { SetAssistantId(std::forward<AssistantIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Q in Connect assistant.</p>
     */
    inline const Aws::String& GetAssistantArn() const { return m_assistantArn; }
    inline bool AssistantArnHasBeenSet() const { return m_assistantArnHasBeenSet; }
    template<typename AssistantArnT = Aws::String>
    void SetAssistantArn(AssistantArnT&& value) { m_assistantArnHasBeenSet = true; m_assistantArn = std::forward<AssistantArnT>(value); }
    template<typename AssistantArnT = Aws::String>
    AIGuardrailData& WithAssistantArn(AssistantArnT&& value) { SetAssistantArn(std::forward<AssistantArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the AI Guardrail.</p>
     */
    inline const Aws::String& GetAiGuardrailArn() const { return m_aiGuardrailArn; }
    inline bool AiGuardrailArnHasBeenSet() const { return m_aiGuardrailArnHasBeenSet; }
    template<typename AiGuardrailArnT = Aws::String>
    void SetAiGuardrailArn(AiGuardrailArnT&& value) { m_aiGuardrailArnHasBeenSet = true; m_aiGuardrailArn = std::forward<AiGuardrailArnT>(value); }
    template<typename AiGuardrailArnT = Aws::String>
    AIGuardrailData& WithAiGuardrailArn(AiGuardrailArnT&& value) { SetAiGuardrailArn(std::forward<AiGuardrailArnT>(value)); return *this;}
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
    AIGuardrailData& WithAiGuardrailId(AiGuardrailIdT&& value) { SetAiGuardrailId(std::forward<AiGuardrailIdT>(value)); return *this;}
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
    AIGuardrailData& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility status of the AI Guardrail.</p>
     */
    inline VisibilityStatus GetVisibilityStatus() const { return m_visibilityStatus; }
    inline bool VisibilityStatusHasBeenSet() const { return m_visibilityStatusHasBeenSet; }
    inline void SetVisibilityStatus(VisibilityStatus value) { m_visibilityStatusHasBeenSet = true; m_visibilityStatus = value; }
    inline AIGuardrailData& WithVisibilityStatus(VisibilityStatus value) { SetVisibilityStatus(value); return *this;}
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
    AIGuardrailData& WithBlockedInputMessaging(BlockedInputMessagingT&& value) { SetBlockedInputMessaging(std::forward<BlockedInputMessagingT>(value)); return *this;}
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
    AIGuardrailData& WithBlockedOutputsMessaging(BlockedOutputsMessagingT&& value) { SetBlockedOutputsMessaging(std::forward<BlockedOutputsMessagingT>(value)); return *this;}
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
    AIGuardrailData& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about topics that the AI Guardrail should identify and
     * deny.</p>
     */
    inline const AIGuardrailTopicPolicyConfig& GetTopicPolicyConfig() const { return m_topicPolicyConfig; }
    inline bool TopicPolicyConfigHasBeenSet() const { return m_topicPolicyConfigHasBeenSet; }
    template<typename TopicPolicyConfigT = AIGuardrailTopicPolicyConfig>
    void SetTopicPolicyConfig(TopicPolicyConfigT&& value) { m_topicPolicyConfigHasBeenSet = true; m_topicPolicyConfig = std::forward<TopicPolicyConfigT>(value); }
    template<typename TopicPolicyConfigT = AIGuardrailTopicPolicyConfig>
    AIGuardrailData& WithTopicPolicyConfig(TopicPolicyConfigT&& value) { SetTopicPolicyConfig(std::forward<TopicPolicyConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about how to handle harmful content.</p>
     */
    inline const AIGuardrailContentPolicyConfig& GetContentPolicyConfig() const { return m_contentPolicyConfig; }
    inline bool ContentPolicyConfigHasBeenSet() const { return m_contentPolicyConfigHasBeenSet; }
    template<typename ContentPolicyConfigT = AIGuardrailContentPolicyConfig>
    void SetContentPolicyConfig(ContentPolicyConfigT&& value) { m_contentPolicyConfigHasBeenSet = true; m_contentPolicyConfig = std::forward<ContentPolicyConfigT>(value); }
    template<typename ContentPolicyConfigT = AIGuardrailContentPolicyConfig>
    AIGuardrailData& WithContentPolicyConfig(ContentPolicyConfigT&& value) { SetContentPolicyConfig(std::forward<ContentPolicyConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the word policy to configured for the AI
     * Guardrail.</p>
     */
    inline const AIGuardrailWordPolicyConfig& GetWordPolicyConfig() const { return m_wordPolicyConfig; }
    inline bool WordPolicyConfigHasBeenSet() const { return m_wordPolicyConfigHasBeenSet; }
    template<typename WordPolicyConfigT = AIGuardrailWordPolicyConfig>
    void SetWordPolicyConfig(WordPolicyConfigT&& value) { m_wordPolicyConfigHasBeenSet = true; m_wordPolicyConfig = std::forward<WordPolicyConfigT>(value); }
    template<typename WordPolicyConfigT = AIGuardrailWordPolicyConfig>
    AIGuardrailData& WithWordPolicyConfig(WordPolicyConfigT&& value) { SetWordPolicyConfig(std::forward<WordPolicyConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about PII entities and regular expressions to configure for
     * the AI Guardrail.</p>
     */
    inline const AIGuardrailSensitiveInformationPolicyConfig& GetSensitiveInformationPolicyConfig() const { return m_sensitiveInformationPolicyConfig; }
    inline bool SensitiveInformationPolicyConfigHasBeenSet() const { return m_sensitiveInformationPolicyConfigHasBeenSet; }
    template<typename SensitiveInformationPolicyConfigT = AIGuardrailSensitiveInformationPolicyConfig>
    void SetSensitiveInformationPolicyConfig(SensitiveInformationPolicyConfigT&& value) { m_sensitiveInformationPolicyConfigHasBeenSet = true; m_sensitiveInformationPolicyConfig = std::forward<SensitiveInformationPolicyConfigT>(value); }
    template<typename SensitiveInformationPolicyConfigT = AIGuardrailSensitiveInformationPolicyConfig>
    AIGuardrailData& WithSensitiveInformationPolicyConfig(SensitiveInformationPolicyConfigT&& value) { SetSensitiveInformationPolicyConfig(std::forward<SensitiveInformationPolicyConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy configuration details for the AI Guardrail's contextual grounding
     * policy.</p>
     */
    inline const AIGuardrailContextualGroundingPolicyConfig& GetContextualGroundingPolicyConfig() const { return m_contextualGroundingPolicyConfig; }
    inline bool ContextualGroundingPolicyConfigHasBeenSet() const { return m_contextualGroundingPolicyConfigHasBeenSet; }
    template<typename ContextualGroundingPolicyConfigT = AIGuardrailContextualGroundingPolicyConfig>
    void SetContextualGroundingPolicyConfig(ContextualGroundingPolicyConfigT&& value) { m_contextualGroundingPolicyConfigHasBeenSet = true; m_contextualGroundingPolicyConfig = std::forward<ContextualGroundingPolicyConfigT>(value); }
    template<typename ContextualGroundingPolicyConfigT = AIGuardrailContextualGroundingPolicyConfig>
    AIGuardrailData& WithContextualGroundingPolicyConfig(ContextualGroundingPolicyConfigT&& value) { SetContextualGroundingPolicyConfig(std::forward<ContextualGroundingPolicyConfigT>(value)); return *this;}
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
    AIGuardrailData& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    AIGuardrailData& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The status of the AI Guardrail.</p>
     */
    inline Status GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(Status value) { m_statusHasBeenSet = true; m_status = value; }
    inline AIGuardrailData& WithStatus(Status value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the AI Guardrail was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedTime() const { return m_modifiedTime; }
    inline bool ModifiedTimeHasBeenSet() const { return m_modifiedTimeHasBeenSet; }
    template<typename ModifiedTimeT = Aws::Utils::DateTime>
    void SetModifiedTime(ModifiedTimeT&& value) { m_modifiedTimeHasBeenSet = true; m_modifiedTime = std::forward<ModifiedTimeT>(value); }
    template<typename ModifiedTimeT = Aws::Utils::DateTime>
    AIGuardrailData& WithModifiedTime(ModifiedTimeT&& value) { SetModifiedTime(std::forward<ModifiedTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;

    Aws::String m_assistantArn;
    bool m_assistantArnHasBeenSet = false;

    Aws::String m_aiGuardrailArn;
    bool m_aiGuardrailArnHasBeenSet = false;

    Aws::String m_aiGuardrailId;
    bool m_aiGuardrailIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

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

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Status m_status{Status::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedTime{};
    bool m_modifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
