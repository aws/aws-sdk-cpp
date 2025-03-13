/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ModelInfrastructureConfig.h>
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
   * <p>Contains information about the deployment options of a model.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelVariantConfig">AWS
   * API Reference</a></p>
   */
  class ModelVariantConfig
  {
  public:
    AWS_SAGEMAKER_API ModelVariantConfig() = default;
    AWS_SAGEMAKER_API ModelVariantConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelVariantConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the Amazon SageMaker Model entity.</p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    ModelVariantConfig& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the variant.</p>
     */
    inline const Aws::String& GetVariantName() const { return m_variantName; }
    inline bool VariantNameHasBeenSet() const { return m_variantNameHasBeenSet; }
    template<typename VariantNameT = Aws::String>
    void SetVariantName(VariantNameT&& value) { m_variantNameHasBeenSet = true; m_variantName = std::forward<VariantNameT>(value); }
    template<typename VariantNameT = Aws::String>
    ModelVariantConfig& WithVariantName(VariantNameT&& value) { SetVariantName(std::forward<VariantNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the infrastructure that the model will be deployed
     * to.</p>
     */
    inline const ModelInfrastructureConfig& GetInfrastructureConfig() const { return m_infrastructureConfig; }
    inline bool InfrastructureConfigHasBeenSet() const { return m_infrastructureConfigHasBeenSet; }
    template<typename InfrastructureConfigT = ModelInfrastructureConfig>
    void SetInfrastructureConfig(InfrastructureConfigT&& value) { m_infrastructureConfigHasBeenSet = true; m_infrastructureConfig = std::forward<InfrastructureConfigT>(value); }
    template<typename InfrastructureConfigT = ModelInfrastructureConfig>
    ModelVariantConfig& WithInfrastructureConfig(InfrastructureConfigT&& value) { SetInfrastructureConfig(std::forward<InfrastructureConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_variantName;
    bool m_variantNameHasBeenSet = false;

    ModelInfrastructureConfig m_infrastructureConfig;
    bool m_infrastructureConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
