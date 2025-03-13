/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/StepExecution.h>
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
namespace SSM
{
namespace Model
{
  class DescribeAutomationStepExecutionsResult
  {
  public:
    AWS_SSM_API DescribeAutomationStepExecutionsResult() = default;
    AWS_SSM_API DescribeAutomationStepExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeAutomationStepExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of details about the current state of all steps that make up an
     * execution.</p>
     */
    inline const Aws::Vector<StepExecution>& GetStepExecutions() const { return m_stepExecutions; }
    template<typename StepExecutionsT = Aws::Vector<StepExecution>>
    void SetStepExecutions(StepExecutionsT&& value) { m_stepExecutionsHasBeenSet = true; m_stepExecutions = std::forward<StepExecutionsT>(value); }
    template<typename StepExecutionsT = Aws::Vector<StepExecution>>
    DescribeAutomationStepExecutionsResult& WithStepExecutions(StepExecutionsT&& value) { SetStepExecutions(std::forward<StepExecutionsT>(value)); return *this;}
    template<typename StepExecutionsT = StepExecution>
    DescribeAutomationStepExecutionsResult& AddStepExecutions(StepExecutionsT&& value) { m_stepExecutionsHasBeenSet = true; m_stepExecutions.emplace_back(std::forward<StepExecutionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeAutomationStepExecutionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeAutomationStepExecutionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<StepExecution> m_stepExecutions;
    bool m_stepExecutionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
