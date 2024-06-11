﻿/**
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
    AWS_SAGEMAKER_API ModelMetrics();
    AWS_SAGEMAKER_API ModelMetrics(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelMetrics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Metrics that measure the quality of a model.</p>
     */
    inline const ModelQuality& GetModelQuality() const{ return m_modelQuality; }
    inline bool ModelQualityHasBeenSet() const { return m_modelQualityHasBeenSet; }
    inline void SetModelQuality(const ModelQuality& value) { m_modelQualityHasBeenSet = true; m_modelQuality = value; }
    inline void SetModelQuality(ModelQuality&& value) { m_modelQualityHasBeenSet = true; m_modelQuality = std::move(value); }
    inline ModelMetrics& WithModelQuality(const ModelQuality& value) { SetModelQuality(value); return *this;}
    inline ModelMetrics& WithModelQuality(ModelQuality&& value) { SetModelQuality(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metrics that measure the quality of the input data for a model.</p>
     */
    inline const ModelDataQuality& GetModelDataQuality() const{ return m_modelDataQuality; }
    inline bool ModelDataQualityHasBeenSet() const { return m_modelDataQualityHasBeenSet; }
    inline void SetModelDataQuality(const ModelDataQuality& value) { m_modelDataQualityHasBeenSet = true; m_modelDataQuality = value; }
    inline void SetModelDataQuality(ModelDataQuality&& value) { m_modelDataQualityHasBeenSet = true; m_modelDataQuality = std::move(value); }
    inline ModelMetrics& WithModelDataQuality(const ModelDataQuality& value) { SetModelDataQuality(value); return *this;}
    inline ModelMetrics& WithModelDataQuality(ModelDataQuality&& value) { SetModelDataQuality(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metrics that measure bias in a model.</p>
     */
    inline const Bias& GetBias() const{ return m_bias; }
    inline bool BiasHasBeenSet() const { return m_biasHasBeenSet; }
    inline void SetBias(const Bias& value) { m_biasHasBeenSet = true; m_bias = value; }
    inline void SetBias(Bias&& value) { m_biasHasBeenSet = true; m_bias = std::move(value); }
    inline ModelMetrics& WithBias(const Bias& value) { SetBias(value); return *this;}
    inline ModelMetrics& WithBias(Bias&& value) { SetBias(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metrics that help explain a model.</p>
     */
    inline const Explainability& GetExplainability() const{ return m_explainability; }
    inline bool ExplainabilityHasBeenSet() const { return m_explainabilityHasBeenSet; }
    inline void SetExplainability(const Explainability& value) { m_explainabilityHasBeenSet = true; m_explainability = value; }
    inline void SetExplainability(Explainability&& value) { m_explainabilityHasBeenSet = true; m_explainability = std::move(value); }
    inline ModelMetrics& WithExplainability(const Explainability& value) { SetExplainability(value); return *this;}
    inline ModelMetrics& WithExplainability(Explainability&& value) { SetExplainability(std::move(value)); return *this;}
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
