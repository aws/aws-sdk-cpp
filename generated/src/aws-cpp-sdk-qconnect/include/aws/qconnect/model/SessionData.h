/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/qconnect/model/SessionIntegrationConfiguration.h>
#include <aws/qconnect/model/TagFilter.h>
#include <aws/qconnect/model/Origin.h>
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
    AWS_QCONNECT_API SessionData() = default;
    AWS_QCONNECT_API SessionData(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API SessionData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the session.</p>
     */
    inline const Aws::String& GetSessionArn() const { return m_sessionArn; }
    inline bool SessionArnHasBeenSet() const { return m_sessionArnHasBeenSet; }
    template<typename SessionArnT = Aws::String>
    void SetSessionArn(SessionArnT&& value) { m_sessionArnHasBeenSet = true; m_sessionArn = std::forward<SessionArnT>(value); }
    template<typename SessionArnT = Aws::String>
    SessionData& WithSessionArn(SessionArnT&& value) { SetSessionArn(std::forward<SessionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the session.</p>
     */
    inline const Aws::String& GetSessionId() const { return m_sessionId; }
    inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
    template<typename SessionIdT = Aws::String>
    void SetSessionId(SessionIdT&& value) { m_sessionIdHasBeenSet = true; m_sessionId = std::forward<SessionIdT>(value); }
    template<typename SessionIdT = Aws::String>
    SessionData& WithSessionId(SessionIdT&& value) { SetSessionId(std::forward<SessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the session.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    SessionData& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the session.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    SessionData& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    SessionData& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    SessionData& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The configuration information for the session integration.</p>
     */
    inline const SessionIntegrationConfiguration& GetIntegrationConfiguration() const { return m_integrationConfiguration; }
    inline bool IntegrationConfigurationHasBeenSet() const { return m_integrationConfigurationHasBeenSet; }
    template<typename IntegrationConfigurationT = SessionIntegrationConfiguration>
    void SetIntegrationConfiguration(IntegrationConfigurationT&& value) { m_integrationConfigurationHasBeenSet = true; m_integrationConfiguration = std::forward<IntegrationConfigurationT>(value); }
    template<typename IntegrationConfigurationT = SessionIntegrationConfiguration>
    SessionData& WithIntegrationConfiguration(IntegrationConfigurationT&& value) { SetIntegrationConfiguration(std::forward<IntegrationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that can be used to specify Tag conditions.</p>
     */
    inline const TagFilter& GetTagFilter() const { return m_tagFilter; }
    inline bool TagFilterHasBeenSet() const { return m_tagFilterHasBeenSet; }
    template<typename TagFilterT = TagFilter>
    void SetTagFilter(TagFilterT&& value) { m_tagFilterHasBeenSet = true; m_tagFilter = std::forward<TagFilterT>(value); }
    template<typename TagFilterT = TagFilter>
    SessionData& WithTagFilter(TagFilterT&& value) { SetTagFilter(std::forward<TagFilterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the AI Agents (mapped by AI Agent Type to AI Agent
     * version) that should be used by Amazon Q in Connect for this Session.</p>
     */
    inline const Aws::Map<AIAgentType, AIAgentConfigurationData>& GetAiAgentConfiguration() const { return m_aiAgentConfiguration; }
    inline bool AiAgentConfigurationHasBeenSet() const { return m_aiAgentConfigurationHasBeenSet; }
    template<typename AiAgentConfigurationT = Aws::Map<AIAgentType, AIAgentConfigurationData>>
    void SetAiAgentConfiguration(AiAgentConfigurationT&& value) { m_aiAgentConfigurationHasBeenSet = true; m_aiAgentConfiguration = std::forward<AiAgentConfigurationT>(value); }
    template<typename AiAgentConfigurationT = Aws::Map<AIAgentType, AIAgentConfigurationData>>
    SessionData& WithAiAgentConfiguration(AiAgentConfigurationT&& value) { SetAiAgentConfiguration(std::forward<AiAgentConfigurationT>(value)); return *this;}
    inline SessionData& AddAiAgentConfiguration(AIAgentType key, AIAgentConfigurationData value) {
      m_aiAgentConfigurationHasBeenSet = true; m_aiAgentConfiguration.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The origin of the Session to be listed. <code>SYSTEM</code> for a default
     * Session created by Amazon Q in Connect or <code>CUSTOMER</code> for a Session
     * created by calling <a
     * href="https://docs.aws.amazon.com/connect/latest/APIReference/API_amazon-q-connect_CreateSession.html">CreateSession</a>
     * API.</p>
     */
    inline Origin GetOrigin() const { return m_origin; }
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }
    inline void SetOrigin(Origin value) { m_originHasBeenSet = true; m_origin = value; }
    inline SessionData& WithOrigin(Origin value) { SetOrigin(value); return *this;}
    ///@}
  private:

    Aws::String m_sessionArn;
    bool m_sessionArnHasBeenSet = false;

    Aws::String m_sessionId;
    bool m_sessionIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    SessionIntegrationConfiguration m_integrationConfiguration;
    bool m_integrationConfigurationHasBeenSet = false;

    TagFilter m_tagFilter;
    bool m_tagFilterHasBeenSet = false;

    Aws::Map<AIAgentType, AIAgentConfigurationData> m_aiAgentConfiguration;
    bool m_aiAgentConfigurationHasBeenSet = false;

    Origin m_origin{Origin::NOT_SET};
    bool m_originHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
