/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/ssm-incidents/SSMIncidentsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-incidents/model/ChatChannel.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm-incidents/model/Action.h>
#include <aws/ssm-incidents/model/NotificationTargetItem.h>
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
  class UpdateResponsePlanRequest : public SSMIncidentsRequest
  {
  public:
    AWS_SSMINCIDENTS_API UpdateResponsePlanRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateResponsePlan"; }

    AWS_SSMINCIDENTS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The actions that this response plan takes at the beginning of an
     * incident.</p>
     */
    inline const Aws::Vector<Action>& GetActions() const { return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    template<typename ActionsT = Aws::Vector<Action>>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = Aws::Vector<Action>>
    UpdateResponsePlanRequest& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    template<typename ActionsT = Action>
    UpdateResponsePlanRequest& AddActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions.emplace_back(std::forward<ActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the response plan.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    UpdateResponsePlanRequest& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Chatbot chat channel used for collaboration during an incident.</p>
     * <p>Use the empty structure to remove the chat channel from the response
     * plan.</p>
     */
    inline const ChatChannel& GetChatChannel() const { return m_chatChannel; }
    inline bool ChatChannelHasBeenSet() const { return m_chatChannelHasBeenSet; }
    template<typename ChatChannelT = ChatChannel>
    void SetChatChannel(ChatChannelT&& value) { m_chatChannelHasBeenSet = true; m_chatChannel = std::forward<ChatChannelT>(value); }
    template<typename ChatChannelT = ChatChannel>
    UpdateResponsePlanRequest& WithChatChannel(ChatChannelT&& value) { SetChatChannel(std::forward<ChatChannelT>(value)); return *this;}
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
    UpdateResponsePlanRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The long format name of the response plan. The display name can't contain
     * spaces.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    UpdateResponsePlanRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
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
    UpdateResponsePlanRequest& WithEngagements(EngagementsT&& value) { SetEngagements(std::forward<EngagementsT>(value)); return *this;}
    template<typename EngagementsT = Aws::String>
    UpdateResponsePlanRequest& AddEngagements(EngagementsT&& value) { m_engagementsHasBeenSet = true; m_engagements.emplace_back(std::forward<EngagementsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The string Incident Manager uses to prevent duplicate incidents from being
     * created by the same incident in the same account.</p>
     */
    inline const Aws::String& GetIncidentTemplateDedupeString() const { return m_incidentTemplateDedupeString; }
    inline bool IncidentTemplateDedupeStringHasBeenSet() const { return m_incidentTemplateDedupeStringHasBeenSet; }
    template<typename IncidentTemplateDedupeStringT = Aws::String>
    void SetIncidentTemplateDedupeString(IncidentTemplateDedupeStringT&& value) { m_incidentTemplateDedupeStringHasBeenSet = true; m_incidentTemplateDedupeString = std::forward<IncidentTemplateDedupeStringT>(value); }
    template<typename IncidentTemplateDedupeStringT = Aws::String>
    UpdateResponsePlanRequest& WithIncidentTemplateDedupeString(IncidentTemplateDedupeStringT&& value) { SetIncidentTemplateDedupeString(std::forward<IncidentTemplateDedupeStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the impact to the customers. Providing an impact overwrites the
     * impact provided by a response plan.</p> <p class="title"> <b>Supported impact
     * codes</b> </p> <ul> <li> <p> <code>1</code> - Critical</p> </li> <li> <p>
     * <code>2</code> - High</p> </li> <li> <p> <code>3</code> - Medium</p> </li> <li>
     * <p> <code>4</code> - Low</p> </li> <li> <p> <code>5</code> - No Impact</p> </li>
     * </ul>
     */
    inline int GetIncidentTemplateImpact() const { return m_incidentTemplateImpact; }
    inline bool IncidentTemplateImpactHasBeenSet() const { return m_incidentTemplateImpactHasBeenSet; }
    inline void SetIncidentTemplateImpact(int value) { m_incidentTemplateImpactHasBeenSet = true; m_incidentTemplateImpact = value; }
    inline UpdateResponsePlanRequest& WithIncidentTemplateImpact(int value) { SetIncidentTemplateImpact(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon SNS targets that are notified when updates are made to an
     * incident.</p>
     */
    inline const Aws::Vector<NotificationTargetItem>& GetIncidentTemplateNotificationTargets() const { return m_incidentTemplateNotificationTargets; }
    inline bool IncidentTemplateNotificationTargetsHasBeenSet() const { return m_incidentTemplateNotificationTargetsHasBeenSet; }
    template<typename IncidentTemplateNotificationTargetsT = Aws::Vector<NotificationTargetItem>>
    void SetIncidentTemplateNotificationTargets(IncidentTemplateNotificationTargetsT&& value) { m_incidentTemplateNotificationTargetsHasBeenSet = true; m_incidentTemplateNotificationTargets = std::forward<IncidentTemplateNotificationTargetsT>(value); }
    template<typename IncidentTemplateNotificationTargetsT = Aws::Vector<NotificationTargetItem>>
    UpdateResponsePlanRequest& WithIncidentTemplateNotificationTargets(IncidentTemplateNotificationTargetsT&& value) { SetIncidentTemplateNotificationTargets(std::forward<IncidentTemplateNotificationTargetsT>(value)); return *this;}
    template<typename IncidentTemplateNotificationTargetsT = NotificationTargetItem>
    UpdateResponsePlanRequest& AddIncidentTemplateNotificationTargets(IncidentTemplateNotificationTargetsT&& value) { m_incidentTemplateNotificationTargetsHasBeenSet = true; m_incidentTemplateNotificationTargets.emplace_back(std::forward<IncidentTemplateNotificationTargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A brief summary of the incident. This typically contains what has happened,
     * what's currently happening, and next steps.</p>
     */
    inline const Aws::String& GetIncidentTemplateSummary() const { return m_incidentTemplateSummary; }
    inline bool IncidentTemplateSummaryHasBeenSet() const { return m_incidentTemplateSummaryHasBeenSet; }
    template<typename IncidentTemplateSummaryT = Aws::String>
    void SetIncidentTemplateSummary(IncidentTemplateSummaryT&& value) { m_incidentTemplateSummaryHasBeenSet = true; m_incidentTemplateSummary = std::forward<IncidentTemplateSummaryT>(value); }
    template<typename IncidentTemplateSummaryT = Aws::String>
    UpdateResponsePlanRequest& WithIncidentTemplateSummary(IncidentTemplateSummaryT&& value) { SetIncidentTemplateSummary(std::forward<IncidentTemplateSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to assign to the template. When the <code>StartIncident</code> API
     * action is called, Incident Manager assigns the tags specified in the template to
     * the incident. To call this action, you must also have permission to call the
     * <code>TagResource</code> API action for the incident record resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetIncidentTemplateTags() const { return m_incidentTemplateTags; }
    inline bool IncidentTemplateTagsHasBeenSet() const { return m_incidentTemplateTagsHasBeenSet; }
    template<typename IncidentTemplateTagsT = Aws::Map<Aws::String, Aws::String>>
    void SetIncidentTemplateTags(IncidentTemplateTagsT&& value) { m_incidentTemplateTagsHasBeenSet = true; m_incidentTemplateTags = std::forward<IncidentTemplateTagsT>(value); }
    template<typename IncidentTemplateTagsT = Aws::Map<Aws::String, Aws::String>>
    UpdateResponsePlanRequest& WithIncidentTemplateTags(IncidentTemplateTagsT&& value) { SetIncidentTemplateTags(std::forward<IncidentTemplateTagsT>(value)); return *this;}
    template<typename IncidentTemplateTagsKeyT = Aws::String, typename IncidentTemplateTagsValueT = Aws::String>
    UpdateResponsePlanRequest& AddIncidentTemplateTags(IncidentTemplateTagsKeyT&& key, IncidentTemplateTagsValueT&& value) {
      m_incidentTemplateTagsHasBeenSet = true; m_incidentTemplateTags.emplace(std::forward<IncidentTemplateTagsKeyT>(key), std::forward<IncidentTemplateTagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The short format name of the incident. The title can't contain spaces.</p>
     */
    inline const Aws::String& GetIncidentTemplateTitle() const { return m_incidentTemplateTitle; }
    inline bool IncidentTemplateTitleHasBeenSet() const { return m_incidentTemplateTitleHasBeenSet; }
    template<typename IncidentTemplateTitleT = Aws::String>
    void SetIncidentTemplateTitle(IncidentTemplateTitleT&& value) { m_incidentTemplateTitleHasBeenSet = true; m_incidentTemplateTitle = std::forward<IncidentTemplateTitleT>(value); }
    template<typename IncidentTemplateTitleT = Aws::String>
    UpdateResponsePlanRequest& WithIncidentTemplateTitle(IncidentTemplateTitleT&& value) { SetIncidentTemplateTitle(std::forward<IncidentTemplateTitleT>(value)); return *this;}
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
    UpdateResponsePlanRequest& WithIntegrations(IntegrationsT&& value) { SetIntegrations(std::forward<IntegrationsT>(value)); return *this;}
    template<typename IntegrationsT = Integration>
    UpdateResponsePlanRequest& AddIntegrations(IntegrationsT&& value) { m_integrationsHasBeenSet = true; m_integrations.emplace_back(std::forward<IntegrationsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Action> m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    ChatChannel m_chatChannel;
    bool m_chatChannelHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_engagements;
    bool m_engagementsHasBeenSet = false;

    Aws::String m_incidentTemplateDedupeString;
    bool m_incidentTemplateDedupeStringHasBeenSet = false;

    int m_incidentTemplateImpact{0};
    bool m_incidentTemplateImpactHasBeenSet = false;

    Aws::Vector<NotificationTargetItem> m_incidentTemplateNotificationTargets;
    bool m_incidentTemplateNotificationTargetsHasBeenSet = false;

    Aws::String m_incidentTemplateSummary;
    bool m_incidentTemplateSummaryHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_incidentTemplateTags;
    bool m_incidentTemplateTagsHasBeenSet = false;

    Aws::String m_incidentTemplateTitle;
    bool m_incidentTemplateTitleHasBeenSet = false;

    Aws::Vector<Integration> m_integrations;
    bool m_integrationsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
