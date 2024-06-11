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
    AWS_SSMINCIDENTS_API IncidentRecord();
    AWS_SSMINCIDENTS_API IncidentRecord(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API IncidentRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSMINCIDENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the incident record.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline IncidentRecord& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline IncidentRecord& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline IncidentRecord& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runbook, or automation document, that's run at the beginning of the
     * incident.</p>
     */
    inline const Aws::Vector<AutomationExecution>& GetAutomationExecutions() const{ return m_automationExecutions; }
    inline bool AutomationExecutionsHasBeenSet() const { return m_automationExecutionsHasBeenSet; }
    inline void SetAutomationExecutions(const Aws::Vector<AutomationExecution>& value) { m_automationExecutionsHasBeenSet = true; m_automationExecutions = value; }
    inline void SetAutomationExecutions(Aws::Vector<AutomationExecution>&& value) { m_automationExecutionsHasBeenSet = true; m_automationExecutions = std::move(value); }
    inline IncidentRecord& WithAutomationExecutions(const Aws::Vector<AutomationExecution>& value) { SetAutomationExecutions(value); return *this;}
    inline IncidentRecord& WithAutomationExecutions(Aws::Vector<AutomationExecution>&& value) { SetAutomationExecutions(std::move(value)); return *this;}
    inline IncidentRecord& AddAutomationExecutions(const AutomationExecution& value) { m_automationExecutionsHasBeenSet = true; m_automationExecutions.push_back(value); return *this; }
    inline IncidentRecord& AddAutomationExecutions(AutomationExecution&& value) { m_automationExecutionsHasBeenSet = true; m_automationExecutions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The chat channel used for collaboration during an incident.</p>
     */
    inline const ChatChannel& GetChatChannel() const{ return m_chatChannel; }
    inline bool ChatChannelHasBeenSet() const { return m_chatChannelHasBeenSet; }
    inline void SetChatChannel(const ChatChannel& value) { m_chatChannelHasBeenSet = true; m_chatChannel = value; }
    inline void SetChatChannel(ChatChannel&& value) { m_chatChannelHasBeenSet = true; m_chatChannel = std::move(value); }
    inline IncidentRecord& WithChatChannel(const ChatChannel& value) { SetChatChannel(value); return *this;}
    inline IncidentRecord& WithChatChannel(ChatChannel&& value) { SetChatChannel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when Incident Manager created the incident record.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline IncidentRecord& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline IncidentRecord& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The string Incident Manager uses to prevent duplicate incidents from being
     * created by the same incident in the same account.</p>
     */
    inline const Aws::String& GetDedupeString() const{ return m_dedupeString; }
    inline bool DedupeStringHasBeenSet() const { return m_dedupeStringHasBeenSet; }
    inline void SetDedupeString(const Aws::String& value) { m_dedupeStringHasBeenSet = true; m_dedupeString = value; }
    inline void SetDedupeString(Aws::String&& value) { m_dedupeStringHasBeenSet = true; m_dedupeString = std::move(value); }
    inline void SetDedupeString(const char* value) { m_dedupeStringHasBeenSet = true; m_dedupeString.assign(value); }
    inline IncidentRecord& WithDedupeString(const Aws::String& value) { SetDedupeString(value); return *this;}
    inline IncidentRecord& WithDedupeString(Aws::String&& value) { SetDedupeString(std::move(value)); return *this;}
    inline IncidentRecord& WithDedupeString(const char* value) { SetDedupeString(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The impact of the incident on customers and applications.</p> <p
     * class="title"> <b>Supported impact codes</b> </p> <ul> <li> <p> <code>1</code> -
     * Critical</p> </li> <li> <p> <code>2</code> - High</p> </li> <li> <p>
     * <code>3</code> - Medium</p> </li> <li> <p> <code>4</code> - Low</p> </li> <li>
     * <p> <code>5</code> - No Impact</p> </li> </ul>
     */
    inline int GetImpact() const{ return m_impact; }
    inline bool ImpactHasBeenSet() const { return m_impactHasBeenSet; }
    inline void SetImpact(int value) { m_impactHasBeenSet = true; m_impact = value; }
    inline IncidentRecord& WithImpact(int value) { SetImpact(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the action that started the incident.</p>
     */
    inline const IncidentRecordSource& GetIncidentRecordSource() const{ return m_incidentRecordSource; }
    inline bool IncidentRecordSourceHasBeenSet() const { return m_incidentRecordSourceHasBeenSet; }
    inline void SetIncidentRecordSource(const IncidentRecordSource& value) { m_incidentRecordSourceHasBeenSet = true; m_incidentRecordSource = value; }
    inline void SetIncidentRecordSource(IncidentRecordSource&& value) { m_incidentRecordSourceHasBeenSet = true; m_incidentRecordSource = std::move(value); }
    inline IncidentRecord& WithIncidentRecordSource(const IncidentRecordSource& value) { SetIncidentRecordSource(value); return *this;}
    inline IncidentRecord& WithIncidentRecordSource(IncidentRecordSource&& value) { SetIncidentRecordSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Who modified the incident most recently.</p>
     */
    inline const Aws::String& GetLastModifiedBy() const{ return m_lastModifiedBy; }
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }
    inline void SetLastModifiedBy(const Aws::String& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }
    inline void SetLastModifiedBy(Aws::String&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }
    inline void SetLastModifiedBy(const char* value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy.assign(value); }
    inline IncidentRecord& WithLastModifiedBy(const Aws::String& value) { SetLastModifiedBy(value); return *this;}
    inline IncidentRecord& WithLastModifiedBy(Aws::String&& value) { SetLastModifiedBy(std::move(value)); return *this;}
    inline IncidentRecord& WithLastModifiedBy(const char* value) { SetLastModifiedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the incident was most recently modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline IncidentRecord& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline IncidentRecord& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon SNS targets that are notified when updates are made to an
     * incident.</p>
     */
    inline const Aws::Vector<NotificationTargetItem>& GetNotificationTargets() const{ return m_notificationTargets; }
    inline bool NotificationTargetsHasBeenSet() const { return m_notificationTargetsHasBeenSet; }
    inline void SetNotificationTargets(const Aws::Vector<NotificationTargetItem>& value) { m_notificationTargetsHasBeenSet = true; m_notificationTargets = value; }
    inline void SetNotificationTargets(Aws::Vector<NotificationTargetItem>&& value) { m_notificationTargetsHasBeenSet = true; m_notificationTargets = std::move(value); }
    inline IncidentRecord& WithNotificationTargets(const Aws::Vector<NotificationTargetItem>& value) { SetNotificationTargets(value); return *this;}
    inline IncidentRecord& WithNotificationTargets(Aws::Vector<NotificationTargetItem>&& value) { SetNotificationTargets(std::move(value)); return *this;}
    inline IncidentRecord& AddNotificationTargets(const NotificationTargetItem& value) { m_notificationTargetsHasBeenSet = true; m_notificationTargets.push_back(value); return *this; }
    inline IncidentRecord& AddNotificationTargets(NotificationTargetItem&& value) { m_notificationTargetsHasBeenSet = true; m_notificationTargets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the incident was resolved. This appears as a timeline
     * event.</p>
     */
    inline const Aws::Utils::DateTime& GetResolvedTime() const{ return m_resolvedTime; }
    inline bool ResolvedTimeHasBeenSet() const { return m_resolvedTimeHasBeenSet; }
    inline void SetResolvedTime(const Aws::Utils::DateTime& value) { m_resolvedTimeHasBeenSet = true; m_resolvedTime = value; }
    inline void SetResolvedTime(Aws::Utils::DateTime&& value) { m_resolvedTimeHasBeenSet = true; m_resolvedTime = std::move(value); }
    inline IncidentRecord& WithResolvedTime(const Aws::Utils::DateTime& value) { SetResolvedTime(value); return *this;}
    inline IncidentRecord& WithResolvedTime(Aws::Utils::DateTime&& value) { SetResolvedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the incident.</p>
     */
    inline const IncidentRecordStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const IncidentRecordStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(IncidentRecordStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline IncidentRecord& WithStatus(const IncidentRecordStatus& value) { SetStatus(value); return *this;}
    inline IncidentRecord& WithStatus(IncidentRecordStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The summary of the incident. The summary is a brief synopsis of what
     * occurred, what's currently happening, and context of the incident.</p>
     */
    inline const Aws::String& GetSummary() const{ return m_summary; }
    inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
    inline void SetSummary(const Aws::String& value) { m_summaryHasBeenSet = true; m_summary = value; }
    inline void SetSummary(Aws::String&& value) { m_summaryHasBeenSet = true; m_summary = std::move(value); }
    inline void SetSummary(const char* value) { m_summaryHasBeenSet = true; m_summary.assign(value); }
    inline IncidentRecord& WithSummary(const Aws::String& value) { SetSummary(value); return *this;}
    inline IncidentRecord& WithSummary(Aws::String&& value) { SetSummary(std::move(value)); return *this;}
    inline IncidentRecord& WithSummary(const char* value) { SetSummary(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the incident.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline IncidentRecord& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline IncidentRecord& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline IncidentRecord& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<AutomationExecution> m_automationExecutions;
    bool m_automationExecutionsHasBeenSet = false;

    ChatChannel m_chatChannel;
    bool m_chatChannelHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_dedupeString;
    bool m_dedupeStringHasBeenSet = false;

    int m_impact;
    bool m_impactHasBeenSet = false;

    IncidentRecordSource m_incidentRecordSource;
    bool m_incidentRecordSourceHasBeenSet = false;

    Aws::String m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Vector<NotificationTargetItem> m_notificationTargets;
    bool m_notificationTargetsHasBeenSet = false;

    Aws::Utils::DateTime m_resolvedTime;
    bool m_resolvedTimeHasBeenSet = false;

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
