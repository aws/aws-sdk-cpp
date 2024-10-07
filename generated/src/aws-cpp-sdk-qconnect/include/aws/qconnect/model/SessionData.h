/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/SessionIntegrationConfiguration.h>
#include <aws/qconnect/model/TagFilter.h>
#include <aws/qconnect/model/AIAgentType.h>
#include <aws/qconnect/model/AIAgentConfigurationData.h>
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
   * <p>Information about the session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/SessionData">AWS
   * API Reference</a></p>
   */
  class SessionData
  {
  public:
    AWS_QCONNECT_API SessionData();
    AWS_QCONNECT_API SessionData(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API SessionData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration of the AI Agents (mapped by AI Agent Type to AI Agent
     * version) that should be used by Amazon Q in Connect for this Session.</p>
     */
    inline const Aws::Map<AIAgentType, AIAgentConfigurationData>& GetAiAgentConfiguration() const{ return m_aiAgentConfiguration; }
    inline bool AiAgentConfigurationHasBeenSet() const { return m_aiAgentConfigurationHasBeenSet; }
    inline void SetAiAgentConfiguration(const Aws::Map<AIAgentType, AIAgentConfigurationData>& value) { m_aiAgentConfigurationHasBeenSet = true; m_aiAgentConfiguration = value; }
    inline void SetAiAgentConfiguration(Aws::Map<AIAgentType, AIAgentConfigurationData>&& value) { m_aiAgentConfigurationHasBeenSet = true; m_aiAgentConfiguration = std::move(value); }
    inline SessionData& WithAiAgentConfiguration(const Aws::Map<AIAgentType, AIAgentConfigurationData>& value) { SetAiAgentConfiguration(value); return *this;}
    inline SessionData& WithAiAgentConfiguration(Aws::Map<AIAgentType, AIAgentConfigurationData>&& value) { SetAiAgentConfiguration(std::move(value)); return *this;}
    inline SessionData& AddAiAgentConfiguration(const AIAgentType& key, const AIAgentConfigurationData& value) { m_aiAgentConfigurationHasBeenSet = true; m_aiAgentConfiguration.emplace(key, value); return *this; }
    inline SessionData& AddAiAgentConfiguration(AIAgentType&& key, const AIAgentConfigurationData& value) { m_aiAgentConfigurationHasBeenSet = true; m_aiAgentConfiguration.emplace(std::move(key), value); return *this; }
    inline SessionData& AddAiAgentConfiguration(const AIAgentType& key, AIAgentConfigurationData&& value) { m_aiAgentConfigurationHasBeenSet = true; m_aiAgentConfiguration.emplace(key, std::move(value)); return *this; }
    inline SessionData& AddAiAgentConfiguration(AIAgentType&& key, AIAgentConfigurationData&& value) { m_aiAgentConfigurationHasBeenSet = true; m_aiAgentConfiguration.emplace(std::move(key), std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The description of the session.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline SessionData& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline SessionData& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline SessionData& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration information for the session integration.</p>
     */
    inline const SessionIntegrationConfiguration& GetIntegrationConfiguration() const{ return m_integrationConfiguration; }
    inline bool IntegrationConfigurationHasBeenSet() const { return m_integrationConfigurationHasBeenSet; }
    inline void SetIntegrationConfiguration(const SessionIntegrationConfiguration& value) { m_integrationConfigurationHasBeenSet = true; m_integrationConfiguration = value; }
    inline void SetIntegrationConfiguration(SessionIntegrationConfiguration&& value) { m_integrationConfigurationHasBeenSet = true; m_integrationConfiguration = std::move(value); }
    inline SessionData& WithIntegrationConfiguration(const SessionIntegrationConfiguration& value) { SetIntegrationConfiguration(value); return *this;}
    inline SessionData& WithIntegrationConfiguration(SessionIntegrationConfiguration&& value) { SetIntegrationConfiguration(std::move(value)); return *this;}
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
    inline SessionData& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline SessionData& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline SessionData& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the session.</p>
     */
    inline const Aws::String& GetSessionArn() const{ return m_sessionArn; }
    inline bool SessionArnHasBeenSet() const { return m_sessionArnHasBeenSet; }
    inline void SetSessionArn(const Aws::String& value) { m_sessionArnHasBeenSet = true; m_sessionArn = value; }
    inline void SetSessionArn(Aws::String&& value) { m_sessionArnHasBeenSet = true; m_sessionArn = std::move(value); }
    inline void SetSessionArn(const char* value) { m_sessionArnHasBeenSet = true; m_sessionArn.assign(value); }
    inline SessionData& WithSessionArn(const Aws::String& value) { SetSessionArn(value); return *this;}
    inline SessionData& WithSessionArn(Aws::String&& value) { SetSessionArn(std::move(value)); return *this;}
    inline SessionData& WithSessionArn(const char* value) { SetSessionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the session.</p>
     */
    inline const Aws::String& GetSessionId() const{ return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    inline void SetSessionId(const Aws::String& value) { m_sessionIdHasBeenSet = true; m_sessionId = value; }
    inline void SetSessionId(Aws::String&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::move(value); }
    inline void SetSessionId(const char* value) { m_sessionIdHasBeenSet = true; m_sessionId.assign(value); }
    inline SessionData& WithSessionId(const Aws::String& value) { SetSessionId(value); return *this;}
    inline SessionData& WithSessionId(Aws::String&& value) { SetSessionId(std::move(value)); return *this;}
    inline SessionData& WithSessionId(const char* value) { SetSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that can be used to specify Tag conditions.</p>
     */
    inline const TagFilter& GetTagFilter() const{ return m_tagFilter; }
    inline bool TagFilterHasBeenSet() const { return m_tagFilterHasBeenSet; }
    inline void SetTagFilter(const TagFilter& value) { m_tagFilterHasBeenSet = true; m_tagFilter = value; }
    inline void SetTagFilter(TagFilter&& value) { m_tagFilterHasBeenSet = true; m_tagFilter = std::move(value); }
    inline SessionData& WithTagFilter(const TagFilter& value) { SetTagFilter(value); return *this;}
    inline SessionData& WithTagFilter(TagFilter&& value) { SetTagFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags used to organize, track, or control access for this resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline SessionData& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline SessionData& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline SessionData& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline SessionData& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline SessionData& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline SessionData& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline SessionData& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline SessionData& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline SessionData& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::Map<AIAgentType, AIAgentConfigurationData> m_aiAgentConfiguration;
    bool m_aiAgentConfigurationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    SessionIntegrationConfiguration m_integrationConfiguration;
    bool m_integrationConfigurationHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_sessionArn;
    bool m_sessionArnHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    TagFilter m_tagFilter;
    bool m_tagFilterHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
