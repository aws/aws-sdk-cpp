/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/InferenceComponentContainerSpecification.h>
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
   * <p>Details about the resources to deploy with this inference component,
   * including the model, container, and compute resources.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InferenceComponentSpecification">AWS
   * API Reference</a></p>
   */
  class InferenceComponentSpecification
  {
  public:
    AWS_SAGEMAKER_API InferenceComponentSpecification() = default;
    AWS_SAGEMAKER_API InferenceComponentSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API InferenceComponentSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of an existing SageMaker AI model object in your account that you
     * want to deploy with the inference component.</p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    InferenceComponentSpecification& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines a container that provides the runtime environment for a model that
     * you deploy with an inference component.</p>
     */
    inline const InferenceComponentContainerSpecification& GetContainer() const { return m_container; }
    inline bool ContainerHasBeenSet() const { return m_containerHasBeenSet; }
    template<typename ContainerT = InferenceComponentContainerSpecification>
    void SetContainer(ContainerT&& value) { m_containerHasBeenSet = true; m_container = std::forward<ContainerT>(value); }
    template<typename ContainerT = InferenceComponentContainerSpecification>
    InferenceComponentSpecification& WithContainer(ContainerT&& value) { SetContainer(std::forward<ContainerT>(value)); return *this;}
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
    InferenceComponentSpecification& WithStartupParameters(StartupParametersT&& value) { SetStartupParameters(std::forward<StartupParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute resources allocated to run the model, plus any adapter models,
     * that you assign to the inference component.</p> <p>Omit this parameter if your
     * request is meant to create an adapter inference component. An adapter inference
     * component is loaded by a base inference component, and it uses the compute
     * resources of the base inference component.</p>
     */
    inline const InferenceComponentComputeResourceRequirements& GetComputeResourceRequirements() const { return m_computeResourceRequirements; }
    inline bool ComputeResourceRequirementsHasBeenSet() const { return m_computeResourceRequirementsHasBeenSet; }
    template<typename ComputeResourceRequirementsT = InferenceComponentComputeResourceRequirements>
    void SetComputeResourceRequirements(ComputeResourceRequirementsT&& value) { m_computeResourceRequirementsHasBeenSet = true; m_computeResourceRequirements = std::forward<ComputeResourceRequirementsT>(value); }
    template<typename ComputeResourceRequirementsT = InferenceComponentComputeResourceRequirements>
    InferenceComponentSpecification& WithComputeResourceRequirements(ComputeResourceRequirementsT&& value) { SetComputeResourceRequirements(std::forward<ComputeResourceRequirementsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an existing inference component that is to contain the inference
     * component that you're creating with your request.</p> <p>Specify this parameter
     * only if your request is meant to create an adapter inference component. An
     * adapter inference component contains the path to an adapter model. The purpose
     * of the adapter model is to tailor the inference output of a base foundation
     * model, which is hosted by the base inference component. The adapter inference
     * component uses the compute resources that you assigned to the base inference
     * component.</p> <p>When you create an adapter inference component, use the
     * <code>Container</code> parameter to specify the location of the adapter
     * artifacts. In the parameter value, use the <code>ArtifactUrl</code> parameter of
     * the <code>InferenceComponentContainerSpecification</code> data type.</p>
     * <p>Before you can create an adapter inference component, you must have an
     * existing inference component that contains the foundation model that you want to
     * adapt.</p>
     */
    inline const Aws::String& GetBaseInferenceComponentName() const { return m_baseInferenceComponentName; }
    inline bool BaseInferenceComponentNameHasBeenSet() const { return m_baseInferenceComponentNameHasBeenSet; }
    template<typename BaseInferenceComponentNameT = Aws::String>
    void SetBaseInferenceComponentName(BaseInferenceComponentNameT&& value) { m_baseInferenceComponentNameHasBeenSet = true; m_baseInferenceComponentName = std::forward<BaseInferenceComponentNameT>(value); }
    template<typename BaseInferenceComponentNameT = Aws::String>
    InferenceComponentSpecification& WithBaseInferenceComponentName(BaseInferenceComponentNameT&& value) { SetBaseInferenceComponentName(std::forward<BaseInferenceComponentNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    InferenceComponentContainerSpecification m_container;
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
