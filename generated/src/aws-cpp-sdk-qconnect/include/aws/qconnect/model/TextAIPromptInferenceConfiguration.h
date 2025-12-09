/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QConnect {
namespace Model {

/**
 * <p>Inference configuration for text-based AI Prompts.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/TextAIPromptInferenceConfiguration">AWS
 * API Reference</a></p>
 */
class TextAIPromptInferenceConfiguration {
 public:
  AWS_QCONNECT_API TextAIPromptInferenceConfiguration() = default;
  AWS_QCONNECT_API TextAIPromptInferenceConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API TextAIPromptInferenceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The temperature setting for controlling randomness in the generated
   * response.</p>
   */
  inline double GetTemperature() const { return m_temperature; }
  inline bool TemperatureHasBeenSet() const { return m_temperatureHasBeenSet; }
  inline void SetTemperature(double value) {
    m_temperatureHasBeenSet = true;
    m_temperature = value;
  }
  inline TextAIPromptInferenceConfiguration& WithTemperature(double value) {
    SetTemperature(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The top-P sampling parameter for nucleus sampling.</p>
   */
  inline double GetTopP() const { return m_topP; }
  inline bool TopPHasBeenSet() const { return m_topPHasBeenSet; }
  inline void SetTopP(double value) {
    m_topPHasBeenSet = true;
    m_topP = value;
  }
  inline TextAIPromptInferenceConfiguration& WithTopP(double value) {
    SetTopP(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The top-K sampling parameter for token selection.</p>
   */
  inline int GetTopK() const { return m_topK; }
  inline bool TopKHasBeenSet() const { return m_topKHasBeenSet; }
  inline void SetTopK(int value) {
    m_topKHasBeenSet = true;
    m_topK = value;
  }
  inline TextAIPromptInferenceConfiguration& WithTopK(int value) {
    SetTopK(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of tokens to generate in the response.</p>
   */
  inline int GetMaxTokensToSample() const { return m_maxTokensToSample; }
  inline bool MaxTokensToSampleHasBeenSet() const { return m_maxTokensToSampleHasBeenSet; }
  inline void SetMaxTokensToSample(int value) {
    m_maxTokensToSampleHasBeenSet = true;
    m_maxTokensToSample = value;
  }
  inline TextAIPromptInferenceConfiguration& WithMaxTokensToSample(int value) {
    SetMaxTokensToSample(value);
    return *this;
  }
  ///@}
 private:
  double m_temperature{0.0};

  double m_topP{0.0};

  int m_topK{0};

  int m_maxTokensToSample{0};
  bool m_temperatureHasBeenSet = false;
  bool m_topPHasBeenSet = false;
  bool m_topKHasBeenSet = false;
  bool m_maxTokensToSampleHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
