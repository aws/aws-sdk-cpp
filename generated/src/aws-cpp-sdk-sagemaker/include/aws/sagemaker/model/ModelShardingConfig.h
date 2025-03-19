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
   * <p>Settings for the model sharding technique that's applied by a model
   * optimization job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelShardingConfig">AWS
   * API Reference</a></p>
   */
  class ModelShardingConfig
  {
  public:
    AWS_SAGEMAKER_API ModelShardingConfig() = default;
    AWS_SAGEMAKER_API ModelShardingConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelShardingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URI of an LMI DLC in Amazon ECR. SageMaker uses this image to run the
     * optimization.</p>
     */
    inline const Aws::String& GetImage() const { return m_image; }
    inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
    template<typename ImageT = Aws::String>
    void SetImage(ImageT&& value) { m_imageHasBeenSet = true; m_image = std::forward<ImageT>(value); }
    template<typename ImageT = Aws::String>
    ModelShardingConfig& WithImage(ImageT&& value) { SetImage(std::forward<ImageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Environment variables that override the default ones in the model
     * container.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetOverrideEnvironment() const { return m_overrideEnvironment; }
    inline bool OverrideEnvironmentHasBeenSet() const { return m_overrideEnvironmentHasBeenSet; }
    template<typename OverrideEnvironmentT = Aws::Map<Aws::String, Aws::String>>
    void SetOverrideEnvironment(OverrideEnvironmentT&& value) { m_overrideEnvironmentHasBeenSet = true; m_overrideEnvironment = std::forward<OverrideEnvironmentT>(value); }
    template<typename OverrideEnvironmentT = Aws::Map<Aws::String, Aws::String>>
    ModelShardingConfig& WithOverrideEnvironment(OverrideEnvironmentT&& value) { SetOverrideEnvironment(std::forward<OverrideEnvironmentT>(value)); return *this;}
    template<typename OverrideEnvironmentKeyT = Aws::String, typename OverrideEnvironmentValueT = Aws::String>
    ModelShardingConfig& AddOverrideEnvironment(OverrideEnvironmentKeyT&& key, OverrideEnvironmentValueT&& value) {
      m_overrideEnvironmentHasBeenSet = true; m_overrideEnvironment.emplace(std::forward<OverrideEnvironmentKeyT>(key), std::forward<OverrideEnvironmentValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_image;
    bool m_imageHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_overrideEnvironment;
    bool m_overrideEnvironmentHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
