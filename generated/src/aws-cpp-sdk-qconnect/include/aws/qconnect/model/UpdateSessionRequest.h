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

namespace Aws
{
namespace QConnect
{
namespace Model
{

  /**
   */
  class UpdateSessionRequest : public QConnectRequest
  {
  public:
    AWS_QCONNECT_API UpdateSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSession"; }

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
    inline UpdateSessionRequest& WithAiAgentConfiguration(const Aws::Map<AIAgentType, AIAgentConfigurationData>& value) { SetAiAgentConfiguration(value); return *this;}
    inline UpdateSessionRequest& WithAiAgentConfiguration(Aws::Map<AIAgentType, AIAgentConfigurationData>&& value) { SetAiAgentConfiguration(std::move(value)); return *this;}
    inline UpdateSessionRequest& AddAiAgentConfiguration(const AIAgentType& key, const AIAgentConfigurationData& value) { m_aiAgentConfigurationHasBeenSet = true; m_aiAgentConfiguration.emplace(key, value); return *this; }
    inline UpdateSessionRequest& AddAiAgentConfiguration(AIAgentType&& key, const AIAgentConfigurationData& value) { m_aiAgentConfigurationHasBeenSet = true; m_aiAgentConfiguration.emplace(std::move(key), value); return *this; }
    inline UpdateSessionRequest& AddAiAgentConfiguration(const AIAgentType& key, AIAgentConfigurationData&& value) { m_aiAgentConfigurationHasBeenSet = true; m_aiAgentConfiguration.emplace(key, std::move(value)); return *this; }
    inline UpdateSessionRequest& AddAiAgentConfiguration(AIAgentType&& key, AIAgentConfigurationData&& value) { m_aiAgentConfigurationHasBeenSet = true; m_aiAgentConfiguration.emplace(std::move(key), std::move(value)); return *this; }
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
    inline UpdateSessionRequest& WithAssistantId(const Aws::String& value) { SetAssistantId(value); return *this;}
    inline UpdateSessionRequest& WithAssistantId(Aws::String&& value) { SetAssistantId(std::move(value)); return *this;}
    inline UpdateSessionRequest& WithAssistantId(const char* value) { SetAssistantId(value); return *this;}
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
    inline UpdateSessionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateSessionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateSessionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the session. Can be either the ID or the ARN. URLs cannot
     * contain the ARN.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline UpdateSessionRequest& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline UpdateSessionRequest& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline UpdateSessionRequest& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that can be used to specify Tag conditions.</p>
     */
    inline const TagFilter& GetTagFilter() const{ return m_tagFilter; }
    inline bool TagFilterHasBeenSet() const { return m_tagFilterHasBeenSet; }
    inline void SetTagFilter(const TagFilter& value) { m_tagFilterHasBeenSet = true; m_tagFilter = value; }
    inline void SetTagFilter(TagFilter&& value) { m_tagFilterHasBeenSet = true; m_tagFilter = std::move(value); }
    inline UpdateSessionRequest& WithTagFilter(const TagFilter& value) { SetTagFilter(value); return *this;}
    inline UpdateSessionRequest& WithTagFilter(TagFilter&& value) { SetTagFilter(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Map<AIAgentType, AIAgentConfigurationData> m_aiAgentConfiguration;
    bool m_aiAgentConfigurationHasBeenSet = false;

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    TagFilter m_tagFilter;
    bool m_tagFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
