﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/PipelineExecutionSummary.h>
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
namespace SageMaker
{
namespace Model
{
  class ListPipelineExecutionsResult
  {
  public:
    AWS_SAGEMAKER_API ListPipelineExecutionsResult();
    AWS_SAGEMAKER_API ListPipelineExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListPipelineExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains a sorted list of pipeline execution summary objects matching the
     * specified filters. Each run summary includes the Amazon Resource Name (ARN) of
     * the pipeline execution, the run date, and the status. This list can be empty.
     * </p>
     */
    inline const Aws::Vector<PipelineExecutionSummary>& GetPipelineExecutionSummaries() const{ return m_pipelineExecutionSummaries; }
    inline void SetPipelineExecutionSummaries(const Aws::Vector<PipelineExecutionSummary>& value) { m_pipelineExecutionSummaries = value; }
    inline void SetPipelineExecutionSummaries(Aws::Vector<PipelineExecutionSummary>&& value) { m_pipelineExecutionSummaries = std::move(value); }
    inline ListPipelineExecutionsResult& WithPipelineExecutionSummaries(const Aws::Vector<PipelineExecutionSummary>& value) { SetPipelineExecutionSummaries(value); return *this;}
    inline ListPipelineExecutionsResult& WithPipelineExecutionSummaries(Aws::Vector<PipelineExecutionSummary>&& value) { SetPipelineExecutionSummaries(std::move(value)); return *this;}
    inline ListPipelineExecutionsResult& AddPipelineExecutionSummaries(const PipelineExecutionSummary& value) { m_pipelineExecutionSummaries.push_back(value); return *this; }
    inline ListPipelineExecutionsResult& AddPipelineExecutionSummaries(PipelineExecutionSummary&& value) { m_pipelineExecutionSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the result of the previous <code>ListPipelineExecutions</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of pipeline executions, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListPipelineExecutionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListPipelineExecutionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListPipelineExecutionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListPipelineExecutionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListPipelineExecutionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListPipelineExecutionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<PipelineExecutionSummary> m_pipelineExecutionSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
