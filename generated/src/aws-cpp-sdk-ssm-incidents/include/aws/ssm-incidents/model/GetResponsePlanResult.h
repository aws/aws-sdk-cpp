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
    AWS_SSMINCIDENTS_API GetResponsePlanResult();
    AWS_SSMINCIDENTS_API GetResponsePlanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMINCIDENTS_API GetResponsePlanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The actions that this response plan takes at the beginning of the
     * incident.</p>
     */
    inline const Aws::Vector<Action>& GetActions() const{ return m_actions; }

    /**
     * <p>The actions that this response plan takes at the beginning of the
     * incident.</p>
     */
    inline void SetActions(const Aws::Vector<Action>& value) { m_actions = value; }

    /**
     * <p>The actions that this response plan takes at the beginning of the
     * incident.</p>
     */
    inline void SetActions(Aws::Vector<Action>&& value) { m_actions = std::move(value); }

    /**
     * <p>The actions that this response plan takes at the beginning of the
     * incident.</p>
     */
    inline GetResponsePlanResult& WithActions(const Aws::Vector<Action>& value) { SetActions(value); return *this;}

    /**
     * <p>The actions that this response plan takes at the beginning of the
     * incident.</p>
     */
    inline GetResponsePlanResult& WithActions(Aws::Vector<Action>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>The actions that this response plan takes at the beginning of the
     * incident.</p>
     */
    inline GetResponsePlanResult& AddActions(const Action& value) { m_actions.push_back(value); return *this; }

    /**
     * <p>The actions that this response plan takes at the beginning of the
     * incident.</p>
     */
    inline GetResponsePlanResult& AddActions(Action&& value) { m_actions.push_back(std::move(value)); return *this; }


    /**
     * <p>The ARN of the response plan.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the response plan.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN of the response plan.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN of the response plan.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN of the response plan.</p>
     */
    inline GetResponsePlanResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the response plan.</p>
     */
    inline GetResponsePlanResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the response plan.</p>
     */
    inline GetResponsePlanResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Chatbot chat channel used for collaboration during an incident.</p>
     */
    inline const ChatChannel& GetChatChannel() const{ return m_chatChannel; }

    /**
     * <p>The Chatbot chat channel used for collaboration during an incident.</p>
     */
    inline void SetChatChannel(const ChatChannel& value) { m_chatChannel = value; }

    /**
     * <p>The Chatbot chat channel used for collaboration during an incident.</p>
     */
    inline void SetChatChannel(ChatChannel&& value) { m_chatChannel = std::move(value); }

    /**
     * <p>The Chatbot chat channel used for collaboration during an incident.</p>
     */
    inline GetResponsePlanResult& WithChatChannel(const ChatChannel& value) { SetChatChannel(value); return *this;}

    /**
     * <p>The Chatbot chat channel used for collaboration during an incident.</p>
     */
    inline GetResponsePlanResult& WithChatChannel(ChatChannel&& value) { SetChatChannel(std::move(value)); return *this;}


    /**
     * <p>The long format name of the response plan. Can contain spaces.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The long format name of the response plan. Can contain spaces.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }

    /**
     * <p>The long format name of the response plan. Can contain spaces.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }

    /**
     * <p>The long format name of the response plan. Can contain spaces.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }

    /**
     * <p>The long format name of the response plan. Can contain spaces.</p>
     */
    inline GetResponsePlanResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The long format name of the response plan. Can contain spaces.</p>
     */
    inline GetResponsePlanResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The long format name of the response plan. Can contain spaces.</p>
     */
    inline GetResponsePlanResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the contacts and escalation plans that the
     * response plan engages during an incident.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEngagements() const{ return m_engagements; }

    /**
     * <p>The Amazon Resource Name (ARN) for the contacts and escalation plans that the
     * response plan engages during an incident.</p>
     */
    inline void SetEngagements(const Aws::Vector<Aws::String>& value) { m_engagements = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the contacts and escalation plans that the
     * response plan engages during an incident.</p>
     */
    inline void SetEngagements(Aws::Vector<Aws::String>&& value) { m_engagements = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the contacts and escalation plans that the
     * response plan engages during an incident.</p>
     */
    inline GetResponsePlanResult& WithEngagements(const Aws::Vector<Aws::String>& value) { SetEngagements(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the contacts and escalation plans that the
     * response plan engages during an incident.</p>
     */
    inline GetResponsePlanResult& WithEngagements(Aws::Vector<Aws::String>&& value) { SetEngagements(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the contacts and escalation plans that the
     * response plan engages during an incident.</p>
     */
    inline GetResponsePlanResult& AddEngagements(const Aws::String& value) { m_engagements.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) for the contacts and escalation plans that the
     * response plan engages during an incident.</p>
     */
    inline GetResponsePlanResult& AddEngagements(Aws::String&& value) { m_engagements.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) for the contacts and escalation plans that the
     * response plan engages during an incident.</p>
     */
    inline GetResponsePlanResult& AddEngagements(const char* value) { m_engagements.push_back(value); return *this; }


    /**
     * <p>Details used to create the incident when using this response plan.</p>
     */
    inline const IncidentTemplate& GetIncidentTemplate() const{ return m_incidentTemplate; }

    /**
     * <p>Details used to create the incident when using this response plan.</p>
     */
    inline void SetIncidentTemplate(const IncidentTemplate& value) { m_incidentTemplate = value; }

    /**
     * <p>Details used to create the incident when using this response plan.</p>
     */
    inline void SetIncidentTemplate(IncidentTemplate&& value) { m_incidentTemplate = std::move(value); }

    /**
     * <p>Details used to create the incident when using this response plan.</p>
     */
    inline GetResponsePlanResult& WithIncidentTemplate(const IncidentTemplate& value) { SetIncidentTemplate(value); return *this;}

    /**
     * <p>Details used to create the incident when using this response plan.</p>
     */
    inline GetResponsePlanResult& WithIncidentTemplate(IncidentTemplate&& value) { SetIncidentTemplate(std::move(value)); return *this;}


    /**
     * <p>Information about third-party services integrated into the Incident Manager
     * response plan.</p>
     */
    inline const Aws::Vector<Integration>& GetIntegrations() const{ return m_integrations; }

    /**
     * <p>Information about third-party services integrated into the Incident Manager
     * response plan.</p>
     */
    inline void SetIntegrations(const Aws::Vector<Integration>& value) { m_integrations = value; }

    /**
     * <p>Information about third-party services integrated into the Incident Manager
     * response plan.</p>
     */
    inline void SetIntegrations(Aws::Vector<Integration>&& value) { m_integrations = std::move(value); }

    /**
     * <p>Information about third-party services integrated into the Incident Manager
     * response plan.</p>
     */
    inline GetResponsePlanResult& WithIntegrations(const Aws::Vector<Integration>& value) { SetIntegrations(value); return *this;}

    /**
     * <p>Information about third-party services integrated into the Incident Manager
     * response plan.</p>
     */
    inline GetResponsePlanResult& WithIntegrations(Aws::Vector<Integration>&& value) { SetIntegrations(std::move(value)); return *this;}

    /**
     * <p>Information about third-party services integrated into the Incident Manager
     * response plan.</p>
     */
    inline GetResponsePlanResult& AddIntegrations(const Integration& value) { m_integrations.push_back(value); return *this; }

    /**
     * <p>Information about third-party services integrated into the Incident Manager
     * response plan.</p>
     */
    inline GetResponsePlanResult& AddIntegrations(Integration&& value) { m_integrations.push_back(std::move(value)); return *this; }


    /**
     * <p>The short format name of the response plan. The name can't contain
     * spaces.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The short format name of the response plan. The name can't contain
     * spaces.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The short format name of the response plan. The name can't contain
     * spaces.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The short format name of the response plan. The name can't contain
     * spaces.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The short format name of the response plan. The name can't contain
     * spaces.</p>
     */
    inline GetResponsePlanResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The short format name of the response plan. The name can't contain
     * spaces.</p>
     */
    inline GetResponsePlanResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The short format name of the response plan. The name can't contain
     * spaces.</p>
     */
    inline GetResponsePlanResult& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::Vector<Action> m_actions;

    Aws::String m_arn;

    ChatChannel m_chatChannel;

    Aws::String m_displayName;

    Aws::Vector<Aws::String> m_engagements;

    IncidentTemplate m_incidentTemplate;

    Aws::Vector<Integration> m_integrations;

    Aws::String m_name;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
