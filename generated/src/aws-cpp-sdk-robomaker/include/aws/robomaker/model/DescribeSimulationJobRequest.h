/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/RoboMakerRequest.h>
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
  class DescribeSimulationJobRequest : public RoboMakerRequest
  {
  public:
    AWS_ROBOMAKER_API DescribeSimulationJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSimulationJob"; }

    AWS_ROBOMAKER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job to be described.</p>
     */
    inline const Aws::String& GetJob() const { return m_job; }
    inline bool JobHasBeenSet() const { return m_jobHasBeenSet; }
    template<typename JobT = Aws::String>
    void SetJob(JobT&& value) { m_jobHasBeenSet = true; m_job = std::forward<JobT>(value); }
    template<typename JobT = Aws::String>
    DescribeSimulationJobRequest& WithJob(JobT&& value) { SetJob(std::forward<JobT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_job;
    bool m_jobHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
