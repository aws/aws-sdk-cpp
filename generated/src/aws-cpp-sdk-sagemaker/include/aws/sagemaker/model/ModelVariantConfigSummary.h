/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ModelInfrastructureConfig.h>
#include <aws/sagemaker/model/ModelVariantStatus.h>
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
   * <p>Summary of the deployment configuration of a model.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelVariantConfigSummary">AWS
   * API Reference</a></p>
   */
  class ModelVariantConfigSummary
  {
  public:
    AWS_SAGEMAKER_API ModelVariantConfigSummary() = default;
    AWS_SAGEMAKER_API ModelVariantConfigSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelVariantConfigSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    ModelVariantConfigSummary& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
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
    ModelVariantConfigSummary& WithVariantName(VariantNameT&& value) { SetVariantName(std::forward<VariantNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the infrastructure that the model has been deployed
     * to.</p>
     */
    inline const ModelInfrastructureConfig& GetInfrastructureConfig() const { return m_infrastructureConfig; }
    inline bool InfrastructureConfigHasBeenSet() const { return m_infrastructureConfigHasBeenSet; }
    template<typename InfrastructureConfigT = ModelInfrastructureConfig>
    void SetInfrastructureConfig(InfrastructureConfigT&& value) { m_infrastructureConfigHasBeenSet = true; m_infrastructureConfig = std::forward<InfrastructureConfigT>(value); }
    template<typename InfrastructureConfigT = ModelInfrastructureConfig>
    ModelVariantConfigSummary& WithInfrastructureConfig(InfrastructureConfigT&& value) { SetInfrastructureConfig(std::forward<InfrastructureConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of deployment for the model variant on the hosted inference
     * endpoint.</p> <ul> <li> <p> <code>Creating</code> - Amazon SageMaker is
     * preparing the model variant on the hosted inference endpoint. </p> </li> <li>
     * <p> <code>InService</code> - The model variant is running on the hosted
     * inference endpoint. </p> </li> <li> <p> <code>Updating</code> - Amazon SageMaker
     * is updating the model variant on the hosted inference endpoint. </p> </li> <li>
     * <p> <code>Deleting</code> - Amazon SageMaker is deleting the model variant on
     * the hosted inference endpoint. </p> </li> <li> <p> <code>Deleted</code> - The
     * model variant has been deleted on the hosted inference endpoint. This can only
     * happen after stopping the experiment. </p> </li> </ul>
     */
    inline ModelVariantStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ModelVariantStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ModelVariantConfigSummary& WithStatus(ModelVariantStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    Aws::String m_variantName;
    bool m_variantNameHasBeenSet = false;

    ModelInfrastructureConfig m_infrastructureConfig;
    bool m_infrastructureConfigHasBeenSet = false;

    ModelVariantStatus m_status{ModelVariantStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
