/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-incidents/model/ChatChannel.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm-incidents/model/IncidentRecordSource.h>
#include <aws/ssm-incidents/model/IncidentRecordStatus.h>
#include <aws/ssm-incidents/model/AutomationExecution.h>
#include <aws/ssm-incidents/model/NotificationTargetItem.h>
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
namespace SSMIncidents
{
namespace Model
{

  /**
   * <p>The record of the incident that's created when an incident
   * occurs.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/IncidentRecord">AWS
   * API Reference</a></p>
   */
  class IncidentRecord
  {
  public:
    AWS_SSMINCIDENTS_API IncidentRecord() = default;
    AWS_SSMINCIDENTS_API IncidentRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API IncidentRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the incident record.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    IncidentRecord& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runbook, or automation document, that's run at the beginning of the
     * incident.</p>
     */
    inline const Aws::Vector<AutomationExecution>& GetAutomationExecutions() const { return m_automationExecutions; }
    inline bool AutomationExecutionsHasBeenSet() const { return m_automationExecutionsHasBeenSet; }
    template<typename AutomationExecutionsT = Aws::Vector<AutomationExecution>>
    void SetAutomationExecutions(AutomationExecutionsT&& value) { m_automationExecutionsHasBeenSet = true; m_automationExecutions = std::forward<AutomationExecutionsT>(value); }
    template<typename AutomationExecutionsT = Aws::Vector<AutomationExecution>>
    IncidentRecord& WithAutomationExecutions(AutomationExecutionsT&& value) { SetAutomationExecutions(std::forward<AutomationExecutionsT>(value)); return *this;}
    template<typename AutomationExecutionsT = AutomationExecution>
    IncidentRecord& AddAutomationExecutions(AutomationExecutionsT&& value) { m_automationExecutionsHasBeenSet = true; m_automationExecutions.emplace_back(std::forward<AutomationExecutionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The chat channel used for collaboration during an incident.</p>
     */
    inline const ChatChannel& GetChatChannel() const { return m_chatChannel; }
    inline bool ChatChannelHasBeenSet() const { return m_chatChannelHasBeenSet; }
    template<typename ChatChannelT = ChatChannel>
    void SetChatChannel(ChatChannelT&& value) { m_chatChannelHasBeenSet = true; m_chatChannel = std::forward<ChatChannelT>(value); }
    template<typename ChatChannelT = ChatChannel>
    IncidentRecord& WithChatChannel(ChatChannelT&& value) { SetChatChannel(std::forward<ChatChannelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when Incident Manager created the incident record.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    IncidentRecord& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The string Incident Manager uses to prevent duplicate incidents from being
     * created by the same incident in the same account.</p>
     */
    inline const Aws::String& GetDedupeString() const { return m_dedupeString; }
    inline bool DedupeStringHasBeenSet() const { return m_dedupeStringHasBeenSet; }
    template<typename DedupeStringT = Aws::String>
    void SetDedupeString(DedupeStringT&& value) { m_dedupeStringHasBeenSet = true; m_dedupeString = std::forward<DedupeStringT>(value); }
    template<typename DedupeStringT = Aws::String>
    IncidentRecord& WithDedupeString(DedupeStringT&& value) { SetDedupeString(std::forward<DedupeStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The impact of the incident on customers and applications.</p> <p
     * class="title"> <b>Supported impact codes</b> </p> <ul> <li> <p> <code>1</code> -
     * Critical</p> </li> <li> <p> <code>2</code> - High</p> </li> <li> <p>
     * <code>3</code> - Medium</p> </li> <li> <p> <code>4</code> - Low</p> </li> <li>
     * <p> <code>5</code> - No Impact</p> </li> </ul>
     */
    inline int GetImpact() const { return m_impact; }
    inline bool ImpactHasBeenSet() const { return m_impactHasBeenSet; }
    inline void SetImpact(int value) { m_impactHasBeenSet = true; m_impact = value; }
    inline IncidentRecord& WithImpact(int value) { SetImpact(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the action that started the incident.</p>
     */
    inline const IncidentRecordSource& GetIncidentRecordSource() const { return m_incidentRecordSource; }
    inline bool IncidentRecordSourceHasBeenSet() const { return m_incidentRecordSourceHasBeenSet; }
    template<typename IncidentRecordSourceT = IncidentRecordSource>
    void SetIncidentRecordSource(IncidentRecordSourceT&& value) { m_incidentRecordSourceHasBeenSet = true; m_incidentRecordSource = std::forward<IncidentRecordSourceT>(value); }
    template<typename IncidentRecordSourceT = IncidentRecordSource>
    IncidentRecord& WithIncidentRecordSource(IncidentRecordSourceT&& value) { SetIncidentRecordSource(std::forward<IncidentRecordSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Who modified the incident most recently.</p>
     */
    inline const Aws::String& GetLastModifiedBy() const { return m_lastModifiedBy; }
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }
    template<typename LastModifiedByT = Aws::String>
    void SetLastModifiedBy(LastModifiedByT&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::forward<LastModifiedByT>(value); }
    template<typename LastModifiedByT = Aws::String>
    IncidentRecord& WithLastModifiedBy(LastModifiedByT&& value) { SetLastModifiedBy(std::forward<LastModifiedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the incident was most recently modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    IncidentRecord& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon SNS targets that are notified when updates are made to an
     * incident.</p>
     */
    inline const Aws::Vector<NotificationTargetItem>& GetNotificationTargets() const { return m_notificationTargets; }
    inline bool NotificationTargetsHasBeenSet() const { return m_notificationTargetsHasBeenSet; }
    template<typename NotificationTargetsT = Aws::Vector<NotificationTargetItem>>
    void SetNotificationTargets(NotificationTargetsT&& value) { m_notificationTargetsHasBeenSet = true; m_notificationTargets = std::forward<NotificationTargetsT>(value); }
    template<typename NotificationTargetsT = Aws::Vector<NotificationTargetItem>>
    IncidentRecord& WithNotificationTargets(NotificationTargetsT&& value) { SetNotificationTargets(std::forward<NotificationTargetsT>(value)); return *this;}
    template<typename NotificationTargetsT = NotificationTargetItem>
    IncidentRecord& AddNotificationTargets(NotificationTargetsT&& value) { m_notificationTargetsHasBeenSet = true; m_notificationTargets.emplace_back(std::forward<NotificationTargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the incident was resolved. This appears as a timeline
     * event.</p>
     */
    inline const Aws::Utils::DateTime& GetResolvedTime() const { return m_resolvedTime; }
    inline bool ResolvedTimeHasBeenSet() const { return m_resolvedTimeHasBeenSet; }
    template<typename ResolvedTimeT = Aws::Utils::DateTime>
    void SetResolvedTime(ResolvedTimeT&& value) { m_resolvedTimeHasBeenSet = true; m_resolvedTime = std::forward<ResolvedTimeT>(value); }
    template<typename ResolvedTimeT = Aws::Utils::DateTime>
    IncidentRecord& WithResolvedTime(ResolvedTimeT&& value) { SetResolvedTime(std::forward<ResolvedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the incident.</p>
     */
    inline IncidentRecordStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(IncidentRecordStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline IncidentRecord& WithStatus(IncidentRecordStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summary of the incident. The summary is a brief synopsis of what
     * occurred, what's currently happening, and context of the incident.</p>
     */
    inline const Aws::String& GetSummary() const { return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    template<typename SummaryT = Aws::String>
    void SetSummary(SummaryT&& value) { m_summaryHasBeenSet = true; m_summary = std::forward<SummaryT>(value); }
    template<typename SummaryT = Aws::String>
    IncidentRecord& WithSummary(SummaryT&& value) { SetSummary(std::forward<SummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the incident.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    IncidentRecord& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<AutomationExecution> m_automationExecutions;
    bool m_automationExecutionsHasBeenSet = false;

    ChatChannel m_chatChannel;
    bool m_chatChannelHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_dedupeString;
    bool m_dedupeStringHasBeenSet = false;

    int m_impact{0};
    bool m_impactHasBeenSet = false;

    IncidentRecordSource m_incidentRecordSource;
    bool m_incidentRecordSourceHasBeenSet = false;

    Aws::String m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Vector<NotificationTargetItem> m_notificationTargets;
    bool m_notificationTargetsHasBeenSet = false;

    Aws::Utils::DateTime m_resolvedTime{};
    bool m_resolvedTimeHasBeenSet = false;

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
