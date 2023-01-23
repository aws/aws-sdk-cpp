/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/RecommendationJobPayloadConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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


    /**
     * <p>The machine learning domain of the model and its components.</p> <p>Valid
     * Values: <code>COMPUTER_VISION | NATURAL_LANGUAGE_PROCESSING |
     * MACHINE_LEARNING</code> </p>
     */
    inline const Aws::String& GetDomain() const{ return m_domain; }

    /**
     * <p>The machine learning domain of the model and its components.</p> <p>Valid
     * Values: <code>COMPUTER_VISION | NATURAL_LANGUAGE_PROCESSING |
     * MACHINE_LEARNING</code> </p>
     */
    inline bool DomainHasBeenSet() const { return m_domainHasBeenSet; }

    /**
     * <p>The machine learning domain of the model and its components.</p> <p>Valid
     * Values: <code>COMPUTER_VISION | NATURAL_LANGUAGE_PROCESSING |
     * MACHINE_LEARNING</code> </p>
     */
    inline void SetDomain(const Aws::String& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>The machine learning domain of the model and its components.</p> <p>Valid
     * Values: <code>COMPUTER_VISION | NATURAL_LANGUAGE_PROCESSING |
     * MACHINE_LEARNING</code> </p>
     */
    inline void SetDomain(Aws::String&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>The machine learning domain of the model and its components.</p> <p>Valid
     * Values: <code>COMPUTER_VISION | NATURAL_LANGUAGE_PROCESSING |
     * MACHINE_LEARNING</code> </p>
     */
    inline void SetDomain(const char* value) { m_domainHasBeenSet = true; m_domain.assign(value); }

    /**
     * <p>The machine learning domain of the model and its components.</p> <p>Valid
     * Values: <code>COMPUTER_VISION | NATURAL_LANGUAGE_PROCESSING |
     * MACHINE_LEARNING</code> </p>
     */
    inline RecommendationJobContainerConfig& WithDomain(const Aws::String& value) { SetDomain(value); return *this;}

    /**
     * <p>The machine learning domain of the model and its components.</p> <p>Valid
     * Values: <code>COMPUTER_VISION | NATURAL_LANGUAGE_PROCESSING |
     * MACHINE_LEARNING</code> </p>
     */
    inline RecommendationJobContainerConfig& WithDomain(Aws::String&& value) { SetDomain(std::move(value)); return *this;}

    /**
     * <p>The machine learning domain of the model and its components.</p> <p>Valid
     * Values: <code>COMPUTER_VISION | NATURAL_LANGUAGE_PROCESSING |
     * MACHINE_LEARNING</code> </p>
     */
    inline RecommendationJobContainerConfig& WithDomain(const char* value) { SetDomain(value); return *this;}


    /**
     * <p>The machine learning task that the model accomplishes.</p> <p>Valid Values:
     * <code>IMAGE_CLASSIFICATION | OBJECT_DETECTION | TEXT_GENERATION |
     * IMAGE_SEGMENTATION | FILL_MASK | CLASSIFICATION | REGRESSION | OTHER</code> </p>
     */
    inline const Aws::String& GetTask() const{ return m_task; }

    /**
     * <p>The machine learning task that the model accomplishes.</p> <p>Valid Values:
     * <code>IMAGE_CLASSIFICATION | OBJECT_DETECTION | TEXT_GENERATION |
     * IMAGE_SEGMENTATION | FILL_MASK | CLASSIFICATION | REGRESSION | OTHER</code> </p>
     */
    inline bool TaskHasBeenSet() const { return m_taskHasBeenSet; }

    /**
     * <p>The machine learning task that the model accomplishes.</p> <p>Valid Values:
     * <code>IMAGE_CLASSIFICATION | OBJECT_DETECTION | TEXT_GENERATION |
     * IMAGE_SEGMENTATION | FILL_MASK | CLASSIFICATION | REGRESSION | OTHER</code> </p>
     */
    inline void SetTask(const Aws::String& value) { m_taskHasBeenSet = true; m_task = value; }

    /**
     * <p>The machine learning task that the model accomplishes.</p> <p>Valid Values:
     * <code>IMAGE_CLASSIFICATION | OBJECT_DETECTION | TEXT_GENERATION |
     * IMAGE_SEGMENTATION | FILL_MASK | CLASSIFICATION | REGRESSION | OTHER</code> </p>
     */
    inline void SetTask(Aws::String&& value) { m_taskHasBeenSet = true; m_task = std::move(value); }

    /**
     * <p>The machine learning task that the model accomplishes.</p> <p>Valid Values:
     * <code>IMAGE_CLASSIFICATION | OBJECT_DETECTION | TEXT_GENERATION |
     * IMAGE_SEGMENTATION | FILL_MASK | CLASSIFICATION | REGRESSION | OTHER</code> </p>
     */
    inline void SetTask(const char* value) { m_taskHasBeenSet = true; m_task.assign(value); }

    /**
     * <p>The machine learning task that the model accomplishes.</p> <p>Valid Values:
     * <code>IMAGE_CLASSIFICATION | OBJECT_DETECTION | TEXT_GENERATION |
     * IMAGE_SEGMENTATION | FILL_MASK | CLASSIFICATION | REGRESSION | OTHER</code> </p>
     */
    inline RecommendationJobContainerConfig& WithTask(const Aws::String& value) { SetTask(value); return *this;}

    /**
     * <p>The machine learning task that the model accomplishes.</p> <p>Valid Values:
     * <code>IMAGE_CLASSIFICATION | OBJECT_DETECTION | TEXT_GENERATION |
     * IMAGE_SEGMENTATION | FILL_MASK | CLASSIFICATION | REGRESSION | OTHER</code> </p>
     */
    inline RecommendationJobContainerConfig& WithTask(Aws::String&& value) { SetTask(std::move(value)); return *this;}

    /**
     * <p>The machine learning task that the model accomplishes.</p> <p>Valid Values:
     * <code>IMAGE_CLASSIFICATION | OBJECT_DETECTION | TEXT_GENERATION |
     * IMAGE_SEGMENTATION | FILL_MASK | CLASSIFICATION | REGRESSION | OTHER</code> </p>
     */
    inline RecommendationJobContainerConfig& WithTask(const char* value) { SetTask(value); return *this;}


    /**
     * <p>The machine learning framework of the container image.</p> <p>Valid Values:
     * <code>TENSORFLOW | PYTORCH | XGBOOST | SAGEMAKER-SCIKIT-LEARN</code> </p>
     */
    inline const Aws::String& GetFramework() const{ return m_framework; }

    /**
     * <p>The machine learning framework of the container image.</p> <p>Valid Values:
     * <code>TENSORFLOW | PYTORCH | XGBOOST | SAGEMAKER-SCIKIT-LEARN</code> </p>
     */
    inline bool FrameworkHasBeenSet() const { return m_frameworkHasBeenSet; }

    /**
     * <p>The machine learning framework of the container image.</p> <p>Valid Values:
     * <code>TENSORFLOW | PYTORCH | XGBOOST | SAGEMAKER-SCIKIT-LEARN</code> </p>
     */
    inline void SetFramework(const Aws::String& value) { m_frameworkHasBeenSet = true; m_framework = value; }

    /**
     * <p>The machine learning framework of the container image.</p> <p>Valid Values:
     * <code>TENSORFLOW | PYTORCH | XGBOOST | SAGEMAKER-SCIKIT-LEARN</code> </p>
     */
    inline void SetFramework(Aws::String&& value) { m_frameworkHasBeenSet = true; m_framework = std::move(value); }

    /**
     * <p>The machine learning framework of the container image.</p> <p>Valid Values:
     * <code>TENSORFLOW | PYTORCH | XGBOOST | SAGEMAKER-SCIKIT-LEARN</code> </p>
     */
    inline void SetFramework(const char* value) { m_frameworkHasBeenSet = true; m_framework.assign(value); }

    /**
     * <p>The machine learning framework of the container image.</p> <p>Valid Values:
     * <code>TENSORFLOW | PYTORCH | XGBOOST | SAGEMAKER-SCIKIT-LEARN</code> </p>
     */
    inline RecommendationJobContainerConfig& WithFramework(const Aws::String& value) { SetFramework(value); return *this;}

    /**
     * <p>The machine learning framework of the container image.</p> <p>Valid Values:
     * <code>TENSORFLOW | PYTORCH | XGBOOST | SAGEMAKER-SCIKIT-LEARN</code> </p>
     */
    inline RecommendationJobContainerConfig& WithFramework(Aws::String&& value) { SetFramework(std::move(value)); return *this;}

    /**
     * <p>The machine learning framework of the container image.</p> <p>Valid Values:
     * <code>TENSORFLOW | PYTORCH | XGBOOST | SAGEMAKER-SCIKIT-LEARN</code> </p>
     */
    inline RecommendationJobContainerConfig& WithFramework(const char* value) { SetFramework(value); return *this;}


    /**
     * <p>The framework version of the container image.</p>
     */
    inline const Aws::String& GetFrameworkVersion() const{ return m_frameworkVersion; }

    /**
     * <p>The framework version of the container image.</p>
     */
    inline bool FrameworkVersionHasBeenSet() const { return m_frameworkVersionHasBeenSet; }

    /**
     * <p>The framework version of the container image.</p>
     */
    inline void SetFrameworkVersion(const Aws::String& value) { m_frameworkVersionHasBeenSet = true; m_frameworkVersion = value; }

    /**
     * <p>The framework version of the container image.</p>
     */
    inline void SetFrameworkVersion(Aws::String&& value) { m_frameworkVersionHasBeenSet = true; m_frameworkVersion = std::move(value); }

    /**
     * <p>The framework version of the container image.</p>
     */
    inline void SetFrameworkVersion(const char* value) { m_frameworkVersionHasBeenSet = true; m_frameworkVersion.assign(value); }

    /**
     * <p>The framework version of the container image.</p>
     */
    inline RecommendationJobContainerConfig& WithFrameworkVersion(const Aws::String& value) { SetFrameworkVersion(value); return *this;}

    /**
     * <p>The framework version of the container image.</p>
     */
    inline RecommendationJobContainerConfig& WithFrameworkVersion(Aws::String&& value) { SetFrameworkVersion(std::move(value)); return *this;}

    /**
     * <p>The framework version of the container image.</p>
     */
    inline RecommendationJobContainerConfig& WithFrameworkVersion(const char* value) { SetFrameworkVersion(value); return *this;}


    /**
     * <p>Specifies the <code>SamplePayloadUrl</code> and all other sample
     * payload-related fields.</p>
     */
    inline const RecommendationJobPayloadConfig& GetPayloadConfig() const{ return m_payloadConfig; }

    /**
     * <p>Specifies the <code>SamplePayloadUrl</code> and all other sample
     * payload-related fields.</p>
     */
    inline bool PayloadConfigHasBeenSet() const { return m_payloadConfigHasBeenSet; }

    /**
     * <p>Specifies the <code>SamplePayloadUrl</code> and all other sample
     * payload-related fields.</p>
     */
    inline void SetPayloadConfig(const RecommendationJobPayloadConfig& value) { m_payloadConfigHasBeenSet = true; m_payloadConfig = value; }

    /**
     * <p>Specifies the <code>SamplePayloadUrl</code> and all other sample
     * payload-related fields.</p>
     */
    inline void SetPayloadConfig(RecommendationJobPayloadConfig&& value) { m_payloadConfigHasBeenSet = true; m_payloadConfig = std::move(value); }

    /**
     * <p>Specifies the <code>SamplePayloadUrl</code> and all other sample
     * payload-related fields.</p>
     */
    inline RecommendationJobContainerConfig& WithPayloadConfig(const RecommendationJobPayloadConfig& value) { SetPayloadConfig(value); return *this;}

    /**
     * <p>Specifies the <code>SamplePayloadUrl</code> and all other sample
     * payload-related fields.</p>
     */
    inline RecommendationJobContainerConfig& WithPayloadConfig(RecommendationJobPayloadConfig&& value) { SetPayloadConfig(std::move(value)); return *this;}


    /**
     * <p>The name of a pre-trained machine learning model benchmarked by Amazon
     * SageMaker Inference Recommender that matches your model.</p> <p>Valid Values:
     * <code>efficientnetb7 | unet | xgboost | faster-rcnn-resnet101 | nasnetlarge |
     * vgg16 | inception-v3 | mask-rcnn | sagemaker-scikit-learn | densenet201-gluon |
     * resnet18v2-gluon | xception | densenet201 | yolov4 | resnet152 | bert-base-cased
     * | xceptionV1-keras | resnet50 | retinanet</code> </p>
     */
    inline const Aws::String& GetNearestModelName() const{ return m_nearestModelName; }

    /**
     * <p>The name of a pre-trained machine learning model benchmarked by Amazon
     * SageMaker Inference Recommender that matches your model.</p> <p>Valid Values:
     * <code>efficientnetb7 | unet | xgboost | faster-rcnn-resnet101 | nasnetlarge |
     * vgg16 | inception-v3 | mask-rcnn | sagemaker-scikit-learn | densenet201-gluon |
     * resnet18v2-gluon | xception | densenet201 | yolov4 | resnet152 | bert-base-cased
     * | xceptionV1-keras | resnet50 | retinanet</code> </p>
     */
    inline bool NearestModelNameHasBeenSet() const { return m_nearestModelNameHasBeenSet; }

    /**
     * <p>The name of a pre-trained machine learning model benchmarked by Amazon
     * SageMaker Inference Recommender that matches your model.</p> <p>Valid Values:
     * <code>efficientnetb7 | unet | xgboost | faster-rcnn-resnet101 | nasnetlarge |
     * vgg16 | inception-v3 | mask-rcnn | sagemaker-scikit-learn | densenet201-gluon |
     * resnet18v2-gluon | xception | densenet201 | yolov4 | resnet152 | bert-base-cased
     * | xceptionV1-keras | resnet50 | retinanet</code> </p>
     */
    inline void SetNearestModelName(const Aws::String& value) { m_nearestModelNameHasBeenSet = true; m_nearestModelName = value; }

    /**
     * <p>The name of a pre-trained machine learning model benchmarked by Amazon
     * SageMaker Inference Recommender that matches your model.</p> <p>Valid Values:
     * <code>efficientnetb7 | unet | xgboost | faster-rcnn-resnet101 | nasnetlarge |
     * vgg16 | inception-v3 | mask-rcnn | sagemaker-scikit-learn | densenet201-gluon |
     * resnet18v2-gluon | xception | densenet201 | yolov4 | resnet152 | bert-base-cased
     * | xceptionV1-keras | resnet50 | retinanet</code> </p>
     */
    inline void SetNearestModelName(Aws::String&& value) { m_nearestModelNameHasBeenSet = true; m_nearestModelName = std::move(value); }

    /**
     * <p>The name of a pre-trained machine learning model benchmarked by Amazon
     * SageMaker Inference Recommender that matches your model.</p> <p>Valid Values:
     * <code>efficientnetb7 | unet | xgboost | faster-rcnn-resnet101 | nasnetlarge |
     * vgg16 | inception-v3 | mask-rcnn | sagemaker-scikit-learn | densenet201-gluon |
     * resnet18v2-gluon | xception | densenet201 | yolov4 | resnet152 | bert-base-cased
     * | xceptionV1-keras | resnet50 | retinanet</code> </p>
     */
    inline void SetNearestModelName(const char* value) { m_nearestModelNameHasBeenSet = true; m_nearestModelName.assign(value); }

    /**
     * <p>The name of a pre-trained machine learning model benchmarked by Amazon
     * SageMaker Inference Recommender that matches your model.</p> <p>Valid Values:
     * <code>efficientnetb7 | unet | xgboost | faster-rcnn-resnet101 | nasnetlarge |
     * vgg16 | inception-v3 | mask-rcnn | sagemaker-scikit-learn | densenet201-gluon |
     * resnet18v2-gluon | xception | densenet201 | yolov4 | resnet152 | bert-base-cased
     * | xceptionV1-keras | resnet50 | retinanet</code> </p>
     */
    inline RecommendationJobContainerConfig& WithNearestModelName(const Aws::String& value) { SetNearestModelName(value); return *this;}

    /**
     * <p>The name of a pre-trained machine learning model benchmarked by Amazon
     * SageMaker Inference Recommender that matches your model.</p> <p>Valid Values:
     * <code>efficientnetb7 | unet | xgboost | faster-rcnn-resnet101 | nasnetlarge |
     * vgg16 | inception-v3 | mask-rcnn | sagemaker-scikit-learn | densenet201-gluon |
     * resnet18v2-gluon | xception | densenet201 | yolov4 | resnet152 | bert-base-cased
     * | xceptionV1-keras | resnet50 | retinanet</code> </p>
     */
    inline RecommendationJobContainerConfig& WithNearestModelName(Aws::String&& value) { SetNearestModelName(std::move(value)); return *this;}

    /**
     * <p>The name of a pre-trained machine learning model benchmarked by Amazon
     * SageMaker Inference Recommender that matches your model.</p> <p>Valid Values:
     * <code>efficientnetb7 | unet | xgboost | faster-rcnn-resnet101 | nasnetlarge |
     * vgg16 | inception-v3 | mask-rcnn | sagemaker-scikit-learn | densenet201-gluon |
     * resnet18v2-gluon | xception | densenet201 | yolov4 | resnet152 | bert-base-cased
     * | xceptionV1-keras | resnet50 | retinanet</code> </p>
     */
    inline RecommendationJobContainerConfig& WithNearestModelName(const char* value) { SetNearestModelName(value); return *this;}


    /**
     * <p>A list of the instance types that are used to generate inferences in
     * real-time.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedInstanceTypes() const{ return m_supportedInstanceTypes; }

    /**
     * <p>A list of the instance types that are used to generate inferences in
     * real-time.</p>
     */
    inline bool SupportedInstanceTypesHasBeenSet() const { return m_supportedInstanceTypesHasBeenSet; }

    /**
     * <p>A list of the instance types that are used to generate inferences in
     * real-time.</p>
     */
    inline void SetSupportedInstanceTypes(const Aws::Vector<Aws::String>& value) { m_supportedInstanceTypesHasBeenSet = true; m_supportedInstanceTypes = value; }

    /**
     * <p>A list of the instance types that are used to generate inferences in
     * real-time.</p>
     */
    inline void SetSupportedInstanceTypes(Aws::Vector<Aws::String>&& value) { m_supportedInstanceTypesHasBeenSet = true; m_supportedInstanceTypes = std::move(value); }

    /**
     * <p>A list of the instance types that are used to generate inferences in
     * real-time.</p>
     */
    inline RecommendationJobContainerConfig& WithSupportedInstanceTypes(const Aws::Vector<Aws::String>& value) { SetSupportedInstanceTypes(value); return *this;}

    /**
     * <p>A list of the instance types that are used to generate inferences in
     * real-time.</p>
     */
    inline RecommendationJobContainerConfig& WithSupportedInstanceTypes(Aws::Vector<Aws::String>&& value) { SetSupportedInstanceTypes(std::move(value)); return *this;}

    /**
     * <p>A list of the instance types that are used to generate inferences in
     * real-time.</p>
     */
    inline RecommendationJobContainerConfig& AddSupportedInstanceTypes(const Aws::String& value) { m_supportedInstanceTypesHasBeenSet = true; m_supportedInstanceTypes.push_back(value); return *this; }

    /**
     * <p>A list of the instance types that are used to generate inferences in
     * real-time.</p>
     */
    inline RecommendationJobContainerConfig& AddSupportedInstanceTypes(Aws::String&& value) { m_supportedInstanceTypesHasBeenSet = true; m_supportedInstanceTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the instance types that are used to generate inferences in
     * real-time.</p>
     */
    inline RecommendationJobContainerConfig& AddSupportedInstanceTypes(const char* value) { m_supportedInstanceTypesHasBeenSet = true; m_supportedInstanceTypes.push_back(value); return *this; }

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
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
