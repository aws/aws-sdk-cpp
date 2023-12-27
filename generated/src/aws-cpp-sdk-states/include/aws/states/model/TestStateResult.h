/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/states/model/InspectionData.h>
#include <aws/states/model/TestExecutionStatus.h>
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
  class TestStateResult
  {
  public:
    AWS_SFN_API TestStateResult();
    AWS_SFN_API TestStateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SFN_API TestStateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The JSON output data of the state. Length constraints apply to the payload
     * size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline const Aws::String& GetOutput() const{ return m_output; }

    /**
     * <p>The JSON output data of the state. Length constraints apply to the payload
     * size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline void SetOutput(const Aws::String& value) { m_output = value; }

    /**
     * <p>The JSON output data of the state. Length constraints apply to the payload
     * size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline void SetOutput(Aws::String&& value) { m_output = std::move(value); }

    /**
     * <p>The JSON output data of the state. Length constraints apply to the payload
     * size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline void SetOutput(const char* value) { m_output.assign(value); }

    /**
     * <p>The JSON output data of the state. Length constraints apply to the payload
     * size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline TestStateResult& WithOutput(const Aws::String& value) { SetOutput(value); return *this;}

    /**
     * <p>The JSON output data of the state. Length constraints apply to the payload
     * size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline TestStateResult& WithOutput(Aws::String&& value) { SetOutput(std::move(value)); return *this;}

    /**
     * <p>The JSON output data of the state. Length constraints apply to the payload
     * size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline TestStateResult& WithOutput(const char* value) { SetOutput(value); return *this;}


    /**
     * <p>The error returned when the execution of a state fails.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }

    /**
     * <p>The error returned when the execution of a state fails.</p>
     */
    inline void SetError(const Aws::String& value) { m_error = value; }

    /**
     * <p>The error returned when the execution of a state fails.</p>
     */
    inline void SetError(Aws::String&& value) { m_error = std::move(value); }

    /**
     * <p>The error returned when the execution of a state fails.</p>
     */
    inline void SetError(const char* value) { m_error.assign(value); }

    /**
     * <p>The error returned when the execution of a state fails.</p>
     */
    inline TestStateResult& WithError(const Aws::String& value) { SetError(value); return *this;}

    /**
     * <p>The error returned when the execution of a state fails.</p>
     */
    inline TestStateResult& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}

    /**
     * <p>The error returned when the execution of a state fails.</p>
     */
    inline TestStateResult& WithError(const char* value) { SetError(value); return *this;}


    /**
     * <p>A detailed explanation of the cause for the error when the execution of a
     * state fails.</p>
     */
    inline const Aws::String& GetCause() const{ return m_cause; }

    /**
     * <p>A detailed explanation of the cause for the error when the execution of a
     * state fails.</p>
     */
    inline void SetCause(const Aws::String& value) { m_cause = value; }

    /**
     * <p>A detailed explanation of the cause for the error when the execution of a
     * state fails.</p>
     */
    inline void SetCause(Aws::String&& value) { m_cause = std::move(value); }

    /**
     * <p>A detailed explanation of the cause for the error when the execution of a
     * state fails.</p>
     */
    inline void SetCause(const char* value) { m_cause.assign(value); }

    /**
     * <p>A detailed explanation of the cause for the error when the execution of a
     * state fails.</p>
     */
    inline TestStateResult& WithCause(const Aws::String& value) { SetCause(value); return *this;}

    /**
     * <p>A detailed explanation of the cause for the error when the execution of a
     * state fails.</p>
     */
    inline TestStateResult& WithCause(Aws::String&& value) { SetCause(std::move(value)); return *this;}

    /**
     * <p>A detailed explanation of the cause for the error when the execution of a
     * state fails.</p>
     */
    inline TestStateResult& WithCause(const char* value) { SetCause(value); return *this;}


    /**
     * <p>Returns additional details about the state's execution, including its input
     * and output data processing flow, and HTTP request and response information. The
     * <code>inspectionLevel</code> request parameter specifies which details are
     * returned.</p>
     */
    inline const InspectionData& GetInspectionData() const{ return m_inspectionData; }

    /**
     * <p>Returns additional details about the state's execution, including its input
     * and output data processing flow, and HTTP request and response information. The
     * <code>inspectionLevel</code> request parameter specifies which details are
     * returned.</p>
     */
    inline void SetInspectionData(const InspectionData& value) { m_inspectionData = value; }

    /**
     * <p>Returns additional details about the state's execution, including its input
     * and output data processing flow, and HTTP request and response information. The
     * <code>inspectionLevel</code> request parameter specifies which details are
     * returned.</p>
     */
    inline void SetInspectionData(InspectionData&& value) { m_inspectionData = std::move(value); }

    /**
     * <p>Returns additional details about the state's execution, including its input
     * and output data processing flow, and HTTP request and response information. The
     * <code>inspectionLevel</code> request parameter specifies which details are
     * returned.</p>
     */
    inline TestStateResult& WithInspectionData(const InspectionData& value) { SetInspectionData(value); return *this;}

    /**
     * <p>Returns additional details about the state's execution, including its input
     * and output data processing flow, and HTTP request and response information. The
     * <code>inspectionLevel</code> request parameter specifies which details are
     * returned.</p>
     */
    inline TestStateResult& WithInspectionData(InspectionData&& value) { SetInspectionData(std::move(value)); return *this;}


    /**
     * <p>The name of the next state to transition to. If you haven't defined a next
     * state in your definition or if the execution of the state fails, this ﬁeld
     * doesn't contain a value.</p>
     */
    inline const Aws::String& GetNextState() const{ return m_nextState; }

    /**
     * <p>The name of the next state to transition to. If you haven't defined a next
     * state in your definition or if the execution of the state fails, this ﬁeld
     * doesn't contain a value.</p>
     */
    inline void SetNextState(const Aws::String& value) { m_nextState = value; }

    /**
     * <p>The name of the next state to transition to. If you haven't defined a next
     * state in your definition or if the execution of the state fails, this ﬁeld
     * doesn't contain a value.</p>
     */
    inline void SetNextState(Aws::String&& value) { m_nextState = std::move(value); }

    /**
     * <p>The name of the next state to transition to. If you haven't defined a next
     * state in your definition or if the execution of the state fails, this ﬁeld
     * doesn't contain a value.</p>
     */
    inline void SetNextState(const char* value) { m_nextState.assign(value); }

    /**
     * <p>The name of the next state to transition to. If you haven't defined a next
     * state in your definition or if the execution of the state fails, this ﬁeld
     * doesn't contain a value.</p>
     */
    inline TestStateResult& WithNextState(const Aws::String& value) { SetNextState(value); return *this;}

    /**
     * <p>The name of the next state to transition to. If you haven't defined a next
     * state in your definition or if the execution of the state fails, this ﬁeld
     * doesn't contain a value.</p>
     */
    inline TestStateResult& WithNextState(Aws::String&& value) { SetNextState(std::move(value)); return *this;}

    /**
     * <p>The name of the next state to transition to. If you haven't defined a next
     * state in your definition or if the execution of the state fails, this ﬁeld
     * doesn't contain a value.</p>
     */
    inline TestStateResult& WithNextState(const char* value) { SetNextState(value); return *this;}


    /**
     * <p>The execution status of the state.</p>
     */
    inline const TestExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The execution status of the state.</p>
     */
    inline void SetStatus(const TestExecutionStatus& value) { m_status = value; }

    /**
     * <p>The execution status of the state.</p>
     */
    inline void SetStatus(TestExecutionStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The execution status of the state.</p>
     */
    inline TestStateResult& WithStatus(const TestExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The execution status of the state.</p>
     */
    inline TestStateResult& WithStatus(TestExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline TestStateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline TestStateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline TestStateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_output;

    Aws::String m_error;

    Aws::String m_cause;

    InspectionData m_inspectionData;

    Aws::String m_nextState;

    TestExecutionStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
