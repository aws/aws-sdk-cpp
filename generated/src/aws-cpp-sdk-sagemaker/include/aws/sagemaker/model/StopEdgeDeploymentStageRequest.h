/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class StopEdgeDeploymentStageRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API StopEdgeDeploymentStageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopEdgeDeploymentStage"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the edge deployment plan to stop.</p>
     */
    inline const Aws::String& GetEdgeDeploymentPlanName() const{ return m_edgeDeploymentPlanName; }

    /**
     * <p>The name of the edge deployment plan to stop.</p>
     */
    inline bool EdgeDeploymentPlanNameHasBeenSet() const { return m_edgeDeploymentPlanNameHasBeenSet; }

    /**
     * <p>The name of the edge deployment plan to stop.</p>
     */
    inline void SetEdgeDeploymentPlanName(const Aws::String& value) { m_edgeDeploymentPlanNameHasBeenSet = true; m_edgeDeploymentPlanName = value; }

    /**
     * <p>The name of the edge deployment plan to stop.</p>
     */
    inline void SetEdgeDeploymentPlanName(Aws::String&& value) { m_edgeDeploymentPlanNameHasBeenSet = true; m_edgeDeploymentPlanName = std::move(value); }

    /**
     * <p>The name of the edge deployment plan to stop.</p>
     */
    inline void SetEdgeDeploymentPlanName(const char* value) { m_edgeDeploymentPlanNameHasBeenSet = true; m_edgeDeploymentPlanName.assign(value); }

    /**
     * <p>The name of the edge deployment plan to stop.</p>
     */
    inline StopEdgeDeploymentStageRequest& WithEdgeDeploymentPlanName(const Aws::String& value) { SetEdgeDeploymentPlanName(value); return *this;}

    /**
     * <p>The name of the edge deployment plan to stop.</p>
     */
    inline StopEdgeDeploymentStageRequest& WithEdgeDeploymentPlanName(Aws::String&& value) { SetEdgeDeploymentPlanName(std::move(value)); return *this;}

    /**
     * <p>The name of the edge deployment plan to stop.</p>
     */
    inline StopEdgeDeploymentStageRequest& WithEdgeDeploymentPlanName(const char* value) { SetEdgeDeploymentPlanName(value); return *this;}


    /**
     * <p>The name of the stage to stop.</p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }

    /**
     * <p>The name of the stage to stop.</p>
     */
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }

    /**
     * <p>The name of the stage to stop.</p>
     */
    inline void SetStageName(const Aws::String& value) { m_stageNameHasBeenSet = true; m_stageName = value; }

    /**
     * <p>The name of the stage to stop.</p>
     */
    inline void SetStageName(Aws::String&& value) { m_stageNameHasBeenSet = true; m_stageName = std::move(value); }

    /**
     * <p>The name of the stage to stop.</p>
     */
    inline void SetStageName(const char* value) { m_stageNameHasBeenSet = true; m_stageName.assign(value); }

    /**
     * <p>The name of the stage to stop.</p>
     */
    inline StopEdgeDeploymentStageRequest& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}

    /**
     * <p>The name of the stage to stop.</p>
     */
    inline StopEdgeDeploymentStageRequest& WithStageName(Aws::String&& value) { SetStageName(std::move(value)); return *this;}

    /**
     * <p>The name of the stage to stop.</p>
     */
    inline StopEdgeDeploymentStageRequest& WithStageName(const char* value) { SetStageName(value); return *this;}

  private:

    Aws::String m_edgeDeploymentPlanName;
    bool m_edgeDeploymentPlanNameHasBeenSet = false;

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
