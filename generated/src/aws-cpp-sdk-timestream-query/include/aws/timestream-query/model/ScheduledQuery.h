/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/timestream-query/model/ScheduledQueryState.h>
#include <aws/timestream-query/model/ErrorReportConfiguration.h>
#include <aws/timestream-query/model/TargetDestination.h>
#include <aws/timestream-query/model/ScheduledQueryRunStatus.h>
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
   * <p>Scheduled Query</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/ScheduledQuery">AWS
   * API Reference</a></p>
   */
  class ScheduledQuery
  {
  public:
    AWS_TIMESTREAMQUERY_API ScheduledQuery();
    AWS_TIMESTREAMQUERY_API ScheduledQuery(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API ScheduledQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ScheduledQuery& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ScheduledQuery& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ScheduledQuery& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the scheduled query.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ScheduledQuery& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ScheduledQuery& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ScheduledQuery& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the scheduled query.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ScheduledQuery& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ScheduledQuery& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>State of scheduled query. </p>
     */
    inline const ScheduledQueryState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const ScheduledQueryState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(ScheduledQueryState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline ScheduledQuery& WithState(const ScheduledQueryState& value) { SetState(value); return *this;}
    inline ScheduledQuery& WithState(ScheduledQueryState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the scheduled query was run.</p>
     */
    inline const Aws::Utils::DateTime& GetPreviousInvocationTime() const{ return m_previousInvocationTime; }
    inline bool PreviousInvocationTimeHasBeenSet() const { return m_previousInvocationTimeHasBeenSet; }
    inline void SetPreviousInvocationTime(const Aws::Utils::DateTime& value) { m_previousInvocationTimeHasBeenSet = true; m_previousInvocationTime = value; }
    inline void SetPreviousInvocationTime(Aws::Utils::DateTime&& value) { m_previousInvocationTimeHasBeenSet = true; m_previousInvocationTime = std::move(value); }
    inline ScheduledQuery& WithPreviousInvocationTime(const Aws::Utils::DateTime& value) { SetPreviousInvocationTime(value); return *this;}
    inline ScheduledQuery& WithPreviousInvocationTime(Aws::Utils::DateTime&& value) { SetPreviousInvocationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next time the scheduled query is to be run.</p>
     */
    inline const Aws::Utils::DateTime& GetNextInvocationTime() const{ return m_nextInvocationTime; }
    inline bool NextInvocationTimeHasBeenSet() const { return m_nextInvocationTimeHasBeenSet; }
    inline void SetNextInvocationTime(const Aws::Utils::DateTime& value) { m_nextInvocationTimeHasBeenSet = true; m_nextInvocationTime = value; }
    inline void SetNextInvocationTime(Aws::Utils::DateTime&& value) { m_nextInvocationTimeHasBeenSet = true; m_nextInvocationTime = std::move(value); }
    inline ScheduledQuery& WithNextInvocationTime(const Aws::Utils::DateTime& value) { SetNextInvocationTime(value); return *this;}
    inline ScheduledQuery& WithNextInvocationTime(Aws::Utils::DateTime&& value) { SetNextInvocationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for scheduled query error reporting.</p>
     */
    inline const ErrorReportConfiguration& GetErrorReportConfiguration() const{ return m_errorReportConfiguration; }
    inline bool ErrorReportConfigurationHasBeenSet() const { return m_errorReportConfigurationHasBeenSet; }
    inline void SetErrorReportConfiguration(const ErrorReportConfiguration& value) { m_errorReportConfigurationHasBeenSet = true; m_errorReportConfiguration = value; }
    inline void SetErrorReportConfiguration(ErrorReportConfiguration&& value) { m_errorReportConfigurationHasBeenSet = true; m_errorReportConfiguration = std::move(value); }
    inline ScheduledQuery& WithErrorReportConfiguration(const ErrorReportConfiguration& value) { SetErrorReportConfiguration(value); return *this;}
    inline ScheduledQuery& WithErrorReportConfiguration(ErrorReportConfiguration&& value) { SetErrorReportConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Target data source where final scheduled query result will be written.</p>
     */
    inline const TargetDestination& GetTargetDestination() const{ return m_targetDestination; }
    inline bool TargetDestinationHasBeenSet() const { return m_targetDestinationHasBeenSet; }
    inline void SetTargetDestination(const TargetDestination& value) { m_targetDestinationHasBeenSet = true; m_targetDestination = value; }
    inline void SetTargetDestination(TargetDestination&& value) { m_targetDestinationHasBeenSet = true; m_targetDestination = std::move(value); }
    inline ScheduledQuery& WithTargetDestination(const TargetDestination& value) { SetTargetDestination(value); return *this;}
    inline ScheduledQuery& WithTargetDestination(TargetDestination&& value) { SetTargetDestination(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the last scheduled query run.</p>
     */
    inline const ScheduledQueryRunStatus& GetLastRunStatus() const{ return m_lastRunStatus; }
    inline bool LastRunStatusHasBeenSet() const { return m_lastRunStatusHasBeenSet; }
    inline void SetLastRunStatus(const ScheduledQueryRunStatus& value) { m_lastRunStatusHasBeenSet = true; m_lastRunStatus = value; }
    inline void SetLastRunStatus(ScheduledQueryRunStatus&& value) { m_lastRunStatusHasBeenSet = true; m_lastRunStatus = std::move(value); }
    inline ScheduledQuery& WithLastRunStatus(const ScheduledQueryRunStatus& value) { SetLastRunStatus(value); return *this;}
    inline ScheduledQuery& WithLastRunStatus(ScheduledQueryRunStatus&& value) { SetLastRunStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    ScheduledQueryState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_previousInvocationTime;
    bool m_previousInvocationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_nextInvocationTime;
    bool m_nextInvocationTimeHasBeenSet = false;

    ErrorReportConfiguration m_errorReportConfiguration;
    bool m_errorReportConfigurationHasBeenSet = false;

    TargetDestination m_targetDestination;
    bool m_targetDestinationHasBeenSet = false;

    ScheduledQueryRunStatus m_lastRunStatus;
    bool m_lastRunStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
