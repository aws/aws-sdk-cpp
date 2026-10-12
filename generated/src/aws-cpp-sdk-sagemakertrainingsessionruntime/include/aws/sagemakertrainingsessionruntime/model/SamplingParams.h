/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntime_EXPORTS.h>

#include <utility>

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
 * <p>The parameters controlling the text generation sampling
 * strategy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemakertrainingsessionruntime-2025-02-10/SamplingParams">AWS
 * API Reference</a></p>
 */
class SamplingParams {
 public:
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API SamplingParams() = default;
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API SamplingParams(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API SamplingParams& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum number of tokens to generate per sample.</p>
   */
  inline int GetMaxTokens() const { return m_maxTokens; }
  inline bool MaxTokensHasBeenSet() const { return m_maxTokensHasBeenSet; }
  inline void SetMaxTokens(int value) {
    m_maxTokensHasBeenSet = true;
    m_maxTokens = value;
  }
  inline SamplingParams& WithMaxTokens(int value) {
    SetMaxTokens(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sampling temperature controlling randomness. Higher values produce more
   * diverse outputs.</p>
   */
  inline double GetTemperature() const { return m_temperature; }
  inline bool TemperatureHasBeenSet() const { return m_temperatureHasBeenSet; }
  inline void SetTemperature(double value) {
    m_temperatureHasBeenSet = true;
    m_temperature = value;
  }
  inline SamplingParams& WithTemperature(double value) {
    SetTemperature(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of highest-probability vocabulary tokens to keep for top-k
   * filtering. Set to -1 to disable.</p>
   */
  inline int GetTopK() const { return m_topK; }
  inline bool TopKHasBeenSet() const { return m_topKHasBeenSet; }
  inline void SetTopK(int value) {
    m_topKHasBeenSet = true;
    m_topK = value;
  }
  inline SamplingParams& WithTopK(int value) {
    SetTopK(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cumulative probability threshold for nucleus (top-p) sampling. Only
   * tokens with cumulative probability below this threshold are considered.</p>
   */
  inline double GetTopP() const { return m_topP; }
  inline bool TopPHasBeenSet() const { return m_topPHasBeenSet; }
  inline void SetTopP(double value) {
    m_topPHasBeenSet = true;
    m_topP = value;
  }
  inline SamplingParams& WithTopP(double value) {
    SetTopP(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The random seed for reproducible sampling. When set, the same seed with the
   * same input produces deterministic outputs.</p>
   */
  inline int GetSeed() const { return m_seed; }
  inline bool SeedHasBeenSet() const { return m_seedHasBeenSet; }
  inline void SetSeed(int value) {
    m_seedHasBeenSet = true;
    m_seed = value;
  }
  inline SamplingParams& WithSeed(int value) {
    SetSeed(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of stop sequences that terminate generation when encountered in the
   * output.</p>
   */
  inline const Aws::Vector<Aws::String>& GetStop() const { return m_stop; }
  inline bool StopHasBeenSet() const { return m_stopHasBeenSet; }
  template <typename StopT = Aws::Vector<Aws::String>>
  void SetStop(StopT&& value) {
    m_stopHasBeenSet = true;
    m_stop = std::forward<StopT>(value);
  }
  template <typename StopT = Aws::Vector<Aws::String>>
  SamplingParams& WithStop(StopT&& value) {
    SetStop(std::forward<StopT>(value));
    return *this;
  }
  template <typename StopT = Aws::String>
  SamplingParams& AddStop(StopT&& value) {
    m_stopHasBeenSet = true;
    m_stop.emplace_back(std::forward<StopT>(value));
    return *this;
  }
  ///@}
 private:
  int m_maxTokens{0};

  double m_temperature{0.0};

  int m_topK{0};

  double m_topP{0.0};

  int m_seed{0};

  Aws::Vector<Aws::String> m_stop;
  bool m_maxTokensHasBeenSet = false;
  bool m_temperatureHasBeenSet = false;
  bool m_topKHasBeenSet = false;
  bool m_topPHasBeenSet = false;
  bool m_seedHasBeenSet = false;
  bool m_stopHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
