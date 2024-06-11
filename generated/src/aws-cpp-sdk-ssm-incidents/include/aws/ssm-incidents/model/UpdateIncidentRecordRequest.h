﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/ssm-incidents/SSMIncidentsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-incidents/model/ChatChannel.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-incidents/model/IncidentRecordStatus.h>
#include <aws/ssm-incidents/model/NotificationTargetItem.h>
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
  class UpdateIncidentRecordRequest : public SSMIncidentsRequest
  {
  public:
    AWS_SSMINCIDENTS_API UpdateIncidentRecordRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateIncidentRecord"; }

    AWS_SSMINCIDENTS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the incident record you are updating.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline UpdateIncidentRecordRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateIncidentRecordRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateIncidentRecordRequest& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Chatbot chat channel where responders can collaborate.</p>
     */
    inline const ChatChannel& GetChatChannel() const{ return m_chatChannel; }
    inline bool ChatChannelHasBeenSet() const { return m_chatChannelHasBeenSet; }
    inline void SetChatChannel(const ChatChannel& value) { m_chatChannelHasBeenSet = true; m_chatChannel = value; }
    inline void SetChatChannel(ChatChannel&& value) { m_chatChannelHasBeenSet = true; m_chatChannel = std::move(value); }
    inline UpdateIncidentRecordRequest& WithChatChannel(const ChatChannel& value) { SetChatChannel(value); return *this;}
    inline UpdateIncidentRecordRequest& WithChatChannel(ChatChannel&& value) { SetChatChannel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that ensures that a client calls the operation only once with the
     * specified details.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline UpdateIncidentRecordRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateIncidentRecordRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateIncidentRecordRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the impact of the incident to customers and applications. If you
     * provide an impact for an incident, it overwrites the impact provided by the
     * response plan.</p> <p class="title"> <b>Supported impact codes</b> </p> <ul>
     * <li> <p> <code>1</code> - Critical</p> </li> <li> <p> <code>2</code> - High</p>
     * </li> <li> <p> <code>3</code> - Medium</p> </li> <li> <p> <code>4</code> -
     * Low</p> </li> <li> <p> <code>5</code> - No Impact</p> </li> </ul>
     */
    inline int GetImpact() const{ return m_impact; }
    inline bool ImpactHasBeenSet() const { return m_impactHasBeenSet; }
    inline void SetImpact(int value) { m_impactHasBeenSet = true; m_impact = value; }
    inline UpdateIncidentRecordRequest& WithImpact(int value) { SetImpact(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon SNS targets that Incident Manager notifies when a client updates
     * an incident.</p> <p>Using multiple SNS topics creates redundancy in the event
     * that a Region is down during the incident.</p>
     */
    inline const Aws::Vector<NotificationTargetItem>& GetNotificationTargets() const{ return m_notificationTargets; }
    inline bool NotificationTargetsHasBeenSet() const { return m_notificationTargetsHasBeenSet; }
    inline void SetNotificationTargets(const Aws::Vector<NotificationTargetItem>& value) { m_notificationTargetsHasBeenSet = true; m_notificationTargets = value; }
    inline void SetNotificationTargets(Aws::Vector<NotificationTargetItem>&& value) { m_notificationTargetsHasBeenSet = true; m_notificationTargets = std::move(value); }
    inline UpdateIncidentRecordRequest& WithNotificationTargets(const Aws::Vector<NotificationTargetItem>& value) { SetNotificationTargets(value); return *this;}
    inline UpdateIncidentRecordRequest& WithNotificationTargets(Aws::Vector<NotificationTargetItem>&& value) { SetNotificationTargets(std::move(value)); return *this;}
    inline UpdateIncidentRecordRequest& AddNotificationTargets(const NotificationTargetItem& value) { m_notificationTargetsHasBeenSet = true; m_notificationTargets.push_back(value); return *this; }
    inline UpdateIncidentRecordRequest& AddNotificationTargets(NotificationTargetItem&& value) { m_notificationTargetsHasBeenSet = true; m_notificationTargets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the incident. Possible statuses are <code>Open</code> or
     * <code>Resolved</code>.</p>
     */
    inline const IncidentRecordStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const IncidentRecordStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(IncidentRecordStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline UpdateIncidentRecordRequest& WithStatus(const IncidentRecordStatus& value) { SetStatus(value); return *this;}
    inline UpdateIncidentRecordRequest& WithStatus(IncidentRecordStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A longer description of what occurred during the incident.</p>
     */
    inline const Aws::String& GetSummary() const{ return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    inline void SetSummary(const Aws::String& value) { m_summaryHasBeenSet = true; m_summary = value; }
    inline void SetSummary(Aws::String&& value) { m_summaryHasBeenSet = true; m_summary = std::move(value); }
    inline void SetSummary(const char* value) { m_summaryHasBeenSet = true; m_summary.assign(value); }
    inline UpdateIncidentRecordRequest& WithSummary(const Aws::String& value) { SetSummary(value); return *this;}
    inline UpdateIncidentRecordRequest& WithSummary(Aws::String&& value) { SetSummary(std::move(value)); return *this;}
    inline UpdateIncidentRecordRequest& WithSummary(const char* value) { SetSummary(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of the incident.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline UpdateIncidentRecordRequest& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline UpdateIncidentRecordRequest& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline UpdateIncidentRecordRequest& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    ChatChannel m_chatChannel;
    bool m_chatChannelHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    int m_impact;
    bool m_impactHasBeenSet = false;

    Aws::Vector<NotificationTargetItem> m_notificationTargets;
    bool m_notificationTargetsHasBeenSet = false;

    IncidentRecordStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_summary;
    bool m_summaryHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
