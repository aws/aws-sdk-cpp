/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/RecommendationJobPayloadConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/RecommendationJobSupportedEndpointType.h>
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
   * <p>Specifies mandatory fields for running an Inference Recommender job directly
   * in the <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_CreateInferenceRecommendationsJob.html">CreateInferenceRecommendationsJob</a>
   * API. The fields specified in <code>ContainerConfig</code> override the
   * corresponding fields in the model package. Use <code>ContainerConfig</code> if
   * you want to specify these fields for the recommendation job but don't want to
   * edit them in your model package.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/RecommendationJobContainerConfig">AWS
   * API Reference</a></p>
   */
  class RecommendationJobContainerConfig
  {
  public:
    AWS_SAGEMAKER_API RecommendationJobContainerConfig() = default;
    AWS_SAGEMAKER_API RecommendationJobContainerConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API RecommendationJobContainerConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The machine learning domain of the model and its components.</p> <p>Valid
     * Values: <code>COMPUTER_VISION | NATURAL_LANGUAGE_PROCESSING |
     * MACHINE_LEARNING</code> </p>
     */
    inline const Aws::String& GetDomain() const { return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    template<typename DomainT = Aws::String>
    void SetDomain(DomainT&& value) { m_domainHasBeenSet = true; m_domain = std::forward<DomainT>(value); }
    template<typename DomainT = Aws::String>
    RecommendationJobContainerConfig& WithDomain(DomainT&& value) { SetDomain(std::forward<DomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The machine learning task that the model accomplishes.</p> <p>Valid Values:
     * <code>IMAGE_CLASSIFICATION | OBJECT_DETECTION | TEXT_GENERATION |
     * IMAGE_SEGMENTATION | FILL_MASK | CLASSIFICATION | REGRESSION | OTHER</code> </p>
     */
    inline const Aws::String& GetTask() const { return m_task; }
    inline bool TaskHasBeenSet() const { return m_taskHasBeenSet; }
    template<typename TaskT = Aws::String>
    void SetTask(TaskT&& value) { m_taskHasBeenSet = true; m_task = std::forward<TaskT>(value); }
    template<typename TaskT = Aws::String>
    RecommendationJobContainerConfig& WithTask(TaskT&& value) { SetTask(std::forward<TaskT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The machine learning framework of the container image.</p> <p>Valid Values:
     * <code>TENSORFLOW | PYTORCH | XGBOOST | SAGEMAKER-SCIKIT-LEARN</code> </p>
     */
    inline const Aws::String& GetFramework() const { return m_framework; }
    inline bool FrameworkHasBeenSet() const { return m_frameworkHasBeenSet; }
    template<typename FrameworkT = Aws::String>
    void SetFramework(FrameworkT&& value) { m_frameworkHasBeenSet = true; m_framework = std::forward<FrameworkT>(value); }
    template<typename FrameworkT = Aws::String>
    RecommendationJobContainerConfig& WithFramework(FrameworkT&& value) { SetFramework(std::forward<FrameworkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The framework version of the container image.</p>
     */
    inline const Aws::String& GetFrameworkVersion() const { return m_frameworkVersion; }
    inline bool FrameworkVersionHasBeenSet() const { return m_frameworkVersionHasBeenSet; }
    template<typename FrameworkVersionT = Aws::String>
    void SetFrameworkVersion(FrameworkVersionT&& value) { m_frameworkVersionHasBeenSet = true; m_frameworkVersion = std::forward<FrameworkVersionT>(value); }
    template<typename FrameworkVersionT = Aws::String>
    RecommendationJobContainerConfig& WithFrameworkVersion(FrameworkVersionT&& value) { SetFrameworkVersion(std::forward<FrameworkVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code>SamplePayloadUrl</code> and all other sample
     * payload-related fields.</p>
     */
    inline const RecommendationJobPayloadConfig& GetPayloadConfig() const { return m_payloadConfig; }
    inline bool PayloadConfigHasBeenSet() const { return m_payloadConfigHasBeenSet; }
    template<typename PayloadConfigT = RecommendationJobPayloadConfig>
    void SetPayloadConfig(PayloadConfigT&& value) { m_payloadConfigHasBeenSet = true; m_payloadConfig = std::forward<PayloadConfigT>(value); }
    template<typename PayloadConfigT = RecommendationJobPayloadConfig>
    RecommendationJobContainerConfig& WithPayloadConfig(PayloadConfigT&& value) { SetPayloadConfig(std::forward<PayloadConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a pre-trained machine learning model benchmarked by Amazon
     * SageMaker Inference Recommender that matches your model.</p> <p>Valid Values:
     * <code>efficientnetb7 | unet | xgboost | faster-rcnn-resnet101 | nasnetlarge |
     * vgg16 | inception-v3 | mask-rcnn | sagemaker-scikit-learn | densenet201-gluon |
     * resnet18v2-gluon | xception | densenet201 | yolov4 | resnet152 | bert-base-cased
     * | xceptionV1-keras | resnet50 | retinanet</code> </p>
     */
    inline const Aws::String& GetNearestModelName() const { return m_nearestModelName; }
    inline bool NearestModelNameHasBeenSet() const { return m_nearestModelNameHasBeenSet; }
    template<typename NearestModelNameT = Aws::String>
    void SetNearestModelName(NearestModelNameT&& value) { m_nearestModelNameHasBeenSet = true; m_nearestModelName = std::forward<NearestModelNameT>(value); }
    template<typename NearestModelNameT = Aws::String>
    RecommendationJobContainerConfig& WithNearestModelName(NearestModelNameT&& value) { SetNearestModelName(std::forward<NearestModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the instance types that are used to generate inferences in
     * real-time.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedInstanceTypes() const { return m_supportedInstanceTypes; }
    inline bool SupportedInstanceTypesHasBeenSet() const { return m_supportedInstanceTypesHasBeenSet; }
    template<typename SupportedInstanceTypesT = Aws::Vector<Aws::String>>
    void SetSupportedInstanceTypes(SupportedInstanceTypesT&& value) { m_supportedInstanceTypesHasBeenSet = true; m_supportedInstanceTypes = std::forward<SupportedInstanceTypesT>(value); }
    template<typename SupportedInstanceTypesT = Aws::Vector<Aws::String>>
    RecommendationJobContainerConfig& WithSupportedInstanceTypes(SupportedInstanceTypesT&& value) { SetSupportedInstanceTypes(std::forward<SupportedInstanceTypesT>(value)); return *this;}
    template<typename SupportedInstanceTypesT = Aws::String>
    RecommendationJobContainerConfig& AddSupportedInstanceTypes(SupportedInstanceTypesT&& value) { m_supportedInstanceTypesHasBeenSet = true; m_supportedInstanceTypes.emplace_back(std::forward<SupportedInstanceTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The endpoint type to receive recommendations for. By default this is null,
     * and the results of the inference recommendation job return a combined list of
     * both real-time and serverless benchmarks. By specifying a value for this field,
     * you can receive a longer list of benchmarks for the desired endpoint type.</p>
     */
    inline RecommendationJobSupportedEndpointType GetSupportedEndpointType() const { return m_supportedEndpointType; }
    inline bool SupportedEndpointTypeHasBeenSet() const { return m_supportedEndpointTypeHasBeenSet; }
    inline void SetSupportedEndpointType(RecommendationJobSupportedEndpointType value) { m_supportedEndpointTypeHasBeenSet = true; m_supportedEndpointType = value; }
    inline RecommendationJobContainerConfig& WithSupportedEndpointType(RecommendationJobSupportedEndpointType value) { SetSupportedEndpointType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name and shape of the expected data inputs for your trained
     * model with a JSON dictionary form. This field is used for optimizing your model
     * using SageMaker Neo. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_InputConfig.html#sagemaker-Type-InputConfig-DataInputConfig">DataInputConfig</a>.</p>
     */
    inline const Aws::String& GetDataInputConfig() const { return m_dataInputConfig; }
    inline bool DataInputConfigHasBeenSet() const { return m_dataInputConfigHasBeenSet; }
    template<typename DataInputConfigT = Aws::String>
    void SetDataInputConfig(DataInputConfigT&& value) { m_dataInputConfigHasBeenSet = true; m_dataInputConfig = std::forward<DataInputConfigT>(value); }
    template<typename DataInputConfigT = Aws::String>
    RecommendationJobContainerConfig& WithDataInputConfig(DataInputConfigT&& value) { SetDataInputConfig(std::forward<DataInputConfigT>(value)); return *this;}
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
    RecommendationJobContainerConfig& WithSupportedResponseMIMETypes(SupportedResponseMIMETypesT&& value) { SetSupportedResponseMIMETypes(std::forward<SupportedResponseMIMETypesT>(value)); return *this;}
    template<typename SupportedResponseMIMETypesT = Aws::String>
    RecommendationJobContainerConfig& AddSupportedResponseMIMETypes(SupportedResponseMIMETypesT&& value) { m_supportedResponseMIMETypesHasBeenSet = true; m_supportedResponseMIMETypes.emplace_back(std::forward<SupportedResponseMIMETypesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_domain;
    bool m_domainHasBeenSet = false;

    Aws::String m_task;
    bool m_taskHasBeenSet = false;

    Aws::String m_framework;
    bool m_frameworkHasBeenSet = false;

    Aws::String m_frameworkVersion;
    bool m_frameworkVersionHasBeenSet = false;

    RecommendationJobPayloadConfig m_payloadConfig;
    bool m_payloadConfigHasBeenSet = false;

    Aws::String m_nearestModelName;
    bool m_nearestModelNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedInstanceTypes;
    bool m_supportedInstanceTypesHasBeenSet = false;

    RecommendationJobSupportedEndpointType m_supportedEndpointType{RecommendationJobSupportedEndpointType::NOT_SET};
    bool m_supportedEndpointTypeHasBeenSet = false;

    Aws::String m_dataInputConfig;
    bool m_dataInputConfigHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedResponseMIMETypes;
    bool m_supportedResponseMIMETypesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
