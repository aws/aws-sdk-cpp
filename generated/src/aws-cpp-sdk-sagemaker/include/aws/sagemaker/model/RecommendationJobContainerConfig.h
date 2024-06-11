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
    AWS_SAGEMAKER_API RecommendationJobContainerConfig();
    AWS_SAGEMAKER_API RecommendationJobContainerConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API RecommendationJobContainerConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The machine learning domain of the model and its components.</p> <p>Valid
     * Values: <code>COMPUTER_VISION | NATURAL_LANGUAGE_PROCESSING |
     * MACHINE_LEARNING</code> </p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }
    inline RecommendationJobContainerConfig& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}
    inline RecommendationJobContainerConfig& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}
    inline RecommendationJobContainerConfig& WithDomain(const char* value) { SetDomain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The machine learning task that the model accomplishes.</p> <p>Valid Values:
     * <code>IMAGE_CLASSIFICATION | OBJECT_DETECTION | TEXT_GENERATION |
     * IMAGE_SEGMENTATION | FILL_MASK | CLASSIFICATION | REGRESSION | OTHER</code> </p>
     */
    inline const Aws::String& GetTask() const{ return m_task; }
    inline bool TaskHasBeenSet() const { return m_taskHasBeenSet; }
    inline void SetTask(const Aws::String& value) { m_taskHasBeenSet = true; m_task = value; }
    inline void SetTask(Aws::String&& value) { m_taskHasBeenSet = true; m_task = std::move(value); }
    inline void SetTask(const char* value) { m_taskHasBeenSet = true; m_task.assign(value); }
    inline RecommendationJobContainerConfig& WithTask(const Aws::String& value) { SetTask(value); return *this;}
    inline RecommendationJobContainerConfig& WithTask(Aws::String&& value) { SetTask(std::move(value)); return *this;}
    inline RecommendationJobContainerConfig& WithTask(const char* value) { SetTask(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The machine learning framework of the container image.</p> <p>Valid Values:
     * <code>TENSORFLOW | PYTORCH | XGBOOST | SAGEMAKER-SCIKIT-LEARN</code> </p>
     */
    inline const Aws::String& GetFramework() const{ return m_framework; }
    inline bool FrameworkHasBeenSet() const { return m_frameworkHasBeenSet; }
    inline void SetFramework(const Aws::String& value) { m_frameworkHasBeenSet = true; m_framework = value; }
    inline void SetFramework(Aws::String&& value) { m_frameworkHasBeenSet = true; m_framework = std::move(value); }
    inline void SetFramework(const char* value) { m_frameworkHasBeenSet = true; m_framework.assign(value); }
    inline RecommendationJobContainerConfig& WithFramework(const Aws::String& value) { SetFramework(value); return *this;}
    inline RecommendationJobContainerConfig& WithFramework(Aws::String&& value) { SetFramework(std::move(value)); return *this;}
    inline RecommendationJobContainerConfig& WithFramework(const char* value) { SetFramework(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The framework version of the container image.</p>
     */
    inline const Aws::String& GetFrameworkVersion() const{ return m_frameworkVersion; }
    inline bool FrameworkVersionHasBeenSet() const { return m_frameworkVersionHasBeenSet; }
    inline void SetFrameworkVersion(const Aws::String& value) { m_frameworkVersionHasBeenSet = true; m_frameworkVersion = value; }
    inline void SetFrameworkVersion(Aws::String&& value) { m_frameworkVersionHasBeenSet = true; m_frameworkVersion = std::move(value); }
    inline void SetFrameworkVersion(const char* value) { m_frameworkVersionHasBeenSet = true; m_frameworkVersion.assign(value); }
    inline RecommendationJobContainerConfig& WithFrameworkVersion(const Aws::String& value) { SetFrameworkVersion(value); return *this;}
    inline RecommendationJobContainerConfig& WithFrameworkVersion(Aws::String&& value) { SetFrameworkVersion(std::move(value)); return *this;}
    inline RecommendationJobContainerConfig& WithFrameworkVersion(const char* value) { SetFrameworkVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code>SamplePayloadUrl</code> and all other sample
     * payload-related fields.</p>
     */
    inline const RecommendationJobPayloadConfig& GetPayloadConfig() const{ return m_payloadConfig; }
    inline bool PayloadConfigHasBeenSet() const { return m_payloadConfigHasBeenSet; }
    inline void SetPayloadConfig(const RecommendationJobPayloadConfig& value) { m_payloadConfigHasBeenSet = true; m_payloadConfig = value; }
    inline void SetPayloadConfig(RecommendationJobPayloadConfig&& value) { m_payloadConfigHasBeenSet = true; m_payloadConfig = std::move(value); }
    inline RecommendationJobContainerConfig& WithPayloadConfig(const RecommendationJobPayloadConfig& value) { SetPayloadConfig(value); return *this;}
    inline RecommendationJobContainerConfig& WithPayloadConfig(RecommendationJobPayloadConfig&& value) { SetPayloadConfig(std::move(value)); return *this;}
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
    inline const Aws::String& GetNearestModelName() const{ return m_nearestModelName; }
    inline bool NearestModelNameHasBeenSet() const { return m_nearestModelNameHasBeenSet; }
    inline void SetNearestModelName(const Aws::String& value) { m_nearestModelNameHasBeenSet = true; m_nearestModelName = value; }
    inline void SetNearestModelName(Aws::String&& value) { m_nearestModelNameHasBeenSet = true; m_nearestModelName = std::move(value); }
    inline void SetNearestModelName(const char* value) { m_nearestModelNameHasBeenSet = true; m_nearestModelName.assign(value); }
    inline RecommendationJobContainerConfig& WithNearestModelName(const Aws::String& value) { SetNearestModelName(value); return *this;}
    inline RecommendationJobContainerConfig& WithNearestModelName(Aws::String&& value) { SetNearestModelName(std::move(value)); return *this;}
    inline RecommendationJobContainerConfig& WithNearestModelName(const char* value) { SetNearestModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the instance types that are used to generate inferences in
     * real-time.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedInstanceTypes() const{ return m_supportedInstanceTypes; }
    inline bool SupportedInstanceTypesHasBeenSet() const { return m_supportedInstanceTypesHasBeenSet; }
    inline void SetSupportedInstanceTypes(const Aws::Vector<Aws::String>& value) { m_supportedInstanceTypesHasBeenSet = true; m_supportedInstanceTypes = value; }
    inline void SetSupportedInstanceTypes(Aws::Vector<Aws::String>&& value) { m_supportedInstanceTypesHasBeenSet = true; m_supportedInstanceTypes = std::move(value); }
    inline RecommendationJobContainerConfig& WithSupportedInstanceTypes(const Aws::Vector<Aws::String>& value) { SetSupportedInstanceTypes(value); return *this;}
    inline RecommendationJobContainerConfig& WithSupportedInstanceTypes(Aws::Vector<Aws::String>&& value) { SetSupportedInstanceTypes(std::move(value)); return *this;}
    inline RecommendationJobContainerConfig& AddSupportedInstanceTypes(const Aws::String& value) { m_supportedInstanceTypesHasBeenSet = true; m_supportedInstanceTypes.push_back(value); return *this; }
    inline RecommendationJobContainerConfig& AddSupportedInstanceTypes(Aws::String&& value) { m_supportedInstanceTypesHasBeenSet = true; m_supportedInstanceTypes.push_back(std::move(value)); return *this; }
    inline RecommendationJobContainerConfig& AddSupportedInstanceTypes(const char* value) { m_supportedInstanceTypesHasBeenSet = true; m_supportedInstanceTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The endpoint type to receive recommendations for. By default this is null,
     * and the results of the inference recommendation job return a combined list of
     * both real-time and serverless benchmarks. By specifying a value for this field,
     * you can receive a longer list of benchmarks for the desired endpoint type.</p>
     */
    inline const RecommendationJobSupportedEndpointType& GetSupportedEndpointType() const{ return m_supportedEndpointType; }
    inline bool SupportedEndpointTypeHasBeenSet() const { return m_supportedEndpointTypeHasBeenSet; }
    inline void SetSupportedEndpointType(const RecommendationJobSupportedEndpointType& value) { m_supportedEndpointTypeHasBeenSet = true; m_supportedEndpointType = value; }
    inline void SetSupportedEndpointType(RecommendationJobSupportedEndpointType&& value) { m_supportedEndpointTypeHasBeenSet = true; m_supportedEndpointType = std::move(value); }
    inline RecommendationJobContainerConfig& WithSupportedEndpointType(const RecommendationJobSupportedEndpointType& value) { SetSupportedEndpointType(value); return *this;}
    inline RecommendationJobContainerConfig& WithSupportedEndpointType(RecommendationJobSupportedEndpointType&& value) { SetSupportedEndpointType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the name and shape of the expected data inputs for your trained
     * model with a JSON dictionary form. This field is used for optimizing your model
     * using SageMaker Neo. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_InputConfig.html#sagemaker-Type-InputConfig-DataInputConfig">DataInputConfig</a>.</p>
     */
    inline const Aws::String& GetDataInputConfig() const{ return m_dataInputConfig; }
    inline bool DataInputConfigHasBeenSet() const { return m_dataInputConfigHasBeenSet; }
    inline void SetDataInputConfig(const Aws::String& value) { m_dataInputConfigHasBeenSet = true; m_dataInputConfig = value; }
    inline void SetDataInputConfig(Aws::String&& value) { m_dataInputConfigHasBeenSet = true; m_dataInputConfig = std::move(value); }
    inline void SetDataInputConfig(const char* value) { m_dataInputConfigHasBeenSet = true; m_dataInputConfig.assign(value); }
    inline RecommendationJobContainerConfig& WithDataInputConfig(const Aws::String& value) { SetDataInputConfig(value); return *this;}
    inline RecommendationJobContainerConfig& WithDataInputConfig(Aws::String&& value) { SetDataInputConfig(std::move(value)); return *this;}
    inline RecommendationJobContainerConfig& WithDataInputConfig(const char* value) { SetDataInputConfig(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The supported MIME types for the output data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedResponseMIMETypes() const{ return m_supportedResponseMIMETypes; }
    inline bool SupportedResponseMIMETypesHasBeenSet() const { return m_supportedResponseMIMETypesHasBeenSet; }
    inline void SetSupportedResponseMIMETypes(const Aws::Vector<Aws::String>& value) { m_supportedResponseMIMETypesHasBeenSet = true; m_supportedResponseMIMETypes = value; }
    inline void SetSupportedResponseMIMETypes(Aws::Vector<Aws::String>&& value) { m_supportedResponseMIMETypesHasBeenSet = true; m_supportedResponseMIMETypes = std::move(value); }
    inline RecommendationJobContainerConfig& WithSupportedResponseMIMETypes(const Aws::Vector<Aws::String>& value) { SetSupportedResponseMIMETypes(value); return *this;}
    inline RecommendationJobContainerConfig& WithSupportedResponseMIMETypes(Aws::Vector<Aws::String>&& value) { SetSupportedResponseMIMETypes(std::move(value)); return *this;}
    inline RecommendationJobContainerConfig& AddSupportedResponseMIMETypes(const Aws::String& value) { m_supportedResponseMIMETypesHasBeenSet = true; m_supportedResponseMIMETypes.push_back(value); return *this; }
    inline RecommendationJobContainerConfig& AddSupportedResponseMIMETypes(Aws::String&& value) { m_supportedResponseMIMETypesHasBeenSet = true; m_supportedResponseMIMETypes.push_back(std::move(value)); return *this; }
    inline RecommendationJobContainerConfig& AddSupportedResponseMIMETypes(const char* value) { m_supportedResponseMIMETypesHasBeenSet = true; m_supportedResponseMIMETypes.push_back(value); return *this; }
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

    RecommendationJobSupportedEndpointType m_supportedEndpointType;
    bool m_supportedEndpointTypeHasBeenSet = false;

    Aws::String m_dataInputConfig;
    bool m_dataInputConfigHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedResponseMIMETypes;
    bool m_supportedResponseMIMETypesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
