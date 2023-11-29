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


    /**
     * <p>The name of an existing SageMaker model object in your account that you want
     * to deploy with the inference component.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of an existing SageMaker model object in your account that you want
     * to deploy with the inference component.</p>
     */
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }

    /**
     * <p>The name of an existing SageMaker model object in your account that you want
     * to deploy with the inference component.</p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>The name of an existing SageMaker model object in your account that you want
     * to deploy with the inference component.</p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }

    /**
     * <p>The name of an existing SageMaker model object in your account that you want
     * to deploy with the inference component.</p>
     */
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }

    /**
     * <p>The name of an existing SageMaker model object in your account that you want
     * to deploy with the inference component.</p>
     */
    inline InferenceComponentSpecification& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of an existing SageMaker model object in your account that you want
     * to deploy with the inference component.</p>
     */
    inline InferenceComponentSpecification& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name of an existing SageMaker model object in your account that you want
     * to deploy with the inference component.</p>
     */
    inline InferenceComponentSpecification& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p>Defines a container that provides the runtime environment for a model that
     * you deploy with an inference component.</p>
     */
    inline const InferenceComponentContainerSpecification& GetContainer() const{ return m_container; }

    /**
     * <p>Defines a container that provides the runtime environment for a model that
     * you deploy with an inference component.</p>
     */
    inline bool ContainerHasBeenSet() const { return m_containerHasBeenSet; }

    /**
     * <p>Defines a container that provides the runtime environment for a model that
     * you deploy with an inference component.</p>
     */
    inline void SetContainer(const InferenceComponentContainerSpecification& value) { m_containerHasBeenSet = true; m_container = value; }

    /**
     * <p>Defines a container that provides the runtime environment for a model that
     * you deploy with an inference component.</p>
     */
    inline void SetContainer(InferenceComponentContainerSpecification&& value) { m_containerHasBeenSet = true; m_container = std::move(value); }

    /**
     * <p>Defines a container that provides the runtime environment for a model that
     * you deploy with an inference component.</p>
     */
    inline InferenceComponentSpecification& WithContainer(const InferenceComponentContainerSpecification& value) { SetContainer(value); return *this;}

    /**
     * <p>Defines a container that provides the runtime environment for a model that
     * you deploy with an inference component.</p>
     */
    inline InferenceComponentSpecification& WithContainer(InferenceComponentContainerSpecification&& value) { SetContainer(std::move(value)); return *this;}


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
    inline InferenceComponentSpecification& WithStartupParameters(const InferenceComponentStartupParameters& value) { SetStartupParameters(value); return *this;}

    /**
     * <p>Settings that take effect while the model container starts up.</p>
     */
    inline InferenceComponentSpecification& WithStartupParameters(InferenceComponentStartupParameters&& value) { SetStartupParameters(std::move(value)); return *this;}


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
    inline InferenceComponentSpecification& WithComputeResourceRequirements(const InferenceComponentComputeResourceRequirements& value) { SetComputeResourceRequirements(value); return *this;}

    /**
     * <p>The compute resources allocated to run the model assigned to the inference
     * component.</p>
     */
    inline InferenceComponentSpecification& WithComputeResourceRequirements(InferenceComponentComputeResourceRequirements&& value) { SetComputeResourceRequirements(std::move(value)); return *this;}

  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    InferenceComponentContainerSpecification m_container;
    bool m_containerHasBeenSet = false;

    InferenceComponentStartupParameters m_startupParameters;
    bool m_startupParametersHasBeenSet = false;

    InferenceComponentComputeResourceRequirements m_computeResourceRequirements;
    bool m_computeResourceRequirementsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
