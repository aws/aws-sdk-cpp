/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/ssm-incidents/SSMIncidentsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-incidents/model/ChatChannel.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-incidents/model/IncidentTemplate.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm-incidents/model/Action.h>
#include <aws/ssm-incidents/model/Integration.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

  /**
   */
  class CreateResponsePlanRequest : public SSMIncidentsRequest
  {
  public:
    AWS_SSMINCIDENTS_API CreateResponsePlanRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateResponsePlan"; }

    AWS_SSMINCIDENTS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The actions that the response plan starts at the beginning of an
     * incident.</p>
     */
    inline const Aws::Vector<Action>& GetActions() const { return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    template<typename ActionsT = Aws::Vector<Action>>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = Aws::Vector<Action>>
    CreateResponsePlanRequest& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    template<typename ActionsT = Action>
    CreateResponsePlanRequest& AddActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions.emplace_back(std::forward<ActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Chatbot chat channel used for collaboration during an incident.</p>
     */
    inline const ChatChannel& GetChatChannel() const { return m_chatChannel; }
    inline bool ChatChannelHasBeenSet() const { return m_chatChannelHasBeenSet; }
    template<typename ChatChannelT = ChatChannel>
    void SetChatChannel(ChatChannelT&& value) { m_chatChannelHasBeenSet = true; m_chatChannel = std::forward<ChatChannelT>(value); }
    template<typename ChatChannelT = ChatChannel>
    CreateResponsePlanRequest& WithChatChannel(ChatChannelT&& value) { SetChatChannel(std::forward<ChatChannelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token ensuring that the operation is called only once with the specified
     * details.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateResponsePlanRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The long format of the response plan name. This field can contain spaces.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    CreateResponsePlanRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the contacts and escalation plans that the
     * response plan engages during an incident.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEngagements() const { return m_engagements; }
    inline bool EngagementsHasBeenSet() const { return m_engagementsHasBeenSet; }
    template<typename EngagementsT = Aws::Vector<Aws::String>>
    void SetEngagements(EngagementsT&& value) { m_engagementsHasBeenSet = true; m_engagements = std::forward<EngagementsT>(value); }
    template<typename EngagementsT = Aws::Vector<Aws::String>>
    CreateResponsePlanRequest& WithEngagements(EngagementsT&& value) { SetEngagements(std::forward<EngagementsT>(value)); return *this;}
    template<typename EngagementsT = Aws::String>
    CreateResponsePlanRequest& AddEngagements(EngagementsT&& value) { m_engagementsHasBeenSet = true; m_engagements.emplace_back(std::forward<EngagementsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details used to create an incident when using this response plan.</p>
     */
    inline const IncidentTemplate& GetIncidentTemplate() const { return m_incidentTemplate; }
    inline bool IncidentTemplateHasBeenSet() const { return m_incidentTemplateHasBeenSet; }
    template<typename IncidentTemplateT = IncidentTemplate>
    void SetIncidentTemplate(IncidentTemplateT&& value) { m_incidentTemplateHasBeenSet = true; m_incidentTemplate = std::forward<IncidentTemplateT>(value); }
    template<typename IncidentTemplateT = IncidentTemplate>
    CreateResponsePlanRequest& WithIncidentTemplate(IncidentTemplateT&& value) { SetIncidentTemplate(std::forward<IncidentTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about third-party services integrated into the response plan.</p>
     */
    inline const Aws::Vector<Integration>& GetIntegrations() const { return m_integrations; }
    inline bool IntegrationsHasBeenSet() const { return m_integrationsHasBeenSet; }
    template<typename IntegrationsT = Aws::Vector<Integration>>
    void SetIntegrations(IntegrationsT&& value) { m_integrationsHasBeenSet = true; m_integrations = std::forward<IntegrationsT>(value); }
    template<typename IntegrationsT = Aws::Vector<Integration>>
    CreateResponsePlanRequest& WithIntegrations(IntegrationsT&& value) { SetIntegrations(std::forward<IntegrationsT>(value)); return *this;}
    template<typename IntegrationsT = Integration>
    CreateResponsePlanRequest& AddIntegrations(IntegrationsT&& value) { m_integrationsHasBeenSet = true; m_integrations.emplace_back(std::forward<IntegrationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The short format name of the response plan. Can't include spaces.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateResponsePlanRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags that you are adding to the response plan.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateResponsePlanRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateResponsePlanRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Vector<Action> m_actions;
    bool m_actionsHasBeenSet = false;

    ChatChannel m_chatChannel;
    bool m_chatChannelHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_engagements;
    bool m_engagementsHasBeenSet = false;

    IncidentTemplate m_incidentTemplate;
    bool m_incidentTemplateHasBeenSet = false;

    Aws::Vector<Integration> m_integrations;
    bool m_integrationsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
