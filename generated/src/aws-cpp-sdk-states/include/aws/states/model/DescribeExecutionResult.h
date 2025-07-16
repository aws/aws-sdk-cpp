/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/states/model/ExecutionStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/states/model/CloudWatchEventsExecutionDataDetails.h>
#include <aws/states/model/ExecutionRedriveStatus.h>
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
namespace SFN
{
namespace Model
{
  class DescribeExecutionResult
  {
  public:
    AWS_SFN_API DescribeExecutionResult() = default;
    AWS_SFN_API DescribeExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SFN_API DescribeExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the execution.</p>
     */
    inline const Aws::String& GetExecutionArn() const { return m_executionArn; }
    template<typename ExecutionArnT = Aws::String>
    void SetExecutionArn(ExecutionArnT&& value) { m_executionArnHasBeenSet = true; m_executionArn = std::forward<ExecutionArnT>(value); }
    template<typename ExecutionArnT = Aws::String>
    DescribeExecutionResult& WithExecutionArn(ExecutionArnT&& value) { SetExecutionArn(std::forward<ExecutionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the executed stated machine.</p>
     */
    inline const Aws::String& GetStateMachineArn() const { return m_stateMachineArn; }
    template<typename StateMachineArnT = Aws::String>
    void SetStateMachineArn(StateMachineArnT&& value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn = std::forward<StateMachineArnT>(value); }
    template<typename StateMachineArnT = Aws::String>
    DescribeExecutionResult& WithStateMachineArn(StateMachineArnT&& value) { SetStateMachineArn(std::forward<StateMachineArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the execution.</p> <p>A name must <i>not</i> contain:</p> <ul>
     * <li> <p>white space</p> </li> <li> <p>brackets <code>&lt; &gt; { } [ ]</code>
     * </p> </li> <li> <p>wildcard characters <code>? *</code> </p> </li> <li>
     * <p>special characters <code>" # % \ ^ | ~ ` $ &amp; , ; : /</code> </p> </li>
     * <li> <p>control characters (<code>U+0000-001F</code>, <code>U+007F-009F</code>,
     * <code>U+FFFE-FFFF</code>)</p> </li> <li> <p>surrogates
     * (<code>U+D800-DFFF</code>)</p> </li> <li> <p>invalid characters (<code>
     * U+10FFFF</code>)</p> </li> </ul> <p>To enable logging with CloudWatch Logs, the
     * name should only contain 0-9, A-Z, a-z, - and _.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeExecutionResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the execution.</p>
     */
    inline ExecutionStatus GetStatus() const { return m_status; }
    inline void SetStatus(ExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeExecutionResult& WithStatus(ExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the execution is started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
    template<typename StartDateT = Aws::Utils::DateTime>
    void SetStartDate(StartDateT&& value) { m_startDateHasBeenSet = true; m_startDate = std::forward<StartDateT>(value); }
    template<typename StartDateT = Aws::Utils::DateTime>
    DescribeExecutionResult& WithStartDate(StartDateT&& value) { SetStartDate(std::forward<StartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the execution ended, the date the execution stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetStopDate() const { return m_stopDate; }
    template<typename StopDateT = Aws::Utils::DateTime>
    void SetStopDate(StopDateT&& value) { m_stopDateHasBeenSet = true; m_stopDate = std::forward<StopDateT>(value); }
    template<typename StopDateT = Aws::Utils::DateTime>
    DescribeExecutionResult& WithStopDate(StopDateT&& value) { SetStopDate(std::forward<StopDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The string that contains the JSON input data of the execution. Length
     * constraints apply to the payload size, and are expressed as bytes in UTF-8
     * encoding.</p>
     */
    inline const Aws::String& GetInput() const { return m_input; }
    template<typename InputT = Aws::String>
    void SetInput(InputT&& value) { m_inputHasBeenSet = true; m_input = std::forward<InputT>(value); }
    template<typename InputT = Aws::String>
    DescribeExecutionResult& WithInput(InputT&& value) { SetInput(std::forward<InputT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CloudWatchEventsExecutionDataDetails& GetInputDetails() const { return m_inputDetails; }
    template<typename InputDetailsT = CloudWatchEventsExecutionDataDetails>
    void SetInputDetails(InputDetailsT&& value) { m_inputDetailsHasBeenSet = true; m_inputDetails = std::forward<InputDetailsT>(value); }
    template<typename InputDetailsT = CloudWatchEventsExecutionDataDetails>
    DescribeExecutionResult& WithInputDetails(InputDetailsT&& value) { SetInputDetails(std::forward<InputDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON output data of the execution. Length constraints apply to the
     * payload size, and are expressed as bytes in UTF-8 encoding.</p>  <p>This
     * field is set only if the execution succeeds. If the execution fails, this field
     * is null.</p> 
     */
    inline const Aws::String& GetOutput() const { return m_output; }
    template<typename OutputT = Aws::String>
    void SetOutput(OutputT&& value) { m_outputHasBeenSet = true; m_output = std::forward<OutputT>(value); }
    template<typename OutputT = Aws::String>
    DescribeExecutionResult& WithOutput(OutputT&& value) { SetOutput(std::forward<OutputT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CloudWatchEventsExecutionDataDetails& GetOutputDetails() const { return m_outputDetails; }
    template<typename OutputDetailsT = CloudWatchEventsExecutionDataDetails>
    void SetOutputDetails(OutputDetailsT&& value) { m_outputDetailsHasBeenSet = true; m_outputDetails = std::forward<OutputDetailsT>(value); }
    template<typename OutputDetailsT = CloudWatchEventsExecutionDataDetails>
    DescribeExecutionResult& WithOutputDetails(OutputDetailsT&& value) { SetOutputDetails(std::forward<OutputDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The X-Ray trace header that was passed to the execution.</p>  <p> For
     * X-Ray traces, all Amazon Web Services services use the
     * <code>X-Amzn-Trace-Id</code> header from the HTTP request. Using the header is
     * the preferred mechanism to identify a trace. <code>StartExecution</code> and
     * <code>StartSyncExecution</code> API operations can also use
     * <code>traceHeader</code> from the body of the request payload. If <b>both</b>
     * sources are provided, Step Functions will use the <b>header value</b>
     * (preferred) over the value in the request body. </p> 
     */
    inline const Aws::String& GetTraceHeader() const { return m_traceHeader; }
    template<typename TraceHeaderT = Aws::String>
    void SetTraceHeader(TraceHeaderT&& value) { m_traceHeaderHasBeenSet = true; m_traceHeader = std::forward<TraceHeaderT>(value); }
    template<typename TraceHeaderT = Aws::String>
    DescribeExecutionResult& WithTraceHeader(TraceHeaderT&& value) { SetTraceHeader(std::forward<TraceHeaderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies a Map Run, which dispatched
     * this execution.</p>
     */
    inline const Aws::String& GetMapRunArn() const { return m_mapRunArn; }
    template<typename MapRunArnT = Aws::String>
    void SetMapRunArn(MapRunArnT&& value) { m_mapRunArnHasBeenSet = true; m_mapRunArn = std::forward<MapRunArnT>(value); }
    template<typename MapRunArnT = Aws::String>
    DescribeExecutionResult& WithMapRunArn(MapRunArnT&& value) { SetMapRunArn(std::forward<MapRunArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error string if the state machine execution failed.</p>
     */
    inline const Aws::String& GetError() const { return m_error; }
    template<typename ErrorT = Aws::String>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = Aws::String>
    DescribeExecutionResult& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cause string if the state machine execution failed.</p>
     */
    inline const Aws::String& GetCause() const { return m_cause; }
    template<typename CauseT = Aws::String>
    void SetCause(CauseT&& value) { m_causeHasBeenSet = true; m_cause = std::forward<CauseT>(value); }
    template<typename CauseT = Aws::String>
    DescribeExecutionResult& WithCause(CauseT&& value) { SetCause(std::forward<CauseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the state machine version associated with
     * the execution. The version ARN is a combination of state machine ARN and the
     * version number separated by a colon (:). For example,
     * <code>stateMachineARN:1</code>.</p> <p>If you start an execution from a
     * <code>StartExecution</code> request without specifying a state machine version
     * or alias ARN, Step Functions returns a null value.</p>
     */
    inline const Aws::String& GetStateMachineVersionArn() const { return m_stateMachineVersionArn; }
    template<typename StateMachineVersionArnT = Aws::String>
    void SetStateMachineVersionArn(StateMachineVersionArnT&& value) { m_stateMachineVersionArnHasBeenSet = true; m_stateMachineVersionArn = std::forward<StateMachineVersionArnT>(value); }
    template<typename StateMachineVersionArnT = Aws::String>
    DescribeExecutionResult& WithStateMachineVersionArn(StateMachineVersionArnT&& value) { SetStateMachineVersionArn(std::forward<StateMachineVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the state machine alias associated with the
     * execution. The alias ARN is a combination of state machine ARN and the alias
     * name separated by a colon (:). For example,
     * <code>stateMachineARN:PROD</code>.</p> <p>If you start an execution from a
     * <code>StartExecution</code> request with a state machine version ARN, this field
     * will be null.</p>
     */
    inline const Aws::String& GetStateMachineAliasArn() const { return m_stateMachineAliasArn; }
    template<typename StateMachineAliasArnT = Aws::String>
    void SetStateMachineAliasArn(StateMachineAliasArnT&& value) { m_stateMachineAliasArnHasBeenSet = true; m_stateMachineAliasArn = std::forward<StateMachineAliasArnT>(value); }
    template<typename StateMachineAliasArnT = Aws::String>
    DescribeExecutionResult& WithStateMachineAliasArn(StateMachineAliasArnT&& value) { SetStateMachineAliasArn(std::forward<StateMachineAliasArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of times you've redriven an execution. If you have not yet
     * redriven an execution, the <code>redriveCount</code> is 0. This count is only
     * updated if you successfully redrive an execution.</p>
     */
    inline int GetRedriveCount() const { return m_redriveCount; }
    inline void SetRedriveCount(int value) { m_redriveCountHasBeenSet = true; m_redriveCount = value; }
    inline DescribeExecutionResult& WithRedriveCount(int value) { SetRedriveCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the execution was last redriven. If you have not yet redriven an
     * execution, the <code>redriveDate</code> is null.</p> <p>The
     * <code>redriveDate</code> is unavailable if you redrive a Map Run that starts
     * child workflow executions of type <code>EXPRESS</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetRedriveDate() const { return m_redriveDate; }
    template<typename RedriveDateT = Aws::Utils::DateTime>
    void SetRedriveDate(RedriveDateT&& value) { m_redriveDateHasBeenSet = true; m_redriveDate = std::forward<RedriveDateT>(value); }
    template<typename RedriveDateT = Aws::Utils::DateTime>
    DescribeExecutionResult& WithRedriveDate(RedriveDateT&& value) { SetRedriveDate(std::forward<RedriveDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not an execution can be redriven at a given point in
     * time.</p> <ul> <li> <p>For executions of type <code>STANDARD</code>,
     * <code>redriveStatus</code> is <code>NOT_REDRIVABLE</code> if calling the
     * <a>RedriveExecution</a> API action would return the
     * <code>ExecutionNotRedrivable</code> error.</p> </li> <li> <p>For a Distributed
     * Map that includes child workflows of type <code>STANDARD</code>,
     * <code>redriveStatus</code> indicates whether or not the Map Run can redrive
     * child workflow executions.</p> </li> <li> <p>For a Distributed Map that includes
     * child workflows of type <code>EXPRESS</code>, <code>redriveStatus</code>
     * indicates whether or not the Map Run can redrive child workflow executions.</p>
     * <p>You can redrive failed or timed out <code>EXPRESS</code> workflows <i>only
     * if</i> they're a part of a Map Run. When you <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/redrive-map-run.html">redrive</a>
     * the Map Run, these workflows are restarted using the <a>StartExecution</a> API
     * action.</p> </li> </ul>
     */
    inline ExecutionRedriveStatus GetRedriveStatus() const { return m_redriveStatus; }
    inline void SetRedriveStatus(ExecutionRedriveStatus value) { m_redriveStatusHasBeenSet = true; m_redriveStatus = value; }
    inline DescribeExecutionResult& WithRedriveStatus(ExecutionRedriveStatus value) { SetRedriveStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When <code>redriveStatus</code> is <code>NOT_REDRIVABLE</code>,
     * <code>redriveStatusReason</code> specifies the reason why an execution cannot be
     * redriven.</p> <ul> <li> <p>For executions of type <code>STANDARD</code>, or for
     * a Distributed Map that includes child workflows of type <code>STANDARD</code>,
     * <code>redriveStatusReason</code> can include one of the following reasons:</p>
     * <ul> <li> <p> <code>State machine is in DELETING status</code>.</p> </li> <li>
     * <p> <code>Execution is RUNNING and cannot be redriven</code>.</p> </li> <li> <p>
     * <code>Execution is SUCCEEDED and cannot be redriven</code>.</p> </li> <li> <p>
     * <code>Execution was started before the launch of RedriveExecution</code>.</p>
     * </li> <li> <p> <code>Execution history event limit exceeded</code>.</p> </li>
     * <li> <p> <code>Execution has exceeded the max execution time</code>.</p> </li>
     * <li> <p> <code>Execution redrivable period exceeded</code>.</p> </li> </ul>
     * </li> <li> <p>For a Distributed Map that includes child workflows of type
     * <code>EXPRESS</code>, <code>redriveStatusReason</code> is only returned if the
     * child workflows are not redrivable. This happens when the child workflow
     * executions have completed successfully.</p> </li> </ul>
     */
    inline const Aws::String& GetRedriveStatusReason() const { return m_redriveStatusReason; }
    template<typename RedriveStatusReasonT = Aws::String>
    void SetRedriveStatusReason(RedriveStatusReasonT&& value) { m_redriveStatusReasonHasBeenSet = true; m_redriveStatusReason = std::forward<RedriveStatusReasonT>(value); }
    template<typename RedriveStatusReasonT = Aws::String>
    DescribeExecutionResult& WithRedriveStatusReason(RedriveStatusReasonT&& value) { SetRedriveStatusReason(std::forward<RedriveStatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeExecutionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_executionArn;
    bool m_executionArnHasBeenSet = false;

    Aws::String m_stateMachineArn;
    bool m_stateMachineArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ExecutionStatus m_status{ExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startDate{};
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_stopDate{};
    bool m_stopDateHasBeenSet = false;

    Aws::String m_input;
    bool m_inputHasBeenSet = false;

    CloudWatchEventsExecutionDataDetails m_inputDetails;
    bool m_inputDetailsHasBeenSet = false;

    Aws::String m_output;
    bool m_outputHasBeenSet = false;

    CloudWatchEventsExecutionDataDetails m_outputDetails;
    bool m_outputDetailsHasBeenSet = false;

    Aws::String m_traceHeader;
    bool m_traceHeaderHasBeenSet = false;

    Aws::String m_mapRunArn;
    bool m_mapRunArnHasBeenSet = false;

    Aws::String m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_cause;
    bool m_causeHasBeenSet = false;

    Aws::String m_stateMachineVersionArn;
    bool m_stateMachineVersionArnHasBeenSet = false;

    Aws::String m_stateMachineAliasArn;
    bool m_stateMachineAliasArnHasBeenSet = false;

    int m_redriveCount{0};
    bool m_redriveCountHasBeenSet = false;

    Aws::Utils::DateTime m_redriveDate{};
    bool m_redriveDateHasBeenSet = false;

    ExecutionRedriveStatus m_redriveStatus{ExecutionRedriveStatus::NOT_SET};
    bool m_redriveStatusHasBeenSet = false;

    Aws::String m_redriveStatusReason;
    bool m_redriveStatusReasonHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
