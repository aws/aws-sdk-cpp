/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ModelQuantizationConfig.h>
#include <aws/sagemaker/model/ModelCompilationConfig.h>
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
    AWS_SAGEMAKER_API OptimizationConfig();
    AWS_SAGEMAKER_API OptimizationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API OptimizationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Settings for the model quantization technique that's applied by a model
     * optimization job.</p>
     */
    inline const ModelQuantizationConfig& GetModelQuantizationConfig() const{ return m_modelQuantizationConfig; }
    inline bool ModelQuantizationConfigHasBeenSet() const { return m_modelQuantizationConfigHasBeenSet; }
    inline void SetModelQuantizationConfig(const ModelQuantizationConfig& value) { m_modelQuantizationConfigHasBeenSet = true; m_modelQuantizationConfig = value; }
    inline void SetModelQuantizationConfig(ModelQuantizationConfig&& value) { m_modelQuantizationConfigHasBeenSet = true; m_modelQuantizationConfig = std::move(value); }
    inline OptimizationConfig& WithModelQuantizationConfig(const ModelQuantizationConfig& value) { SetModelQuantizationConfig(value); return *this;}
    inline OptimizationConfig& WithModelQuantizationConfig(ModelQuantizationConfig&& value) { SetModelQuantizationConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for the model compilation technique that's applied by a model
     * optimization job.</p>
     */
    inline const ModelCompilationConfig& GetModelCompilationConfig() const{ return m_modelCompilationConfig; }
    inline bool ModelCompilationConfigHasBeenSet() const { return m_modelCompilationConfigHasBeenSet; }
    inline void SetModelCompilationConfig(const ModelCompilationConfig& value) { m_modelCompilationConfigHasBeenSet = true; m_modelCompilationConfig = value; }
    inline void SetModelCompilationConfig(ModelCompilationConfig&& value) { m_modelCompilationConfigHasBeenSet = true; m_modelCompilationConfig = std::move(value); }
    inline OptimizationConfig& WithModelCompilationConfig(const ModelCompilationConfig& value) { SetModelCompilationConfig(value); return *this;}
    inline OptimizationConfig& WithModelCompilationConfig(ModelCompilationConfig&& value) { SetModelCompilationConfig(std::move(value)); return *this;}
    ///@}
  private:

    ModelQuantizationConfig m_modelQuantizationConfig;
    bool m_modelQuantizationConfigHasBeenSet = false;

    ModelCompilationConfig m_modelCompilationConfig;
    bool m_modelCompilationConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
