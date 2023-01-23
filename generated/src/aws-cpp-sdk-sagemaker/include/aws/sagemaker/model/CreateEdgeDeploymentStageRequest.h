/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/DeploymentStage.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateEdgeDeploymentStageRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateEdgeDeploymentStageRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEdgeDeploymentStage"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the edge deployment plan.</p>
     */
    inline const Aws::String& GetEdgeDeploymentPlanName() const{ return m_edgeDeploymentPlanName; }

    /**
     * <p>The name of the edge deployment plan.</p>
     */
    inline bool EdgeDeploymentPlanNameHasBeenSet() const { return m_edgeDeploymentPlanNameHasBeenSet; }

    /**
     * <p>The name of the edge deployment plan.</p>
     */
    inline void SetEdgeDeploymentPlanName(const Aws::String& value) { m_edgeDeploymentPlanNameHasBeenSet = true; m_edgeDeploymentPlanName = value; }

    /**
     * <p>The name of the edge deployment plan.</p>
     */
    inline void SetEdgeDeploymentPlanName(Aws::String&& value) { m_edgeDeploymentPlanNameHasBeenSet = true; m_edgeDeploymentPlanName = std::move(value); }

    /**
     * <p>The name of the edge deployment plan.</p>
     */
    inline void SetEdgeDeploymentPlanName(const char* value) { m_edgeDeploymentPlanNameHasBeenSet = true; m_edgeDeploymentPlanName.assign(value); }

    /**
     * <p>The name of the edge deployment plan.</p>
     */
    inline CreateEdgeDeploymentStageRequest& WithEdgeDeploymentPlanName(const Aws::String& value) { SetEdgeDeploymentPlanName(value); return *this;}

    /**
     * <p>The name of the edge deployment plan.</p>
     */
    inline CreateEdgeDeploymentStageRequest& WithEdgeDeploymentPlanName(Aws::String&& value) { SetEdgeDeploymentPlanName(std::move(value)); return *this;}

    /**
     * <p>The name of the edge deployment plan.</p>
     */
    inline CreateEdgeDeploymentStageRequest& WithEdgeDeploymentPlanName(const char* value) { SetEdgeDeploymentPlanName(value); return *this;}


    /**
     * <p>List of stages to be added to the edge deployment plan.</p>
     */
    inline const Aws::Vector<DeploymentStage>& GetStages() const{ return m_stages; }

    /**
     * <p>List of stages to be added to the edge deployment plan.</p>
     */
    inline bool StagesHasBeenSet() const { return m_stagesHasBeenSet; }

    /**
     * <p>List of stages to be added to the edge deployment plan.</p>
     */
    inline void SetStages(const Aws::Vector<DeploymentStage>& value) { m_stagesHasBeenSet = true; m_stages = value; }

    /**
     * <p>List of stages to be added to the edge deployment plan.</p>
     */
    inline void SetStages(Aws::Vector<DeploymentStage>&& value) { m_stagesHasBeenSet = true; m_stages = std::move(value); }

    /**
     * <p>List of stages to be added to the edge deployment plan.</p>
     */
    inline CreateEdgeDeploymentStageRequest& WithStages(const Aws::Vector<DeploymentStage>& value) { SetStages(value); return *this;}

    /**
     * <p>List of stages to be added to the edge deployment plan.</p>
     */
    inline CreateEdgeDeploymentStageRequest& WithStages(Aws::Vector<DeploymentStage>&& value) { SetStages(std::move(value)); return *this;}

    /**
     * <p>List of stages to be added to the edge deployment plan.</p>
     */
    inline CreateEdgeDeploymentStageRequest& AddStages(const DeploymentStage& value) { m_stagesHasBeenSet = true; m_stages.push_back(value); return *this; }

    /**
     * <p>List of stages to be added to the edge deployment plan.</p>
     */
    inline CreateEdgeDeploymentStageRequest& AddStages(DeploymentStage&& value) { m_stagesHasBeenSet = true; m_stages.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_edgeDeploymentPlanName;
    bool m_edgeDeploymentPlanNameHasBeenSet = false;

    Aws::Vector<DeploymentStage> m_stages;
    bool m_stagesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
