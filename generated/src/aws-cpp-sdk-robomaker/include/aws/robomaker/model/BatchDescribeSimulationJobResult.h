/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/SimulationJob.h>
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
namespace RoboMaker
{
namespace Model
{
  class BatchDescribeSimulationJobResult
  {
  public:
    AWS_ROBOMAKER_API BatchDescribeSimulationJobResult() = default;
    AWS_ROBOMAKER_API BatchDescribeSimulationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROBOMAKER_API BatchDescribeSimulationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of simulation jobs.</p>
     */
    inline const Aws::Vector<SimulationJob>& GetJobs() const { return m_jobs; }
    template<typename JobsT = Aws::Vector<SimulationJob>>
    void SetJobs(JobsT&& value) { m_jobsHasBeenSet = true; m_jobs = std::forward<JobsT>(value); }
    template<typename JobsT = Aws::Vector<SimulationJob>>
    BatchDescribeSimulationJobResult& WithJobs(JobsT&& value) { SetJobs(std::forward<JobsT>(value)); return *this;}
    template<typename JobsT = SimulationJob>
    BatchDescribeSimulationJobResult& AddJobs(JobsT&& value) { m_jobsHasBeenSet = true; m_jobs.emplace_back(std::forward<JobsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of unprocessed simulation job Amazon Resource Names (ARNs).</p>
     */
    inline const Aws::Vector<Aws::String>& GetUnprocessedJobs() const { return m_unprocessedJobs; }
    template<typename UnprocessedJobsT = Aws::Vector<Aws::String>>
    void SetUnprocessedJobs(UnprocessedJobsT&& value) { m_unprocessedJobsHasBeenSet = true; m_unprocessedJobs = std::forward<UnprocessedJobsT>(value); }
    template<typename UnprocessedJobsT = Aws::Vector<Aws::String>>
    BatchDescribeSimulationJobResult& WithUnprocessedJobs(UnprocessedJobsT&& value) { SetUnprocessedJobs(std::forward<UnprocessedJobsT>(value)); return *this;}
    template<typename UnprocessedJobsT = Aws::String>
    BatchDescribeSimulationJobResult& AddUnprocessedJobs(UnprocessedJobsT&& value) { m_unprocessedJobsHasBeenSet = true; m_unprocessedJobs.emplace_back(std::forward<UnprocessedJobsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchDescribeSimulationJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SimulationJob> m_jobs;
    bool m_jobsHasBeenSet = false;

    Aws::Vector<Aws::String> m_unprocessedJobs;
    bool m_unprocessedJobsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
