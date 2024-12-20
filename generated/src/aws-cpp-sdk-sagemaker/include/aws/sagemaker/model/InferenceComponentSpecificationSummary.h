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
    AWS_SAGEMAKER_API InferenceComponentSpecificationSummary();
    AWS_SAGEMAKER_API InferenceComponentSpecificationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API InferenceComponentSpecificationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the SageMaker AI model object that is deployed with the inference
     * component.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }
    inline InferenceComponentSpecificationSummary& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}
    inline InferenceComponentSpecificationSummary& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}
    inline InferenceComponentSpecificationSummary& WithModelName(const char* value) { SetModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the container that provides the runtime environment for the
     * model that is deployed with the inference component.</p>
     */
    inline const InferenceComponentContainerSpecificationSummary& GetContainer() const{ return m_container; }
    inline bool ContainerHasBeenSet() const { return m_containerHasBeenSet; }
    inline void SetContainer(const InferenceComponentContainerSpecificationSummary& value) { m_containerHasBeenSet = true; m_container = value; }
    inline void SetContainer(InferenceComponentContainerSpecificationSummary&& value) { m_containerHasBeenSet = true; m_container = std::move(value); }
    inline InferenceComponentSpecificationSummary& WithContainer(const InferenceComponentContainerSpecificationSummary& value) { SetContainer(value); return *this;}
    inline InferenceComponentSpecificationSummary& WithContainer(InferenceComponentContainerSpecificationSummary&& value) { SetContainer(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings that take effect while the model container starts up.</p>
     */
    inline const InferenceComponentStartupParameters& GetStartupParameters() const{ return m_startupParameters; }
    inline bool StartupParametersHasBeenSet() const { return m_startupParametersHasBeenSet; }
    inline void SetStartupParameters(const InferenceComponentStartupParameters& value) { m_startupParametersHasBeenSet = true; m_startupParameters = value; }
    inline void SetStartupParameters(InferenceComponentStartupParameters&& value) { m_startupParametersHasBeenSet = true; m_startupParameters = std::move(value); }
    inline InferenceComponentSpecificationSummary& WithStartupParameters(const InferenceComponentStartupParameters& value) { SetStartupParameters(value); return *this;}
    inline InferenceComponentSpecificationSummary& WithStartupParameters(InferenceComponentStartupParameters&& value) { SetStartupParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute resources allocated to run the model, plus any adapter models,
     * that you assign to the inference component.</p>
     */
    inline const InferenceComponentComputeResourceRequirements& GetComputeResourceRequirements() const{ return m_computeResourceRequirements; }
    inline bool ComputeResourceRequirementsHasBeenSet() const { return m_computeResourceRequirementsHasBeenSet; }
    inline void SetComputeResourceRequirements(const InferenceComponentComputeResourceRequirements& value) { m_computeResourceRequirementsHasBeenSet = true; m_computeResourceRequirements = value; }
    inline void SetComputeResourceRequirements(InferenceComponentComputeResourceRequirements&& value) { m_computeResourceRequirementsHasBeenSet = true; m_computeResourceRequirements = std::move(value); }
    inline InferenceComponentSpecificationSummary& WithComputeResourceRequirements(const InferenceComponentComputeResourceRequirements& value) { SetComputeResourceRequirements(value); return *this;}
    inline InferenceComponentSpecificationSummary& WithComputeResourceRequirements(InferenceComponentComputeResourceRequirements&& value) { SetComputeResourceRequirements(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the base inference component that contains this inference
     * component.</p>
     */
    inline const Aws::String& GetBaseInferenceComponentName() const{ return m_baseInferenceComponentName; }
    inline bool BaseInferenceComponentNameHasBeenSet() const { return m_baseInferenceComponentNameHasBeenSet; }
    inline void SetBaseInferenceComponentName(const Aws::String& value) { m_baseInferenceComponentNameHasBeenSet = true; m_baseInferenceComponentName = value; }
    inline void SetBaseInferenceComponentName(Aws::String&& value) { m_baseInferenceComponentNameHasBeenSet = true; m_baseInferenceComponentName = std::move(value); }
    inline void SetBaseInferenceComponentName(const char* value) { m_baseInferenceComponentNameHasBeenSet = true; m_baseInferenceComponentName.assign(value); }
    inline InferenceComponentSpecificationSummary& WithBaseInferenceComponentName(const Aws::String& value) { SetBaseInferenceComponentName(value); return *this;}
    inline InferenceComponentSpecificationSummary& WithBaseInferenceComponentName(Aws::String&& value) { SetBaseInferenceComponentName(std::move(value)); return *this;}
    inline InferenceComponentSpecificationSummary& WithBaseInferenceComponentName(const char* value) { SetBaseInferenceComponentName(value); return *this;}
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
