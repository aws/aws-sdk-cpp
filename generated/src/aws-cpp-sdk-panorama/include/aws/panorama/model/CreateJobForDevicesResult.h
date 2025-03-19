/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/panorama/model/Job.h>
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
namespace Panorama
{
namespace Model
{
  class CreateJobForDevicesResult
  {
  public:
    AWS_PANORAMA_API CreateJobForDevicesResult() = default;
    AWS_PANORAMA_API CreateJobForDevicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API CreateJobForDevicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of jobs.</p>
     */
    inline const Aws::Vector<Job>& GetJobs() const { return m_jobs; }
    template<typename JobsT = Aws::Vector<Job>>
    void SetJobs(JobsT&& value) { m_jobsHasBeenSet = true; m_jobs = std::forward<JobsT>(value); }
    template<typename JobsT = Aws::Vector<Job>>
    CreateJobForDevicesResult& WithJobs(JobsT&& value) { SetJobs(std::forward<JobsT>(value)); return *this;}
    template<typename JobsT = Job>
    CreateJobForDevicesResult& AddJobs(JobsT&& value) { m_jobsHasBeenSet = true; m_jobs.emplace_back(std::forward<JobsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateJobForDevicesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Job> m_jobs;
    bool m_jobsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
