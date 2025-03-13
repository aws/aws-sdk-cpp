/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-incidents/model/ChatChannel.h>
#include <aws/ssm-incidents/model/IncidentTemplate.h>
#include <aws/ssm-incidents/model/Action.h>
#include <aws/ssm-incidents/model/Integration.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSMIncidents
{
namespace Model
{
  class GetResponsePlanResult
  {
  public:
    AWS_SSMINCIDENTS_API GetResponsePlanResult() = default;
    AWS_SSMINCIDENTS_API GetResponsePlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMINCIDENTS_API GetResponsePlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The actions that this response plan takes at the beginning of the
     * incident.</p>
     */
    inline const Aws::Vector<Action>& GetActions() const { return m_actions; }
    template<typename ActionsT = Aws::Vector<Action>>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = Aws::Vector<Action>>
    GetResponsePlanResult& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    template<typename ActionsT = Action>
    GetResponsePlanResult& AddActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions.emplace_back(std::forward<ActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the response plan.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetResponsePlanResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Chatbot chat channel used for collaboration during an incident.</p>
     */
    inline const ChatChannel& GetChatChannel() const { return m_chatChannel; }
    template<typename ChatChannelT = ChatChannel>
    void SetChatChannel(ChatChannelT&& value) { m_chatChannelHasBeenSet = true; m_chatChannel = std::forward<ChatChannelT>(value); }
    template<typename ChatChannelT = ChatChannel>
    GetResponsePlanResult& WithChatChannel(ChatChannelT&& value) { SetChatChannel(std::forward<ChatChannelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The long format name of the response plan. Can contain spaces.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    GetResponsePlanResult& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the contacts and escalation plans that the
     * response plan engages during an incident.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEngagements() const { return m_engagements; }
    template<typename EngagementsT = Aws::Vector<Aws::String>>
    void SetEngagements(EngagementsT&& value) { m_engagementsHasBeenSet = true; m_engagements = std::forward<EngagementsT>(value); }
    template<typename EngagementsT = Aws::Vector<Aws::String>>
    GetResponsePlanResult& WithEngagements(EngagementsT&& value) { SetEngagements(std::forward<EngagementsT>(value)); return *this;}
    template<typename EngagementsT = Aws::String>
    GetResponsePlanResult& AddEngagements(EngagementsT&& value) { m_engagementsHasBeenSet = true; m_engagements.emplace_back(std::forward<EngagementsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details used to create the incident when using this response plan.</p>
     */
    inline const IncidentTemplate& GetIncidentTemplate() const { return m_incidentTemplate; }
    template<typename IncidentTemplateT = IncidentTemplate>
    void SetIncidentTemplate(IncidentTemplateT&& value) { m_incidentTemplateHasBeenSet = true; m_incidentTemplate = std::forward<IncidentTemplateT>(value); }
    template<typename IncidentTemplateT = IncidentTemplate>
    GetResponsePlanResult& WithIncidentTemplate(IncidentTemplateT&& value) { SetIncidentTemplate(std::forward<IncidentTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about third-party services integrated into the Incident Manager
     * response plan.</p>
     */
    inline const Aws::Vector<Integration>& GetIntegrations() const { return m_integrations; }
    template<typename IntegrationsT = Aws::Vector<Integration>>
    void SetIntegrations(IntegrationsT&& value) { m_integrationsHasBeenSet = true; m_integrations = std::forward<IntegrationsT>(value); }
    template<typename IntegrationsT = Aws::Vector<Integration>>
    GetResponsePlanResult& WithIntegrations(IntegrationsT&& value) { SetIntegrations(std::forward<IntegrationsT>(value)); return *this;}
    template<typename IntegrationsT = Integration>
    GetResponsePlanResult& AddIntegrations(IntegrationsT&& value) { m_integrationsHasBeenSet = true; m_integrations.emplace_back(std::forward<IntegrationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The short format name of the response plan. The name can't contain
     * spaces.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetResponsePlanResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetResponsePlanResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Action> m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    ChatChannel m_chatChannel;
    bool m_chatChannelHasBeenSet = false;

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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
