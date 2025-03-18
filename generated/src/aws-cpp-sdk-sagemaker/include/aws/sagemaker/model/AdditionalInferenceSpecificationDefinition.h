/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/ModelPackageContainerDefinition.h>
#include <aws/sagemaker/model/TransformInstanceType.h>
#include <aws/sagemaker/model/ProductionVariantInstanceType.h>
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
   * <p>A structure of additional Inference Specification. Additional Inference
   * Specification specifies details about inference jobs that can be run with models
   * based on this model package</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AdditionalInferenceSpecificationDefinition">AWS
   * API Reference</a></p>
   */
  class AdditionalInferenceSpecificationDefinition
  {
  public:
    AWS_SAGEMAKER_API AdditionalInferenceSpecificationDefinition() = default;
    AWS_SAGEMAKER_API AdditionalInferenceSpecificationDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AdditionalInferenceSpecificationDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique name to identify the additional inference specification. The name
     * must be unique within the list of your additional inference specifications for a
     * particular model package.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AdditionalInferenceSpecificationDefinition& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the additional Inference specification</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AdditionalInferenceSpecificationDefinition& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon ECR registry path of the Docker image that contains the inference
     * code.</p>
     */
    inline const Aws::Vector<ModelPackageContainerDefinition>& GetContainers() const { return m_containers; }
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }
    template<typename ContainersT = Aws::Vector<ModelPackageContainerDefinition>>
    void SetContainers(ContainersT&& value) { m_containersHasBeenSet = true; m_containers = std::forward<ContainersT>(value); }
    template<typename ContainersT = Aws::Vector<ModelPackageContainerDefinition>>
    AdditionalInferenceSpecificationDefinition& WithContainers(ContainersT&& value) { SetContainers(std::forward<ContainersT>(value)); return *this;}
    template<typename ContainersT = ModelPackageContainerDefinition>
    AdditionalInferenceSpecificationDefinition& AddContainers(ContainersT&& value) { m_containersHasBeenSet = true; m_containers.emplace_back(std::forward<ContainersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the instance types on which a transformation job can be run or on
     * which an endpoint can be deployed.</p>
     */
    inline const Aws::Vector<TransformInstanceType>& GetSupportedTransformInstanceTypes() const { return m_supportedTransformInstanceTypes; }
    inline bool SupportedTransformInstanceTypesHasBeenSet() const { return m_supportedTransformInstanceTypesHasBeenSet; }
    template<typename SupportedTransformInstanceTypesT = Aws::Vector<TransformInstanceType>>
    void SetSupportedTransformInstanceTypes(SupportedTransformInstanceTypesT&& value) { m_supportedTransformInstanceTypesHasBeenSet = true; m_supportedTransformInstanceTypes = std::forward<SupportedTransformInstanceTypesT>(value); }
    template<typename SupportedTransformInstanceTypesT = Aws::Vector<TransformInstanceType>>
    AdditionalInferenceSpecificationDefinition& WithSupportedTransformInstanceTypes(SupportedTransformInstanceTypesT&& value) { SetSupportedTransformInstanceTypes(std::forward<SupportedTransformInstanceTypesT>(value)); return *this;}
    inline AdditionalInferenceSpecificationDefinition& AddSupportedTransformInstanceTypes(TransformInstanceType value) { m_supportedTransformInstanceTypesHasBeenSet = true; m_supportedTransformInstanceTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the instance types that are used to generate inferences in
     * real-time.</p>
     */
    inline const Aws::Vector<ProductionVariantInstanceType>& GetSupportedRealtimeInferenceInstanceTypes() const { return m_supportedRealtimeInferenceInstanceTypes; }
    inline bool SupportedRealtimeInferenceInstanceTypesHasBeenSet() const { return m_supportedRealtimeInferenceInstanceTypesHasBeenSet; }
    template<typename SupportedRealtimeInferenceInstanceTypesT = Aws::Vector<ProductionVariantInstanceType>>
    void SetSupportedRealtimeInferenceInstanceTypes(SupportedRealtimeInferenceInstanceTypesT&& value) { m_supportedRealtimeInferenceInstanceTypesHasBeenSet = true; m_supportedRealtimeInferenceInstanceTypes = std::forward<SupportedRealtimeInferenceInstanceTypesT>(value); }
    template<typename SupportedRealtimeInferenceInstanceTypesT = Aws::Vector<ProductionVariantInstanceType>>
    AdditionalInferenceSpecificationDefinition& WithSupportedRealtimeInferenceInstanceTypes(SupportedRealtimeInferenceInstanceTypesT&& value) { SetSupportedRealtimeInferenceInstanceTypes(std::forward<SupportedRealtimeInferenceInstanceTypesT>(value)); return *this;}
    inline AdditionalInferenceSpecificationDefinition& AddSupportedRealtimeInferenceInstanceTypes(ProductionVariantInstanceType value) { m_supportedRealtimeInferenceInstanceTypesHasBeenSet = true; m_supportedRealtimeInferenceInstanceTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The supported MIME types for the input data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedContentTypes() const { return m_supportedContentTypes; }
    inline bool SupportedContentTypesHasBeenSet() const { return m_supportedContentTypesHasBeenSet; }
    template<typename SupportedContentTypesT = Aws::Vector<Aws::String>>
    void SetSupportedContentTypes(SupportedContentTypesT&& value) { m_supportedContentTypesHasBeenSet = true; m_supportedContentTypes = std::forward<SupportedContentTypesT>(value); }
    template<typename SupportedContentTypesT = Aws::Vector<Aws::String>>
    AdditionalInferenceSpecificationDefinition& WithSupportedContentTypes(SupportedContentTypesT&& value) { SetSupportedContentTypes(std::forward<SupportedContentTypesT>(value)); return *this;}
    template<typename SupportedContentTypesT = Aws::String>
    AdditionalInferenceSpecificationDefinition& AddSupportedContentTypes(SupportedContentTypesT&& value) { m_supportedContentTypesHasBeenSet = true; m_supportedContentTypes.emplace_back(std::forward<SupportedContentTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The supported MIME types for the output data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedResponseMIMETypes() const { return m_supportedResponseMIMETypes; }
    inline bool SupportedResponseMIMETypesHasBeenSet() const { return m_supportedResponseMIMETypesHasBeenSet; }
    template<typename SupportedResponseMIMETypesT = Aws::Vector<Aws::String>>
    void SetSupportedResponseMIMETypes(SupportedResponseMIMETypesT&& value) { m_supportedResponseMIMETypesHasBeenSet = true; m_supportedResponseMIMETypes = std::forward<SupportedResponseMIMETypesT>(value); }
    template<typename SupportedResponseMIMETypesT = Aws::Vector<Aws::String>>
    AdditionalInferenceSpecificationDefinition& WithSupportedResponseMIMETypes(SupportedResponseMIMETypesT&& value) { SetSupportedResponseMIMETypes(std::forward<SupportedResponseMIMETypesT>(value)); return *this;}
    template<typename SupportedResponseMIMETypesT = Aws::String>
    AdditionalInferenceSpecificationDefinition& AddSupportedResponseMIMETypes(SupportedResponseMIMETypesT&& value) { m_supportedResponseMIMETypesHasBeenSet = true; m_supportedResponseMIMETypes.emplace_back(std::forward<SupportedResponseMIMETypesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<ModelPackageContainerDefinition> m_containers;
    bool m_containersHasBeenSet = false;

    Aws::Vector<TransformInstanceType> m_supportedTransformInstanceTypes;
    bool m_supportedTransformInstanceTypesHasBeenSet = false;

    Aws::Vector<ProductionVariantInstanceType> m_supportedRealtimeInferenceInstanceTypes;
    bool m_supportedRealtimeInferenceInstanceTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedContentTypes;
    bool m_supportedContentTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedResponseMIMETypes;
    bool m_supportedResponseMIMETypesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
