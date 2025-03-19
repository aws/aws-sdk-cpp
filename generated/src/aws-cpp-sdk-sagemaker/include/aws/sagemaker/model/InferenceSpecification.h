/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/ModelPackageContainerDefinition.h>
#include <aws/sagemaker/model/TransformInstanceType.h>
#include <aws/sagemaker/model/ProductionVariantInstanceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Defines how to perform inference generation after a training job is
   * run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InferenceSpecification">AWS
   * API Reference</a></p>
   */
  class InferenceSpecification
  {
  public:
    AWS_SAGEMAKER_API InferenceSpecification() = default;
    AWS_SAGEMAKER_API InferenceSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API InferenceSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    InferenceSpecification& WithContainers(ContainersT&& value) { SetContainers(std::forward<ContainersT>(value)); return *this;}
    template<typename ContainersT = ModelPackageContainerDefinition>
    InferenceSpecification& AddContainers(ContainersT&& value) { m_containersHasBeenSet = true; m_containers.emplace_back(std::forward<ContainersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the instance types on which a transformation job can be run or on
     * which an endpoint can be deployed.</p> <p>This parameter is required for
     * unversioned models, and optional for versioned models.</p>
     */
    inline const Aws::Vector<TransformInstanceType>& GetSupportedTransformInstanceTypes() const { return m_supportedTransformInstanceTypes; }
    inline bool SupportedTransformInstanceTypesHasBeenSet() const { return m_supportedTransformInstanceTypesHasBeenSet; }
    template<typename SupportedTransformInstanceTypesT = Aws::Vector<TransformInstanceType>>
    void SetSupportedTransformInstanceTypes(SupportedTransformInstanceTypesT&& value) { m_supportedTransformInstanceTypesHasBeenSet = true; m_supportedTransformInstanceTypes = std::forward<SupportedTransformInstanceTypesT>(value); }
    template<typename SupportedTransformInstanceTypesT = Aws::Vector<TransformInstanceType>>
    InferenceSpecification& WithSupportedTransformInstanceTypes(SupportedTransformInstanceTypesT&& value) { SetSupportedTransformInstanceTypes(std::forward<SupportedTransformInstanceTypesT>(value)); return *this;}
    inline InferenceSpecification& AddSupportedTransformInstanceTypes(TransformInstanceType value) { m_supportedTransformInstanceTypesHasBeenSet = true; m_supportedTransformInstanceTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the instance types that are used to generate inferences in
     * real-time.</p> <p>This parameter is required for unversioned models, and
     * optional for versioned models.</p>
     */
    inline const Aws::Vector<ProductionVariantInstanceType>& GetSupportedRealtimeInferenceInstanceTypes() const { return m_supportedRealtimeInferenceInstanceTypes; }
    inline bool SupportedRealtimeInferenceInstanceTypesHasBeenSet() const { return m_supportedRealtimeInferenceInstanceTypesHasBeenSet; }
    template<typename SupportedRealtimeInferenceInstanceTypesT = Aws::Vector<ProductionVariantInstanceType>>
    void SetSupportedRealtimeInferenceInstanceTypes(SupportedRealtimeInferenceInstanceTypesT&& value) { m_supportedRealtimeInferenceInstanceTypesHasBeenSet = true; m_supportedRealtimeInferenceInstanceTypes = std::forward<SupportedRealtimeInferenceInstanceTypesT>(value); }
    template<typename SupportedRealtimeInferenceInstanceTypesT = Aws::Vector<ProductionVariantInstanceType>>
    InferenceSpecification& WithSupportedRealtimeInferenceInstanceTypes(SupportedRealtimeInferenceInstanceTypesT&& value) { SetSupportedRealtimeInferenceInstanceTypes(std::forward<SupportedRealtimeInferenceInstanceTypesT>(value)); return *this;}
    inline InferenceSpecification& AddSupportedRealtimeInferenceInstanceTypes(ProductionVariantInstanceType value) { m_supportedRealtimeInferenceInstanceTypesHasBeenSet = true; m_supportedRealtimeInferenceInstanceTypes.push_back(value); return *this; }
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
    InferenceSpecification& WithSupportedContentTypes(SupportedContentTypesT&& value) { SetSupportedContentTypes(std::forward<SupportedContentTypesT>(value)); return *this;}
    template<typename SupportedContentTypesT = Aws::String>
    InferenceSpecification& AddSupportedContentTypes(SupportedContentTypesT&& value) { m_supportedContentTypesHasBeenSet = true; m_supportedContentTypes.emplace_back(std::forward<SupportedContentTypesT>(value)); return *this; }
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
    InferenceSpecification& WithSupportedResponseMIMETypes(SupportedResponseMIMETypesT&& value) { SetSupportedResponseMIMETypes(std::forward<SupportedResponseMIMETypesT>(value)); return *this;}
    template<typename SupportedResponseMIMETypesT = Aws::String>
    InferenceSpecification& AddSupportedResponseMIMETypes(SupportedResponseMIMETypesT&& value) { m_supportedResponseMIMETypesHasBeenSet = true; m_supportedResponseMIMETypes.emplace_back(std::forward<SupportedResponseMIMETypesT>(value)); return *this; }
    ///@}
  private:

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
