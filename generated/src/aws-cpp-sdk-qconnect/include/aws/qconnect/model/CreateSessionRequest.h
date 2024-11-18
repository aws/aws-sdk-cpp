/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/QConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/TagFilter.h>
#include <aws/qconnect/model/AIAgentType.h>
#include <aws/qconnect/model/AIAgentConfigurationData.h>
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
  class CreateSessionRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API CreateSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSession"; }

    AWS_QCONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The configuration of the AI Agents (mapped by AI Agent Type to AI Agent
     * version) that should be used by Amazon Q in Connect for this Session.</p>
     */
    inline const Aws::Map<AIAgentType, AIAgentConfigurationData>& GetAiAgentConfiguration() const{ return m_aiAgentConfiguration; }
    inline bool AiAgentConfigurationHasBeenSet() const { return m_aiAgentConfigurationHasBeenSet; }
    inline void SetAiAgentConfiguration(const Aws::Map<AIAgentType, AIAgentConfigurationData>& value) { m_aiAgentConfigurationHasBeenSet = true; m_aiAgentConfiguration = value; }
    inline void SetAiAgentConfiguration(Aws::Map<AIAgentType, AIAgentConfigurationData>&& value) { m_aiAgentConfigurationHasBeenSet = true; m_aiAgentConfiguration = std::move(value); }
    inline CreateSessionRequest& WithAiAgentConfiguration(const Aws::Map<AIAgentType, AIAgentConfigurationData>& value) { SetAiAgentConfiguration(value); return *this;}
    inline CreateSessionRequest& WithAiAgentConfiguration(Aws::Map<AIAgentType, AIAgentConfigurationData>&& value) { SetAiAgentConfiguration(std::move(value)); return *this;}
    inline CreateSessionRequest& AddAiAgentConfiguration(const AIAgentType& key, const AIAgentConfigurationData& value) { m_aiAgentConfigurationHasBeenSet = true; m_aiAgentConfiguration.emplace(key, value); return *this; }
    inline CreateSessionRequest& AddAiAgentConfiguration(AIAgentType&& key, const AIAgentConfigurationData& value) { m_aiAgentConfigurationHasBeenSet = true; m_aiAgentConfiguration.emplace(std::move(key), value); return *this; }
    inline CreateSessionRequest& AddAiAgentConfiguration(const AIAgentType& key, AIAgentConfigurationData&& value) { m_aiAgentConfigurationHasBeenSet = true; m_aiAgentConfiguration.emplace(key, std::move(value)); return *this; }
    inline CreateSessionRequest& AddAiAgentConfiguration(AIAgentType&& key, AIAgentConfigurationData&& value) { m_aiAgentConfigurationHasBeenSet = true; m_aiAgentConfiguration.emplace(std::move(key), std::move(value)); return *this; }
    ///@}

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
    inline CreateSessionRequest& WithAssistantId(const Aws::String& value) { SetAssistantId(value); return *this;}
    inline CreateSessionRequest& WithAssistantId(Aws::String&& value) { SetAssistantId(std::move(value)); return *this;}
    inline CreateSessionRequest& WithAssistantId(const char* value) { SetAssistantId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="http://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateSessionRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateSessionRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateSessionRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateSessionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateSessionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateSessionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the session.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateSessionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateSessionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateSessionRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that can be used to specify Tag conditions. </p>
     */
    inline const TagFilter& GetTagFilter() const{ return m_tagFilter; }
    inline bool TagFilterHasBeenSet() const { return m_tagFilterHasBeenSet; }
    inline void SetTagFilter(const TagFilter& value) { m_tagFilterHasBeenSet = true; m_tagFilter = value; }
    inline void SetTagFilter(TagFilter&& value) { m_tagFilterHasBeenSet = true; m_tagFilter = std::move(value); }
    inline CreateSessionRequest& WithTagFilter(const TagFilter& value) { SetTagFilter(value); return *this;}
    inline CreateSessionRequest& WithTagFilter(TagFilter&& value) { SetTagFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateSessionRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateSessionRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateSessionRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateSessionRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateSessionRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateSessionRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateSessionRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateSessionRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateSessionRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::Map<AIAgentType, AIAgentConfigurationData> m_aiAgentConfiguration;
    bool m_aiAgentConfigurationHasBeenSet = false;

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    TagFilter m_tagFilter;
    bool m_tagFilterHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
