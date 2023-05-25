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


    /**
     * <p>Scheduled query ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Scheduled query ARN.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>Scheduled query ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>Scheduled query ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>Scheduled query ARN.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>Scheduled query ARN.</p>
     */
    inline ScheduledQueryDescription& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Scheduled query ARN.</p>
     */
    inline ScheduledQueryDescription& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Scheduled query ARN.</p>
     */
    inline ScheduledQueryDescription& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Name of the scheduled query.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of the scheduled query.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name of the scheduled query.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of the scheduled query.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of the scheduled query.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of the scheduled query.</p>
     */
    inline ScheduledQueryDescription& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of the scheduled query.</p>
     */
    inline ScheduledQueryDescription& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of the scheduled query.</p>
     */
    inline ScheduledQueryDescription& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The query to be run.</p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }

    /**
     * <p>The query to be run.</p>
     */
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }

    /**
     * <p>The query to be run.</p>
     */
    inline void SetQueryString(const Aws::String& value) { m_queryStringHasBeenSet = true; m_queryString = value; }

    /**
     * <p>The query to be run.</p>
     */
    inline void SetQueryString(Aws::String&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }

    /**
     * <p>The query to be run.</p>
     */
    inline void SetQueryString(const char* value) { m_queryStringHasBeenSet = true; m_queryString.assign(value); }

    /**
     * <p>The query to be run.</p>
     */
    inline ScheduledQueryDescription& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}

    /**
     * <p>The query to be run.</p>
     */
    inline ScheduledQueryDescription& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}

    /**
     * <p>The query to be run.</p>
     */
    inline ScheduledQueryDescription& WithQueryString(const char* value) { SetQueryString(value); return *this;}


    /**
     * <p>Creation time of the scheduled query.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>Creation time of the scheduled query.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>Creation time of the scheduled query.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>Creation time of the scheduled query.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>Creation time of the scheduled query.</p>
     */
    inline ScheduledQueryDescription& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>Creation time of the scheduled query.</p>
     */
    inline ScheduledQueryDescription& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>State of the scheduled query. </p>
     */
    inline const ScheduledQueryState& GetState() const{ return m_state; }

    /**
     * <p>State of the scheduled query. </p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>State of the scheduled query. </p>
     */
    inline void SetState(const ScheduledQueryState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>State of the scheduled query. </p>
     */
    inline void SetState(ScheduledQueryState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>State of the scheduled query. </p>
     */
    inline ScheduledQueryDescription& WithState(const ScheduledQueryState& value) { SetState(value); return *this;}

    /**
     * <p>State of the scheduled query. </p>
     */
    inline ScheduledQueryDescription& WithState(ScheduledQueryState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>Last time the query was run.</p>
     */
    inline const Aws::Utils::DateTime& GetPreviousInvocationTime() const{ return m_previousInvocationTime; }

    /**
     * <p>Last time the query was run.</p>
     */
    inline bool PreviousInvocationTimeHasBeenSet() const { return m_previousInvocationTimeHasBeenSet; }

    /**
     * <p>Last time the query was run.</p>
     */
    inline void SetPreviousInvocationTime(const Aws::Utils::DateTime& value) { m_previousInvocationTimeHasBeenSet = true; m_previousInvocationTime = value; }

    /**
     * <p>Last time the query was run.</p>
     */
    inline void SetPreviousInvocationTime(Aws::Utils::DateTime&& value) { m_previousInvocationTimeHasBeenSet = true; m_previousInvocationTime = std::move(value); }

    /**
     * <p>Last time the query was run.</p>
     */
    inline ScheduledQueryDescription& WithPreviousInvocationTime(const Aws::Utils::DateTime& value) { SetPreviousInvocationTime(value); return *this;}

    /**
     * <p>Last time the query was run.</p>
     */
    inline ScheduledQueryDescription& WithPreviousInvocationTime(Aws::Utils::DateTime&& value) { SetPreviousInvocationTime(std::move(value)); return *this;}


    /**
     * <p>The next time the scheduled query is scheduled to run.</p>
     */
    inline const Aws::Utils::DateTime& GetNextInvocationTime() const{ return m_nextInvocationTime; }

    /**
     * <p>The next time the scheduled query is scheduled to run.</p>
     */
    inline bool NextInvocationTimeHasBeenSet() const { return m_nextInvocationTimeHasBeenSet; }

    /**
     * <p>The next time the scheduled query is scheduled to run.</p>
     */
    inline void SetNextInvocationTime(const Aws::Utils::DateTime& value) { m_nextInvocationTimeHasBeenSet = true; m_nextInvocationTime = value; }

    /**
     * <p>The next time the scheduled query is scheduled to run.</p>
     */
    inline void SetNextInvocationTime(Aws::Utils::DateTime&& value) { m_nextInvocationTimeHasBeenSet = true; m_nextInvocationTime = std::move(value); }

    /**
     * <p>The next time the scheduled query is scheduled to run.</p>
     */
    inline ScheduledQueryDescription& WithNextInvocationTime(const Aws::Utils::DateTime& value) { SetNextInvocationTime(value); return *this;}

    /**
     * <p>The next time the scheduled query is scheduled to run.</p>
     */
    inline ScheduledQueryDescription& WithNextInvocationTime(Aws::Utils::DateTime&& value) { SetNextInvocationTime(std::move(value)); return *this;}


    /**
     * <p>Schedule configuration.</p>
     */
    inline const ScheduleConfiguration& GetScheduleConfiguration() const{ return m_scheduleConfiguration; }

    /**
     * <p>Schedule configuration.</p>
     */
    inline bool ScheduleConfigurationHasBeenSet() const { return m_scheduleConfigurationHasBeenSet; }

    /**
     * <p>Schedule configuration.</p>
     */
    inline void SetScheduleConfiguration(const ScheduleConfiguration& value) { m_scheduleConfigurationHasBeenSet = true; m_scheduleConfiguration = value; }

    /**
     * <p>Schedule configuration.</p>
     */
    inline void SetScheduleConfiguration(ScheduleConfiguration&& value) { m_scheduleConfigurationHasBeenSet = true; m_scheduleConfiguration = std::move(value); }

    /**
     * <p>Schedule configuration.</p>
     */
    inline ScheduledQueryDescription& WithScheduleConfiguration(const ScheduleConfiguration& value) { SetScheduleConfiguration(value); return *this;}

    /**
     * <p>Schedule configuration.</p>
     */
    inline ScheduledQueryDescription& WithScheduleConfiguration(ScheduleConfiguration&& value) { SetScheduleConfiguration(std::move(value)); return *this;}


    /**
     * <p>Notification configuration.</p>
     */
    inline const NotificationConfiguration& GetNotificationConfiguration() const{ return m_notificationConfiguration; }

    /**
     * <p>Notification configuration.</p>
     */
    inline bool NotificationConfigurationHasBeenSet() const { return m_notificationConfigurationHasBeenSet; }

    /**
     * <p>Notification configuration.</p>
     */
    inline void SetNotificationConfiguration(const NotificationConfiguration& value) { m_notificationConfigurationHasBeenSet = true; m_notificationConfiguration = value; }

    /**
     * <p>Notification configuration.</p>
     */
    inline void SetNotificationConfiguration(NotificationConfiguration&& value) { m_notificationConfigurationHasBeenSet = true; m_notificationConfiguration = std::move(value); }

    /**
     * <p>Notification configuration.</p>
     */
    inline ScheduledQueryDescription& WithNotificationConfiguration(const NotificationConfiguration& value) { SetNotificationConfiguration(value); return *this;}

    /**
     * <p>Notification configuration.</p>
     */
    inline ScheduledQueryDescription& WithNotificationConfiguration(NotificationConfiguration&& value) { SetNotificationConfiguration(std::move(value)); return *this;}


    /**
     * <p>Scheduled query target store configuration.</p>
     */
    inline const TargetConfiguration& GetTargetConfiguration() const{ return m_targetConfiguration; }

    /**
     * <p>Scheduled query target store configuration.</p>
     */
    inline bool TargetConfigurationHasBeenSet() const { return m_targetConfigurationHasBeenSet; }

    /**
     * <p>Scheduled query target store configuration.</p>
     */
    inline void SetTargetConfiguration(const TargetConfiguration& value) { m_targetConfigurationHasBeenSet = true; m_targetConfiguration = value; }

    /**
     * <p>Scheduled query target store configuration.</p>
     */
    inline void SetTargetConfiguration(TargetConfiguration&& value) { m_targetConfigurationHasBeenSet = true; m_targetConfiguration = std::move(value); }

    /**
     * <p>Scheduled query target store configuration.</p>
     */
    inline ScheduledQueryDescription& WithTargetConfiguration(const TargetConfiguration& value) { SetTargetConfiguration(value); return *this;}

    /**
     * <p>Scheduled query target store configuration.</p>
     */
    inline ScheduledQueryDescription& WithTargetConfiguration(TargetConfiguration&& value) { SetTargetConfiguration(std::move(value)); return *this;}


    /**
     * <p>IAM role that Timestream uses to run the schedule query.</p>
     */
    inline const Aws::String& GetScheduledQueryExecutionRoleArn() const{ return m_scheduledQueryExecutionRoleArn; }

    /**
     * <p>IAM role that Timestream uses to run the schedule query.</p>
     */
    inline bool ScheduledQueryExecutionRoleArnHasBeenSet() const { return m_scheduledQueryExecutionRoleArnHasBeenSet; }

    /**
     * <p>IAM role that Timestream uses to run the schedule query.</p>
     */
    inline void SetScheduledQueryExecutionRoleArn(const Aws::String& value) { m_scheduledQueryExecutionRoleArnHasBeenSet = true; m_scheduledQueryExecutionRoleArn = value; }

    /**
     * <p>IAM role that Timestream uses to run the schedule query.</p>
     */
    inline void SetScheduledQueryExecutionRoleArn(Aws::String&& value) { m_scheduledQueryExecutionRoleArnHasBeenSet = true; m_scheduledQueryExecutionRoleArn = std::move(value); }

    /**
     * <p>IAM role that Timestream uses to run the schedule query.</p>
     */
    inline void SetScheduledQueryExecutionRoleArn(const char* value) { m_scheduledQueryExecutionRoleArnHasBeenSet = true; m_scheduledQueryExecutionRoleArn.assign(value); }

    /**
     * <p>IAM role that Timestream uses to run the schedule query.</p>
     */
    inline ScheduledQueryDescription& WithScheduledQueryExecutionRoleArn(const Aws::String& value) { SetScheduledQueryExecutionRoleArn(value); return *this;}

    /**
     * <p>IAM role that Timestream uses to run the schedule query.</p>
     */
    inline ScheduledQueryDescription& WithScheduledQueryExecutionRoleArn(Aws::String&& value) { SetScheduledQueryExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>IAM role that Timestream uses to run the schedule query.</p>
     */
    inline ScheduledQueryDescription& WithScheduledQueryExecutionRoleArn(const char* value) { SetScheduledQueryExecutionRoleArn(value); return *this;}


    /**
     * <p>A customer provided KMS key used to encrypt the scheduled query resource.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>A customer provided KMS key used to encrypt the scheduled query resource.</p>
     */
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }

    /**
     * <p>A customer provided KMS key used to encrypt the scheduled query resource.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }

    /**
     * <p>A customer provided KMS key used to encrypt the scheduled query resource.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }

    /**
     * <p>A customer provided KMS key used to encrypt the scheduled query resource.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }

    /**
     * <p>A customer provided KMS key used to encrypt the scheduled query resource.</p>
     */
    inline ScheduledQueryDescription& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>A customer provided KMS key used to encrypt the scheduled query resource.</p>
     */
    inline ScheduledQueryDescription& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>A customer provided KMS key used to encrypt the scheduled query resource.</p>
     */
    inline ScheduledQueryDescription& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>Error-reporting configuration for the scheduled query.</p>
     */
    inline const ErrorReportConfiguration& GetErrorReportConfiguration() const{ return m_errorReportConfiguration; }

    /**
     * <p>Error-reporting configuration for the scheduled query.</p>
     */
    inline bool ErrorReportConfigurationHasBeenSet() const { return m_errorReportConfigurationHasBeenSet; }

    /**
     * <p>Error-reporting configuration for the scheduled query.</p>
     */
    inline void SetErrorReportConfiguration(const ErrorReportConfiguration& value) { m_errorReportConfigurationHasBeenSet = true; m_errorReportConfiguration = value; }

    /**
     * <p>Error-reporting configuration for the scheduled query.</p>
     */
    inline void SetErrorReportConfiguration(ErrorReportConfiguration&& value) { m_errorReportConfigurationHasBeenSet = true; m_errorReportConfiguration = std::move(value); }

    /**
     * <p>Error-reporting configuration for the scheduled query.</p>
     */
    inline ScheduledQueryDescription& WithErrorReportConfiguration(const ErrorReportConfiguration& value) { SetErrorReportConfiguration(value); return *this;}

    /**
     * <p>Error-reporting configuration for the scheduled query.</p>
     */
    inline ScheduledQueryDescription& WithErrorReportConfiguration(ErrorReportConfiguration&& value) { SetErrorReportConfiguration(std::move(value)); return *this;}


    /**
     * <p>Runtime summary for the last scheduled query run. </p>
     */
    inline const ScheduledQueryRunSummary& GetLastRunSummary() const{ return m_lastRunSummary; }

    /**
     * <p>Runtime summary for the last scheduled query run. </p>
     */
    inline bool LastRunSummaryHasBeenSet() const { return m_lastRunSummaryHasBeenSet; }

    /**
     * <p>Runtime summary for the last scheduled query run. </p>
     */
    inline void SetLastRunSummary(const ScheduledQueryRunSummary& value) { m_lastRunSummaryHasBeenSet = true; m_lastRunSummary = value; }

    /**
     * <p>Runtime summary for the last scheduled query run. </p>
     */
    inline void SetLastRunSummary(ScheduledQueryRunSummary&& value) { m_lastRunSummaryHasBeenSet = true; m_lastRunSummary = std::move(value); }

    /**
     * <p>Runtime summary for the last scheduled query run. </p>
     */
    inline ScheduledQueryDescription& WithLastRunSummary(const ScheduledQueryRunSummary& value) { SetLastRunSummary(value); return *this;}

    /**
     * <p>Runtime summary for the last scheduled query run. </p>
     */
    inline ScheduledQueryDescription& WithLastRunSummary(ScheduledQueryRunSummary&& value) { SetLastRunSummary(std::move(value)); return *this;}


    /**
     * <p>Runtime summary for the last five failed scheduled query runs.</p>
     */
    inline const Aws::Vector<ScheduledQueryRunSummary>& GetRecentlyFailedRuns() const{ return m_recentlyFailedRuns; }

    /**
     * <p>Runtime summary for the last five failed scheduled query runs.</p>
     */
    inline bool RecentlyFailedRunsHasBeenSet() const { return m_recentlyFailedRunsHasBeenSet; }

    /**
     * <p>Runtime summary for the last five failed scheduled query runs.</p>
     */
    inline void SetRecentlyFailedRuns(const Aws::Vector<ScheduledQueryRunSummary>& value) { m_recentlyFailedRunsHasBeenSet = true; m_recentlyFailedRuns = value; }

    /**
     * <p>Runtime summary for the last five failed scheduled query runs.</p>
     */
    inline void SetRecentlyFailedRuns(Aws::Vector<ScheduledQueryRunSummary>&& value) { m_recentlyFailedRunsHasBeenSet = true; m_recentlyFailedRuns = std::move(value); }

    /**
     * <p>Runtime summary for the last five failed scheduled query runs.</p>
     */
    inline ScheduledQueryDescription& WithRecentlyFailedRuns(const Aws::Vector<ScheduledQueryRunSummary>& value) { SetRecentlyFailedRuns(value); return *this;}

    /**
     * <p>Runtime summary for the last five failed scheduled query runs.</p>
     */
    inline ScheduledQueryDescription& WithRecentlyFailedRuns(Aws::Vector<ScheduledQueryRunSummary>&& value) { SetRecentlyFailedRuns(std::move(value)); return *this;}

    /**
     * <p>Runtime summary for the last five failed scheduled query runs.</p>
     */
    inline ScheduledQueryDescription& AddRecentlyFailedRuns(const ScheduledQueryRunSummary& value) { m_recentlyFailedRunsHasBeenSet = true; m_recentlyFailedRuns.push_back(value); return *this; }

    /**
     * <p>Runtime summary for the last five failed scheduled query runs.</p>
     */
    inline ScheduledQueryDescription& AddRecentlyFailedRuns(ScheduledQueryRunSummary&& value) { m_recentlyFailedRunsHasBeenSet = true; m_recentlyFailedRuns.push_back(std::move(value)); return *this; }

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
