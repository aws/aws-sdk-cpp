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
    AWS_SAGEMAKER_API AutoMLContainerDefinition() = default;
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
    inline const Aws::String& GetImage() const { return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    template<typename ImageT = Aws::String>
    void SetImage(ImageT&& value) { m_imageHasBeenSet = true; m_image = std::forward<ImageT>(value); }
    template<typename ImageT = Aws::String>
    AutoMLContainerDefinition& WithImage(ImageT&& value) { SetImage(std::forward<ImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the model artifacts. For more information, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ContainerDefinition.html">
     * ContainerDefinition</a>.</p>
     */
    inline const Aws::String& GetModelDataUrl() const { return m_modelDataUrl; }
    inline bool ModelDataUrlHasBeenSet() const { return m_modelDataUrlHasBeenSet; }
    template<typename ModelDataUrlT = Aws::String>
    void SetModelDataUrl(ModelDataUrlT&& value) { m_modelDataUrlHasBeenSet = true; m_modelDataUrl = std::forward<ModelDataUrlT>(value); }
    template<typename ModelDataUrlT = Aws::String>
    AutoMLContainerDefinition& WithModelDataUrl(ModelDataUrlT&& value) { SetModelDataUrl(std::forward<ModelDataUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment variables to set in the container. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ContainerDefinition.html">
     * ContainerDefinition</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const { return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    template<typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
    void SetEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment = std::forward<EnvironmentT>(value); }
    template<typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
    AutoMLContainerDefinition& WithEnvironment(EnvironmentT&& value) { SetEnvironment(std::forward<EnvironmentT>(value)); return *this;}
    template<typename EnvironmentKeyT = Aws::String, typename EnvironmentValueT = Aws::String>
    AutoMLContainerDefinition& AddEnvironment(EnvironmentKeyT&& key, EnvironmentValueT&& value) {
      m_environmentHasBeenSet = true; m_environment.emplace(std::forward<EnvironmentKeyT>(key), std::forward<EnvironmentValueT>(value)); return *this;
    }
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
