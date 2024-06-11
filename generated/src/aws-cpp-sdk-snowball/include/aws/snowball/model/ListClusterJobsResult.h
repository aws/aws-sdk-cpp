﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snowball/model/JobListEntry.h>
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
namespace Snowball
{
namespace Model
{
  class ListClusterJobsResult
  {
  public:
    AWS_SNOWBALL_API ListClusterJobsResult();
    AWS_SNOWBALL_API ListClusterJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWBALL_API ListClusterJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Each <code>JobListEntry</code> object contains a job's state, a job's ID, and
     * a value that indicates whether the job is a job part, in the case of export
     * jobs. </p>
     */
    inline const Aws::Vector<JobListEntry>& GetJobListEntries() const{ return m_jobListEntries; }
    inline void SetJobListEntries(const Aws::Vector<JobListEntry>& value) { m_jobListEntries = value; }
    inline void SetJobListEntries(Aws::Vector<JobListEntry>&& value) { m_jobListEntries = std::move(value); }
    inline ListClusterJobsResult& WithJobListEntries(const Aws::Vector<JobListEntry>& value) { SetJobListEntries(value); return *this;}
    inline ListClusterJobsResult& WithJobListEntries(Aws::Vector<JobListEntry>&& value) { SetJobListEntries(std::move(value)); return *this;}
    inline ListClusterJobsResult& AddJobListEntries(const JobListEntry& value) { m_jobListEntries.push_back(value); return *this; }
    inline ListClusterJobsResult& AddJobListEntries(JobListEntry&& value) { m_jobListEntries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>HTTP requests are stateless. If you use the automatically generated
     * <code>NextToken</code> value in your next <code>ListClusterJobsResult</code>
     * call, your list of returned jobs will start from this point in the array.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListClusterJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListClusterJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListClusterJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListClusterJobsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListClusterJobsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListClusterJobsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<JobListEntry> m_jobListEntries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
