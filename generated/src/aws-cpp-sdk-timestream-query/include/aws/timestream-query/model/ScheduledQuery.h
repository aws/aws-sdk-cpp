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
    AWS_TIMESTREAMQUERY_API ScheduledQuery() = default;
    AWS_TIMESTREAMQUERY_API ScheduledQuery(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API ScheduledQuery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ScheduledQuery& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the scheduled query.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ScheduledQuery& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the scheduled query.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ScheduledQuery& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>State of scheduled query. </p>
     */
    inline ScheduledQueryState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ScheduledQueryState value) { m_stateHasBeenSet = true; m_state = value; }
    inline ScheduledQuery& WithState(ScheduledQueryState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the scheduled query was run.</p>
     */
    inline const Aws::Utils::DateTime& GetPreviousInvocationTime() const { return m_previousInvocationTime; }
    inline bool PreviousInvocationTimeHasBeenSet() const { return m_previousInvocationTimeHasBeenSet; }
    template<typename PreviousInvocationTimeT = Aws::Utils::DateTime>
    void SetPreviousInvocationTime(PreviousInvocationTimeT&& value) { m_previousInvocationTimeHasBeenSet = true; m_previousInvocationTime = std::forward<PreviousInvocationTimeT>(value); }
    template<typename PreviousInvocationTimeT = Aws::Utils::DateTime>
    ScheduledQuery& WithPreviousInvocationTime(PreviousInvocationTimeT&& value) { SetPreviousInvocationTime(std::forward<PreviousInvocationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next time the scheduled query is to be run.</p>
     */
    inline const Aws::Utils::DateTime& GetNextInvocationTime() const { return m_nextInvocationTime; }
    inline bool NextInvocationTimeHasBeenSet() const { return m_nextInvocationTimeHasBeenSet; }
    template<typename NextInvocationTimeT = Aws::Utils::DateTime>
    void SetNextInvocationTime(NextInvocationTimeT&& value) { m_nextInvocationTimeHasBeenSet = true; m_nextInvocationTime = std::forward<NextInvocationTimeT>(value); }
    template<typename NextInvocationTimeT = Aws::Utils::DateTime>
    ScheduledQuery& WithNextInvocationTime(NextInvocationTimeT&& value) { SetNextInvocationTime(std::forward<NextInvocationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration for scheduled query error reporting.</p>
     */
    inline const ErrorReportConfiguration& GetErrorReportConfiguration() const { return m_errorReportConfiguration; }
    inline bool ErrorReportConfigurationHasBeenSet() const { return m_errorReportConfigurationHasBeenSet; }
    template<typename ErrorReportConfigurationT = ErrorReportConfiguration>
    void SetErrorReportConfiguration(ErrorReportConfigurationT&& value) { m_errorReportConfigurationHasBeenSet = true; m_errorReportConfiguration = std::forward<ErrorReportConfigurationT>(value); }
    template<typename ErrorReportConfigurationT = ErrorReportConfiguration>
    ScheduledQuery& WithErrorReportConfiguration(ErrorReportConfigurationT&& value) { SetErrorReportConfiguration(std::forward<ErrorReportConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Target data source where final scheduled query result will be written.</p>
     */
    inline const TargetDestination& GetTargetDestination() const { return m_targetDestination; }
    inline bool TargetDestinationHasBeenSet() const { return m_targetDestinationHasBeenSet; }
    template<typename TargetDestinationT = TargetDestination>
    void SetTargetDestination(TargetDestinationT&& value) { m_targetDestinationHasBeenSet = true; m_targetDestination = std::forward<TargetDestinationT>(value); }
    template<typename TargetDestinationT = TargetDestination>
    ScheduledQuery& WithTargetDestination(TargetDestinationT&& value) { SetTargetDestination(std::forward<TargetDestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the last scheduled query run.</p>
     */
    inline ScheduledQueryRunStatus GetLastRunStatus() const { return m_lastRunStatus; }
    inline bool LastRunStatusHasBeenSet() const { return m_lastRunStatusHasBeenSet; }
    inline void SetLastRunStatus(ScheduledQueryRunStatus value) { m_lastRunStatusHasBeenSet = true; m_lastRunStatus = value; }
    inline ScheduledQuery& WithLastRunStatus(ScheduledQueryRunStatus value) { SetLastRunStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    ScheduledQueryState m_state{ScheduledQueryState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_previousInvocationTime{};
    bool m_previousInvocationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_nextInvocationTime{};
    bool m_nextInvocationTimeHasBeenSet = false;

    ErrorReportConfiguration m_errorReportConfiguration;
    bool m_errorReportConfigurationHasBeenSet = false;

    TargetDestination m_targetDestination;
    bool m_targetDestinationHasBeenSet = false;

    ScheduledQueryRunStatus m_lastRunStatus{ScheduledQueryRunStatus::NOT_SET};
    bool m_lastRunStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
