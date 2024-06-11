﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/EdgeDeploymentModelConfig.h>
#include <aws/sagemaker/model/DeploymentStage.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateEdgeDeploymentPlanRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateEdgeDeploymentPlanRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEdgeDeploymentPlan"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the edge deployment plan.</p>
     */
    inline const Aws::String& GetEdgeDeploymentPlanName() const{ return m_edgeDeploymentPlanName; }
    inline bool EdgeDeploymentPlanNameHasBeenSet() const { return m_edgeDeploymentPlanNameHasBeenSet; }
    inline void SetEdgeDeploymentPlanName(const Aws::String& value) { m_edgeDeploymentPlanNameHasBeenSet = true; m_edgeDeploymentPlanName = value; }
    inline void SetEdgeDeploymentPlanName(Aws::String&& value) { m_edgeDeploymentPlanNameHasBeenSet = true; m_edgeDeploymentPlanName = std::move(value); }
    inline void SetEdgeDeploymentPlanName(const char* value) { m_edgeDeploymentPlanNameHasBeenSet = true; m_edgeDeploymentPlanName.assign(value); }
    inline CreateEdgeDeploymentPlanRequest& WithEdgeDeploymentPlanName(const Aws::String& value) { SetEdgeDeploymentPlanName(value); return *this;}
    inline CreateEdgeDeploymentPlanRequest& WithEdgeDeploymentPlanName(Aws::String&& value) { SetEdgeDeploymentPlanName(std::move(value)); return *this;}
    inline CreateEdgeDeploymentPlanRequest& WithEdgeDeploymentPlanName(const char* value) { SetEdgeDeploymentPlanName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of models associated with the edge deployment plan.</p>
     */
    inline const Aws::Vector<EdgeDeploymentModelConfig>& GetModelConfigs() const{ return m_modelConfigs; }
    inline bool ModelConfigsHasBeenSet() const { return m_modelConfigsHasBeenSet; }
    inline void SetModelConfigs(const Aws::Vector<EdgeDeploymentModelConfig>& value) { m_modelConfigsHasBeenSet = true; m_modelConfigs = value; }
    inline void SetModelConfigs(Aws::Vector<EdgeDeploymentModelConfig>&& value) { m_modelConfigsHasBeenSet = true; m_modelConfigs = std::move(value); }
    inline CreateEdgeDeploymentPlanRequest& WithModelConfigs(const Aws::Vector<EdgeDeploymentModelConfig>& value) { SetModelConfigs(value); return *this;}
    inline CreateEdgeDeploymentPlanRequest& WithModelConfigs(Aws::Vector<EdgeDeploymentModelConfig>&& value) { SetModelConfigs(std::move(value)); return *this;}
    inline CreateEdgeDeploymentPlanRequest& AddModelConfigs(const EdgeDeploymentModelConfig& value) { m_modelConfigsHasBeenSet = true; m_modelConfigs.push_back(value); return *this; }
    inline CreateEdgeDeploymentPlanRequest& AddModelConfigs(EdgeDeploymentModelConfig&& value) { m_modelConfigsHasBeenSet = true; m_modelConfigs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The device fleet used for this edge deployment plan.</p>
     */
    inline const Aws::String& GetDeviceFleetName() const{ return m_deviceFleetName; }
    inline bool DeviceFleetNameHasBeenSet() const { return m_deviceFleetNameHasBeenSet; }
    inline void SetDeviceFleetName(const Aws::String& value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName = value; }
    inline void SetDeviceFleetName(Aws::String&& value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName = std::move(value); }
    inline void SetDeviceFleetName(const char* value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName.assign(value); }
    inline CreateEdgeDeploymentPlanRequest& WithDeviceFleetName(const Aws::String& value) { SetDeviceFleetName(value); return *this;}
    inline CreateEdgeDeploymentPlanRequest& WithDeviceFleetName(Aws::String&& value) { SetDeviceFleetName(std::move(value)); return *this;}
    inline CreateEdgeDeploymentPlanRequest& WithDeviceFleetName(const char* value) { SetDeviceFleetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of stages of the edge deployment plan. The number of stages is limited
     * to 10 per deployment.</p>
     */
    inline const Aws::Vector<DeploymentStage>& GetStages() const{ return m_stages; }
    inline bool StagesHasBeenSet() const { return m_stagesHasBeenSet; }
    inline void SetStages(const Aws::Vector<DeploymentStage>& value) { m_stagesHasBeenSet = true; m_stages = value; }
    inline void SetStages(Aws::Vector<DeploymentStage>&& value) { m_stagesHasBeenSet = true; m_stages = std::move(value); }
    inline CreateEdgeDeploymentPlanRequest& WithStages(const Aws::Vector<DeploymentStage>& value) { SetStages(value); return *this;}
    inline CreateEdgeDeploymentPlanRequest& WithStages(Aws::Vector<DeploymentStage>&& value) { SetStages(std::move(value)); return *this;}
    inline CreateEdgeDeploymentPlanRequest& AddStages(const DeploymentStage& value) { m_stagesHasBeenSet = true; m_stages.push_back(value); return *this; }
    inline CreateEdgeDeploymentPlanRequest& AddStages(DeploymentStage&& value) { m_stagesHasBeenSet = true; m_stages.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of tags with which to tag the edge deployment plan.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateEdgeDeploymentPlanRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateEdgeDeploymentPlanRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateEdgeDeploymentPlanRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateEdgeDeploymentPlanRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_edgeDeploymentPlanName;
    bool m_edgeDeploymentPlanNameHasBeenSet = false;

    Aws::Vector<EdgeDeploymentModelConfig> m_modelConfigs;
    bool m_modelConfigsHasBeenSet = false;

    Aws::String m_deviceFleetName;
    bool m_deviceFleetNameHasBeenSet = false;

    Aws::Vector<DeploymentStage> m_stages;
    bool m_stagesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
