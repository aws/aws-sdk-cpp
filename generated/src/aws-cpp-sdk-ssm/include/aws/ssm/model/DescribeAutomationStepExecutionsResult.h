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
    AWS_SSM_API DescribeAutomationStepExecutionsResult();
    AWS_SSM_API DescribeAutomationStepExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API DescribeAutomationStepExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of details about the current state of all steps that make up an
     * execution.</p>
     */
    inline const Aws::Vector<StepExecution>& GetStepExecutions() const{ return m_stepExecutions; }

    /**
     * <p>A list of details about the current state of all steps that make up an
     * execution.</p>
     */
    inline void SetStepExecutions(const Aws::Vector<StepExecution>& value) { m_stepExecutions = value; }

    /**
     * <p>A list of details about the current state of all steps that make up an
     * execution.</p>
     */
    inline void SetStepExecutions(Aws::Vector<StepExecution>&& value) { m_stepExecutions = std::move(value); }

    /**
     * <p>A list of details about the current state of all steps that make up an
     * execution.</p>
     */
    inline DescribeAutomationStepExecutionsResult& WithStepExecutions(const Aws::Vector<StepExecution>& value) { SetStepExecutions(value); return *this;}

    /**
     * <p>A list of details about the current state of all steps that make up an
     * execution.</p>
     */
    inline DescribeAutomationStepExecutionsResult& WithStepExecutions(Aws::Vector<StepExecution>&& value) { SetStepExecutions(std::move(value)); return *this;}

    /**
     * <p>A list of details about the current state of all steps that make up an
     * execution.</p>
     */
    inline DescribeAutomationStepExecutionsResult& AddStepExecutions(const StepExecution& value) { m_stepExecutions.push_back(value); return *this; }

    /**
     * <p>A list of details about the current state of all steps that make up an
     * execution.</p>
     */
    inline DescribeAutomationStepExecutionsResult& AddStepExecutions(StepExecution&& value) { m_stepExecutions.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeAutomationStepExecutionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeAutomationStepExecutionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeAutomationStepExecutionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeAutomationStepExecutionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeAutomationStepExecutionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeAutomationStepExecutionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<StepExecution> m_stepExecutions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
