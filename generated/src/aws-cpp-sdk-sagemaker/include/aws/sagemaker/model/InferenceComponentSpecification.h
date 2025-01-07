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
    AWS_SAGEMAKER_API InferenceComponentSpecification();
    AWS_SAGEMAKER_API InferenceComponentSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API InferenceComponentSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of an existing SageMaker AI model object in your account that you
     * want to deploy with the inference component.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }
    inline InferenceComponentSpecification& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}
    inline InferenceComponentSpecification& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}
    inline InferenceComponentSpecification& WithModelName(const char* value) { SetModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines a container that provides the runtime environment for a model that
     * you deploy with an inference component.</p>
     */
    inline const InferenceComponentContainerSpecification& GetContainer() const{ return m_container; }
    inline bool ContainerHasBeenSet() const { return m_containerHasBeenSet; }
    inline void SetContainer(const InferenceComponentContainerSpecification& value) { m_containerHasBeenSet = true; m_container = value; }
    inline void SetContainer(InferenceComponentContainerSpecification&& value) { m_containerHasBeenSet = true; m_container = std::move(value); }
    inline InferenceComponentSpecification& WithContainer(const InferenceComponentContainerSpecification& value) { SetContainer(value); return *this;}
    inline InferenceComponentSpecification& WithContainer(InferenceComponentContainerSpecification&& value) { SetContainer(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings that take effect while the model container starts up.</p>
     */
    inline const InferenceComponentStartupParameters& GetStartupParameters() const{ return m_startupParameters; }
    inline bool StartupParametersHasBeenSet() const { return m_startupParametersHasBeenSet; }
    inline void SetStartupParameters(const InferenceComponentStartupParameters& value) { m_startupParametersHasBeenSet = true; m_startupParameters = value; }
    inline void SetStartupParameters(InferenceComponentStartupParameters&& value) { m_startupParametersHasBeenSet = true; m_startupParameters = std::move(value); }
    inline InferenceComponentSpecification& WithStartupParameters(const InferenceComponentStartupParameters& value) { SetStartupParameters(value); return *this;}
    inline InferenceComponentSpecification& WithStartupParameters(InferenceComponentStartupParameters&& value) { SetStartupParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute resources allocated to run the model, plus any adapter models,
     * that you assign to the inference component.</p> <p>Omit this parameter if your
     * request is meant to create an adapter inference component. An adapter inference
     * component is loaded by a base inference component, and it uses the compute
     * resources of the base inference component.</p>
     */
    inline const InferenceComponentComputeResourceRequirements& GetComputeResourceRequirements() const{ return m_computeResourceRequirements; }
    inline bool ComputeResourceRequirementsHasBeenSet() const { return m_computeResourceRequirementsHasBeenSet; }
    inline void SetComputeResourceRequirements(const InferenceComponentComputeResourceRequirements& value) { m_computeResourceRequirementsHasBeenSet = true; m_computeResourceRequirements = value; }
    inline void SetComputeResourceRequirements(InferenceComponentComputeResourceRequirements&& value) { m_computeResourceRequirementsHasBeenSet = true; m_computeResourceRequirements = std::move(value); }
    inline InferenceComponentSpecification& WithComputeResourceRequirements(const InferenceComponentComputeResourceRequirements& value) { SetComputeResourceRequirements(value); return *this;}
    inline InferenceComponentSpecification& WithComputeResourceRequirements(InferenceComponentComputeResourceRequirements&& value) { SetComputeResourceRequirements(std::move(value)); return *this;}
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
    inline const Aws::String& GetBaseInferenceComponentName() const{ return m_baseInferenceComponentName; }
    inline bool BaseInferenceComponentNameHasBeenSet() const { return m_baseInferenceComponentNameHasBeenSet; }
    inline void SetBaseInferenceComponentName(const Aws::String& value) { m_baseInferenceComponentNameHasBeenSet = true; m_baseInferenceComponentName = value; }
    inline void SetBaseInferenceComponentName(Aws::String&& value) { m_baseInferenceComponentNameHasBeenSet = true; m_baseInferenceComponentName = std::move(value); }
    inline void SetBaseInferenceComponentName(const char* value) { m_baseInferenceComponentNameHasBeenSet = true; m_baseInferenceComponentName.assign(value); }
    inline InferenceComponentSpecification& WithBaseInferenceComponentName(const Aws::String& value) { SetBaseInferenceComponentName(value); return *this;}
    inline InferenceComponentSpecification& WithBaseInferenceComponentName(Aws::String&& value) { SetBaseInferenceComponentName(std::move(value)); return *this;}
    inline InferenceComponentSpecification& WithBaseInferenceComponentName(const char* value) { SetBaseInferenceComponentName(value); return *this;}
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
