/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/DataDeletionJobSummary.h>
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
  class ListDataDeletionJobsResult
  {
  public:
    AWS_PERSONALIZE_API ListDataDeletionJobsResult();
    AWS_PERSONALIZE_API ListDataDeletionJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API ListDataDeletionJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of data deletion jobs.</p>
     */
    inline const Aws::Vector<DataDeletionJobSummary>& GetDataDeletionJobs() const{ return m_dataDeletionJobs; }

    /**
     * <p>The list of data deletion jobs.</p>
     */
    inline void SetDataDeletionJobs(const Aws::Vector<DataDeletionJobSummary>& value) { m_dataDeletionJobs = value; }

    /**
     * <p>The list of data deletion jobs.</p>
     */
    inline void SetDataDeletionJobs(Aws::Vector<DataDeletionJobSummary>&& value) { m_dataDeletionJobs = std::move(value); }

    /**
     * <p>The list of data deletion jobs.</p>
     */
    inline ListDataDeletionJobsResult& WithDataDeletionJobs(const Aws::Vector<DataDeletionJobSummary>& value) { SetDataDeletionJobs(value); return *this;}

    /**
     * <p>The list of data deletion jobs.</p>
     */
    inline ListDataDeletionJobsResult& WithDataDeletionJobs(Aws::Vector<DataDeletionJobSummary>&& value) { SetDataDeletionJobs(std::move(value)); return *this;}

    /**
     * <p>The list of data deletion jobs.</p>
     */
    inline ListDataDeletionJobsResult& AddDataDeletionJobs(const DataDeletionJobSummary& value) { m_dataDeletionJobs.push_back(value); return *this; }

    /**
     * <p>The list of data deletion jobs.</p>
     */
    inline ListDataDeletionJobsResult& AddDataDeletionJobs(DataDeletionJobSummary&& value) { m_dataDeletionJobs.push_back(std::move(value)); return *this; }


    /**
     * <p>A token for getting the next set of data deletion jobs (if they exist).</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token for getting the next set of data deletion jobs (if they exist).</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token for getting the next set of data deletion jobs (if they exist).</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token for getting the next set of data deletion jobs (if they exist).</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token for getting the next set of data deletion jobs (if they exist).</p>
     */
    inline ListDataDeletionJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token for getting the next set of data deletion jobs (if they exist).</p>
     */
    inline ListDataDeletionJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token for getting the next set of data deletion jobs (if they exist).</p>
     */
    inline ListDataDeletionJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListDataDeletionJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListDataDeletionJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListDataDeletionJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<DataDeletionJobSummary> m_dataDeletionJobs;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
