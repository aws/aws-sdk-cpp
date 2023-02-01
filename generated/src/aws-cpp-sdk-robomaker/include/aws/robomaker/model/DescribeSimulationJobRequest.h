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
    AWS_ROBOMAKER_API DescribeSimulationJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSimulationJob"; }

    AWS_ROBOMAKER_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job to be described.</p>
     */
    inline const Aws::String& GetJob() const{ return m_job; }

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job to be described.</p>
     */
    inline bool JobHasBeenSet() const { return m_jobHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job to be described.</p>
     */
    inline void SetJob(const Aws::String& value) { m_jobHasBeenSet = true; m_job = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job to be described.</p>
     */
    inline void SetJob(Aws::String&& value) { m_jobHasBeenSet = true; m_job = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job to be described.</p>
     */
    inline void SetJob(const char* value) { m_jobHasBeenSet = true; m_job.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job to be described.</p>
     */
    inline DescribeSimulationJobRequest& WithJob(const Aws::String& value) { SetJob(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job to be described.</p>
     */
    inline DescribeSimulationJobRequest& WithJob(Aws::String&& value) { SetJob(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job to be described.</p>
     */
    inline DescribeSimulationJobRequest& WithJob(const char* value) { SetJob(value); return *this;}

  private:

    Aws::String m_job;
    bool m_jobHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
