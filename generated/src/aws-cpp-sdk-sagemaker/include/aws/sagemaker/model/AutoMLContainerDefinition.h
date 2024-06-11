﻿/**
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
   * <p>A list of container definitions that describe the different containers that
   * make up an AutoML candidate. For more information, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ContainerDefinition.html">
   * ContainerDefinition</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AutoMLContainerDefinition">AWS
   * API Reference</a></p>
   */
  class AutoMLContainerDefinition
  {
  public:
    AWS_SAGEMAKER_API AutoMLContainerDefinition();
    AWS_SAGEMAKER_API AutoMLContainerDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AutoMLContainerDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Elastic Container Registry (Amazon ECR) path of the container. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ContainerDefinition.html">
     * ContainerDefinition</a>.</p>
     */
    inline const Aws::String& GetImage() const{ return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    inline void SetImage(const Aws::String& value) { m_imageHasBeenSet = true; m_image = value; }
    inline void SetImage(Aws::String&& value) { m_imageHasBeenSet = true; m_image = std::move(value); }
    inline void SetImage(const char* value) { m_imageHasBeenSet = true; m_image.assign(value); }
    inline AutoMLContainerDefinition& WithImage(const Aws::String& value) { SetImage(value); return *this;}
    inline AutoMLContainerDefinition& WithImage(Aws::String&& value) { SetImage(std::move(value)); return *this;}
    inline AutoMLContainerDefinition& WithImage(const char* value) { SetImage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the model artifacts. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ContainerDefinition.html">
     * ContainerDefinition</a>.</p>
     */
    inline const Aws::String& GetModelDataUrl() const{ return m_modelDataUrl; }
    inline bool ModelDataUrlHasBeenSet() const { return m_modelDataUrlHasBeenSet; }
    inline void SetModelDataUrl(const Aws::String& value) { m_modelDataUrlHasBeenSet = true; m_modelDataUrl = value; }
    inline void SetModelDataUrl(Aws::String&& value) { m_modelDataUrlHasBeenSet = true; m_modelDataUrl = std::move(value); }
    inline void SetModelDataUrl(const char* value) { m_modelDataUrlHasBeenSet = true; m_modelDataUrl.assign(value); }
    inline AutoMLContainerDefinition& WithModelDataUrl(const Aws::String& value) { SetModelDataUrl(value); return *this;}
    inline AutoMLContainerDefinition& WithModelDataUrl(Aws::String&& value) { SetModelDataUrl(std::move(value)); return *this;}
    inline AutoMLContainerDefinition& WithModelDataUrl(const char* value) { SetModelDataUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment variables to set in the container. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ContainerDefinition.html">
     * ContainerDefinition</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const{ return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    inline void SetEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentHasBeenSet = true; m_environment = value; }
    inline void SetEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }
    inline AutoMLContainerDefinition& WithEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironment(value); return *this;}
    inline AutoMLContainerDefinition& WithEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironment(std::move(value)); return *this;}
    inline AutoMLContainerDefinition& AddEnvironment(const Aws::String& key, const Aws::String& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, value); return *this; }
    inline AutoMLContainerDefinition& AddEnvironment(Aws::String&& key, const Aws::String& value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), value); return *this; }
    inline AutoMLContainerDefinition& AddEnvironment(const Aws::String& key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, std::move(value)); return *this; }
    inline AutoMLContainerDefinition& AddEnvironment(Aws::String&& key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), std::move(value)); return *this; }
    inline AutoMLContainerDefinition& AddEnvironment(const char* key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, std::move(value)); return *this; }
    inline AutoMLContainerDefinition& AddEnvironment(Aws::String&& key, const char* value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), value); return *this; }
    inline AutoMLContainerDefinition& AddEnvironment(const char* key, const char* value) { m_environmentHasBeenSet = true; m_environment.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_image;
    bool m_imageHasBeenSet = false;

    Aws::String m_modelDataUrl;
    bool m_modelDataUrlHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environment;
    bool m_environmentHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
