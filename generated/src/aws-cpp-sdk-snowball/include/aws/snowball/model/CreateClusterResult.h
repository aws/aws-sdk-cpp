/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class CreateClusterResult
  {
  public:
    AWS_SNOWBALL_API CreateClusterResult();
    AWS_SNOWBALL_API CreateClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWBALL_API CreateClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The automatically generated ID for a cluster.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }

    /**
     * <p>The automatically generated ID for a cluster.</p>
     */
    inline void SetClusterId(const Aws::String& value) { m_clusterId = value; }

    /**
     * <p>The automatically generated ID for a cluster.</p>
     */
    inline void SetClusterId(Aws::String&& value) { m_clusterId = std::move(value); }

    /**
     * <p>The automatically generated ID for a cluster.</p>
     */
    inline void SetClusterId(const char* value) { m_clusterId.assign(value); }

    /**
     * <p>The automatically generated ID for a cluster.</p>
     */
    inline CreateClusterResult& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}

    /**
     * <p>The automatically generated ID for a cluster.</p>
     */
    inline CreateClusterResult& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}

    /**
     * <p>The automatically generated ID for a cluster.</p>
     */
    inline CreateClusterResult& WithClusterId(const char* value) { SetClusterId(value); return *this;}


    /**
     * <p>List of jobs created for this cluster. For syntax, see <a
     * href="http://amazonaws.com/snowball/latest/api-reference/API_ListJobs.html#API_ListJobs_ResponseSyntax">ListJobsResult$JobListEntries</a>
     * in this guide.</p>
     */
    inline const Aws::Vector<JobListEntry>& GetJobListEntries() const{ return m_jobListEntries; }

    /**
     * <p>List of jobs created for this cluster. For syntax, see <a
     * href="http://amazonaws.com/snowball/latest/api-reference/API_ListJobs.html#API_ListJobs_ResponseSyntax">ListJobsResult$JobListEntries</a>
     * in this guide.</p>
     */
    inline void SetJobListEntries(const Aws::Vector<JobListEntry>& value) { m_jobListEntries = value; }

    /**
     * <p>List of jobs created for this cluster. For syntax, see <a
     * href="http://amazonaws.com/snowball/latest/api-reference/API_ListJobs.html#API_ListJobs_ResponseSyntax">ListJobsResult$JobListEntries</a>
     * in this guide.</p>
     */
    inline void SetJobListEntries(Aws::Vector<JobListEntry>&& value) { m_jobListEntries = std::move(value); }

    /**
     * <p>List of jobs created for this cluster. For syntax, see <a
     * href="http://amazonaws.com/snowball/latest/api-reference/API_ListJobs.html#API_ListJobs_ResponseSyntax">ListJobsResult$JobListEntries</a>
     * in this guide.</p>
     */
    inline CreateClusterResult& WithJobListEntries(const Aws::Vector<JobListEntry>& value) { SetJobListEntries(value); return *this;}

    /**
     * <p>List of jobs created for this cluster. For syntax, see <a
     * href="http://amazonaws.com/snowball/latest/api-reference/API_ListJobs.html#API_ListJobs_ResponseSyntax">ListJobsResult$JobListEntries</a>
     * in this guide.</p>
     */
    inline CreateClusterResult& WithJobListEntries(Aws::Vector<JobListEntry>&& value) { SetJobListEntries(std::move(value)); return *this;}

    /**
     * <p>List of jobs created for this cluster. For syntax, see <a
     * href="http://amazonaws.com/snowball/latest/api-reference/API_ListJobs.html#API_ListJobs_ResponseSyntax">ListJobsResult$JobListEntries</a>
     * in this guide.</p>
     */
    inline CreateClusterResult& AddJobListEntries(const JobListEntry& value) { m_jobListEntries.push_back(value); return *this; }

    /**
     * <p>List of jobs created for this cluster. For syntax, see <a
     * href="http://amazonaws.com/snowball/latest/api-reference/API_ListJobs.html#API_ListJobs_ResponseSyntax">ListJobsResult$JobListEntries</a>
     * in this guide.</p>
     */
    inline CreateClusterResult& AddJobListEntries(JobListEntry&& value) { m_jobListEntries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateClusterResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateClusterResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateClusterResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_clusterId;

    Aws::Vector<JobListEntry> m_jobListEntries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
