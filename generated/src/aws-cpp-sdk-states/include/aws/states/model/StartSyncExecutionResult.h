﻿/**
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
    AWS_SFN_API StartSyncExecutionResult();
    AWS_SFN_API StartSyncExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SFN_API StartSyncExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the execution.</p>
     */
    inline const Aws::String& GetExecutionArn() const{ return m_executionArn; }
    inline void SetExecutionArn(const Aws::String& value) { m_executionArn = value; }
    inline void SetExecutionArn(Aws::String&& value) { m_executionArn = std::move(value); }
    inline void SetExecutionArn(const char* value) { m_executionArn.assign(value); }
    inline StartSyncExecutionResult& WithExecutionArn(const Aws::String& value) { SetExecutionArn(value); return *this;}
    inline StartSyncExecutionResult& WithExecutionArn(Aws::String&& value) { SetExecutionArn(std::move(value)); return *this;}
    inline StartSyncExecutionResult& WithExecutionArn(const char* value) { SetExecutionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that identifies the state machine.</p>
     */
    inline const Aws::String& GetStateMachineArn() const{ return m_stateMachineArn; }
    inline void SetStateMachineArn(const Aws::String& value) { m_stateMachineArn = value; }
    inline void SetStateMachineArn(Aws::String&& value) { m_stateMachineArn = std::move(value); }
    inline void SetStateMachineArn(const char* value) { m_stateMachineArn.assign(value); }
    inline StartSyncExecutionResult& WithStateMachineArn(const Aws::String& value) { SetStateMachineArn(value); return *this;}
    inline StartSyncExecutionResult& WithStateMachineArn(Aws::String&& value) { SetStateMachineArn(std::move(value)); return *this;}
    inline StartSyncExecutionResult& WithStateMachineArn(const char* value) { SetStateMachineArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the execution.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline StartSyncExecutionResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline StartSyncExecutionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline StartSyncExecutionResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the execution is started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const{ return m_startDate; }
    inline void SetStartDate(const Aws::Utils::DateTime& value) { m_startDate = value; }
    inline void SetStartDate(Aws::Utils::DateTime&& value) { m_startDate = std::move(value); }
    inline StartSyncExecutionResult& WithStartDate(const Aws::Utils::DateTime& value) { SetStartDate(value); return *this;}
    inline StartSyncExecutionResult& WithStartDate(Aws::Utils::DateTime&& value) { SetStartDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the execution has already ended, the date the execution stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetStopDate() const{ return m_stopDate; }
    inline void SetStopDate(const Aws::Utils::DateTime& value) { m_stopDate = value; }
    inline void SetStopDate(Aws::Utils::DateTime&& value) { m_stopDate = std::move(value); }
    inline StartSyncExecutionResult& WithStopDate(const Aws::Utils::DateTime& value) { SetStopDate(value); return *this;}
    inline StartSyncExecutionResult& WithStopDate(Aws::Utils::DateTime&& value) { SetStopDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the execution.</p>
     */
    inline const SyncExecutionStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const SyncExecutionStatus& value) { m_status = value; }
    inline void SetStatus(SyncExecutionStatus&& value) { m_status = std::move(value); }
    inline StartSyncExecutionResult& WithStatus(const SyncExecutionStatus& value) { SetStatus(value); return *this;}
    inline StartSyncExecutionResult& WithStatus(SyncExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error code of the failure.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }
    inline void SetError(const Aws::String& value) { m_error = value; }
    inline void SetError(Aws::String&& value) { m_error = std::move(value); }
    inline void SetError(const char* value) { m_error.assign(value); }
    inline StartSyncExecutionResult& WithError(const Aws::String& value) { SetError(value); return *this;}
    inline StartSyncExecutionResult& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}
    inline StartSyncExecutionResult& WithError(const char* value) { SetError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A more detailed explanation of the cause of the failure.</p>
     */
    inline const Aws::String& GetCause() const{ return m_cause; }
    inline void SetCause(const Aws::String& value) { m_cause = value; }
    inline void SetCause(Aws::String&& value) { m_cause = std::move(value); }
    inline void SetCause(const char* value) { m_cause.assign(value); }
    inline StartSyncExecutionResult& WithCause(const Aws::String& value) { SetCause(value); return *this;}
    inline StartSyncExecutionResult& WithCause(Aws::String&& value) { SetCause(std::move(value)); return *this;}
    inline StartSyncExecutionResult& WithCause(const char* value) { SetCause(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The string that contains the JSON input data of the execution. Length
     * constraints apply to the payload size, and are expressed as bytes in UTF-8
     * encoding.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }
    inline void SetInput(const Aws::String& value) { m_input = value; }
    inline void SetInput(Aws::String&& value) { m_input = std::move(value); }
    inline void SetInput(const char* value) { m_input.assign(value); }
    inline StartSyncExecutionResult& WithInput(const Aws::String& value) { SetInput(value); return *this;}
    inline StartSyncExecutionResult& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}
    inline StartSyncExecutionResult& WithInput(const char* value) { SetInput(value); return *this;}
    ///@}

    ///@{
    
    inline const CloudWatchEventsExecutionDataDetails& GetInputDetails() const{ return m_inputDetails; }
    inline void SetInputDetails(const CloudWatchEventsExecutionDataDetails& value) { m_inputDetails = value; }
    inline void SetInputDetails(CloudWatchEventsExecutionDataDetails&& value) { m_inputDetails = std::move(value); }
    inline StartSyncExecutionResult& WithInputDetails(const CloudWatchEventsExecutionDataDetails& value) { SetInputDetails(value); return *this;}
    inline StartSyncExecutionResult& WithInputDetails(CloudWatchEventsExecutionDataDetails&& value) { SetInputDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON output data of the execution. Length constraints apply to the
     * payload size, and are expressed as bytes in UTF-8 encoding.</p>  <p>This
     * field is set only if the execution succeeds. If the execution fails, this field
     * is null.</p> 
     */
    inline const Aws::String& GetOutput() const{ return m_output; }
    inline void SetOutput(const Aws::String& value) { m_output = value; }
    inline void SetOutput(Aws::String&& value) { m_output = std::move(value); }
    inline void SetOutput(const char* value) { m_output.assign(value); }
    inline StartSyncExecutionResult& WithOutput(const Aws::String& value) { SetOutput(value); return *this;}
    inline StartSyncExecutionResult& WithOutput(Aws::String&& value) { SetOutput(std::move(value)); return *this;}
    inline StartSyncExecutionResult& WithOutput(const char* value) { SetOutput(value); return *this;}
    ///@}

    ///@{
    
    inline const CloudWatchEventsExecutionDataDetails& GetOutputDetails() const{ return m_outputDetails; }
    inline void SetOutputDetails(const CloudWatchEventsExecutionDataDetails& value) { m_outputDetails = value; }
    inline void SetOutputDetails(CloudWatchEventsExecutionDataDetails&& value) { m_outputDetails = std::move(value); }
    inline StartSyncExecutionResult& WithOutputDetails(const CloudWatchEventsExecutionDataDetails& value) { SetOutputDetails(value); return *this;}
    inline StartSyncExecutionResult& WithOutputDetails(CloudWatchEventsExecutionDataDetails&& value) { SetOutputDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The X-Ray trace header that was passed to the execution.</p>
     */
    inline const Aws::String& GetTraceHeader() const{ return m_traceHeader; }
    inline void SetTraceHeader(const Aws::String& value) { m_traceHeader = value; }
    inline void SetTraceHeader(Aws::String&& value) { m_traceHeader = std::move(value); }
    inline void SetTraceHeader(const char* value) { m_traceHeader.assign(value); }
    inline StartSyncExecutionResult& WithTraceHeader(const Aws::String& value) { SetTraceHeader(value); return *this;}
    inline StartSyncExecutionResult& WithTraceHeader(Aws::String&& value) { SetTraceHeader(std::move(value)); return *this;}
    inline StartSyncExecutionResult& WithTraceHeader(const char* value) { SetTraceHeader(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that describes workflow billing details, including billed duration
     * and memory use.</p>
     */
    inline const BillingDetails& GetBillingDetails() const{ return m_billingDetails; }
    inline void SetBillingDetails(const BillingDetails& value) { m_billingDetails = value; }
    inline void SetBillingDetails(BillingDetails&& value) { m_billingDetails = std::move(value); }
    inline StartSyncExecutionResult& WithBillingDetails(const BillingDetails& value) { SetBillingDetails(value); return *this;}
    inline StartSyncExecutionResult& WithBillingDetails(BillingDetails&& value) { SetBillingDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartSyncExecutionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartSyncExecutionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartSyncExecutionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_executionArn;

    Aws::String m_stateMachineArn;

    Aws::String m_name;

    Aws::Utils::DateTime m_startDate;

    Aws::Utils::DateTime m_stopDate;

    SyncExecutionStatus m_status;

    Aws::String m_error;

    Aws::String m_cause;

    Aws::String m_input;

    CloudWatchEventsExecutionDataDetails m_inputDetails;

    Aws::String m_output;

    CloudWatchEventsExecutionDataDetails m_outputDetails;

    Aws::String m_traceHeader;

    BillingDetails m_billingDetails;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
