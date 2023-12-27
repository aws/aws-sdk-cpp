/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class UpdateInferenceComponentRuntimeConfigRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdateInferenceComponentRuntimeConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateInferenceComponentRuntimeConfig"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the inference component to update.</p>
     */
    inline const Aws::String& GetInferenceComponentName() const{ return m_inferenceComponentName; }

    /**
     * <p>The name of the inference component to update.</p>
     */
    inline bool InferenceComponentNameHasBeenSet() const { return m_inferenceComponentNameHasBeenSet; }

    /**
     * <p>The name of the inference component to update.</p>
     */
    inline void SetInferenceComponentName(const Aws::String& value) { m_inferenceComponentNameHasBeenSet = true; m_inferenceComponentName = value; }

    /**
     * <p>The name of the inference component to update.</p>
     */
    inline void SetInferenceComponentName(Aws::String&& value) { m_inferenceComponentNameHasBeenSet = true; m_inferenceComponentName = std::move(value); }

    /**
     * <p>The name of the inference component to update.</p>
     */
    inline void SetInferenceComponentName(const char* value) { m_inferenceComponentNameHasBeenSet = true; m_inferenceComponentName.assign(value); }

    /**
     * <p>The name of the inference component to update.</p>
     */
    inline UpdateInferenceComponentRuntimeConfigRequest& WithInferenceComponentName(const Aws::String& value) { SetInferenceComponentName(value); return *this;}

    /**
     * <p>The name of the inference component to update.</p>
     */
    inline UpdateInferenceComponentRuntimeConfigRequest& WithInferenceComponentName(Aws::String&& value) { SetInferenceComponentName(std::move(value)); return *this;}

    /**
     * <p>The name of the inference component to update.</p>
     */
    inline UpdateInferenceComponentRuntimeConfigRequest& WithInferenceComponentName(const char* value) { SetInferenceComponentName(value); return *this;}


    /**
     * <p>Runtime settings for a model that is deployed with an inference
     * component.</p>
     */
    inline const InferenceComponentRuntimeConfig& GetDesiredRuntimeConfig() const{ return m_desiredRuntimeConfig; }

    /**
     * <p>Runtime settings for a model that is deployed with an inference
     * component.</p>
     */
    inline bool DesiredRuntimeConfigHasBeenSet() const { return m_desiredRuntimeConfigHasBeenSet; }

    /**
     * <p>Runtime settings for a model that is deployed with an inference
     * component.</p>
     */
    inline void SetDesiredRuntimeConfig(const InferenceComponentRuntimeConfig& value) { m_desiredRuntimeConfigHasBeenSet = true; m_desiredRuntimeConfig = value; }

    /**
     * <p>Runtime settings for a model that is deployed with an inference
     * component.</p>
     */
    inline void SetDesiredRuntimeConfig(InferenceComponentRuntimeConfig&& value) { m_desiredRuntimeConfigHasBeenSet = true; m_desiredRuntimeConfig = std::move(value); }

    /**
     * <p>Runtime settings for a model that is deployed with an inference
     * component.</p>
     */
    inline UpdateInferenceComponentRuntimeConfigRequest& WithDesiredRuntimeConfig(const InferenceComponentRuntimeConfig& value) { SetDesiredRuntimeConfig(value); return *this;}

    /**
     * <p>Runtime settings for a model that is deployed with an inference
     * component.</p>
     */
    inline UpdateInferenceComponentRuntimeConfigRequest& WithDesiredRuntimeConfig(InferenceComponentRuntimeConfig&& value) { SetDesiredRuntimeConfig(std::move(value)); return *this;}

  private:

    Aws::String m_inferenceComponentName;
    bool m_inferenceComponentNameHasBeenSet = false;

    InferenceComponentRuntimeConfig m_desiredRuntimeConfig;
    bool m_desiredRuntimeConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
