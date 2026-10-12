/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntime_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMakerTrainingSessionRuntime {
namespace Model {

/**
 * <p>The Adam optimizer hyperparameters used during an optimizer
 * step.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemakertrainingsessionruntime-2025-02-10/AdamParamsConfig">AWS
 * API Reference</a></p>
 */
class AdamParamsConfig {
 public:
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API AdamParamsConfig() = default;
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API AdamParamsConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API AdamParamsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The learning rate for the optimizer. Must be greater than 0.</p>
   */
  inline double GetLearningRate() const { return m_learningRate; }
  inline bool LearningRateHasBeenSet() const { return m_learningRateHasBeenSet; }
  inline void SetLearningRate(double value) {
    m_learningRateHasBeenSet = true;
    m_learningRate = value;
  }
  inline AdamParamsConfig& WithLearningRate(double value) {
    SetLearningRate(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The exponential decay rate for the first moment estimates.</p>
   */
  inline double GetBeta1() const { return m_beta1; }
  inline bool Beta1HasBeenSet() const { return m_beta1HasBeenSet; }
  inline void SetBeta1(double value) {
    m_beta1HasBeenSet = true;
    m_beta1 = value;
  }
  inline AdamParamsConfig& WithBeta1(double value) {
    SetBeta1(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The exponential decay rate for the second moment estimates.</p>
   */
  inline double GetBeta2() const { return m_beta2; }
  inline bool Beta2HasBeenSet() const { return m_beta2HasBeenSet; }
  inline void SetBeta2(double value) {
    m_beta2HasBeenSet = true;
    m_beta2 = value;
  }
  inline AdamParamsConfig& WithBeta2(double value) {
    SetBeta2(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A small constant added to the denominator for numerical stability.</p>
   */
  inline double GetEps() const { return m_eps; }
  inline bool EpsHasBeenSet() const { return m_epsHasBeenSet; }
  inline void SetEps(double value) {
    m_epsHasBeenSet = true;
    m_eps = value;
  }
  inline AdamParamsConfig& WithEps(double value) {
    SetEps(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The weight decay (L2 regularization) coefficient.</p>
   */
  inline double GetWeightDecay() const { return m_weightDecay; }
  inline bool WeightDecayHasBeenSet() const { return m_weightDecayHasBeenSet; }
  inline void SetWeightDecay(double value) {
    m_weightDecayHasBeenSet = true;
    m_weightDecay = value;
  }
  inline AdamParamsConfig& WithWeightDecay(double value) {
    SetWeightDecay(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum gradient norm for gradient clipping. Gradients are scaled down if
   * their norm exceeds this value.</p>
   */
  inline double GetGradClipNorm() const { return m_gradClipNorm; }
  inline bool GradClipNormHasBeenSet() const { return m_gradClipNormHasBeenSet; }
  inline void SetGradClipNorm(double value) {
    m_gradClipNormHasBeenSet = true;
    m_gradClipNorm = value;
  }
  inline AdamParamsConfig& WithGradClipNorm(double value) {
    SetGradClipNorm(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The learning rate multiplier for LoRA+ B matrices relative to A matrices.
   * When set, B matrices use <code>learningRate * loraPlusLrRatio</code> while A
   * matrices use the base learning rate.</p>
   */
  inline double GetLoraPlusLrRatio() const { return m_loraPlusLrRatio; }
  inline bool LoraPlusLrRatioHasBeenSet() const { return m_loraPlusLrRatioHasBeenSet; }
  inline void SetLoraPlusLrRatio(double value) {
    m_loraPlusLrRatioHasBeenSet = true;
    m_loraPlusLrRatio = value;
  }
  inline AdamParamsConfig& WithLoraPlusLrRatio(double value) {
    SetLoraPlusLrRatio(value);
    return *this;
  }
  ///@}
 private:
  double m_learningRate{0.0};

  double m_beta1{0.0};

  double m_beta2{0.0};

  double m_eps{0.0};

  double m_weightDecay{0.0};

  double m_gradClipNorm{0.0};

  double m_loraPlusLrRatio{0.0};
  bool m_learningRateHasBeenSet = false;
  bool m_beta1HasBeenSet = false;
  bool m_beta2HasBeenSet = false;
  bool m_epsHasBeenSet = false;
  bool m_weightDecayHasBeenSet = false;
  bool m_gradClipNormHasBeenSet = false;
  bool m_loraPlusLrRatioHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
