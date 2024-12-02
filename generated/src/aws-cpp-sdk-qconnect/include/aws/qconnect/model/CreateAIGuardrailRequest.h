/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/AIGuardrailContentPolicyConfig.h>
#include <aws/qconnect/model/AIGuardrailContextualGroundingPolicyConfig.h>
#include <aws/qconnect/model/AIGuardrailSensitiveInformationPolicyConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/qconnect/model/AIGuardrailTopicPolicyConfig.h>
#include <aws/qconnect/model/VisibilityStatus.h>
#include <aws/qconnect/model/AIGuardrailWordPolicyConfig.h>
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
    AWS_QCONNECT_API CreateAIGuardrailRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAIGuardrail"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Q in Connect assistant. Can be either the ID or
     * the ARN. URLs cannot contain the ARN.</p>
     */
    inline const Aws::String& GetAssistantId() const{ return m_assistantId; }
    inline bool AssistantIdHasBeenSet() const { return m_assistantIdHasBeenSet; }
    inline void SetAssistantId(const Aws::String& value) { m_assistantIdHasBeenSet = true; m_assistantId = value; }
    inline void SetAssistantId(Aws::String&& value) { m_assistantIdHasBeenSet = true; m_assistantId = std::move(value); }
    inline void SetAssistantId(const char* value) { m_assistantIdHasBeenSet = true; m_assistantId.assign(value); }
    inline CreateAIGuardrailRequest& WithAssistantId(const Aws::String& value) { SetAssistantId(value); return *this;}
    inline CreateAIGuardrailRequest& WithAssistantId(Aws::String&& value) { SetAssistantId(std::move(value)); return *this;}
    inline CreateAIGuardrailRequest& WithAssistantId(const char* value) { SetAssistantId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message to return when the AI Guardrail blocks a prompt.</p>
     */
    inline const Aws::String& GetBlockedInputMessaging() const{ return m_blockedInputMessaging; }
    inline bool BlockedInputMessagingHasBeenSet() const { return m_blockedInputMessagingHasBeenSet; }
    inline void SetBlockedInputMessaging(const Aws::String& value) { m_blockedInputMessagingHasBeenSet = true; m_blockedInputMessaging = value; }
    inline void SetBlockedInputMessaging(Aws::String&& value) { m_blockedInputMessagingHasBeenSet = true; m_blockedInputMessaging = std::move(value); }
    inline void SetBlockedInputMessaging(const char* value) { m_blockedInputMessagingHasBeenSet = true; m_blockedInputMessaging.assign(value); }
    inline CreateAIGuardrailRequest& WithBlockedInputMessaging(const Aws::String& value) { SetBlockedInputMessaging(value); return *this;}
    inline CreateAIGuardrailRequest& WithBlockedInputMessaging(Aws::String&& value) { SetBlockedInputMessaging(std::move(value)); return *this;}
    inline CreateAIGuardrailRequest& WithBlockedInputMessaging(const char* value) { SetBlockedInputMessaging(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message to return when the AI Guardrail blocks a model response.</p>
     */
    inline const Aws::String& GetBlockedOutputsMessaging() const{ return m_blockedOutputsMessaging; }
    inline bool BlockedOutputsMessagingHasBeenSet() const { return m_blockedOutputsMessagingHasBeenSet; }
    inline void SetBlockedOutputsMessaging(const Aws::String& value) { m_blockedOutputsMessagingHasBeenSet = true; m_blockedOutputsMessaging = value; }
    inline void SetBlockedOutputsMessaging(Aws::String&& value) { m_blockedOutputsMessagingHasBeenSet = true; m_blockedOutputsMessaging = std::move(value); }
    inline void SetBlockedOutputsMessaging(const char* value) { m_blockedOutputsMessagingHasBeenSet = true; m_blockedOutputsMessaging.assign(value); }
    inline CreateAIGuardrailRequest& WithBlockedOutputsMessaging(const Aws::String& value) { SetBlockedOutputsMessaging(value); return *this;}
    inline CreateAIGuardrailRequest& WithBlockedOutputsMessaging(Aws::String&& value) { SetBlockedOutputsMessaging(std::move(value)); return *this;}
    inline CreateAIGuardrailRequest& WithBlockedOutputsMessaging(const char* value) { SetBlockedOutputsMessaging(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="http://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>..</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateAIGuardrailRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateAIGuardrailRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateAIGuardrailRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content filter policies to configure for the AI Guardrail.</p>
     */
    inline const AIGuardrailContentPolicyConfig& GetContentPolicyConfig() const{ return m_contentPolicyConfig; }
    inline bool ContentPolicyConfigHasBeenSet() const { return m_contentPolicyConfigHasBeenSet; }
    inline void SetContentPolicyConfig(const AIGuardrailContentPolicyConfig& value) { m_contentPolicyConfigHasBeenSet = true; m_contentPolicyConfig = value; }
    inline void SetContentPolicyConfig(AIGuardrailContentPolicyConfig&& value) { m_contentPolicyConfigHasBeenSet = true; m_contentPolicyConfig = std::move(value); }
    inline CreateAIGuardrailRequest& WithContentPolicyConfig(const AIGuardrailContentPolicyConfig& value) { SetContentPolicyConfig(value); return *this;}
    inline CreateAIGuardrailRequest& WithContentPolicyConfig(AIGuardrailContentPolicyConfig&& value) { SetContentPolicyConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The contextual grounding policy configuration used to create an AI
     * Guardrail.</p>
     */
    inline const AIGuardrailContextualGroundingPolicyConfig& GetContextualGroundingPolicyConfig() const{ return m_contextualGroundingPolicyConfig; }
    inline bool ContextualGroundingPolicyConfigHasBeenSet() const { return m_contextualGroundingPolicyConfigHasBeenSet; }
    inline void SetContextualGroundingPolicyConfig(const AIGuardrailContextualGroundingPolicyConfig& value) { m_contextualGroundingPolicyConfigHasBeenSet = true; m_contextualGroundingPolicyConfig = value; }
    inline void SetContextualGroundingPolicyConfig(AIGuardrailContextualGroundingPolicyConfig&& value) { m_contextualGroundingPolicyConfigHasBeenSet = true; m_contextualGroundingPolicyConfig = std::move(value); }
    inline CreateAIGuardrailRequest& WithContextualGroundingPolicyConfig(const AIGuardrailContextualGroundingPolicyConfig& value) { SetContextualGroundingPolicyConfig(value); return *this;}
    inline CreateAIGuardrailRequest& WithContextualGroundingPolicyConfig(AIGuardrailContextualGroundingPolicyConfig&& value) { SetContextualGroundingPolicyConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the AI Guardrail.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateAIGuardrailRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateAIGuardrailRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateAIGuardrailRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the AI Guardrail.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateAIGuardrailRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateAIGuardrailRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateAIGuardrailRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sensitive information policy to configure for the AI Guardrail.</p>
     */
    inline const AIGuardrailSensitiveInformationPolicyConfig& GetSensitiveInformationPolicyConfig() const{ return m_sensitiveInformationPolicyConfig; }
    inline bool SensitiveInformationPolicyConfigHasBeenSet() const { return m_sensitiveInformationPolicyConfigHasBeenSet; }
    inline void SetSensitiveInformationPolicyConfig(const AIGuardrailSensitiveInformationPolicyConfig& value) { m_sensitiveInformationPolicyConfigHasBeenSet = true; m_sensitiveInformationPolicyConfig = value; }
    inline void SetSensitiveInformationPolicyConfig(AIGuardrailSensitiveInformationPolicyConfig&& value) { m_sensitiveInformationPolicyConfigHasBeenSet = true; m_sensitiveInformationPolicyConfig = std::move(value); }
    inline CreateAIGuardrailRequest& WithSensitiveInformationPolicyConfig(const AIGuardrailSensitiveInformationPolicyConfig& value) { SetSensitiveInformationPolicyConfig(value); return *this;}
    inline CreateAIGuardrailRequest& WithSensitiveInformationPolicyConfig(AIGuardrailSensitiveInformationPolicyConfig&& value) { SetSensitiveInformationPolicyConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateAIGuardrailRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateAIGuardrailRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateAIGuardrailRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateAIGuardrailRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateAIGuardrailRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateAIGuardrailRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateAIGuardrailRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateAIGuardrailRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateAIGuardrailRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The topic policies to configure for the AI Guardrail.</p>
     */
    inline const AIGuardrailTopicPolicyConfig& GetTopicPolicyConfig() const{ return m_topicPolicyConfig; }
    inline bool TopicPolicyConfigHasBeenSet() const { return m_topicPolicyConfigHasBeenSet; }
    inline void SetTopicPolicyConfig(const AIGuardrailTopicPolicyConfig& value) { m_topicPolicyConfigHasBeenSet = true; m_topicPolicyConfig = value; }
    inline void SetTopicPolicyConfig(AIGuardrailTopicPolicyConfig&& value) { m_topicPolicyConfigHasBeenSet = true; m_topicPolicyConfig = std::move(value); }
    inline CreateAIGuardrailRequest& WithTopicPolicyConfig(const AIGuardrailTopicPolicyConfig& value) { SetTopicPolicyConfig(value); return *this;}
    inline CreateAIGuardrailRequest& WithTopicPolicyConfig(AIGuardrailTopicPolicyConfig&& value) { SetTopicPolicyConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The visibility status of the AI Guardrail.</p>
     */
    inline const VisibilityStatus& GetVisibilityStatus() const{ return m_visibilityStatus; }
    inline bool VisibilityStatusHasBeenSet() const { return m_visibilityStatusHasBeenSet; }
    inline void SetVisibilityStatus(const VisibilityStatus& value) { m_visibilityStatusHasBeenSet = true; m_visibilityStatus = value; }
    inline void SetVisibilityStatus(VisibilityStatus&& value) { m_visibilityStatusHasBeenSet = true; m_visibilityStatus = std::move(value); }
    inline CreateAIGuardrailRequest& WithVisibilityStatus(const VisibilityStatus& value) { SetVisibilityStatus(value); return *this;}
    inline CreateAIGuardrailRequest& WithVisibilityStatus(VisibilityStatus&& value) { SetVisibilityStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The word policy you configure for the AI Guardrail.</p>
     */
    inline const AIGuardrailWordPolicyConfig& GetWordPolicyConfig() const{ return m_wordPolicyConfig; }
    inline bool WordPolicyConfigHasBeenSet() const { return m_wordPolicyConfigHasBeenSet; }
    inline void SetWordPolicyConfig(const AIGuardrailWordPolicyConfig& value) { m_wordPolicyConfigHasBeenSet = true; m_wordPolicyConfig = value; }
    inline void SetWordPolicyConfig(AIGuardrailWordPolicyConfig&& value) { m_wordPolicyConfigHasBeenSet = true; m_wordPolicyConfig = std::move(value); }
    inline CreateAIGuardrailRequest& WithWordPolicyConfig(const AIGuardrailWordPolicyConfig& value) { SetWordPolicyConfig(value); return *this;}
    inline CreateAIGuardrailRequest& WithWordPolicyConfig(AIGuardrailWordPolicyConfig&& value) { SetWordPolicyConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;

    Aws::String m_blockedInputMessaging;
    bool m_blockedInputMessagingHasBeenSet = false;

    Aws::String m_blockedOutputsMessaging;
    bool m_blockedOutputsMessagingHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    AIGuardrailContentPolicyConfig m_contentPolicyConfig;
    bool m_contentPolicyConfigHasBeenSet = false;

    AIGuardrailContextualGroundingPolicyConfig m_contextualGroundingPolicyConfig;
    bool m_contextualGroundingPolicyConfigHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AIGuardrailSensitiveInformationPolicyConfig m_sensitiveInformationPolicyConfig;
    bool m_sensitiveInformationPolicyConfigHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    AIGuardrailTopicPolicyConfig m_topicPolicyConfig;
    bool m_topicPolicyConfigHasBeenSet = false;

    VisibilityStatus m_visibilityStatus;
    bool m_visibilityStatusHasBeenSet = false;

    AIGuardrailWordPolicyConfig m_wordPolicyConfig;
    bool m_wordPolicyConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
