/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/InferenceComponentContainerSpecificationSummary.h>
#include <aws/sagemaker/model/InferenceComponentStartupParameters.h>
#include <aws/sagemaker/model/InferenceComponentComputeResourceRequirements.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Details about the resources that are deployed with this inference
   * component.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InferenceComponentSpecificationSummary">AWS
   * API Reference</a></p>
   */
  class InferenceComponentSpecificationSummary
  {
  public:
    AWS_SAGEMAKER_API InferenceComponentSpecificationSummary() = default;
    AWS_SAGEMAKER_API InferenceComponentSpecificationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API InferenceComponentSpecificationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the SageMaker AI model object that is deployed with the inference
     * component.</p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    InferenceComponentSpecificationSummary& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the container that provides the runtime environment for the
     * model that is deployed with the inference component.</p>
     */
    inline const InferenceComponentContainerSpecificationSummary& GetContainer() const { return m_container; }
    inline bool ContainerHasBeenSet() const { return m_containerHasBeenSet; }
    template<typename ContainerT = InferenceComponentContainerSpecificationSummary>
    void SetContainer(ContainerT&& value) { m_containerHasBeenSet = true; m_container = std::forward<ContainerT>(value); }
    template<typename ContainerT = InferenceComponentContainerSpecificationSummary>
    InferenceComponentSpecificationSummary& WithContainer(ContainerT&& value) { SetContainer(std::forward<ContainerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings that take effect while the model container starts up.</p>
     */
    inline const InferenceComponentStartupParameters& GetStartupParameters() const { return m_startupParameters; }
    inline bool StartupParametersHasBeenSet() const { return m_startupParametersHasBeenSet; }
    template<typename StartupParametersT = InferenceComponentStartupParameters>
    void SetStartupParameters(StartupParametersT&& value) { m_startupParametersHasBeenSet = true; m_startupParameters = std::forward<StartupParametersT>(value); }
    template<typename StartupParametersT = InferenceComponentStartupParameters>
    InferenceComponentSpecificationSummary& WithStartupParameters(StartupParametersT&& value) { SetStartupParameters(std::forward<StartupParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute resources allocated to run the model, plus any adapter models,
     * that you assign to the inference component.</p>
     */
    inline const InferenceComponentComputeResourceRequirements& GetComputeResourceRequirements() const { return m_computeResourceRequirements; }
    inline bool ComputeResourceRequirementsHasBeenSet() const { return m_computeResourceRequirementsHasBeenSet; }
    template<typename ComputeResourceRequirementsT = InferenceComponentComputeResourceRequirements>
    void SetComputeResourceRequirements(ComputeResourceRequirementsT&& value) { m_computeResourceRequirementsHasBeenSet = true; m_computeResourceRequirements = std::forward<ComputeResourceRequirementsT>(value); }
    template<typename ComputeResourceRequirementsT = InferenceComponentComputeResourceRequirements>
    InferenceComponentSpecificationSummary& WithComputeResourceRequirements(ComputeResourceRequirementsT&& value) { SetComputeResourceRequirements(std::forward<ComputeResourceRequirementsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the base inference component that contains this inference
     * component.</p>
     */
    inline const Aws::String& GetBaseInferenceComponentName() const { return m_baseInferenceComponentName; }
    inline bool BaseInferenceComponentNameHasBeenSet() const { return m_baseInferenceComponentNameHasBeenSet; }
    template<typename BaseInferenceComponentNameT = Aws::String>
    void SetBaseInferenceComponentName(BaseInferenceComponentNameT&& value) { m_baseInferenceComponentNameHasBeenSet = true; m_baseInferenceComponentName = std::forward<BaseInferenceComponentNameT>(value); }
    template<typename BaseInferenceComponentNameT = Aws::String>
    InferenceComponentSpecificationSummary& WithBaseInferenceComponentName(BaseInferenceComponentNameT&& value) { SetBaseInferenceComponentName(std::forward<BaseInferenceComponentNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    InferenceComponentContainerSpecificationSummary m_container;
    bool m_containerHasBeenSet = false;

    InferenceComponentStartupParameters m_startupParameters;
    bool m_startupParametersHasBeenSet = false;

    InferenceComponentComputeResourceRequirements m_computeResourceRequirements;
    bool m_computeResourceRequirementsHasBeenSet = false;

    Aws::String m_baseInferenceComponentName;
    bool m_baseInferenceComponentNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
