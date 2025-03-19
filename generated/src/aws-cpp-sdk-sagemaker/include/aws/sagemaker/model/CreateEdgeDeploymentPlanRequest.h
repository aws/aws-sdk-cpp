/**
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
    AWS_SAGEMAKER_API CreateEdgeDeploymentPlanRequest() = default;

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
    inline const Aws::String& GetEdgeDeploymentPlanName() const { return m_edgeDeploymentPlanName; }
    inline bool EdgeDeploymentPlanNameHasBeenSet() const { return m_edgeDeploymentPlanNameHasBeenSet; }
    template<typename EdgeDeploymentPlanNameT = Aws::String>
    void SetEdgeDeploymentPlanName(EdgeDeploymentPlanNameT&& value) { m_edgeDeploymentPlanNameHasBeenSet = true; m_edgeDeploymentPlanName = std::forward<EdgeDeploymentPlanNameT>(value); }
    template<typename EdgeDeploymentPlanNameT = Aws::String>
    CreateEdgeDeploymentPlanRequest& WithEdgeDeploymentPlanName(EdgeDeploymentPlanNameT&& value) { SetEdgeDeploymentPlanName(std::forward<EdgeDeploymentPlanNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of models associated with the edge deployment plan.</p>
     */
    inline const Aws::Vector<EdgeDeploymentModelConfig>& GetModelConfigs() const { return m_modelConfigs; }
    inline bool ModelConfigsHasBeenSet() const { return m_modelConfigsHasBeenSet; }
    template<typename ModelConfigsT = Aws::Vector<EdgeDeploymentModelConfig>>
    void SetModelConfigs(ModelConfigsT&& value) { m_modelConfigsHasBeenSet = true; m_modelConfigs = std::forward<ModelConfigsT>(value); }
    template<typename ModelConfigsT = Aws::Vector<EdgeDeploymentModelConfig>>
    CreateEdgeDeploymentPlanRequest& WithModelConfigs(ModelConfigsT&& value) { SetModelConfigs(std::forward<ModelConfigsT>(value)); return *this;}
    template<typename ModelConfigsT = EdgeDeploymentModelConfig>
    CreateEdgeDeploymentPlanRequest& AddModelConfigs(ModelConfigsT&& value) { m_modelConfigsHasBeenSet = true; m_modelConfigs.emplace_back(std::forward<ModelConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The device fleet used for this edge deployment plan.</p>
     */
    inline const Aws::String& GetDeviceFleetName() const { return m_deviceFleetName; }
    inline bool DeviceFleetNameHasBeenSet() const { return m_deviceFleetNameHasBeenSet; }
    template<typename DeviceFleetNameT = Aws::String>
    void SetDeviceFleetName(DeviceFleetNameT&& value) { m_deviceFleetNameHasBeenSet = true; m_deviceFleetName = std::forward<DeviceFleetNameT>(value); }
    template<typename DeviceFleetNameT = Aws::String>
    CreateEdgeDeploymentPlanRequest& WithDeviceFleetName(DeviceFleetNameT&& value) { SetDeviceFleetName(std::forward<DeviceFleetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of stages of the edge deployment plan. The number of stages is limited
     * to 10 per deployment.</p>
     */
    inline const Aws::Vector<DeploymentStage>& GetStages() const { return m_stages; }
    inline bool StagesHasBeenSet() const { return m_stagesHasBeenSet; }
    template<typename StagesT = Aws::Vector<DeploymentStage>>
    void SetStages(StagesT&& value) { m_stagesHasBeenSet = true; m_stages = std::forward<StagesT>(value); }
    template<typename StagesT = Aws::Vector<DeploymentStage>>
    CreateEdgeDeploymentPlanRequest& WithStages(StagesT&& value) { SetStages(std::forward<StagesT>(value)); return *this;}
    template<typename StagesT = DeploymentStage>
    CreateEdgeDeploymentPlanRequest& AddStages(StagesT&& value) { m_stagesHasBeenSet = true; m_stages.emplace_back(std::forward<StagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of tags with which to tag the edge deployment plan.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateEdgeDeploymentPlanRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateEdgeDeploymentPlanRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
