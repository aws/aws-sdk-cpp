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
    AWS_ROBOMAKER_API BatchDescribeSimulationJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDescribeSimulationJob"; }

    AWS_ROBOMAKER_API Aws::String SerializePayload() const override;


    /**
     * <p>A list of Amazon Resource Names (ARNs) of simulation jobs to describe.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJobs() const{ return m_jobs; }

    /**
     * <p>A list of Amazon Resource Names (ARNs) of simulation jobs to describe.</p>
     */
    inline bool JobsHasBeenSet() const { return m_jobsHasBeenSet; }

    /**
     * <p>A list of Amazon Resource Names (ARNs) of simulation jobs to describe.</p>
     */
    inline void SetJobs(const Aws::Vector<Aws::String>& value) { m_jobsHasBeenSet = true; m_jobs = value; }

    /**
     * <p>A list of Amazon Resource Names (ARNs) of simulation jobs to describe.</p>
     */
    inline void SetJobs(Aws::Vector<Aws::String>&& value) { m_jobsHasBeenSet = true; m_jobs = std::move(value); }

    /**
     * <p>A list of Amazon Resource Names (ARNs) of simulation jobs to describe.</p>
     */
    inline BatchDescribeSimulationJobRequest& WithJobs(const Aws::Vector<Aws::String>& value) { SetJobs(value); return *this;}

    /**
     * <p>A list of Amazon Resource Names (ARNs) of simulation jobs to describe.</p>
     */
    inline BatchDescribeSimulationJobRequest& WithJobs(Aws::Vector<Aws::String>&& value) { SetJobs(std::move(value)); return *this;}

    /**
     * <p>A list of Amazon Resource Names (ARNs) of simulation jobs to describe.</p>
     */
    inline BatchDescribeSimulationJobRequest& AddJobs(const Aws::String& value) { m_jobsHasBeenSet = true; m_jobs.push_back(value); return *this; }

    /**
     * <p>A list of Amazon Resource Names (ARNs) of simulation jobs to describe.</p>
     */
    inline BatchDescribeSimulationJobRequest& AddJobs(Aws::String&& value) { m_jobsHasBeenSet = true; m_jobs.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of Amazon Resource Names (ARNs) of simulation jobs to describe.</p>
     */
    inline BatchDescribeSimulationJobRequest& AddJobs(const char* value) { m_jobsHasBeenSet = true; m_jobs.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_jobs;
    bool m_jobsHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
