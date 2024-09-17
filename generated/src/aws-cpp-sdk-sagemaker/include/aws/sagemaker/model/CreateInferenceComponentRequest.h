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
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class CreateInferenceComponentRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateInferenceComponentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInferenceComponent"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique name to assign to the inference component.</p>
     */
    inline const Aws::String& GetInferenceComponentName() const{ return m_inferenceComponentName; }
    inline bool InferenceComponentNameHasBeenSet() const { return m_inferenceComponentNameHasBeenSet; }
    inline void SetInferenceComponentName(const Aws::String& value) { m_inferenceComponentNameHasBeenSet = true; m_inferenceComponentName = value; }
    inline void SetInferenceComponentName(Aws::String&& value) { m_inferenceComponentNameHasBeenSet = true; m_inferenceComponentName = std::move(value); }
    inline void SetInferenceComponentName(const char* value) { m_inferenceComponentNameHasBeenSet = true; m_inferenceComponentName.assign(value); }
    inline CreateInferenceComponentRequest& WithInferenceComponentName(const Aws::String& value) { SetInferenceComponentName(value); return *this;}
    inline CreateInferenceComponentRequest& WithInferenceComponentName(Aws::String&& value) { SetInferenceComponentName(std::move(value)); return *this;}
    inline CreateInferenceComponentRequest& WithInferenceComponentName(const char* value) { SetInferenceComponentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an existing endpoint where you host the inference component.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }
    inline CreateInferenceComponentRequest& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}
    inline CreateInferenceComponentRequest& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}
    inline CreateInferenceComponentRequest& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an existing production variant where you host the inference
     * component.</p>
     */
    inline const Aws::String& GetVariantName() const{ return m_variantName; }
    inline bool VariantNameHasBeenSet() const { return m_variantNameHasBeenSet; }
    inline void SetVariantName(const Aws::String& value) { m_variantNameHasBeenSet = true; m_variantName = value; }
    inline void SetVariantName(Aws::String&& value) { m_variantNameHasBeenSet = true; m_variantName = std::move(value); }
    inline void SetVariantName(const char* value) { m_variantNameHasBeenSet = true; m_variantName.assign(value); }
    inline CreateInferenceComponentRequest& WithVariantName(const Aws::String& value) { SetVariantName(value); return *this;}
    inline CreateInferenceComponentRequest& WithVariantName(Aws::String&& value) { SetVariantName(std::move(value)); return *this;}
    inline CreateInferenceComponentRequest& WithVariantName(const char* value) { SetVariantName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the resources to deploy with this inference component,
     * including the model, container, and compute resources.</p>
     */
    inline const InferenceComponentSpecification& GetSpecification() const{ return m_specification; }
    inline bool SpecificationHasBeenSet() const { return m_specificationHasBeenSet; }
    inline void SetSpecification(const InferenceComponentSpecification& value) { m_specificationHasBeenSet = true; m_specification = value; }
    inline void SetSpecification(InferenceComponentSpecification&& value) { m_specificationHasBeenSet = true; m_specification = std::move(value); }
    inline CreateInferenceComponentRequest& WithSpecification(const InferenceComponentSpecification& value) { SetSpecification(value); return *this;}
    inline CreateInferenceComponentRequest& WithSpecification(InferenceComponentSpecification&& value) { SetSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Runtime settings for a model that is deployed with an inference
     * component.</p>
     */
    inline const InferenceComponentRuntimeConfig& GetRuntimeConfig() const{ return m_runtimeConfig; }
    inline bool RuntimeConfigHasBeenSet() const { return m_runtimeConfigHasBeenSet; }
    inline void SetRuntimeConfig(const InferenceComponentRuntimeConfig& value) { m_runtimeConfigHasBeenSet = true; m_runtimeConfig = value; }
    inline void SetRuntimeConfig(InferenceComponentRuntimeConfig&& value) { m_runtimeConfigHasBeenSet = true; m_runtimeConfig = std::move(value); }
    inline CreateInferenceComponentRequest& WithRuntimeConfig(const InferenceComponentRuntimeConfig& value) { SetRuntimeConfig(value); return *this;}
    inline CreateInferenceComponentRequest& WithRuntimeConfig(InferenceComponentRuntimeConfig&& value) { SetRuntimeConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs associated with the model. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateInferenceComponentRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateInferenceComponentRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateInferenceComponentRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateInferenceComponentRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_inferenceComponentName;
    bool m_inferenceComponentNameHasBeenSet = false;

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    Aws::String m_variantName;
    bool m_variantNameHasBeenSet = false;

    InferenceComponentSpecification m_specification;
    bool m_specificationHasBeenSet = false;

    InferenceComponentRuntimeConfig m_runtimeConfig;
    bool m_runtimeConfigHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
