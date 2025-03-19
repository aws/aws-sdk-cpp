/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ModelQuality.h>
#include <aws/sagemaker/model/ModelDataQuality.h>
#include <aws/sagemaker/model/Bias.h>
#include <aws/sagemaker/model/Explainability.h>
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
   * <p>Contains metrics captured from a model.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelMetrics">AWS
   * API Reference</a></p>
   */
  class ModelMetrics
  {
  public:
    AWS_SAGEMAKER_API ModelMetrics() = default;
    AWS_SAGEMAKER_API ModelMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Metrics that measure the quality of a model.</p>
     */
    inline const ModelQuality& GetModelQuality() const { return m_modelQuality; }
    inline bool ModelQualityHasBeenSet() const { return m_modelQualityHasBeenSet; }
    template<typename ModelQualityT = ModelQuality>
    void SetModelQuality(ModelQualityT&& value) { m_modelQualityHasBeenSet = true; m_modelQuality = std::forward<ModelQualityT>(value); }
    template<typename ModelQualityT = ModelQuality>
    ModelMetrics& WithModelQuality(ModelQualityT&& value) { SetModelQuality(std::forward<ModelQualityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metrics that measure the quality of the input data for a model.</p>
     */
    inline const ModelDataQuality& GetModelDataQuality() const { return m_modelDataQuality; }
    inline bool ModelDataQualityHasBeenSet() const { return m_modelDataQualityHasBeenSet; }
    template<typename ModelDataQualityT = ModelDataQuality>
    void SetModelDataQuality(ModelDataQualityT&& value) { m_modelDataQualityHasBeenSet = true; m_modelDataQuality = std::forward<ModelDataQualityT>(value); }
    template<typename ModelDataQualityT = ModelDataQuality>
    ModelMetrics& WithModelDataQuality(ModelDataQualityT&& value) { SetModelDataQuality(std::forward<ModelDataQualityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metrics that measure bias in a model.</p>
     */
    inline const Bias& GetBias() const { return m_bias; }
    inline bool BiasHasBeenSet() const { return m_biasHasBeenSet; }
    template<typename BiasT = Bias>
    void SetBias(BiasT&& value) { m_biasHasBeenSet = true; m_bias = std::forward<BiasT>(value); }
    template<typename BiasT = Bias>
    ModelMetrics& WithBias(BiasT&& value) { SetBias(std::forward<BiasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metrics that help explain a model.</p>
     */
    inline const Explainability& GetExplainability() const { return m_explainability; }
    inline bool ExplainabilityHasBeenSet() const { return m_explainabilityHasBeenSet; }
    template<typename ExplainabilityT = Explainability>
    void SetExplainability(ExplainabilityT&& value) { m_explainabilityHasBeenSet = true; m_explainability = std::forward<ExplainabilityT>(value); }
    template<typename ExplainabilityT = Explainability>
    ModelMetrics& WithExplainability(ExplainabilityT&& value) { SetExplainability(std::forward<ExplainabilityT>(value)); return *this;}
    ///@}
  private:

    ModelQuality m_modelQuality;
    bool m_modelQualityHasBeenSet = false;

    ModelDataQuality m_modelDataQuality;
    bool m_modelDataQualityHasBeenSet = false;

    Bias m_bias;
    bool m_biasHasBeenSet = false;

    Explainability m_explainability;
    bool m_explainabilityHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
