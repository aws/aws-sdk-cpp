/**
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
    AWS_SSMINCIDENTS_API UpdateIncidentRecordRequest() = default;

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
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    UpdateIncidentRecordRequest& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Chatbot chat channel where responders can collaborate.</p>
     */
    inline const ChatChannel& GetChatChannel() const { return m_chatChannel; }
    inline bool ChatChannelHasBeenSet() const { return m_chatChannelHasBeenSet; }
    template<typename ChatChannelT = ChatChannel>
    void SetChatChannel(ChatChannelT&& value) { m_chatChannelHasBeenSet = true; m_chatChannel = std::forward<ChatChannelT>(value); }
    template<typename ChatChannelT = ChatChannel>
    UpdateIncidentRecordRequest& WithChatChannel(ChatChannelT&& value) { SetChatChannel(std::forward<ChatChannelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that ensures that a client calls the operation only once with the
     * specified details.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    UpdateIncidentRecordRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
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
    inline int GetImpact() const { return m_impact; }
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
    inline const Aws::Vector<NotificationTargetItem>& GetNotificationTargets() const { return m_notificationTargets; }
    inline bool NotificationTargetsHasBeenSet() const { return m_notificationTargetsHasBeenSet; }
    template<typename NotificationTargetsT = Aws::Vector<NotificationTargetItem>>
    void SetNotificationTargets(NotificationTargetsT&& value) { m_notificationTargetsHasBeenSet = true; m_notificationTargets = std::forward<NotificationTargetsT>(value); }
    template<typename NotificationTargetsT = Aws::Vector<NotificationTargetItem>>
    UpdateIncidentRecordRequest& WithNotificationTargets(NotificationTargetsT&& value) { SetNotificationTargets(std::forward<NotificationTargetsT>(value)); return *this;}
    template<typename NotificationTargetsT = NotificationTargetItem>
    UpdateIncidentRecordRequest& AddNotificationTargets(NotificationTargetsT&& value) { m_notificationTargetsHasBeenSet = true; m_notificationTargets.emplace_back(std::forward<NotificationTargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the incident. Possible statuses are <code>Open</code> or
     * <code>Resolved</code>.</p>
     */
    inline IncidentRecordStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(IncidentRecordStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateIncidentRecordRequest& WithStatus(IncidentRecordStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A longer description of what occurred during the incident.</p>
     */
    inline const Aws::String& GetSummary() const { return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    template<typename SummaryT = Aws::String>
    void SetSummary(SummaryT&& value) { m_summaryHasBeenSet = true; m_summary = std::forward<SummaryT>(value); }
    template<typename SummaryT = Aws::String>
    UpdateIncidentRecordRequest& WithSummary(SummaryT&& value) { SetSummary(std::forward<SummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of the incident.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    UpdateIncidentRecordRequest& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    ChatChannel m_chatChannel;
    bool m_chatChannelHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    int m_impact{0};
    bool m_impactHasBeenSet = false;

    Aws::Vector<NotificationTargetItem> m_notificationTargets;
    bool m_notificationTargetsHasBeenSet = false;

    IncidentRecordStatus m_status{IncidentRecordStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_summary;
    bool m_summaryHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
