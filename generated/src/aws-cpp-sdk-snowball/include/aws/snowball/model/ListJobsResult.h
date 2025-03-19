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
    AWS_SNOWBALL_API ListJobsResult() = default;
    AWS_SNOWBALL_API ListJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWBALL_API ListJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Each <code>JobListEntry</code> object contains a job's state, a job's ID, and
     * a value that indicates whether the job is a job part, in the case of export
     * jobs. </p>
     */
    inline const Aws::Vector<JobListEntry>& GetJobListEntries() const { return m_jobListEntries; }
    template<typename JobListEntriesT = Aws::Vector<JobListEntry>>
    void SetJobListEntries(JobListEntriesT&& value) { m_jobListEntriesHasBeenSet = true; m_jobListEntries = std::forward<JobListEntriesT>(value); }
    template<typename JobListEntriesT = Aws::Vector<JobListEntry>>
    ListJobsResult& WithJobListEntries(JobListEntriesT&& value) { SetJobListEntries(std::forward<JobListEntriesT>(value)); return *this;}
    template<typename JobListEntriesT = JobListEntry>
    ListJobsResult& AddJobListEntries(JobListEntriesT&& value) { m_jobListEntriesHasBeenSet = true; m_jobListEntries.emplace_back(std::forward<JobListEntriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>HTTP requests are stateless. If you use this automatically generated
     * <code>NextToken</code> value in your next <code>ListJobs</code> call, your
     * returned <code>JobListEntry</code> objects will start from this point in the
     * array.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<JobListEntry> m_jobListEntries;
    bool m_jobListEntriesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
