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
    AWS_SAGEMAKER_API CreateInferenceComponentRequest() = default;

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
    inline const Aws::String& GetInferenceComponentName() const { return m_inferenceComponentName; }
    inline bool InferenceComponentNameHasBeenSet() const { return m_inferenceComponentNameHasBeenSet; }
    template<typename InferenceComponentNameT = Aws::String>
    void SetInferenceComponentName(InferenceComponentNameT&& value) { m_inferenceComponentNameHasBeenSet = true; m_inferenceComponentName = std::forward<InferenceComponentNameT>(value); }
    template<typename InferenceComponentNameT = Aws::String>
    CreateInferenceComponentRequest& WithInferenceComponentName(InferenceComponentNameT&& value) { SetInferenceComponentName(std::forward<InferenceComponentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an existing endpoint where you host the inference component.</p>
     */
    inline const Aws::String& GetEndpointName() const { return m_endpointName; }
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }
    template<typename EndpointNameT = Aws::String>
    void SetEndpointName(EndpointNameT&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::forward<EndpointNameT>(value); }
    template<typename EndpointNameT = Aws::String>
    CreateInferenceComponentRequest& WithEndpointName(EndpointNameT&& value) { SetEndpointName(std::forward<EndpointNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an existing production variant where you host the inference
     * component.</p>
     */
    inline const Aws::String& GetVariantName() const { return m_variantName; }
    inline bool VariantNameHasBeenSet() const { return m_variantNameHasBeenSet; }
    template<typename VariantNameT = Aws::String>
    void SetVariantName(VariantNameT&& value) { m_variantNameHasBeenSet = true; m_variantName = std::forward<VariantNameT>(value); }
    template<typename VariantNameT = Aws::String>
    CreateInferenceComponentRequest& WithVariantName(VariantNameT&& value) { SetVariantName(std::forward<VariantNameT>(value)); return *this;}
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
    CreateInferenceComponentRequest& WithSpecification(SpecificationT&& value) { SetSpecification(std::forward<SpecificationT>(value)); return *this;}
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
    CreateInferenceComponentRequest& WithRuntimeConfig(RuntimeConfigT&& value) { SetRuntimeConfig(std::forward<RuntimeConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs associated with the model. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateInferenceComponentRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateInferenceComponentRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
