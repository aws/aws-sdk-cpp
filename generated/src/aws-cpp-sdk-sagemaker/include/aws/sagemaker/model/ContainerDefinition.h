/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ImageConfig.h>
#include <aws/sagemaker/model/ContainerMode.h>
#include <aws/sagemaker/model/ModelDataSource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker/model/MultiModelConfig.h>
#include <aws/sagemaker/model/AdditionalModelDataSource.h>
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
   * <p>Describes the container, as part of model definition.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ContainerDefinition">AWS
   * API Reference</a></p>
   */
  class ContainerDefinition
  {
  public:
    AWS_SAGEMAKER_API ContainerDefinition() = default;
    AWS_SAGEMAKER_API ContainerDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ContainerDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This parameter is ignored for models that contain only a
     * <code>PrimaryContainer</code>.</p> <p>When a <code>ContainerDefinition</code> is
     * part of an inference pipeline, the value of the parameter uniquely identifies
     * the container for the purposes of logging and metrics. For information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/inference-pipeline-logs-metrics.html">Use
     * Logs and Metrics to Monitor an Inference Pipeline</a>. If you don't specify a
     * value for this parameter for a <code>ContainerDefinition</code> that is part of
     * an inference pipeline, a unique name is automatically assigned based on the
     * position of the <code>ContainerDefinition</code> in the pipeline. If you specify
     * a value for the <code>ContainerHostName</code> for any
     * <code>ContainerDefinition</code> that is part of an inference pipeline, you must
     * specify a value for the <code>ContainerHostName</code> parameter of every
     * <code>ContainerDefinition</code> in that pipeline.</p>
     */
    inline const Aws::String& GetContainerHostname() const { return m_containerHostname; }
    inline bool ContainerHostnameHasBeenSet() const { return m_containerHostnameHasBeenSet; }
    template<typename ContainerHostnameT = Aws::String>
    void SetContainerHostname(ContainerHostnameT&& value) { m_containerHostnameHasBeenSet = true; m_containerHostname = std::forward<ContainerHostnameT>(value); }
    template<typename ContainerHostnameT = Aws::String>
    ContainerDefinition& WithContainerHostname(ContainerHostnameT&& value) { SetContainerHostname(std::forward<ContainerHostnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path where inference code is stored. This can be either in Amazon EC2
     * Container Registry or in a Docker registry that is accessible from the same VPC
     * that you configure for your endpoint. If you are using your own custom algorithm
     * instead of an algorithm provided by SageMaker, the inference code must meet
     * SageMaker requirements. SageMaker supports both
     * <code>registry/repository[:tag]</code> and
     * <code>registry/repository[@digest]</code> image path formats. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a>. </p>  <p>The model
     * artifacts in an Amazon S3 bucket and the Docker image for inference container in
     * Amazon EC2 Container Registry must be in the same region as the model or
     * endpoint you are creating.</p> 
     */
    inline const Aws::String& GetImage() const { return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    template<typename ImageT = Aws::String>
    void SetImage(ImageT&& value) { m_imageHasBeenSet = true; m_image = std::forward<ImageT>(value); }
    template<typename ImageT = Aws::String>
    ContainerDefinition& WithImage(ImageT&& value) { SetImage(std::forward<ImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the model container is in Amazon ECR or a private Docker
     * registry accessible from your Amazon Virtual Private Cloud (VPC). For
     * information about storing containers in a private Docker registry, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms-containers-inference-private.html">Use
     * a Private Docker Registry for Real-Time Inference Containers</a>. </p> 
     * <p>The model artifacts in an Amazon S3 bucket and the Docker image for inference
     * container in Amazon EC2 Container Registry must be in the same region as the
     * model or endpoint you are creating.</p> 
     */
    inline const ImageConfig& GetImageConfig() const { return m_imageConfig; }
    inline bool ImageConfigHasBeenSet() const { return m_imageConfigHasBeenSet; }
    template<typename ImageConfigT = ImageConfig>
    void SetImageConfig(ImageConfigT&& value) { m_imageConfigHasBeenSet = true; m_imageConfig = std::forward<ImageConfigT>(value); }
    template<typename ImageConfigT = ImageConfig>
    ContainerDefinition& WithImageConfig(ImageConfigT&& value) { SetImageConfig(std::forward<ImageConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the container hosts a single model or multiple models.</p>
     */
    inline ContainerMode GetMode() const { return m_mode; }
    inline bool ModeHasBeenSet() const { return m_modeHasBeenSet; }
    inline void SetMode(ContainerMode value) { m_modeHasBeenSet = true; m_mode = value; }
    inline ContainerDefinition& WithMode(ContainerMode value) { SetMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 path where the model artifacts, which result from model training, are
     * stored. This path must point to a single gzip compressed tar archive (.tar.gz
     * suffix). The S3 path is required for SageMaker built-in algorithms, but not if
     * you use your own algorithms. For more information on built-in algorithms, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-algo-docker-registry-paths.html">Common
     * Parameters</a>. </p>  <p>The model artifacts must be in an S3 bucket that
     * is in the same region as the model or endpoint you are creating.</p> 
     * <p>If you provide a value for this parameter, SageMaker uses Amazon Web Services
     * Security Token Service to download model artifacts from the S3 path you provide.
     * Amazon Web Services STS is activated in your Amazon Web Services account by
     * default. If you previously deactivated Amazon Web Services STS for a region, you
     * need to reactivate Amazon Web Services STS for that region. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp_enable-regions.html">Activating
     * and Deactivating Amazon Web Services STS in an Amazon Web Services Region</a> in
     * the <i>Amazon Web Services Identity and Access Management User Guide</i>.</p>
     *  <p>If you use a built-in algorithm to create a model, SageMaker
     * requires that you provide a S3 path to the model artifacts in
     * <code>ModelDataUrl</code>.</p> 
     */
    inline const Aws::String& GetModelDataUrl() const { return m_modelDataUrl; }
    inline bool ModelDataUrlHasBeenSet() const { return m_modelDataUrlHasBeenSet; }
    template<typename ModelDataUrlT = Aws::String>
    void SetModelDataUrl(ModelDataUrlT&& value) { m_modelDataUrlHasBeenSet = true; m_modelDataUrl = std::forward<ModelDataUrlT>(value); }
    template<typename ModelDataUrlT = Aws::String>
    ContainerDefinition& WithModelDataUrl(ModelDataUrlT&& value) { SetModelDataUrl(std::forward<ModelDataUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the location of ML model data to deploy.</p>  <p>Currently
     * you cannot use <code>ModelDataSource</code> in conjunction with SageMaker batch
     * transform, SageMaker serverless endpoints, SageMaker multi-model endpoints, and
     * SageMaker Marketplace.</p> 
     */
    inline const ModelDataSource& GetModelDataSource() const { return m_modelDataSource; }
    inline bool ModelDataSourceHasBeenSet() const { return m_modelDataSourceHasBeenSet; }
    template<typename ModelDataSourceT = ModelDataSource>
    void SetModelDataSource(ModelDataSourceT&& value) { m_modelDataSourceHasBeenSet = true; m_modelDataSource = std::forward<ModelDataSourceT>(value); }
    template<typename ModelDataSourceT = ModelDataSource>
    ContainerDefinition& WithModelDataSource(ModelDataSourceT&& value) { SetModelDataSource(std::forward<ModelDataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data sources that are available to your model in addition to the one that you
     * specify for <code>ModelDataSource</code> when you use the
     * <code>CreateModel</code> action.</p>
     */
    inline const Aws::Vector<AdditionalModelDataSource>& GetAdditionalModelDataSources() const { return m_additionalModelDataSources; }
    inline bool AdditionalModelDataSourcesHasBeenSet() const { return m_additionalModelDataSourcesHasBeenSet; }
    template<typename AdditionalModelDataSourcesT = Aws::Vector<AdditionalModelDataSource>>
    void SetAdditionalModelDataSources(AdditionalModelDataSourcesT&& value) { m_additionalModelDataSourcesHasBeenSet = true; m_additionalModelDataSources = std::forward<AdditionalModelDataSourcesT>(value); }
    template<typename AdditionalModelDataSourcesT = Aws::Vector<AdditionalModelDataSource>>
    ContainerDefinition& WithAdditionalModelDataSources(AdditionalModelDataSourcesT&& value) { SetAdditionalModelDataSources(std::forward<AdditionalModelDataSourcesT>(value)); return *this;}
    template<typename AdditionalModelDataSourcesT = AdditionalModelDataSource>
    ContainerDefinition& AddAdditionalModelDataSources(AdditionalModelDataSourcesT&& value) { m_additionalModelDataSourcesHasBeenSet = true; m_additionalModelDataSources.emplace_back(std::forward<AdditionalModelDataSourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The environment variables to set in the Docker container. Don't include any
     * sensitive data in your environment variables.</p> <p>The maximum length of each
     * key and value in the <code>Environment</code> map is 1024 bytes. The maximum
     * length of all keys and values in the map, combined, is 32 KB. If you pass
     * multiple containers to a <code>CreateModel</code> request, then the maximum
     * length of all of their maps, combined, is also 32 KB.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const { return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    template<typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
    void SetEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment = std::forward<EnvironmentT>(value); }
    template<typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
    ContainerDefinition& WithEnvironment(EnvironmentT&& value) { SetEnvironment(std::forward<EnvironmentT>(value)); return *this;}
    template<typename EnvironmentKeyT = Aws::String, typename EnvironmentValueT = Aws::String>
    ContainerDefinition& AddEnvironment(EnvironmentKeyT&& key, EnvironmentValueT&& value) {
      m_environmentHasBeenSet = true; m_environment.emplace(std::forward<EnvironmentKeyT>(key), std::forward<EnvironmentValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the model package to use to create
     * the model.</p>
     */
    inline const Aws::String& GetModelPackageName() const { return m_modelPackageName; }
    inline bool ModelPackageNameHasBeenSet() const { return m_modelPackageNameHasBeenSet; }
    template<typename ModelPackageNameT = Aws::String>
    void SetModelPackageName(ModelPackageNameT&& value) { m_modelPackageNameHasBeenSet = true; m_modelPackageName = std::forward<ModelPackageNameT>(value); }
    template<typename ModelPackageNameT = Aws::String>
    ContainerDefinition& WithModelPackageName(ModelPackageNameT&& value) { SetModelPackageName(std::forward<ModelPackageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inference specification name in the model package version.</p>
     */
    inline const Aws::String& GetInferenceSpecificationName() const { return m_inferenceSpecificationName; }
    inline bool InferenceSpecificationNameHasBeenSet() const { return m_inferenceSpecificationNameHasBeenSet; }
    template<typename InferenceSpecificationNameT = Aws::String>
    void SetInferenceSpecificationName(InferenceSpecificationNameT&& value) { m_inferenceSpecificationNameHasBeenSet = true; m_inferenceSpecificationName = std::forward<InferenceSpecificationNameT>(value); }
    template<typename InferenceSpecificationNameT = Aws::String>
    ContainerDefinition& WithInferenceSpecificationName(InferenceSpecificationNameT&& value) { SetInferenceSpecificationName(std::forward<InferenceSpecificationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies additional configuration for multi-model endpoints.</p>
     */
    inline const MultiModelConfig& GetMultiModelConfig() const { return m_multiModelConfig; }
    inline bool MultiModelConfigHasBeenSet() const { return m_multiModelConfigHasBeenSet; }
    template<typename MultiModelConfigT = MultiModelConfig>
    void SetMultiModelConfig(MultiModelConfigT&& value) { m_multiModelConfigHasBeenSet = true; m_multiModelConfig = std::forward<MultiModelConfigT>(value); }
    template<typename MultiModelConfigT = MultiModelConfig>
    ContainerDefinition& WithMultiModelConfig(MultiModelConfigT&& value) { SetMultiModelConfig(std::forward<MultiModelConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_containerHostname;
    bool m_containerHostnameHasBeenSet = false;

    Aws::String m_image;
    bool m_imageHasBeenSet = false;

    ImageConfig m_imageConfig;
    bool m_imageConfigHasBeenSet = false;

    ContainerMode m_mode{ContainerMode::NOT_SET};
    bool m_modeHasBeenSet = false;

    Aws::String m_modelDataUrl;
    bool m_modelDataUrlHasBeenSet = false;

    ModelDataSource m_modelDataSource;
    bool m_modelDataSourceHasBeenSet = false;

    Aws::Vector<AdditionalModelDataSource> m_additionalModelDataSources;
    bool m_additionalModelDataSourcesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environment;
    bool m_environmentHasBeenSet = false;

    Aws::String m_modelPackageName;
    bool m_modelPackageNameHasBeenSet = false;

    Aws::String m_inferenceSpecificationName;
    bool m_inferenceSpecificationNameHasBeenSet = false;

    MultiModelConfig m_multiModelConfig;
    bool m_multiModelConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
