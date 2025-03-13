/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snow-device-management/model/ExecutionSummary.h>
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
namespace SnowDeviceManagement
{
namespace Model
{
  class ListExecutionsResult
  {
  public:
    AWS_SNOWDEVICEMANAGEMENT_API ListExecutionsResult() = default;
    AWS_SNOWDEVICEMANAGEMENT_API ListExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWDEVICEMANAGEMENT_API ListExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of executions. Each execution contains the task ID, the device that
     * the task is executing on, the execution ID, and the status of the execution.</p>
     */
    inline const Aws::Vector<ExecutionSummary>& GetExecutions() const { return m_executions; }
    template<typename ExecutionsT = Aws::Vector<ExecutionSummary>>
    void SetExecutions(ExecutionsT&& value) { m_executionsHasBeenSet = true; m_executions = std::forward<ExecutionsT>(value); }
    template<typename ExecutionsT = Aws::Vector<ExecutionSummary>>
    ListExecutionsResult& WithExecutions(ExecutionsT&& value) { SetExecutions(std::forward<ExecutionsT>(value)); return *this;}
    template<typename ExecutionsT = ExecutionSummary>
    ListExecutionsResult& AddExecutions(ExecutionsT&& value) { m_executionsHasBeenSet = true; m_executions.emplace_back(std::forward<ExecutionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token to continue to the next page of executions.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListExecutionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListExecutionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ExecutionSummary> m_executions;
    bool m_executionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
