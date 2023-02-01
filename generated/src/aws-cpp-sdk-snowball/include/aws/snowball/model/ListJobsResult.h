/**
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
  class ListJobsResult
  {
  public:
    AWS_SNOWBALL_API ListJobsResult();
    AWS_SNOWBALL_API ListJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWBALL_API ListJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Each <code>JobListEntry</code> object contains a job's state, a job's ID, and
     * a value that indicates whether the job is a job part, in the case of export
     * jobs. </p>
     */
    inline const Aws::Vector<JobListEntry>& GetJobListEntries() const{ return m_jobListEntries; }

    /**
     * <p>Each <code>JobListEntry</code> object contains a job's state, a job's ID, and
     * a value that indicates whether the job is a job part, in the case of export
     * jobs. </p>
     */
    inline void SetJobListEntries(const Aws::Vector<JobListEntry>& value) { m_jobListEntries = value; }

    /**
     * <p>Each <code>JobListEntry</code> object contains a job's state, a job's ID, and
     * a value that indicates whether the job is a job part, in the case of export
     * jobs. </p>
     */
    inline void SetJobListEntries(Aws::Vector<JobListEntry>&& value) { m_jobListEntries = std::move(value); }

    /**
     * <p>Each <code>JobListEntry</code> object contains a job's state, a job's ID, and
     * a value that indicates whether the job is a job part, in the case of export
     * jobs. </p>
     */
    inline ListJobsResult& WithJobListEntries(const Aws::Vector<JobListEntry>& value) { SetJobListEntries(value); return *this;}

    /**
     * <p>Each <code>JobListEntry</code> object contains a job's state, a job's ID, and
     * a value that indicates whether the job is a job part, in the case of export
     * jobs. </p>
     */
    inline ListJobsResult& WithJobListEntries(Aws::Vector<JobListEntry>&& value) { SetJobListEntries(std::move(value)); return *this;}

    /**
     * <p>Each <code>JobListEntry</code> object contains a job's state, a job's ID, and
     * a value that indicates whether the job is a job part, in the case of export
     * jobs. </p>
     */
    inline ListJobsResult& AddJobListEntries(const JobListEntry& value) { m_jobListEntries.push_back(value); return *this; }

    /**
     * <p>Each <code>JobListEntry</code> object contains a job's state, a job's ID, and
     * a value that indicates whether the job is a job part, in the case of export
     * jobs. </p>
     */
    inline ListJobsResult& AddJobListEntries(JobListEntry&& value) { m_jobListEntries.push_back(std::move(value)); return *this; }


    /**
     * <p>HTTP requests are stateless. If you use this automatically generated
     * <code>NextToken</code> value in your next <code>ListJobs</code> call, your
     * returned <code>JobListEntry</code> objects will start from this point in the
     * array.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>HTTP requests are stateless. If you use this automatically generated
     * <code>NextToken</code> value in your next <code>ListJobs</code> call, your
     * returned <code>JobListEntry</code> objects will start from this point in the
     * array.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>HTTP requests are stateless. If you use this automatically generated
     * <code>NextToken</code> value in your next <code>ListJobs</code> call, your
     * returned <code>JobListEntry</code> objects will start from this point in the
     * array.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>HTTP requests are stateless. If you use this automatically generated
     * <code>NextToken</code> value in your next <code>ListJobs</code> call, your
     * returned <code>JobListEntry</code> objects will start from this point in the
     * array.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>HTTP requests are stateless. If you use this automatically generated
     * <code>NextToken</code> value in your next <code>ListJobs</code> call, your
     * returned <code>JobListEntry</code> objects will start from this point in the
     * array.</p>
     */
    inline ListJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>HTTP requests are stateless. If you use this automatically generated
     * <code>NextToken</code> value in your next <code>ListJobs</code> call, your
     * returned <code>JobListEntry</code> objects will start from this point in the
     * array.</p>
     */
    inline ListJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>HTTP requests are stateless. If you use this automatically generated
     * <code>NextToken</code> value in your next <code>ListJobs</code> call, your
     * returned <code>JobListEntry</code> objects will start from this point in the
     * array.</p>
     */
    inline ListJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<JobListEntry> m_jobListEntries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
