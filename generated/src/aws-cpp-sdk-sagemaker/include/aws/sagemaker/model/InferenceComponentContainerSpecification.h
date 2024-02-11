/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
   * <p>Defines a container that provides the runtime environment for a model that
   * you deploy with an inference component.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InferenceComponentContainerSpecification">AWS
   * API Reference</a></p>
   */
  class InferenceComponentContainerSpecification
  {
  public:
    AWS_SAGEMAKER_API InferenceComponentContainerSpecification();
    AWS_SAGEMAKER_API InferenceComponentContainerSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API InferenceComponentContainerSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Elastic Container Registry (Amazon ECR) path where the Docker
     * image for the model is stored.</p>
     */
    inline const Aws::String& GetImage() const{ return m_image; }

    /**
     * <p>The Amazon Elastic Container Registry (Amazon ECR) path where the Docker
     * image for the model is stored.</p>
     */
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }

    /**
     * <p>The Amazon Elastic Container Registry (Amazon ECR) path where the Docker
     * image for the model is stored.</p>
     */
    inline void SetImage(const Aws::String& value) { m_imageHasBeenSet = true; m_image = value; }

    /**
     * <p>The Amazon Elastic Container Registry (Amazon ECR) path where the Docker
     * image for the model is stored.</p>
     */
    inline void SetImage(Aws::String&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }

    /**
     * <p>The Amazon Elastic Container Registry (Amazon ECR) path where the Docker
     * image for the model is stored.</p>
     */
    inline void SetImage(const char* value) { m_imageHasBeenSet = true; m_image.assign(value); }

    /**
     * <p>The Amazon Elastic Container Registry (Amazon ECR) path where the Docker
     * image for the model is stored.</p>
     */
    inline InferenceComponentContainerSpecification& WithImage(const Aws::String& value) { SetImage(value); return *this;}

    /**
     * <p>The Amazon Elastic Container Registry (Amazon ECR) path where the Docker
     * image for the model is stored.</p>
     */
    inline InferenceComponentContainerSpecification& WithImage(Aws::String&& value) { SetImage(std::move(value)); return *this;}

    /**
     * <p>The Amazon Elastic Container Registry (Amazon ECR) path where the Docker
     * image for the model is stored.</p>
     */
    inline InferenceComponentContainerSpecification& WithImage(const char* value) { SetImage(value); return *this;}


    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single gzip compressed tar
     * archive (.tar.gz suffix).</p>
     */
    inline const Aws::String& GetArtifactUrl() const{ return m_artifactUrl; }

    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single gzip compressed tar
     * archive (.tar.gz suffix).</p>
     */
    inline bool ArtifactUrlHasBeenSet() const { return m_artifactUrlHasBeenSet; }

    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single gzip compressed tar
     * archive (.tar.gz suffix).</p>
     */
    inline void SetArtifactUrl(const Aws::String& value) { m_artifactUrlHasBeenSet = true; m_artifactUrl = value; }

    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single gzip compressed tar
     * archive (.tar.gz suffix).</p>
     */
    inline void SetArtifactUrl(Aws::String&& value) { m_artifactUrlHasBeenSet = true; m_artifactUrl = std::move(value); }

    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single gzip compressed tar
     * archive (.tar.gz suffix).</p>
     */
    inline void SetArtifactUrl(const char* value) { m_artifactUrlHasBeenSet = true; m_artifactUrl.assign(value); }

    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single gzip compressed tar
     * archive (.tar.gz suffix).</p>
     */
    inline InferenceComponentContainerSpecification& WithArtifactUrl(const Aws::String& value) { SetArtifactUrl(value); return *this;}

    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single gzip compressed tar
     * archive (.tar.gz suffix).</p>
     */
    inline InferenceComponentContainerSpecification& WithArtifactUrl(Aws::String&& value) { SetArtifactUrl(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single gzip compressed tar
     * archive (.tar.gz suffix).</p>
     */
    inline InferenceComponentContainerSpecification& WithArtifactUrl(const char* value) { SetArtifactUrl(value); return *this;}


    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the Environment string-to-string map can have length of up to 1024. We
     * support up to 16 entries in the map.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const{ return m_environment; }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the Environment string-to-string map can have length of up to 1024. We
     * support up to 16 entries in the map.</p>
     */
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the Environment string-to-string map can have length of up to 1024. We
     * support up to 16 entries in the map.</p>
     */
    inline void SetEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the Environment string-to-string map can have length of up to 1024. We
     * support up to 16 entries in the map.</p>
     */
    inline void SetEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the Environment string-to-string map can have length of up to 1024. We
     * support up to 16 entries in the map.</p>
     */
    inline InferenceComponentContainerSpecification& WithEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the Environment string-to-string map can have length of up to 1024. We
     * support up to 16 entries in the map.</p>
     */
    inline InferenceComponentContainerSpecification& WithEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironment(std::move(value)); return *this;}

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the Environment string-to-string map can have length of up to 1024. We
     * support up to 16 entries in the map.</p>
     */
    inline InferenceComponentContainerSpecification& AddEnvironment(const Aws::String& key, const Aws::String& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, value); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the Environment string-to-string map can have length of up to 1024. We
     * support up to 16 entries in the map.</p>
     */
    inline InferenceComponentContainerSpecification& AddEnvironment(Aws::String&& key, const Aws::String& value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), value); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the Environment string-to-string map can have length of up to 1024. We
     * support up to 16 entries in the map.</p>
     */
    inline InferenceComponentContainerSpecification& AddEnvironment(const Aws::String& key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the Environment string-to-string map can have length of up to 1024. We
     * support up to 16 entries in the map.</p>
     */
    inline InferenceComponentContainerSpecification& AddEnvironment(Aws::String&& key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the Environment string-to-string map can have length of up to 1024. We
     * support up to 16 entries in the map.</p>
     */
    inline InferenceComponentContainerSpecification& AddEnvironment(const char* key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the Environment string-to-string map can have length of up to 1024. We
     * support up to 16 entries in the map.</p>
     */
    inline InferenceComponentContainerSpecification& AddEnvironment(Aws::String&& key, const char* value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), value); return *this; }

    /**
     * <p>The environment variables to set in the Docker container. Each key and value
     * in the Environment string-to-string map can have length of up to 1024. We
     * support up to 16 entries in the map.</p>
     */
    inline InferenceComponentContainerSpecification& AddEnvironment(const char* key, const char* value) { m_environmentHasBeenSet = true; m_environment.emplace(key, value); return *this; }

  private:

    Aws::String m_image;
    bool m_imageHasBeenSet = false;

    Aws::String m_artifactUrl;
    bool m_artifactUrlHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environment;
    bool m_environmentHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
