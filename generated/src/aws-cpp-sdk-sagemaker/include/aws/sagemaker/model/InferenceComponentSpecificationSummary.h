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


    /**
     * <p>The name of the SageMaker model object that is deployed with the inference
     * component.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of the SageMaker model object that is deployed with the inference
     * component.</p>
     */
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }

    /**
     * <p>The name of the SageMaker model object that is deployed with the inference
     * component.</p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>The name of the SageMaker model object that is deployed with the inference
     * component.</p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }

    /**
     * <p>The name of the SageMaker model object that is deployed with the inference
     * component.</p>
     */
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }

    /**
     * <p>The name of the SageMaker model object that is deployed with the inference
     * component.</p>
     */
    inline InferenceComponentSpecificationSummary& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the SageMaker model object that is deployed with the inference
     * component.</p>
     */
    inline InferenceComponentSpecificationSummary& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the SageMaker model object that is deployed with the inference
     * component.</p>
     */
    inline InferenceComponentSpecificationSummary& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p>Details about the container that provides the runtime environment for the
     * model that is deployed with the inference component.</p>
     */
    inline const InferenceComponentContainerSpecificationSummary& GetContainer() const{ return m_container; }

    /**
     * <p>Details about the container that provides the runtime environment for the
     * model that is deployed with the inference component.</p>
     */
    inline bool ContainerHasBeenSet() const { return m_containerHasBeenSet; }

    /**
     * <p>Details about the container that provides the runtime environment for the
     * model that is deployed with the inference component.</p>
     */
    inline void SetContainer(const InferenceComponentContainerSpecificationSummary& value) { m_containerHasBeenSet = true; m_container = value; }

    /**
     * <p>Details about the container that provides the runtime environment for the
     * model that is deployed with the inference component.</p>
     */
    inline void SetContainer(InferenceComponentContainerSpecificationSummary&& value) { m_containerHasBeenSet = true; m_container = std::move(value); }

    /**
     * <p>Details about the container that provides the runtime environment for the
     * model that is deployed with the inference component.</p>
     */
    inline InferenceComponentSpecificationSummary& WithContainer(const InferenceComponentContainerSpecificationSummary& value) { SetContainer(value); return *this;}

    /**
     * <p>Details about the container that provides the runtime environment for the
     * model that is deployed with the inference component.</p>
     */
    inline InferenceComponentSpecificationSummary& WithContainer(InferenceComponentContainerSpecificationSummary&& value) { SetContainer(std::move(value)); return *this;}


    /**
     * <p>Settings that take effect while the model container starts up.</p>
     */
    inline const InferenceComponentStartupParameters& GetStartupParameters() const{ return m_startupParameters; }

    /**
     * <p>Settings that take effect while the model container starts up.</p>
     */
    inline bool StartupParametersHasBeenSet() const { return m_startupParametersHasBeenSet; }

    /**
     * <p>Settings that take effect while the model container starts up.</p>
     */
    inline void SetStartupParameters(const InferenceComponentStartupParameters& value) { m_startupParametersHasBeenSet = true; m_startupParameters = value; }

    /**
     * <p>Settings that take effect while the model container starts up.</p>
     */
    inline void SetStartupParameters(InferenceComponentStartupParameters&& value) { m_startupParametersHasBeenSet = true; m_startupParameters = std::move(value); }

    /**
     * <p>Settings that take effect while the model container starts up.</p>
     */
    inline InferenceComponentSpecificationSummary& WithStartupParameters(const InferenceComponentStartupParameters& value) { SetStartupParameters(value); return *this;}

    /**
     * <p>Settings that take effect while the model container starts up.</p>
     */
    inline InferenceComponentSpecificationSummary& WithStartupParameters(InferenceComponentStartupParameters&& value) { SetStartupParameters(std::move(value)); return *this;}


    /**
     * <p>The compute resources allocated to run the model assigned to the inference
     * component.</p>
     */
    inline const InferenceComponentComputeResourceRequirements& GetComputeResourceRequirements() const{ return m_computeResourceRequirements; }

    /**
     * <p>The compute resources allocated to run the model assigned to the inference
     * component.</p>
     */
    inline bool ComputeResourceRequirementsHasBeenSet() const { return m_computeResourceRequirementsHasBeenSet; }

    /**
     * <p>The compute resources allocated to run the model assigned to the inference
     * component.</p>
     */
    inline void SetComputeResourceRequirements(const InferenceComponentComputeResourceRequirements& value) { m_computeResourceRequirementsHasBeenSet = true; m_computeResourceRequirements = value; }

    /**
     * <p>The compute resources allocated to run the model assigned to the inference
     * component.</p>
     */
    inline void SetComputeResourceRequirements(InferenceComponentComputeResourceRequirements&& value) { m_computeResourceRequirementsHasBeenSet = true; m_computeResourceRequirements = std::move(value); }

    /**
     * <p>The compute resources allocated to run the model assigned to the inference
     * component.</p>
     */
    inline InferenceComponentSpecificationSummary& WithComputeResourceRequirements(const InferenceComponentComputeResourceRequirements& value) { SetComputeResourceRequirements(value); return *this;}

    /**
     * <p>The compute resources allocated to run the model assigned to the inference
     * component.</p>
     */
    inline InferenceComponentSpecificationSummary& WithComputeResourceRequirements(InferenceComponentComputeResourceRequirements&& value) { SetComputeResourceRequirements(std::move(value)); return *this;}

  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    InferenceComponentContainerSpecificationSummary m_container;
    bool m_containerHasBeenSet = false;

    InferenceComponentStartupParameters m_startupParameters;
    bool m_startupParametersHasBeenSet = false;

    InferenceComponentComputeResourceRequirements m_computeResourceRequirements;
    bool m_computeResourceRequirementsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
