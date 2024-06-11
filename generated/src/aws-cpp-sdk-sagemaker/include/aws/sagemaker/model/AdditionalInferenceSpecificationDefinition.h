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
    AWS_SAGEMAKER_API AdditionalInferenceSpecificationDefinition();
    AWS_SAGEMAKER_API AdditionalInferenceSpecificationDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AdditionalInferenceSpecificationDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique name to identify the additional inference specification. The name
     * must be unique within the list of your additional inference specifications for a
     * particular model package.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AdditionalInferenceSpecificationDefinition& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AdditionalInferenceSpecificationDefinition& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AdditionalInferenceSpecificationDefinition& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the additional Inference specification</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline AdditionalInferenceSpecificationDefinition& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AdditionalInferenceSpecificationDefinition& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AdditionalInferenceSpecificationDefinition& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon ECR registry path of the Docker image that contains the inference
     * code.</p>
     */
    inline const Aws::Vector<ModelPackageContainerDefinition>& GetContainers() const{ return m_containers; }
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }
    inline void SetContainers(const Aws::Vector<ModelPackageContainerDefinition>& value) { m_containersHasBeenSet = true; m_containers = value; }
    inline void SetContainers(Aws::Vector<ModelPackageContainerDefinition>&& value) { m_containersHasBeenSet = true; m_containers = std::move(value); }
    inline AdditionalInferenceSpecificationDefinition& WithContainers(const Aws::Vector<ModelPackageContainerDefinition>& value) { SetContainers(value); return *this;}
    inline AdditionalInferenceSpecificationDefinition& WithContainers(Aws::Vector<ModelPackageContainerDefinition>&& value) { SetContainers(std::move(value)); return *this;}
    inline AdditionalInferenceSpecificationDefinition& AddContainers(const ModelPackageContainerDefinition& value) { m_containersHasBeenSet = true; m_containers.push_back(value); return *this; }
    inline AdditionalInferenceSpecificationDefinition& AddContainers(ModelPackageContainerDefinition&& value) { m_containersHasBeenSet = true; m_containers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the instance types on which a transformation job can be run or on
     * which an endpoint can be deployed.</p>
     */
    inline const Aws::Vector<TransformInstanceType>& GetSupportedTransformInstanceTypes() const{ return m_supportedTransformInstanceTypes; }
    inline bool SupportedTransformInstanceTypesHasBeenSet() const { return m_supportedTransformInstanceTypesHasBeenSet; }
    inline void SetSupportedTransformInstanceTypes(const Aws::Vector<TransformInstanceType>& value) { m_supportedTransformInstanceTypesHasBeenSet = true; m_supportedTransformInstanceTypes = value; }
    inline void SetSupportedTransformInstanceTypes(Aws::Vector<TransformInstanceType>&& value) { m_supportedTransformInstanceTypesHasBeenSet = true; m_supportedTransformInstanceTypes = std::move(value); }
    inline AdditionalInferenceSpecificationDefinition& WithSupportedTransformInstanceTypes(const Aws::Vector<TransformInstanceType>& value) { SetSupportedTransformInstanceTypes(value); return *this;}
    inline AdditionalInferenceSpecificationDefinition& WithSupportedTransformInstanceTypes(Aws::Vector<TransformInstanceType>&& value) { SetSupportedTransformInstanceTypes(std::move(value)); return *this;}
    inline AdditionalInferenceSpecificationDefinition& AddSupportedTransformInstanceTypes(const TransformInstanceType& value) { m_supportedTransformInstanceTypesHasBeenSet = true; m_supportedTransformInstanceTypes.push_back(value); return *this; }
    inline AdditionalInferenceSpecificationDefinition& AddSupportedTransformInstanceTypes(TransformInstanceType&& value) { m_supportedTransformInstanceTypesHasBeenSet = true; m_supportedTransformInstanceTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the instance types that are used to generate inferences in
     * real-time.</p>
     */
    inline const Aws::Vector<ProductionVariantInstanceType>& GetSupportedRealtimeInferenceInstanceTypes() const{ return m_supportedRealtimeInferenceInstanceTypes; }
    inline bool SupportedRealtimeInferenceInstanceTypesHasBeenSet() const { return m_supportedRealtimeInferenceInstanceTypesHasBeenSet; }
    inline void SetSupportedRealtimeInferenceInstanceTypes(const Aws::Vector<ProductionVariantInstanceType>& value) { m_supportedRealtimeInferenceInstanceTypesHasBeenSet = true; m_supportedRealtimeInferenceInstanceTypes = value; }
    inline void SetSupportedRealtimeInferenceInstanceTypes(Aws::Vector<ProductionVariantInstanceType>&& value) { m_supportedRealtimeInferenceInstanceTypesHasBeenSet = true; m_supportedRealtimeInferenceInstanceTypes = std::move(value); }
    inline AdditionalInferenceSpecificationDefinition& WithSupportedRealtimeInferenceInstanceTypes(const Aws::Vector<ProductionVariantInstanceType>& value) { SetSupportedRealtimeInferenceInstanceTypes(value); return *this;}
    inline AdditionalInferenceSpecificationDefinition& WithSupportedRealtimeInferenceInstanceTypes(Aws::Vector<ProductionVariantInstanceType>&& value) { SetSupportedRealtimeInferenceInstanceTypes(std::move(value)); return *this;}
    inline AdditionalInferenceSpecificationDefinition& AddSupportedRealtimeInferenceInstanceTypes(const ProductionVariantInstanceType& value) { m_supportedRealtimeInferenceInstanceTypesHasBeenSet = true; m_supportedRealtimeInferenceInstanceTypes.push_back(value); return *this; }
    inline AdditionalInferenceSpecificationDefinition& AddSupportedRealtimeInferenceInstanceTypes(ProductionVariantInstanceType&& value) { m_supportedRealtimeInferenceInstanceTypesHasBeenSet = true; m_supportedRealtimeInferenceInstanceTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The supported MIME types for the input data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedContentTypes() const{ return m_supportedContentTypes; }
    inline bool SupportedContentTypesHasBeenSet() const { return m_supportedContentTypesHasBeenSet; }
    inline void SetSupportedContentTypes(const Aws::Vector<Aws::String>& value) { m_supportedContentTypesHasBeenSet = true; m_supportedContentTypes = value; }
    inline void SetSupportedContentTypes(Aws::Vector<Aws::String>&& value) { m_supportedContentTypesHasBeenSet = true; m_supportedContentTypes = std::move(value); }
    inline AdditionalInferenceSpecificationDefinition& WithSupportedContentTypes(const Aws::Vector<Aws::String>& value) { SetSupportedContentTypes(value); return *this;}
    inline AdditionalInferenceSpecificationDefinition& WithSupportedContentTypes(Aws::Vector<Aws::String>&& value) { SetSupportedContentTypes(std::move(value)); return *this;}
    inline AdditionalInferenceSpecificationDefinition& AddSupportedContentTypes(const Aws::String& value) { m_supportedContentTypesHasBeenSet = true; m_supportedContentTypes.push_back(value); return *this; }
    inline AdditionalInferenceSpecificationDefinition& AddSupportedContentTypes(Aws::String&& value) { m_supportedContentTypesHasBeenSet = true; m_supportedContentTypes.push_back(std::move(value)); return *this; }
    inline AdditionalInferenceSpecificationDefinition& AddSupportedContentTypes(const char* value) { m_supportedContentTypesHasBeenSet = true; m_supportedContentTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The supported MIME types for the output data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedResponseMIMETypes() const{ return m_supportedResponseMIMETypes; }
    inline bool SupportedResponseMIMETypesHasBeenSet() const { return m_supportedResponseMIMETypesHasBeenSet; }
    inline void SetSupportedResponseMIMETypes(const Aws::Vector<Aws::String>& value) { m_supportedResponseMIMETypesHasBeenSet = true; m_supportedResponseMIMETypes = value; }
    inline void SetSupportedResponseMIMETypes(Aws::Vector<Aws::String>&& value) { m_supportedResponseMIMETypesHasBeenSet = true; m_supportedResponseMIMETypes = std::move(value); }
    inline AdditionalInferenceSpecificationDefinition& WithSupportedResponseMIMETypes(const Aws::Vector<Aws::String>& value) { SetSupportedResponseMIMETypes(value); return *this;}
    inline AdditionalInferenceSpecificationDefinition& WithSupportedResponseMIMETypes(Aws::Vector<Aws::String>&& value) { SetSupportedResponseMIMETypes(std::move(value)); return *this;}
    inline AdditionalInferenceSpecificationDefinition& AddSupportedResponseMIMETypes(const Aws::String& value) { m_supportedResponseMIMETypesHasBeenSet = true; m_supportedResponseMIMETypes.push_back(value); return *this; }
    inline AdditionalInferenceSpecificationDefinition& AddSupportedResponseMIMETypes(Aws::String&& value) { m_supportedResponseMIMETypesHasBeenSet = true; m_supportedResponseMIMETypes.push_back(std::move(value)); return *this; }
    inline AdditionalInferenceSpecificationDefinition& AddSupportedResponseMIMETypes(const char* value) { m_supportedResponseMIMETypesHasBeenSet = true; m_supportedResponseMIMETypes.push_back(value); return *this; }
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
