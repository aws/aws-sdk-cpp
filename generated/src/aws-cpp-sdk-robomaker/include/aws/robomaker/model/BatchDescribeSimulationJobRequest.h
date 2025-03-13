/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/RoboMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

  /**
   */
  class BatchDescribeSimulationJobRequest : public RoboMakerRequest
  {
  public:
    AWS_ROBOMAKER_API BatchDescribeSimulationJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDescribeSimulationJob"; }

    AWS_ROBOMAKER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A list of Amazon Resource Names (ARNs) of simulation jobs to describe.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJobs() const { return m_jobs; }
    inline bool JobsHasBeenSet() const { return m_jobsHasBeenSet; }
    template<typename JobsT = Aws::Vector<Aws::String>>
    void SetJobs(JobsT&& value) { m_jobsHasBeenSet = true; m_jobs = std::forward<JobsT>(value); }
    template<typename JobsT = Aws::Vector<Aws::String>>
    BatchDescribeSimulationJobRequest& WithJobs(JobsT&& value) { SetJobs(std::forward<JobsT>(value)); return *this;}
    template<typename JobsT = Aws::String>
    BatchDescribeSimulationJobRequest& AddJobs(JobsT&& value) { m_jobsHasBeenSet = true; m_jobs.emplace_back(std::forward<JobsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_jobs;
    bool m_jobsHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
