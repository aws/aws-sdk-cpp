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
    AWS_SFN_API TestStateResult() = default;
    AWS_SFN_API TestStateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SFN_API TestStateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The JSON output data of the state. Length constraints apply to the payload
     * size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline const Aws::String& GetOutput() const { return m_output; }
    template<typename OutputT = Aws::String>
    void SetOutput(OutputT&& value) { m_outputHasBeenSet = true; m_output = std::forward<OutputT>(value); }
    template<typename OutputT = Aws::String>
    TestStateResult& WithOutput(OutputT&& value) { SetOutput(std::forward<OutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error returned when the execution of a state fails.</p>
     */
    inline const Aws::String& GetError() const { return m_error; }
    template<typename ErrorT = Aws::String>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = Aws::String>
    TestStateResult& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A detailed explanation of the cause for the error when the execution of a
     * state fails.</p>
     */
    inline const Aws::String& GetCause() const { return m_cause; }
    template<typename CauseT = Aws::String>
    void SetCause(CauseT&& value) { m_causeHasBeenSet = true; m_cause = std::forward<CauseT>(value); }
    template<typename CauseT = Aws::String>
    TestStateResult& WithCause(CauseT&& value) { SetCause(std::forward<CauseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns additional details about the state's execution, including its input
     * and output data processing flow, and HTTP request and response information. The
     * <code>inspectionLevel</code> request parameter specifies which details are
     * returned.</p>
     */
    inline const InspectionData& GetInspectionData() const { return m_inspectionData; }
    template<typename InspectionDataT = InspectionData>
    void SetInspectionData(InspectionDataT&& value) { m_inspectionDataHasBeenSet = true; m_inspectionData = std::forward<InspectionDataT>(value); }
    template<typename InspectionDataT = InspectionData>
    TestStateResult& WithInspectionData(InspectionDataT&& value) { SetInspectionData(std::forward<InspectionDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the next state to transition to. If you haven't defined a next
     * state in your definition or if the execution of the state fails, this field
     * doesn't contain a value.</p>
     */
    inline const Aws::String& GetNextState() const { return m_nextState; }
    template<typename NextStateT = Aws::String>
    void SetNextState(NextStateT&& value) { m_nextStateHasBeenSet = true; m_nextState = std::forward<NextStateT>(value); }
    template<typename NextStateT = Aws::String>
    TestStateResult& WithNextState(NextStateT&& value) { SetNextState(std::forward<NextStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution status of the state.</p>
     */
    inline TestExecutionStatus GetStatus() const { return m_status; }
    inline void SetStatus(TestExecutionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline TestStateResult& WithStatus(TestExecutionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    TestStateResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_output;
    bool m_outputHasBeenSet = false;

    Aws::String m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_cause;
    bool m_causeHasBeenSet = false;

    InspectionData m_inspectionData;
    bool m_inspectionDataHasBeenSet = false;

    Aws::String m_nextState;
    bool m_nextStateHasBeenSet = false;

    TestExecutionStatus m_status{TestExecutionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
