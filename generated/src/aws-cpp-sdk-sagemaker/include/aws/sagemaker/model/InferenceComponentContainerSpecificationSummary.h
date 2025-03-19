/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/DeployedImage.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Details about the resources that are deployed with this inference
   * component.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InferenceComponentContainerSpecificationSummary">AWS
   * API Reference</a></p>
   */
  class InferenceComponentContainerSpecificationSummary
  {
  public:
    AWS_SAGEMAKER_API InferenceComponentContainerSpecificationSummary() = default;
    AWS_SAGEMAKER_API InferenceComponentContainerSpecificationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API InferenceComponentContainerSpecificationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const DeployedImage& GetDeployedImage() const { return m_deployedImage; }
    inline bool DeployedImageHasBeenSet() const { return m_deployedImageHasBeenSet; }
    template<typename DeployedImageT = DeployedImage>
    void SetDeployedImage(DeployedImageT&& value) { m_deployedImageHasBeenSet = true; m_deployedImage = std::forward<DeployedImageT>(value); }
    template<typename DeployedImageT = DeployedImage>
    InferenceComponentContainerSpecificationSummary& WithDeployedImage(DeployedImageT&& value) { SetDeployedImage(std::forward<DeployedImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 path where the model artifacts are stored.</p>
     */
    inline const Aws::String& GetArtifactUrl() const { return m_artifactUrl; }
    inline bool ArtifactUrlHasBeenSet() const { return m_artifactUrlHasBeenSet; }
    template<typename ArtifactUrlT = Aws::String>
    void SetArtifactUrl(ArtifactUrlT&& value) { m_artifactUrlHasBeenSet = true; m_artifactUrl = std::forward<ArtifactUrlT>(value); }
    template<typename ArtifactUrlT = Aws::String>
    InferenceComponentContainerSpecificationSummary& WithArtifactUrl(ArtifactUrlT&& value) { SetArtifactUrl(std::forward<ArtifactUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment variables to set in the Docker container.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const { return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    template<typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
    void SetEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment = std::forward<EnvironmentT>(value); }
    template<typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
    InferenceComponentContainerSpecificationSummary& WithEnvironment(EnvironmentT&& value) { SetEnvironment(std::forward<EnvironmentT>(value)); return *this;}
    template<typename EnvironmentKeyT = Aws::String, typename EnvironmentValueT = Aws::String>
    InferenceComponentContainerSpecificationSummary& AddEnvironment(EnvironmentKeyT&& key, EnvironmentValueT&& value) {
      m_environmentHasBeenSet = true; m_environment.emplace(std::forward<EnvironmentKeyT>(key), std::forward<EnvironmentValueT>(value)); return *this;
    }
    ///@}
  private:

    DeployedImage m_deployedImage;
    bool m_deployedImageHasBeenSet = false;

    Aws::String m_artifactUrl;
    bool m_artifactUrlHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environment;
    bool m_environmentHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
