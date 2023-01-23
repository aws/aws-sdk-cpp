/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/HyperbandStrategyConfig.h>
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
   * <p>The configuration for a training job launched by a hyperparameter tuning job.
   * Choose <code>Bayesian</code> for Bayesian optimization, and <code>Random</code>
   * for random search optimization. For more advanced use cases, use
   * <code>Hyperband</code>, which evaluates objective metrics for training jobs
   * after every epoch. For more information about strategies, see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-how-it-works.html">How
   * Hyperparameter Tuning Works</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HyperParameterTuningJobStrategyConfig">AWS
   * API Reference</a></p>
   */
  class HyperParameterTuningJobStrategyConfig
  {
  public:
    AWS_SAGEMAKER_API HyperParameterTuningJobStrategyConfig();
    AWS_SAGEMAKER_API HyperParameterTuningJobStrategyConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API HyperParameterTuningJobStrategyConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The configuration for the object that specifies the <code>Hyperband</code>
     * strategy. This parameter is only supported for the <code>Hyperband</code>
     * selection for <code>Strategy</code> within the
     * <code>HyperParameterTuningJobConfig</code> API.</p>
     */
    inline const HyperbandStrategyConfig& GetHyperbandStrategyConfig() const{ return m_hyperbandStrategyConfig; }

    /**
     * <p>The configuration for the object that specifies the <code>Hyperband</code>
     * strategy. This parameter is only supported for the <code>Hyperband</code>
     * selection for <code>Strategy</code> within the
     * <code>HyperParameterTuningJobConfig</code> API.</p>
     */
    inline bool HyperbandStrategyConfigHasBeenSet() const { return m_hyperbandStrategyConfigHasBeenSet; }

    /**
     * <p>The configuration for the object that specifies the <code>Hyperband</code>
     * strategy. This parameter is only supported for the <code>Hyperband</code>
     * selection for <code>Strategy</code> within the
     * <code>HyperParameterTuningJobConfig</code> API.</p>
     */
    inline void SetHyperbandStrategyConfig(const HyperbandStrategyConfig& value) { m_hyperbandStrategyConfigHasBeenSet = true; m_hyperbandStrategyConfig = value; }

    /**
     * <p>The configuration for the object that specifies the <code>Hyperband</code>
     * strategy. This parameter is only supported for the <code>Hyperband</code>
     * selection for <code>Strategy</code> within the
     * <code>HyperParameterTuningJobConfig</code> API.</p>
     */
    inline void SetHyperbandStrategyConfig(HyperbandStrategyConfig&& value) { m_hyperbandStrategyConfigHasBeenSet = true; m_hyperbandStrategyConfig = std::move(value); }

    /**
     * <p>The configuration for the object that specifies the <code>Hyperband</code>
     * strategy. This parameter is only supported for the <code>Hyperband</code>
     * selection for <code>Strategy</code> within the
     * <code>HyperParameterTuningJobConfig</code> API.</p>
     */
    inline HyperParameterTuningJobStrategyConfig& WithHyperbandStrategyConfig(const HyperbandStrategyConfig& value) { SetHyperbandStrategyConfig(value); return *this;}

    /**
     * <p>The configuration for the object that specifies the <code>Hyperband</code>
     * strategy. This parameter is only supported for the <code>Hyperband</code>
     * selection for <code>Strategy</code> within the
     * <code>HyperParameterTuningJobConfig</code> API.</p>
     */
    inline HyperParameterTuningJobStrategyConfig& WithHyperbandStrategyConfig(HyperbandStrategyConfig&& value) { SetHyperbandStrategyConfig(std::move(value)); return *this;}

  private:

    HyperbandStrategyConfig m_hyperbandStrategyConfig;
    bool m_hyperbandStrategyConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
