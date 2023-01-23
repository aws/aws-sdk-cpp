/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/BatchInferenceJobSummary.h>
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
namespace Personalize
{
namespace Model
{
  class ListBatchInferenceJobsResult
  {
  public:
    AWS_PERSONALIZE_API ListBatchInferenceJobsResult();
    AWS_PERSONALIZE_API ListBatchInferenceJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API ListBatchInferenceJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list containing information on each job that is returned.</p>
     */
    inline const Aws::Vector<BatchInferenceJobSummary>& GetBatchInferenceJobs() const{ return m_batchInferenceJobs; }

    /**
     * <p>A list containing information on each job that is returned.</p>
     */
    inline void SetBatchInferenceJobs(const Aws::Vector<BatchInferenceJobSummary>& value) { m_batchInferenceJobs = value; }

    /**
     * <p>A list containing information on each job that is returned.</p>
     */
    inline void SetBatchInferenceJobs(Aws::Vector<BatchInferenceJobSummary>&& value) { m_batchInferenceJobs = std::move(value); }

    /**
     * <p>A list containing information on each job that is returned.</p>
     */
    inline ListBatchInferenceJobsResult& WithBatchInferenceJobs(const Aws::Vector<BatchInferenceJobSummary>& value) { SetBatchInferenceJobs(value); return *this;}

    /**
     * <p>A list containing information on each job that is returned.</p>
     */
    inline ListBatchInferenceJobsResult& WithBatchInferenceJobs(Aws::Vector<BatchInferenceJobSummary>&& value) { SetBatchInferenceJobs(std::move(value)); return *this;}

    /**
     * <p>A list containing information on each job that is returned.</p>
     */
    inline ListBatchInferenceJobsResult& AddBatchInferenceJobs(const BatchInferenceJobSummary& value) { m_batchInferenceJobs.push_back(value); return *this; }

    /**
     * <p>A list containing information on each job that is returned.</p>
     */
    inline ListBatchInferenceJobsResult& AddBatchInferenceJobs(BatchInferenceJobSummary&& value) { m_batchInferenceJobs.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. The value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. The value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. The value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. The value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. The value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListBatchInferenceJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. The value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListBatchInferenceJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. The value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListBatchInferenceJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<BatchInferenceJobSummary> m_batchInferenceJobs;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
