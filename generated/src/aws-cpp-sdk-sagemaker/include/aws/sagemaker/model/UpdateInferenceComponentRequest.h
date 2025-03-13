/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/InferenceComponentSpecification.h>
#include <aws/sagemaker/model/InferenceComponentRuntimeConfig.h>
#include <aws/sagemaker/model/InferenceComponentDeploymentConfig.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class UpdateInferenceComponentRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdateInferenceComponentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateInferenceComponent"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the inference component.</p>
     */
    inline const Aws::String& GetInferenceComponentName() const { return m_inferenceComponentName; }
    inline bool InferenceComponentNameHasBeenSet() const { return m_inferenceComponentNameHasBeenSet; }
    template<typename InferenceComponentNameT = Aws::String>
    void SetInferenceComponentName(InferenceComponentNameT&& value) { m_inferenceComponentNameHasBeenSet = true; m_inferenceComponentName = std::forward<InferenceComponentNameT>(value); }
    template<typename InferenceComponentNameT = Aws::String>
    UpdateInferenceComponentRequest& WithInferenceComponentName(InferenceComponentNameT&& value) { SetInferenceComponentName(std::forward<InferenceComponentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the resources to deploy with this inference component,
     * including the model, container, and compute resources.</p>
     */
    inline const InferenceComponentSpecification& GetSpecification() const { return m_specification; }
    inline bool SpecificationHasBeenSet() const { return m_specificationHasBeenSet; }
    template<typename SpecificationT = InferenceComponentSpecification>
    void SetSpecification(SpecificationT&& value) { m_specificationHasBeenSet = true; m_specification = std::forward<SpecificationT>(value); }
    template<typename SpecificationT = InferenceComponentSpecification>
    UpdateInferenceComponentRequest& WithSpecification(SpecificationT&& value) { SetSpecification(std::forward<SpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Runtime settings for a model that is deployed with an inference
     * component.</p>
     */
    inline const InferenceComponentRuntimeConfig& GetRuntimeConfig() const { return m_runtimeConfig; }
    inline bool RuntimeConfigHasBeenSet() const { return m_runtimeConfigHasBeenSet; }
    template<typename RuntimeConfigT = InferenceComponentRuntimeConfig>
    void SetRuntimeConfig(RuntimeConfigT&& value) { m_runtimeConfigHasBeenSet = true; m_runtimeConfig = std::forward<RuntimeConfigT>(value); }
    template<typename RuntimeConfigT = InferenceComponentRuntimeConfig>
    UpdateInferenceComponentRequest& WithRuntimeConfig(RuntimeConfigT&& value) { SetRuntimeConfig(std::forward<RuntimeConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment configuration for the inference component. The configuration
     * contains the desired deployment strategy and rollback settings.</p>
     */
    inline const InferenceComponentDeploymentConfig& GetDeploymentConfig() const { return m_deploymentConfig; }
    inline bool DeploymentConfigHasBeenSet() const { return m_deploymentConfigHasBeenSet; }
    template<typename DeploymentConfigT = InferenceComponentDeploymentConfig>
    void SetDeploymentConfig(DeploymentConfigT&& value) { m_deploymentConfigHasBeenSet = true; m_deploymentConfig = std::forward<DeploymentConfigT>(value); }
    template<typename DeploymentConfigT = InferenceComponentDeploymentConfig>
    UpdateInferenceComponentRequest& WithDeploymentConfig(DeploymentConfigT&& value) { SetDeploymentConfig(std::forward<DeploymentConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_inferenceComponentName;
    bool m_inferenceComponentNameHasBeenSet = false;

    InferenceComponentSpecification m_specification;
    bool m_specificationHasBeenSet = false;

    InferenceComponentRuntimeConfig m_runtimeConfig;
    bool m_runtimeConfigHasBeenSet = false;

    InferenceComponentDeploymentConfig m_deploymentConfig;
    bool m_deploymentConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
