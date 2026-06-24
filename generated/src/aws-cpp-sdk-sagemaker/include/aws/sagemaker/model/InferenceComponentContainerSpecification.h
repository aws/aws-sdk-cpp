/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ContainerMetricsConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p>Defines a container that provides the runtime environment for a model that
 * you deploy with an inference component.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InferenceComponentContainerSpecification">AWS
 * API Reference</a></p>
 */
class InferenceComponentContainerSpecification {
 public:
  AWS_SAGEMAKER_API InferenceComponentContainerSpecification() = default;
  AWS_SAGEMAKER_API InferenceComponentContainerSpecification(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API InferenceComponentContainerSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Elastic Container Registry (Amazon ECR) path where the Docker
   * image for the model is stored.</p>
   */
  inline const Aws::String& GetImage() const { return m_image; }
  inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
  template <typename ImageT = Aws::String>
  void SetImage(ImageT&& value) {
    m_imageHasBeenSet = true;
    m_image = std::forward<ImageT>(value);
  }
  template <typename ImageT = Aws::String>
  InferenceComponentContainerSpecification& WithImage(ImageT&& value) {
    SetImage(std::forward<ImageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 path where the model artifacts, which result from model
   * training, are stored. This path must point to a single gzip compressed tar
   * archive (.tar.gz suffix).</p>
   */
  inline const Aws::String& GetArtifactUrl() const { return m_artifactUrl; }
  inline bool ArtifactUrlHasBeenSet() const { return m_artifactUrlHasBeenSet; }
  template <typename ArtifactUrlT = Aws::String>
  void SetArtifactUrl(ArtifactUrlT&& value) {
    m_artifactUrlHasBeenSet = true;
    m_artifactUrl = std::forward<ArtifactUrlT>(value);
  }
  template <typename ArtifactUrlT = Aws::String>
  InferenceComponentContainerSpecification& WithArtifactUrl(ArtifactUrlT&& value) {
    SetArtifactUrl(std::forward<ArtifactUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The environment variables to set in the Docker container. Each key and value
   * in the Environment string-to-string map can have length of up to 1024. We
   * support up to 16 entries in the map.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const { return m_environment; }
  inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
  template <typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
  void SetEnvironment(EnvironmentT&& value) {
    m_environmentHasBeenSet = true;
    m_environment = std::forward<EnvironmentT>(value);
  }
  template <typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
  InferenceComponentContainerSpecification& WithEnvironment(EnvironmentT&& value) {
    SetEnvironment(std::forward<EnvironmentT>(value));
    return *this;
  }
  template <typename EnvironmentKeyT = Aws::String, typename EnvironmentValueT = Aws::String>
  InferenceComponentContainerSpecification& AddEnvironment(EnvironmentKeyT&& key, EnvironmentValueT&& value) {
    m_environmentHasBeenSet = true;
    m_environment.emplace(std::forward<EnvironmentKeyT>(key), std::forward<EnvironmentValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for container metrics scraping. Specifies the metrics
   * endpoint path and publishing frequency for the inference component's container.
   * If not specified when <code>EnableDetailedObservability</code> is
   * <code>True</code>, the default path <code>/metrics</code> on port
   * <code>8080</code> is used. For first-party and Deep Learning Containers (DLC),
   * the endpoint path is determined automatically and this configuration is
   * optional.</p>
   */
  inline const ContainerMetricsConfig& GetContainerMetricsConfig() const { return m_containerMetricsConfig; }
  inline bool ContainerMetricsConfigHasBeenSet() const { return m_containerMetricsConfigHasBeenSet; }
  template <typename ContainerMetricsConfigT = ContainerMetricsConfig>
  void SetContainerMetricsConfig(ContainerMetricsConfigT&& value) {
    m_containerMetricsConfigHasBeenSet = true;
    m_containerMetricsConfig = std::forward<ContainerMetricsConfigT>(value);
  }
  template <typename ContainerMetricsConfigT = ContainerMetricsConfig>
  InferenceComponentContainerSpecification& WithContainerMetricsConfig(ContainerMetricsConfigT&& value) {
    SetContainerMetricsConfig(std::forward<ContainerMetricsConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_image;

  Aws::String m_artifactUrl;

  Aws::Map<Aws::String, Aws::String> m_environment;

  ContainerMetricsConfig m_containerMetricsConfig;
  bool m_imageHasBeenSet = false;
  bool m_artifactUrlHasBeenSet = false;
  bool m_environmentHasBeenSet = false;
  bool m_containerMetricsConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
