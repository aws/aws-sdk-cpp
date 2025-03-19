/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ModelQuantizationConfig.h>
#include <aws/sagemaker/model/ModelCompilationConfig.h>
#include <aws/sagemaker/model/ModelShardingConfig.h>
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
   * <p>Settings for an optimization technique that you apply with a model
   * optimization job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/OptimizationConfig">AWS
   * API Reference</a></p>
   */
  class OptimizationConfig
  {
  public:
    AWS_SAGEMAKER_API OptimizationConfig() = default;
    AWS_SAGEMAKER_API OptimizationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API OptimizationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Settings for the model quantization technique that's applied by a model
     * optimization job.</p>
     */
    inline const ModelQuantizationConfig& GetModelQuantizationConfig() const { return m_modelQuantizationConfig; }
    inline bool ModelQuantizationConfigHasBeenSet() const { return m_modelQuantizationConfigHasBeenSet; }
    template<typename ModelQuantizationConfigT = ModelQuantizationConfig>
    void SetModelQuantizationConfig(ModelQuantizationConfigT&& value) { m_modelQuantizationConfigHasBeenSet = true; m_modelQuantizationConfig = std::forward<ModelQuantizationConfigT>(value); }
    template<typename ModelQuantizationConfigT = ModelQuantizationConfig>
    OptimizationConfig& WithModelQuantizationConfig(ModelQuantizationConfigT&& value) { SetModelQuantizationConfig(std::forward<ModelQuantizationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for the model compilation technique that's applied by a model
     * optimization job.</p>
     */
    inline const ModelCompilationConfig& GetModelCompilationConfig() const { return m_modelCompilationConfig; }
    inline bool ModelCompilationConfigHasBeenSet() const { return m_modelCompilationConfigHasBeenSet; }
    template<typename ModelCompilationConfigT = ModelCompilationConfig>
    void SetModelCompilationConfig(ModelCompilationConfigT&& value) { m_modelCompilationConfigHasBeenSet = true; m_modelCompilationConfig = std::forward<ModelCompilationConfigT>(value); }
    template<typename ModelCompilationConfigT = ModelCompilationConfig>
    OptimizationConfig& WithModelCompilationConfig(ModelCompilationConfigT&& value) { SetModelCompilationConfig(std::forward<ModelCompilationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for the model sharding technique that's applied by a model
     * optimization job.</p>
     */
    inline const ModelShardingConfig& GetModelShardingConfig() const { return m_modelShardingConfig; }
    inline bool ModelShardingConfigHasBeenSet() const { return m_modelShardingConfigHasBeenSet; }
    template<typename ModelShardingConfigT = ModelShardingConfig>
    void SetModelShardingConfig(ModelShardingConfigT&& value) { m_modelShardingConfigHasBeenSet = true; m_modelShardingConfig = std::forward<ModelShardingConfigT>(value); }
    template<typename ModelShardingConfigT = ModelShardingConfig>
    OptimizationConfig& WithModelShardingConfig(ModelShardingConfigT&& value) { SetModelShardingConfig(std::forward<ModelShardingConfigT>(value)); return *this;}
    ///@}
  private:

    ModelQuantizationConfig m_modelQuantizationConfig;
    bool m_modelQuantizationConfigHasBeenSet = false;

    ModelCompilationConfig m_modelCompilationConfig;
    bool m_modelCompilationConfigHasBeenSet = false;

    ModelShardingConfig m_modelShardingConfig;
    bool m_modelShardingConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
