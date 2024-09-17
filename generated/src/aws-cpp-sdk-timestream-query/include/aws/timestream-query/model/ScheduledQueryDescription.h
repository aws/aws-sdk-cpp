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
    AWS_TIMESTREAMQUERY_API ScheduledQueryDescription();
    AWS_TIMESTREAMQUERY_API ScheduledQueryDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API ScheduledQueryDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Scheduled query ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ScheduledQueryDescription& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ScheduledQueryDescription& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ScheduledQueryDescription& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the scheduled query.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ScheduledQueryDescription& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ScheduledQueryDescription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ScheduledQueryDescription& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query to be run.</p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }
    inline void SetQueryString(const Aws::String& value) { m_queryStringHasBeenSet = true; m_queryString = value; }
    inline void SetQueryString(Aws::String&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }
    inline void SetQueryString(const char* value) { m_queryStringHasBeenSet = true; m_queryString.assign(value); }
    inline ScheduledQueryDescription& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}
    inline ScheduledQueryDescription& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}
    inline ScheduledQueryDescription& WithQueryString(const char* value) { SetQueryString(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creation time of the scheduled query.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ScheduledQueryDescription& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ScheduledQueryDescription& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>State of the scheduled query. </p>
     */
    inline const ScheduledQueryState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ScheduledQueryState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ScheduledQueryState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline ScheduledQueryDescription& WithState(const ScheduledQueryState& value) { SetState(value); return *this;}
    inline ScheduledQueryDescription& WithState(ScheduledQueryState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Last time the query was run.</p>
     */
    inline const Aws::Utils::DateTime& GetPreviousInvocationTime() const{ return m_previousInvocationTime; }
    inline bool PreviousInvocationTimeHasBeenSet() const { return m_previousInvocationTimeHasBeenSet; }
    inline void SetPreviousInvocationTime(const Aws::Utils::DateTime& value) { m_previousInvocationTimeHasBeenSet = true; m_previousInvocationTime = value; }
    inline void SetPreviousInvocationTime(Aws::Utils::DateTime&& value) { m_previousInvocationTimeHasBeenSet = true; m_previousInvocationTime = std::move(value); }
    inline ScheduledQueryDescription& WithPreviousInvocationTime(const Aws::Utils::DateTime& value) { SetPreviousInvocationTime(value); return *this;}
    inline ScheduledQueryDescription& WithPreviousInvocationTime(Aws::Utils::DateTime&& value) { SetPreviousInvocationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next time the scheduled query is scheduled to run.</p>
     */
    inline const Aws::Utils::DateTime& GetNextInvocationTime() const{ return m_nextInvocationTime; }
    inline bool NextInvocationTimeHasBeenSet() const { return m_nextInvocationTimeHasBeenSet; }
    inline void SetNextInvocationTime(const Aws::Utils::DateTime& value) { m_nextInvocationTimeHasBeenSet = true; m_nextInvocationTime = value; }
    inline void SetNextInvocationTime(Aws::Utils::DateTime&& value) { m_nextInvocationTimeHasBeenSet = true; m_nextInvocationTime = std::move(value); }
    inline ScheduledQueryDescription& WithNextInvocationTime(const Aws::Utils::DateTime& value) { SetNextInvocationTime(value); return *this;}
    inline ScheduledQueryDescription& WithNextInvocationTime(Aws::Utils::DateTime&& value) { SetNextInvocationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Schedule configuration.</p>
     */
    inline const ScheduleConfiguration& GetScheduleConfiguration() const{ return m_scheduleConfiguration; }
    inline bool ScheduleConfigurationHasBeenSet() const { return m_scheduleConfigurationHasBeenSet; }
    inline void SetScheduleConfiguration(const ScheduleConfiguration& value) { m_scheduleConfigurationHasBeenSet = true; m_scheduleConfiguration = value; }
    inline void SetScheduleConfiguration(ScheduleConfiguration&& value) { m_scheduleConfigurationHasBeenSet = true; m_scheduleConfiguration = std::move(value); }
    inline ScheduledQueryDescription& WithScheduleConfiguration(const ScheduleConfiguration& value) { SetScheduleConfiguration(value); return *this;}
    inline ScheduledQueryDescription& WithScheduleConfiguration(ScheduleConfiguration&& value) { SetScheduleConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Notification configuration.</p>
     */
    inline const NotificationConfiguration& GetNotificationConfiguration() const{ return m_notificationConfiguration; }
    inline bool NotificationConfigurationHasBeenSet() const { return m_notificationConfigurationHasBeenSet; }
    inline void SetNotificationConfiguration(const NotificationConfiguration& value) { m_notificationConfigurationHasBeenSet = true; m_notificationConfiguration = value; }
    inline void SetNotificationConfiguration(NotificationConfiguration&& value) { m_notificationConfigurationHasBeenSet = true; m_notificationConfiguration = std::move(value); }
    inline ScheduledQueryDescription& WithNotificationConfiguration(const NotificationConfiguration& value) { SetNotificationConfiguration(value); return *this;}
    inline ScheduledQueryDescription& WithNotificationConfiguration(NotificationConfiguration&& value) { SetNotificationConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Scheduled query target store configuration.</p>
     */
    inline const TargetConfiguration& GetTargetConfiguration() const{ return m_targetConfiguration; }
    inline bool TargetConfigurationHasBeenSet() const { return m_targetConfigurationHasBeenSet; }
    inline void SetTargetConfiguration(const TargetConfiguration& value) { m_targetConfigurationHasBeenSet = true; m_targetConfiguration = value; }
    inline void SetTargetConfiguration(TargetConfiguration&& value) { m_targetConfigurationHasBeenSet = true; m_targetConfiguration = std::move(value); }
    inline ScheduledQueryDescription& WithTargetConfiguration(const TargetConfiguration& value) { SetTargetConfiguration(value); return *this;}
    inline ScheduledQueryDescription& WithTargetConfiguration(TargetConfiguration&& value) { SetTargetConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>IAM role that Timestream uses to run the schedule query.</p>
     */
    inline const Aws::String& GetScheduledQueryExecutionRoleArn() const{ return m_scheduledQueryExecutionRoleArn; }
    inline bool ScheduledQueryExecutionRoleArnHasBeenSet() const { return m_scheduledQueryExecutionRoleArnHasBeenSet; }
    inline void SetScheduledQueryExecutionRoleArn(const Aws::String& value) { m_scheduledQueryExecutionRoleArnHasBeenSet = true; m_scheduledQueryExecutionRoleArn = value; }
    inline void SetScheduledQueryExecutionRoleArn(Aws::String&& value) { m_scheduledQueryExecutionRoleArnHasBeenSet = true; m_scheduledQueryExecutionRoleArn = std::move(value); }
    inline void SetScheduledQueryExecutionRoleArn(const char* value) { m_scheduledQueryExecutionRoleArnHasBeenSet = true; m_scheduledQueryExecutionRoleArn.assign(value); }
    inline ScheduledQueryDescription& WithScheduledQueryExecutionRoleArn(const Aws::String& value) { SetScheduledQueryExecutionRoleArn(value); return *this;}
    inline ScheduledQueryDescription& WithScheduledQueryExecutionRoleArn(Aws::String&& value) { SetScheduledQueryExecutionRoleArn(std::move(value)); return *this;}
    inline ScheduledQueryDescription& WithScheduledQueryExecutionRoleArn(const char* value) { SetScheduledQueryExecutionRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A customer provided KMS key used to encrypt the scheduled query resource.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline ScheduledQueryDescription& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline ScheduledQueryDescription& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline ScheduledQueryDescription& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Error-reporting configuration for the scheduled query.</p>
     */
    inline const ErrorReportConfiguration& GetErrorReportConfiguration() const{ return m_errorReportConfiguration; }
    inline bool ErrorReportConfigurationHasBeenSet() const { return m_errorReportConfigurationHasBeenSet; }
    inline void SetErrorReportConfiguration(const ErrorReportConfiguration& value) { m_errorReportConfigurationHasBeenSet = true; m_errorReportConfiguration = value; }
    inline void SetErrorReportConfiguration(ErrorReportConfiguration&& value) { m_errorReportConfigurationHasBeenSet = true; m_errorReportConfiguration = std::move(value); }
    inline ScheduledQueryDescription& WithErrorReportConfiguration(const ErrorReportConfiguration& value) { SetErrorReportConfiguration(value); return *this;}
    inline ScheduledQueryDescription& WithErrorReportConfiguration(ErrorReportConfiguration&& value) { SetErrorReportConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Runtime summary for the last scheduled query run. </p>
     */
    inline const ScheduledQueryRunSummary& GetLastRunSummary() const{ return m_lastRunSummary; }
    inline bool LastRunSummaryHasBeenSet() const { return m_lastRunSummaryHasBeenSet; }
    inline void SetLastRunSummary(const ScheduledQueryRunSummary& value) { m_lastRunSummaryHasBeenSet = true; m_lastRunSummary = value; }
    inline void SetLastRunSummary(ScheduledQueryRunSummary&& value) { m_lastRunSummaryHasBeenSet = true; m_lastRunSummary = std::move(value); }
    inline ScheduledQueryDescription& WithLastRunSummary(const ScheduledQueryRunSummary& value) { SetLastRunSummary(value); return *this;}
    inline ScheduledQueryDescription& WithLastRunSummary(ScheduledQueryRunSummary&& value) { SetLastRunSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Runtime summary for the last five failed scheduled query runs.</p>
     */
    inline const Aws::Vector<ScheduledQueryRunSummary>& GetRecentlyFailedRuns() const{ return m_recentlyFailedRuns; }
    inline bool RecentlyFailedRunsHasBeenSet() const { return m_recentlyFailedRunsHasBeenSet; }
    inline void SetRecentlyFailedRuns(const Aws::Vector<ScheduledQueryRunSummary>& value) { m_recentlyFailedRunsHasBeenSet = true; m_recentlyFailedRuns = value; }
    inline void SetRecentlyFailedRuns(Aws::Vector<ScheduledQueryRunSummary>&& value) { m_recentlyFailedRunsHasBeenSet = true; m_recentlyFailedRuns = std::move(value); }
    inline ScheduledQueryDescription& WithRecentlyFailedRuns(const Aws::Vector<ScheduledQueryRunSummary>& value) { SetRecentlyFailedRuns(value); return *this;}
    inline ScheduledQueryDescription& WithRecentlyFailedRuns(Aws::Vector<ScheduledQueryRunSummary>&& value) { SetRecentlyFailedRuns(std::move(value)); return *this;}
    inline ScheduledQueryDescription& AddRecentlyFailedRuns(const ScheduledQueryRunSummary& value) { m_recentlyFailedRunsHasBeenSet = true; m_recentlyFailedRuns.push_back(value); return *this; }
    inline ScheduledQueryDescription& AddRecentlyFailedRuns(ScheduledQueryRunSummary&& value) { m_recentlyFailedRunsHasBeenSet = true; m_recentlyFailedRuns.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    ScheduledQueryState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_previousInvocationTime;
    bool m_previousInvocationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_nextInvocationTime;
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
