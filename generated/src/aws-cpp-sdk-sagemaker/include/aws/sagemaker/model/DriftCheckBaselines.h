/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/DriftCheckBias.h>
#include <aws/sagemaker/model/DriftCheckExplainability.h>
#include <aws/sagemaker/model/DriftCheckModelQuality.h>
#include <aws/sagemaker/model/DriftCheckModelDataQuality.h>
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
   * <p>Represents the drift check baselines that can be used when the model monitor
   * is set using the model package. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/DriftCheckBaselines">AWS
   * API Reference</a></p>
   */
  class DriftCheckBaselines
  {
  public:
    AWS_SAGEMAKER_API DriftCheckBaselines() = default;
    AWS_SAGEMAKER_API DriftCheckBaselines(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DriftCheckBaselines& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents the drift check bias baselines that can be used when the model
     * monitor is set using the model package. </p>
     */
    inline const DriftCheckBias& GetBias() const { return m_bias; }
    inline bool BiasHasBeenSet() const { return m_biasHasBeenSet; }
    template<typename BiasT = DriftCheckBias>
    void SetBias(BiasT&& value) { m_biasHasBeenSet = true; m_bias = std::forward<BiasT>(value); }
    template<typename BiasT = DriftCheckBias>
    DriftCheckBaselines& WithBias(BiasT&& value) { SetBias(std::forward<BiasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the drift check explainability baselines that can be used when the
     * model monitor is set using the model package. </p>
     */
    inline const DriftCheckExplainability& GetExplainability() const { return m_explainability; }
    inline bool ExplainabilityHasBeenSet() const { return m_explainabilityHasBeenSet; }
    template<typename ExplainabilityT = DriftCheckExplainability>
    void SetExplainability(ExplainabilityT&& value) { m_explainabilityHasBeenSet = true; m_explainability = std::forward<ExplainabilityT>(value); }
    template<typename ExplainabilityT = DriftCheckExplainability>
    DriftCheckBaselines& WithExplainability(ExplainabilityT&& value) { SetExplainability(std::forward<ExplainabilityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the drift check model quality baselines that can be used when the
     * model monitor is set using the model package.</p>
     */
    inline const DriftCheckModelQuality& GetModelQuality() const { return m_modelQuality; }
    inline bool ModelQualityHasBeenSet() const { return m_modelQualityHasBeenSet; }
    template<typename ModelQualityT = DriftCheckModelQuality>
    void SetModelQuality(ModelQualityT&& value) { m_modelQualityHasBeenSet = true; m_modelQuality = std::forward<ModelQualityT>(value); }
    template<typename ModelQualityT = DriftCheckModelQuality>
    DriftCheckBaselines& WithModelQuality(ModelQualityT&& value) { SetModelQuality(std::forward<ModelQualityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the drift check model data quality baselines that can be used when
     * the model monitor is set using the model package.</p>
     */
    inline const DriftCheckModelDataQuality& GetModelDataQuality() const { return m_modelDataQuality; }
    inline bool ModelDataQualityHasBeenSet() const { return m_modelDataQualityHasBeenSet; }
    template<typename ModelDataQualityT = DriftCheckModelDataQuality>
    void SetModelDataQuality(ModelDataQualityT&& value) { m_modelDataQualityHasBeenSet = true; m_modelDataQuality = std::forward<ModelDataQualityT>(value); }
    template<typename ModelDataQualityT = DriftCheckModelDataQuality>
    DriftCheckBaselines& WithModelDataQuality(ModelDataQualityT&& value) { SetModelDataQuality(std::forward<ModelDataQualityT>(value)); return *this;}
    ///@}
  private:

    DriftCheckBias m_bias;
    bool m_biasHasBeenSet = false;

    DriftCheckExplainability m_explainability;
    bool m_explainabilityHasBeenSet = false;

    DriftCheckModelQuality m_modelQuality;
    bool m_modelQualityHasBeenSet = false;

    DriftCheckModelDataQuality m_modelDataQuality;
    bool m_modelDataQualityHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
