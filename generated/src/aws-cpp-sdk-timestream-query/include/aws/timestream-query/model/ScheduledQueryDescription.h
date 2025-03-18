/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/timestream-query/model/ScheduledQueryState.h>
#include <aws/timestream-query/model/ScheduleConfiguration.h>
#include <aws/timestream-query/model/NotificationConfiguration.h>
#include <aws/timestream-query/model/TargetConfiguration.h>
#include <aws/timestream-query/model/ErrorReportConfiguration.h>
#include <aws/timestream-query/model/ScheduledQueryRunSummary.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace TimestreamQuery
{
namespace Model
{

  /**
   * <p>Structure that describes scheduled query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/ScheduledQueryDescription">AWS
   * API Reference</a></p>
   */
  class ScheduledQueryDescription
  {
  public:
    AWS_TIMESTREAMQUERY_API ScheduledQueryDescription() = default;
    AWS_TIMESTREAMQUERY_API ScheduledQueryDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API ScheduledQueryDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Scheduled query ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ScheduledQueryDescription& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the scheduled query.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ScheduledQueryDescription& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query to be run.</p>
     */
    inline const Aws::String& GetQueryString() const { return m_queryString; }
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }
    template<typename QueryStringT = Aws::String>
    void SetQueryString(QueryStringT&& value) { m_queryStringHasBeenSet = true; m_queryString = std::forward<QueryStringT>(value); }
    template<typename QueryStringT = Aws::String>
    ScheduledQueryDescription& WithQueryString(QueryStringT&& value) { SetQueryString(std::forward<QueryStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creation time of the scheduled query.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ScheduledQueryDescription& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>State of the scheduled query. </p>
     */
    inline ScheduledQueryState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ScheduledQueryState value) { m_stateHasBeenSet = true; m_state = value; }
    inline ScheduledQueryDescription& WithState(ScheduledQueryState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Last time the query was run.</p>
     */
    inline const Aws::Utils::DateTime& GetPreviousInvocationTime() const { return m_previousInvocationTime; }
    inline bool PreviousInvocationTimeHasBeenSet() const { return m_previousInvocationTimeHasBeenSet; }
    template<typename PreviousInvocationTimeT = Aws::Utils::DateTime>
    void SetPreviousInvocationTime(PreviousInvocationTimeT&& value) { m_previousInvocationTimeHasBeenSet = true; m_previousInvocationTime = std::forward<PreviousInvocationTimeT>(value); }
    template<typename PreviousInvocationTimeT = Aws::Utils::DateTime>
    ScheduledQueryDescription& WithPreviousInvocationTime(PreviousInvocationTimeT&& value) { SetPreviousInvocationTime(std::forward<PreviousInvocationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next time the scheduled query is scheduled to run.</p>
     */
    inline const Aws::Utils::DateTime& GetNextInvocationTime() const { return m_nextInvocationTime; }
    inline bool NextInvocationTimeHasBeenSet() const { return m_nextInvocationTimeHasBeenSet; }
    template<typename NextInvocationTimeT = Aws::Utils::DateTime>
    void SetNextInvocationTime(NextInvocationTimeT&& value) { m_nextInvocationTimeHasBeenSet = true; m_nextInvocationTime = std::forward<NextInvocationTimeT>(value); }
    template<typename NextInvocationTimeT = Aws::Utils::DateTime>
    ScheduledQueryDescription& WithNextInvocationTime(NextInvocationTimeT&& value) { SetNextInvocationTime(std::forward<NextInvocationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Schedule configuration.</p>
     */
    inline const ScheduleConfiguration& GetScheduleConfiguration() const { return m_scheduleConfiguration; }
    inline bool ScheduleConfigurationHasBeenSet() const { return m_scheduleConfigurationHasBeenSet; }
    template<typename ScheduleConfigurationT = ScheduleConfiguration>
    void SetScheduleConfiguration(ScheduleConfigurationT&& value) { m_scheduleConfigurationHasBeenSet = true; m_scheduleConfiguration = std::forward<ScheduleConfigurationT>(value); }
    template<typename ScheduleConfigurationT = ScheduleConfiguration>
    ScheduledQueryDescription& WithScheduleConfiguration(ScheduleConfigurationT&& value) { SetScheduleConfiguration(std::forward<ScheduleConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Notification configuration.</p>
     */
    inline const NotificationConfiguration& GetNotificationConfiguration() const { return m_notificationConfiguration; }
    inline bool NotificationConfigurationHasBeenSet() const { return m_notificationConfigurationHasBeenSet; }
    template<typename NotificationConfigurationT = NotificationConfiguration>
    void SetNotificationConfiguration(NotificationConfigurationT&& value) { m_notificationConfigurationHasBeenSet = true; m_notificationConfiguration = std::forward<NotificationConfigurationT>(value); }
    template<typename NotificationConfigurationT = NotificationConfiguration>
    ScheduledQueryDescription& WithNotificationConfiguration(NotificationConfigurationT&& value) { SetNotificationConfiguration(std::forward<NotificationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Scheduled query target store configuration.</p>
     */
    inline const TargetConfiguration& GetTargetConfiguration() const { return m_targetConfiguration; }
    inline bool TargetConfigurationHasBeenSet() const { return m_targetConfigurationHasBeenSet; }
    template<typename TargetConfigurationT = TargetConfiguration>
    void SetTargetConfiguration(TargetConfigurationT&& value) { m_targetConfigurationHasBeenSet = true; m_targetConfiguration = std::forward<TargetConfigurationT>(value); }
    template<typename TargetConfigurationT = TargetConfiguration>
    ScheduledQueryDescription& WithTargetConfiguration(TargetConfigurationT&& value) { SetTargetConfiguration(std::forward<TargetConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>IAM role that Timestream uses to run the schedule query.</p>
     */
    inline const Aws::String& GetScheduledQueryExecutionRoleArn() const { return m_scheduledQueryExecutionRoleArn; }
    inline bool ScheduledQueryExecutionRoleArnHasBeenSet() const { return m_scheduledQueryExecutionRoleArnHasBeenSet; }
    template<typename ScheduledQueryExecutionRoleArnT = Aws::String>
    void SetScheduledQueryExecutionRoleArn(ScheduledQueryExecutionRoleArnT&& value) { m_scheduledQueryExecutionRoleArnHasBeenSet = true; m_scheduledQueryExecutionRoleArn = std::forward<ScheduledQueryExecutionRoleArnT>(value); }
    template<typename ScheduledQueryExecutionRoleArnT = Aws::String>
    ScheduledQueryDescription& WithScheduledQueryExecutionRoleArn(ScheduledQueryExecutionRoleArnT&& value) { SetScheduledQueryExecutionRoleArn(std::forward<ScheduledQueryExecutionRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A customer provided KMS key used to encrypt the scheduled query resource.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    ScheduledQueryDescription& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error-reporting configuration for the scheduled query.</p>
     */
    inline const ErrorReportConfiguration& GetErrorReportConfiguration() const { return m_errorReportConfiguration; }
    inline bool ErrorReportConfigurationHasBeenSet() const { return m_errorReportConfigurationHasBeenSet; }
    template<typename ErrorReportConfigurationT = ErrorReportConfiguration>
    void SetErrorReportConfiguration(ErrorReportConfigurationT&& value) { m_errorReportConfigurationHasBeenSet = true; m_errorReportConfiguration = std::forward<ErrorReportConfigurationT>(value); }
    template<typename ErrorReportConfigurationT = ErrorReportConfiguration>
    ScheduledQueryDescription& WithErrorReportConfiguration(ErrorReportConfigurationT&& value) { SetErrorReportConfiguration(std::forward<ErrorReportConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Runtime summary for the last scheduled query run. </p>
     */
    inline const ScheduledQueryRunSummary& GetLastRunSummary() const { return m_lastRunSummary; }
    inline bool LastRunSummaryHasBeenSet() const { return m_lastRunSummaryHasBeenSet; }
    template<typename LastRunSummaryT = ScheduledQueryRunSummary>
    void SetLastRunSummary(LastRunSummaryT&& value) { m_lastRunSummaryHasBeenSet = true; m_lastRunSummary = std::forward<LastRunSummaryT>(value); }
    template<typename LastRunSummaryT = ScheduledQueryRunSummary>
    ScheduledQueryDescription& WithLastRunSummary(LastRunSummaryT&& value) { SetLastRunSummary(std::forward<LastRunSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Runtime summary for the last five failed scheduled query runs.</p>
     */
    inline const Aws::Vector<ScheduledQueryRunSummary>& GetRecentlyFailedRuns() const { return m_recentlyFailedRuns; }
    inline bool RecentlyFailedRunsHasBeenSet() const { return m_recentlyFailedRunsHasBeenSet; }
    template<typename RecentlyFailedRunsT = Aws::Vector<ScheduledQueryRunSummary>>
    void SetRecentlyFailedRuns(RecentlyFailedRunsT&& value) { m_recentlyFailedRunsHasBeenSet = true; m_recentlyFailedRuns = std::forward<RecentlyFailedRunsT>(value); }
    template<typename RecentlyFailedRunsT = Aws::Vector<ScheduledQueryRunSummary>>
    ScheduledQueryDescription& WithRecentlyFailedRuns(RecentlyFailedRunsT&& value) { SetRecentlyFailedRuns(std::forward<RecentlyFailedRunsT>(value)); return *this;}
    template<typename RecentlyFailedRunsT = ScheduledQueryRunSummary>
    ScheduledQueryDescription& AddRecentlyFailedRuns(RecentlyFailedRunsT&& value) { m_recentlyFailedRunsHasBeenSet = true; m_recentlyFailedRuns.emplace_back(std::forward<RecentlyFailedRunsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    ScheduledQueryState m_state{ScheduledQueryState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_previousInvocationTime{};
    bool m_previousInvocationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_nextInvocationTime{};
    bool m_nextInvocationTimeHasBeenSet = false;

    ScheduleConfiguration m_scheduleConfiguration;
    bool m_scheduleConfigurationHasBeenSet = false;

    NotificationConfiguration m_notificationConfiguration;
    bool m_notificationConfigurationHasBeenSet = false;

    TargetConfiguration m_targetConfiguration;
    bool m_targetConfigurationHasBeenSet = false;

    Aws::String m_scheduledQueryExecutionRoleArn;
    bool m_scheduledQueryExecutionRoleArnHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    ErrorReportConfiguration m_errorReportConfiguration;
    bool m_errorReportConfigurationHasBeenSet = false;

    ScheduledQueryRunSummary m_lastRunSummary;
    bool m_lastRunSummaryHasBeenSet = false;

    Aws::Vector<ScheduledQueryRunSummary> m_recentlyFailedRuns;
    bool m_recentlyFailedRunsHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
