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
    AWS_SAGEMAKER_API InferenceComponentContainerSpecificationSummary();
    AWS_SAGEMAKER_API InferenceComponentContainerSpecificationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API InferenceComponentContainerSpecificationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const DeployedImage& GetDeployedImage() const{ return m_deployedImage; }

    
    inline bool DeployedImageHasBeenSet() const { return m_deployedImageHasBeenSet; }

    
    inline void SetDeployedImage(const DeployedImage& value) { m_deployedImageHasBeenSet = true; m_deployedImage = value; }

    
    inline void SetDeployedImage(DeployedImage&& value) { m_deployedImageHasBeenSet = true; m_deployedImage = std::move(value); }

    
    inline InferenceComponentContainerSpecificationSummary& WithDeployedImage(const DeployedImage& value) { SetDeployedImage(value); return *this;}

    
    inline InferenceComponentContainerSpecificationSummary& WithDeployedImage(DeployedImage&& value) { SetDeployedImage(std::move(value)); return *this;}


    /**
     * <p>The Amazon S3 path where the model artifacts are stored.</p>
     */
    inline const Aws::String& GetArtifactUrl() const{ return m_artifactUrl; }

    /**
     * <p>The Amazon S3 path where the model artifacts are stored.</p>
     */
    inline bool ArtifactUrlHasBeenSet() const { return m_artifactUrlHasBeenSet; }

    /**
     * <p>The Amazon S3 path where the model artifacts are stored.</p>
     */
    inline void SetArtifactUrl(const Aws::String& value) { m_artifactUrlHasBeenSet = true; m_artifactUrl = value; }

    /**
     * <p>The Amazon S3 path where the model artifacts are stored.</p>
     */
    inline void SetArtifactUrl(Aws::String&& value) { m_artifactUrlHasBeenSet = true; m_artifactUrl = std::move(value); }

    /**
     * <p>The Amazon S3 path where the model artifacts are stored.</p>
     */
    inline void SetArtifactUrl(const char* value) { m_artifactUrlHasBeenSet = true; m_artifactUrl.assign(value); }

    /**
     * <p>The Amazon S3 path where the model artifacts are stored.</p>
     */
    inline InferenceComponentContainerSpecificationSummary& WithArtifactUrl(const Aws::String& value) { SetArtifactUrl(value); return *this;}

    /**
     * <p>The Amazon S3 path where the model artifacts are stored.</p>
     */
    inline InferenceComponentContainerSpecificationSummary& WithArtifactUrl(Aws::String&& value) { SetArtifactUrl(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 path where the model artifacts are stored.</p>
     */
    inline InferenceComponentContainerSpecificationSummary& WithArtifactUrl(const char* value) { SetArtifactUrl(value); return *this;}


    /**
     * <p>The environment variables to set in the Docker container.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const{ return m_environment; }

    /**
     * <p>The environment variables to set in the Docker container.</p>
     */
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }

    /**
     * <p>The environment variables to set in the Docker container.</p>
     */
    inline void SetEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>The environment variables to set in the Docker container.</p>
     */
    inline void SetEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }

    /**
     * <p>The environment variables to set in the Docker container.</p>
     */
    inline InferenceComponentContainerSpecificationSummary& WithEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The environment variables to set in the Docker container.</p>
     */
    inline InferenceComponentContainerSpecificationSummary& WithEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironment(std::move(value)); return *this;}

    /**
     * <p>The environment variables to set in the Docker container.</p>
     */
    inline InferenceComponentContainerSpecificationSummary& AddEnvironment(const Aws::String& key, const Aws::String& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, value); return *this; }

    /**
     * <p>The environment variables to set in the Docker container.</p>
     */
    inline InferenceComponentContainerSpecificationSummary& AddEnvironment(Aws::String&& key, const Aws::String& value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), value); return *this; }

    /**
     * <p>The environment variables to set in the Docker container.</p>
     */
    inline InferenceComponentContainerSpecificationSummary& AddEnvironment(const Aws::String& key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The environment variables to set in the Docker container.</p>
     */
    inline InferenceComponentContainerSpecificationSummary& AddEnvironment(Aws::String&& key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The environment variables to set in the Docker container.</p>
     */
    inline InferenceComponentContainerSpecificationSummary& AddEnvironment(const char* key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The environment variables to set in the Docker container.</p>
     */
    inline InferenceComponentContainerSpecificationSummary& AddEnvironment(Aws::String&& key, const char* value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), value); return *this; }

    /**
     * <p>The environment variables to set in the Docker container.</p>
     */
    inline InferenceComponentContainerSpecificationSummary& AddEnvironment(const char* key, const char* value) { m_environmentHasBeenSet = true; m_environment.emplace(key, value); return *this; }

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
