/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/osis/model/PipelineSummary.h>
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
namespace OSIS
{
namespace Model
{
  class ListPipelinesResult
  {
  public:
    AWS_OSIS_API ListPipelinesResult();
    AWS_OSIS_API ListPipelinesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OSIS_API ListPipelinesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline ListPipelinesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline ListPipelinesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline ListPipelinesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of all existing Data Prepper pipelines.</p>
     */
    inline const Aws::Vector<PipelineSummary>& GetPipelines() const{ return m_pipelines; }

    /**
     * <p>A list of all existing Data Prepper pipelines.</p>
     */
    inline void SetPipelines(const Aws::Vector<PipelineSummary>& value) { m_pipelines = value; }

    /**
     * <p>A list of all existing Data Prepper pipelines.</p>
     */
    inline void SetPipelines(Aws::Vector<PipelineSummary>&& value) { m_pipelines = std::move(value); }

    /**
     * <p>A list of all existing Data Prepper pipelines.</p>
     */
    inline ListPipelinesResult& WithPipelines(const Aws::Vector<PipelineSummary>& value) { SetPipelines(value); return *this;}

    /**
     * <p>A list of all existing Data Prepper pipelines.</p>
     */
    inline ListPipelinesResult& WithPipelines(Aws::Vector<PipelineSummary>&& value) { SetPipelines(std::move(value)); return *this;}

    /**
     * <p>A list of all existing Data Prepper pipelines.</p>
     */
    inline ListPipelinesResult& AddPipelines(const PipelineSummary& value) { m_pipelines.push_back(value); return *this; }

    /**
     * <p>A list of all existing Data Prepper pipelines.</p>
     */
    inline ListPipelinesResult& AddPipelines(PipelineSummary&& value) { m_pipelines.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListPipelinesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListPipelinesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListPipelinesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<PipelineSummary> m_pipelines;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OSIS
} // namespace Aws
