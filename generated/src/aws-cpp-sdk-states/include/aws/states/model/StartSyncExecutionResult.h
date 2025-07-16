/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/states/model/SyncExecutionStatus.h>
#include <aws/states/model/CloudWatchEventsExecutionDataDetails.h>
#include <aws/states/model/BillingDetails.h>
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
  class StartSyncExecutionResult
  {
  public:
    AWS_SFN_API StartSyncExecutionResult() = default;
    AWS_SFN_API StartSyncExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SFN_API StartSyncExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the execution.</p>
     */
    inline const Aws::String& GetExecutionArn() const { return m_executionArn; }
    template<typename ExecutionArnT = Aws::String>
    void SetExecutionArn(ExecutionArnT&& value) { m_executionArnHasBeenSet = true; m_executionArn = std::forward<ExecutionArnT>(value); }
    template<typename ExecutionArnT = Aws::String>
    StartSyncExecutionResult& WithExecutionArn(ExecutionArnT&& value) { SetExecutionArn(std::forward<ExecutionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the state machine.</p>
     */
    inline const Aws::String& GetStateMachineArn() const { return m_stateMachineArn; }
    template<typename StateMachineArnT = Aws::String>
    void SetStateMachineArn(StateMachineArnT&& value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn = std::forward<StateMachineArnT>(value); }
    template<typename StateMachineArnT = Aws::String>
    StartSyncExecutionResult& WithStateMachineArn(StateMachineArnT&& value) { SetStateMachineArn(std::forward<StateMachineArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the execution.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    StartSyncExecutionResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the execution is started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const { return m_startDate; }
    template<typename StartDateT = Aws::Utils::DateTime>
    void SetStartDate(StartDateT&& value) { m_startDateHasBeenSet = true; m_startDate = std::forward<StartDateT>(value); }
    template<typename StartDateT = Aws::Utils::DateTime>
    StartSyncExecutionResult& WithStartDate(StartDateT&& value) { SetStartDate(std::forward<StartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the execution has already ended, the date the execution stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetStopDate() const { return m_stopDate; }
    template<typename StopDateT = Aws::Utils::DateTime>
    void SetStopDate(StopDateT&& value) { m_stopDateHasBeenSet = true; m_stopDate = std::forward<StopDateT>(value); }
    template<typename StopDateT = Aws::Utils::DateTime>
    StartSyncExecutionResult& WithStopDate(StopDateT&& value) { SetStopDate(std::forward<StopDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the execution.</p>
     */
    inline SyncExecutionStatus GetStatus() const { return m_status; }
    inline void SetStatus(SyncExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline StartSyncExecutionResult& WithStatus(SyncExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code of the failure.</p>
     */
    inline const Aws::String& GetError() const { return m_error; }
    template<typename ErrorT = Aws::String>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = Aws::String>
    StartSyncExecutionResult& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A more detailed explanation of the cause of the failure.</p>
     */
    inline const Aws::String& GetCause() const { return m_cause; }
    template<typename CauseT = Aws::String>
    void SetCause(CauseT&& value) { m_causeHasBeenSet = true; m_cause = std::forward<CauseT>(value); }
    template<typename CauseT = Aws::String>
    StartSyncExecutionResult& WithCause(CauseT&& value) { SetCause(std::forward<CauseT>(value)); return *this;}
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
    StartSyncExecutionResult& WithInput(InputT&& value) { SetInput(std::forward<InputT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CloudWatchEventsExecutionDataDetails& GetInputDetails() const { return m_inputDetails; }
    template<typename InputDetailsT = CloudWatchEventsExecutionDataDetails>
    void SetInputDetails(InputDetailsT&& value) { m_inputDetailsHasBeenSet = true; m_inputDetails = std::forward<InputDetailsT>(value); }
    template<typename InputDetailsT = CloudWatchEventsExecutionDataDetails>
    StartSyncExecutionResult& WithInputDetails(InputDetailsT&& value) { SetInputDetails(std::forward<InputDetailsT>(value)); return *this;}
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
    StartSyncExecutionResult& WithOutput(OutputT&& value) { SetOutput(std::forward<OutputT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CloudWatchEventsExecutionDataDetails& GetOutputDetails() const { return m_outputDetails; }
    template<typename OutputDetailsT = CloudWatchEventsExecutionDataDetails>
    void SetOutputDetails(OutputDetailsT&& value) { m_outputDetailsHasBeenSet = true; m_outputDetails = std::forward<OutputDetailsT>(value); }
    template<typename OutputDetailsT = CloudWatchEventsExecutionDataDetails>
    StartSyncExecutionResult& WithOutputDetails(OutputDetailsT&& value) { SetOutputDetails(std::forward<OutputDetailsT>(value)); return *this;}
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
    StartSyncExecutionResult& WithTraceHeader(TraceHeaderT&& value) { SetTraceHeader(std::forward<TraceHeaderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes workflow billing details, including billed duration
     * and memory use.</p>
     */
    inline const BillingDetails& GetBillingDetails() const { return m_billingDetails; }
    template<typename BillingDetailsT = BillingDetails>
    void SetBillingDetails(BillingDetailsT&& value) { m_billingDetailsHasBeenSet = true; m_billingDetails = std::forward<BillingDetailsT>(value); }
    template<typename BillingDetailsT = BillingDetails>
    StartSyncExecutionResult& WithBillingDetails(BillingDetailsT&& value) { SetBillingDetails(std::forward<BillingDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartSyncExecutionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_executionArn;
    bool m_executionArnHasBeenSet = false;

    Aws::String m_stateMachineArn;
    bool m_stateMachineArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Utils::DateTime m_startDate{};
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_stopDate{};
    bool m_stopDateHasBeenSet = false;

    SyncExecutionStatus m_status{SyncExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_cause;
    bool m_causeHasBeenSet = false;

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

    BillingDetails m_billingDetails;
    bool m_billingDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
