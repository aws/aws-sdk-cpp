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
    AWS_SNOWBALL_API CreateClusterResult() = default;
    AWS_SNOWBALL_API CreateClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWBALL_API CreateClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The automatically generated ID for a cluster.</p>
     */
    inline const Aws::String& GetClusterId() const { return m_clusterId; }
    template<typename ClusterIdT = Aws::String>
    void SetClusterId(ClusterIdT&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::forward<ClusterIdT>(value); }
    template<typename ClusterIdT = Aws::String>
    CreateClusterResult& WithClusterId(ClusterIdT&& value) { SetClusterId(std::forward<ClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of jobs created for this cluster. For syntax, see <a
     * href="http://amazonaws.com/snowball/latest/api-reference/API_ListJobs.html#API_ListJobs_ResponseSyntax">ListJobsResult$JobListEntries</a>
     * in this guide.</p>
     */
    inline const Aws::Vector<JobListEntry>& GetJobListEntries() const { return m_jobListEntries; }
    template<typename JobListEntriesT = Aws::Vector<JobListEntry>>
    void SetJobListEntries(JobListEntriesT&& value) { m_jobListEntriesHasBeenSet = true; m_jobListEntries = std::forward<JobListEntriesT>(value); }
    template<typename JobListEntriesT = Aws::Vector<JobListEntry>>
    CreateClusterResult& WithJobListEntries(JobListEntriesT&& value) { SetJobListEntries(std::forward<JobListEntriesT>(value)); return *this;}
    template<typename JobListEntriesT = JobListEntry>
    CreateClusterResult& AddJobListEntries(JobListEntriesT&& value) { m_jobListEntriesHasBeenSet = true; m_jobListEntries.emplace_back(std::forward<JobListEntriesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateClusterResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    Aws::Vector<JobListEntry> m_jobListEntries;
    bool m_jobListEntriesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
