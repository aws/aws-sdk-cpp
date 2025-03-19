/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ModelDataSource.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker/model/ModelInput.h>
#include <aws/sagemaker/model/AdditionalS3DataSource.h>
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
   * <p>Describes the Docker container for the model package.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelPackageContainerDefinition">AWS
   * API Reference</a></p>
   */
  class ModelPackageContainerDefinition
  {
  public:
    AWS_SAGEMAKER_API ModelPackageContainerDefinition() = default;
    AWS_SAGEMAKER_API ModelPackageContainerDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelPackageContainerDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The DNS host name for the Docker container.</p>
     */
    inline const Aws::String& GetContainerHostname() const { return m_containerHostname; }
    inline bool ContainerHostnameHasBeenSet() const { return m_containerHostnameHasBeenSet; }
    template<typename ContainerHostnameT = Aws::String>
    void SetContainerHostname(ContainerHostnameT&& value) { m_containerHostnameHasBeenSet = true; m_containerHostname = std::forward<ContainerHostnameT>(value); }
    template<typename ContainerHostnameT = Aws::String>
    ModelPackageContainerDefinition& WithContainerHostname(ContainerHostnameT&& value) { SetContainerHostname(std::forward<ContainerHostnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Elastic Container Registry (Amazon ECR) path where inference code
     * is stored.</p> <p>If you are using your own custom algorithm instead of an
     * algorithm provided by SageMaker, the inference code must meet SageMaker
     * requirements. SageMaker supports both <code>registry/repository[:tag]</code> and
     * <code>registry/repository[@digest]</code> image path formats. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/your-algorithms.html">Using
     * Your Own Algorithms with Amazon SageMaker</a>.</p>
     */
    inline const Aws::String& GetImage() const { return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    template<typename ImageT = Aws::String>
    void SetImage(ImageT&& value) { m_imageHasBeenSet = true; m_image = std::forward<ImageT>(value); }
    template<typename ImageT = Aws::String>
    ModelPackageContainerDefinition& WithImage(ImageT&& value) { SetImage(std::forward<ImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An MD5 hash of the training algorithm that identifies the Docker image used
     * for training.</p>
     */
    inline const Aws::String& GetImageDigest() const { return m_imageDigest; }
    inline bool ImageDigestHasBeenSet() const { return m_imageDigestHasBeenSet; }
    template<typename ImageDigestT = Aws::String>
    void SetImageDigest(ImageDigestT&& value) { m_imageDigestHasBeenSet = true; m_imageDigest = std::forward<ImageDigestT>(value); }
    template<typename ImageDigestT = Aws::String>
    ModelPackageContainerDefinition& WithImageDigest(ImageDigestT&& value) { SetImageDigest(std::forward<ImageDigestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single <code>gzip</code>
     * compressed tar archive (<code>.tar.gz</code> suffix).</p>  <p>The model
     * artifacts must be in an S3 bucket that is in the same region as the model
     * package.</p> 
     */
    inline const Aws::String& GetModelDataUrl() const { return m_modelDataUrl; }
    inline bool ModelDataUrlHasBeenSet() const { return m_modelDataUrlHasBeenSet; }
    template<typename ModelDataUrlT = Aws::String>
    void SetModelDataUrl(ModelDataUrlT&& value) { m_modelDataUrlHasBeenSet = true; m_modelDataUrl = std::forward<ModelDataUrlT>(value); }
    template<typename ModelDataUrlT = Aws::String>
    ModelPackageContainerDefinition& WithModelDataUrl(ModelDataUrlT&& value) { SetModelDataUrl(std::forward<ModelDataUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the location of ML model data to deploy during endpoint
     * creation.</p>
     */
    inline const ModelDataSource& GetModelDataSource() const { return m_modelDataSource; }
    inline bool ModelDataSourceHasBeenSet() const { return m_modelDataSourceHasBeenSet; }
    template<typename ModelDataSourceT = ModelDataSource>
    void SetModelDataSource(ModelDataSourceT&& value) { m_modelDataSourceHasBeenSet = true; m_modelDataSource = std::forward<ModelDataSourceT>(value); }
    template<typename ModelDataSourceT = ModelDataSource>
    ModelPackageContainerDefinition& WithModelDataSource(ModelDataSourceT&& value) { SetModelDataSource(std::forward<ModelDataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Marketplace product ID of the model package.</p>
     */
    inline const Aws::String& GetProductId() const { return m_productId; }
    inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
    template<typename ProductIdT = Aws::String>
    void SetProductId(ProductIdT&& value) { m_productIdHasBeenSet = true; m_productId = std::forward<ProductIdT>(value); }
    template<typename ProductIdT = Aws::String>
    ModelPackageContainerDefinition& WithProductId(ProductIdT&& value) { SetProductId(std::forward<ProductIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the <code>Environment</code> string to string map can have length of up to
     * 1024. We support up to 16 entries in the map.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const { return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    template<typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
    void SetEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment = std::forward<EnvironmentT>(value); }
    template<typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
    ModelPackageContainerDefinition& WithEnvironment(EnvironmentT&& value) { SetEnvironment(std::forward<EnvironmentT>(value)); return *this;}
    template<typename EnvironmentKeyT = Aws::String, typename EnvironmentValueT = Aws::String>
    ModelPackageContainerDefinition& AddEnvironment(EnvironmentKeyT&& key, EnvironmentValueT&& value) {
      m_environmentHasBeenSet = true; m_environment.emplace(std::forward<EnvironmentKeyT>(key), std::forward<EnvironmentValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A structure with Model Input details.</p>
     */
    inline const ModelInput& GetModelInput() const { return m_modelInput; }
    inline bool ModelInputHasBeenSet() const { return m_modelInputHasBeenSet; }
    template<typename ModelInputT = ModelInput>
    void SetModelInput(ModelInputT&& value) { m_modelInputHasBeenSet = true; m_modelInput = std::forward<ModelInputT>(value); }
    template<typename ModelInputT = ModelInput>
    ModelPackageContainerDefinition& WithModelInput(ModelInputT&& value) { SetModelInput(std::forward<ModelInputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The machine learning framework of the model package container image.</p>
     */
    inline const Aws::String& GetFramework() const { return m_framework; }
    inline bool FrameworkHasBeenSet() const { return m_frameworkHasBeenSet; }
    template<typename FrameworkT = Aws::String>
    void SetFramework(FrameworkT&& value) { m_frameworkHasBeenSet = true; m_framework = std::forward<FrameworkT>(value); }
    template<typename FrameworkT = Aws::String>
    ModelPackageContainerDefinition& WithFramework(FrameworkT&& value) { SetFramework(std::forward<FrameworkT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The framework version of the Model Package Container Image.</p>
     */
    inline const Aws::String& GetFrameworkVersion() const { return m_frameworkVersion; }
    inline bool FrameworkVersionHasBeenSet() const { return m_frameworkVersionHasBeenSet; }
    template<typename FrameworkVersionT = Aws::String>
    void SetFrameworkVersion(FrameworkVersionT&& value) { m_frameworkVersionHasBeenSet = true; m_frameworkVersion = std::forward<FrameworkVersionT>(value); }
    template<typename FrameworkVersionT = Aws::String>
    ModelPackageContainerDefinition& WithFrameworkVersion(FrameworkVersionT&& value) { SetFrameworkVersion(std::forward<FrameworkVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a pre-trained machine learning benchmarked by Amazon SageMaker
     * Inference Recommender model that matches your model. You can find a list of
     * benchmarked models by calling <code>ListModelMetadata</code>.</p>
     */
    inline const Aws::String& GetNearestModelName() const { return m_nearestModelName; }
    inline bool NearestModelNameHasBeenSet() const { return m_nearestModelNameHasBeenSet; }
    template<typename NearestModelNameT = Aws::String>
    void SetNearestModelName(NearestModelNameT&& value) { m_nearestModelNameHasBeenSet = true; m_nearestModelName = std::forward<NearestModelNameT>(value); }
    template<typename NearestModelNameT = Aws::String>
    ModelPackageContainerDefinition& WithNearestModelName(NearestModelNameT&& value) { SetNearestModelName(std::forward<NearestModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The additional data source that is used during inference in the Docker
     * container for your model package.</p>
     */
    inline const AdditionalS3DataSource& GetAdditionalS3DataSource() const { return m_additionalS3DataSource; }
    inline bool AdditionalS3DataSourceHasBeenSet() const { return m_additionalS3DataSourceHasBeenSet; }
    template<typename AdditionalS3DataSourceT = AdditionalS3DataSource>
    void SetAdditionalS3DataSource(AdditionalS3DataSourceT&& value) { m_additionalS3DataSourceHasBeenSet = true; m_additionalS3DataSource = std::forward<AdditionalS3DataSourceT>(value); }
    template<typename AdditionalS3DataSourceT = AdditionalS3DataSource>
    ModelPackageContainerDefinition& WithAdditionalS3DataSource(AdditionalS3DataSourceT&& value) { SetAdditionalS3DataSource(std::forward<AdditionalS3DataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ETag associated with Model Data URL.</p>
     */
    inline const Aws::String& GetModelDataETag() const { return m_modelDataETag; }
    inline bool ModelDataETagHasBeenSet() const { return m_modelDataETagHasBeenSet; }
    template<typename ModelDataETagT = Aws::String>
    void SetModelDataETag(ModelDataETagT&& value) { m_modelDataETagHasBeenSet = true; m_modelDataETag = std::forward<ModelDataETagT>(value); }
    template<typename ModelDataETagT = Aws::String>
    ModelPackageContainerDefinition& WithModelDataETag(ModelDataETagT&& value) { SetModelDataETag(std::forward<ModelDataETagT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_containerHostname;
    bool m_containerHostnameHasBeenSet = false;

    Aws::String m_image;
    bool m_imageHasBeenSet = false;

    Aws::String m_imageDigest;
    bool m_imageDigestHasBeenSet = false;

    Aws::String m_modelDataUrl;
    bool m_modelDataUrlHasBeenSet = false;

    ModelDataSource m_modelDataSource;
    bool m_modelDataSourceHasBeenSet = false;

    Aws::String m_productId;
    bool m_productIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environment;
    bool m_environmentHasBeenSet = false;

    ModelInput m_modelInput;
    bool m_modelInputHasBeenSet = false;

    Aws::String m_framework;
    bool m_frameworkHasBeenSet = false;

    Aws::String m_frameworkVersion;
    bool m_frameworkVersionHasBeenSet = false;

    Aws::String m_nearestModelName;
    bool m_nearestModelNameHasBeenSet = false;

    AdditionalS3DataSource m_additionalS3DataSource;
    bool m_additionalS3DataSourceHasBeenSet = false;

    Aws::String m_modelDataETag;
    bool m_modelDataETagHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
