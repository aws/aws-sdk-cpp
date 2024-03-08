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
    AWS_SAGEMAKER_API UpdateInferenceComponentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateInferenceComponent"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the inference component.</p>
     */
    inline const Aws::String& GetInferenceComponentName() const{ return m_inferenceComponentName; }

    /**
     * <p>The name of the inference component.</p>
     */
    inline bool InferenceComponentNameHasBeenSet() const { return m_inferenceComponentNameHasBeenSet; }

    /**
     * <p>The name of the inference component.</p>
     */
    inline void SetInferenceComponentName(const Aws::String& value) { m_inferenceComponentNameHasBeenSet = true; m_inferenceComponentName = value; }

    /**
     * <p>The name of the inference component.</p>
     */
    inline void SetInferenceComponentName(Aws::String&& value) { m_inferenceComponentNameHasBeenSet = true; m_inferenceComponentName = std::move(value); }

    /**
     * <p>The name of the inference component.</p>
     */
    inline void SetInferenceComponentName(const char* value) { m_inferenceComponentNameHasBeenSet = true; m_inferenceComponentName.assign(value); }

    /**
     * <p>The name of the inference component.</p>
     */
    inline UpdateInferenceComponentRequest& WithInferenceComponentName(const Aws::String& value) { SetInferenceComponentName(value); return *this;}

    /**
     * <p>The name of the inference component.</p>
     */
    inline UpdateInferenceComponentRequest& WithInferenceComponentName(Aws::String&& value) { SetInferenceComponentName(std::move(value)); return *this;}

    /**
     * <p>The name of the inference component.</p>
     */
    inline UpdateInferenceComponentRequest& WithInferenceComponentName(const char* value) { SetInferenceComponentName(value); return *this;}


    /**
     * <p>Details about the resources to deploy with this inference component,
     * including the model, container, and compute resources.</p>
     */
    inline const InferenceComponentSpecification& GetSpecification() const{ return m_specification; }

    /**
     * <p>Details about the resources to deploy with this inference component,
     * including the model, container, and compute resources.</p>
     */
    inline bool SpecificationHasBeenSet() const { return m_specificationHasBeenSet; }

    /**
     * <p>Details about the resources to deploy with this inference component,
     * including the model, container, and compute resources.</p>
     */
    inline void SetSpecification(const InferenceComponentSpecification& value) { m_specificationHasBeenSet = true; m_specification = value; }

    /**
     * <p>Details about the resources to deploy with this inference component,
     * including the model, container, and compute resources.</p>
     */
    inline void SetSpecification(InferenceComponentSpecification&& value) { m_specificationHasBeenSet = true; m_specification = std::move(value); }

    /**
     * <p>Details about the resources to deploy with this inference component,
     * including the model, container, and compute resources.</p>
     */
    inline UpdateInferenceComponentRequest& WithSpecification(const InferenceComponentSpecification& value) { SetSpecification(value); return *this;}

    /**
     * <p>Details about the resources to deploy with this inference component,
     * including the model, container, and compute resources.</p>
     */
    inline UpdateInferenceComponentRequest& WithSpecification(InferenceComponentSpecification&& value) { SetSpecification(std::move(value)); return *this;}


    /**
     * <p>Runtime settings for a model that is deployed with an inference
     * component.</p>
     */
    inline const InferenceComponentRuntimeConfig& GetRuntimeConfig() const{ return m_runtimeConfig; }

    /**
     * <p>Runtime settings for a model that is deployed with an inference
     * component.</p>
     */
    inline bool RuntimeConfigHasBeenSet() const { return m_runtimeConfigHasBeenSet; }

    /**
     * <p>Runtime settings for a model that is deployed with an inference
     * component.</p>
     */
    inline void SetRuntimeConfig(const InferenceComponentRuntimeConfig& value) { m_runtimeConfigHasBeenSet = true; m_runtimeConfig = value; }

    /**
     * <p>Runtime settings for a model that is deployed with an inference
     * component.</p>
     */
    inline void SetRuntimeConfig(InferenceComponentRuntimeConfig&& value) { m_runtimeConfigHasBeenSet = true; m_runtimeConfig = std::move(value); }

    /**
     * <p>Runtime settings for a model that is deployed with an inference
     * component.</p>
     */
    inline UpdateInferenceComponentRequest& WithRuntimeConfig(const InferenceComponentRuntimeConfig& value) { SetRuntimeConfig(value); return *this;}

    /**
     * <p>Runtime settings for a model that is deployed with an inference
     * component.</p>
     */
    inline UpdateInferenceComponentRequest& WithRuntimeConfig(InferenceComponentRuntimeConfig&& value) { SetRuntimeConfig(std::move(value)); return *this;}

  private:

    Aws::String m_inferenceComponentName;
    bool m_inferenceComponentNameHasBeenSet = false;

    InferenceComponentSpecification m_specification;
    bool m_specificationHasBeenSet = false;

    InferenceComponentRuntimeConfig m_runtimeConfig;
    bool m_runtimeConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
