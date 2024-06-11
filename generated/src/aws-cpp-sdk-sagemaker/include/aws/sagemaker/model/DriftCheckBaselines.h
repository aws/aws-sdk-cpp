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
    AWS_SAGEMAKER_API DriftCheckBaselines();
    AWS_SAGEMAKER_API DriftCheckBaselines(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API DriftCheckBaselines& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents the drift check bias baselines that can be used when the model
     * monitor is set using the model package. </p>
     */
    inline const DriftCheckBias& GetBias() const{ return m_bias; }
    inline bool BiasHasBeenSet() const { return m_biasHasBeenSet; }
    inline void SetBias(const DriftCheckBias& value) { m_biasHasBeenSet = true; m_bias = value; }
    inline void SetBias(DriftCheckBias&& value) { m_biasHasBeenSet = true; m_bias = std::move(value); }
    inline DriftCheckBaselines& WithBias(const DriftCheckBias& value) { SetBias(value); return *this;}
    inline DriftCheckBaselines& WithBias(DriftCheckBias&& value) { SetBias(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the drift check explainability baselines that can be used when the
     * model monitor is set using the model package. </p>
     */
    inline const DriftCheckExplainability& GetExplainability() const{ return m_explainability; }
    inline bool ExplainabilityHasBeenSet() const { return m_explainabilityHasBeenSet; }
    inline void SetExplainability(const DriftCheckExplainability& value) { m_explainabilityHasBeenSet = true; m_explainability = value; }
    inline void SetExplainability(DriftCheckExplainability&& value) { m_explainabilityHasBeenSet = true; m_explainability = std::move(value); }
    inline DriftCheckBaselines& WithExplainability(const DriftCheckExplainability& value) { SetExplainability(value); return *this;}
    inline DriftCheckBaselines& WithExplainability(DriftCheckExplainability&& value) { SetExplainability(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the drift check model quality baselines that can be used when the
     * model monitor is set using the model package.</p>
     */
    inline const DriftCheckModelQuality& GetModelQuality() const{ return m_modelQuality; }
    inline bool ModelQualityHasBeenSet() const { return m_modelQualityHasBeenSet; }
    inline void SetModelQuality(const DriftCheckModelQuality& value) { m_modelQualityHasBeenSet = true; m_modelQuality = value; }
    inline void SetModelQuality(DriftCheckModelQuality&& value) { m_modelQualityHasBeenSet = true; m_modelQuality = std::move(value); }
    inline DriftCheckBaselines& WithModelQuality(const DriftCheckModelQuality& value) { SetModelQuality(value); return *this;}
    inline DriftCheckBaselines& WithModelQuality(DriftCheckModelQuality&& value) { SetModelQuality(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the drift check model data quality baselines that can be used when
     * the model monitor is set using the model package.</p>
     */
    inline const DriftCheckModelDataQuality& GetModelDataQuality() const{ return m_modelDataQuality; }
    inline bool ModelDataQualityHasBeenSet() const { return m_modelDataQualityHasBeenSet; }
    inline void SetModelDataQuality(const DriftCheckModelDataQuality& value) { m_modelDataQualityHasBeenSet = true; m_modelDataQuality = value; }
    inline void SetModelDataQuality(DriftCheckModelDataQuality&& value) { m_modelDataQualityHasBeenSet = true; m_modelDataQuality = std::move(value); }
    inline DriftCheckBaselines& WithModelDataQuality(const DriftCheckModelDataQuality& value) { SetModelDataQuality(value); return *this;}
    inline DriftCheckBaselines& WithModelDataQuality(DriftCheckModelDataQuality&& value) { SetModelDataQuality(std::move(value)); return *this;}
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
