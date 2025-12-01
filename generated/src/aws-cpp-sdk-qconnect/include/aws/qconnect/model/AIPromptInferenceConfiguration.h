/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/TextAIPromptInferenceConfiguration.h>

#include <utility>

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
 * <p>The configuration for inference parameters when using AI
 * Prompts.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/AIPromptInferenceConfiguration">AWS
 * API Reference</a></p>
 */
class AIPromptInferenceConfiguration {
 public:
  AWS_QCONNECT_API AIPromptInferenceConfiguration() = default;
  AWS_QCONNECT_API AIPromptInferenceConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API AIPromptInferenceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The inference configuration for text-based AI Prompts.</p>
   */
  inline const TextAIPromptInferenceConfiguration& GetTextAIPromptInferenceConfiguration() const {
    return m_textAIPromptInferenceConfiguration;
  }
  inline bool TextAIPromptInferenceConfigurationHasBeenSet() const { return m_textAIPromptInferenceConfigurationHasBeenSet; }
  template <typename TextAIPromptInferenceConfigurationT = TextAIPromptInferenceConfiguration>
  void SetTextAIPromptInferenceConfiguration(TextAIPromptInferenceConfigurationT&& value) {
    m_textAIPromptInferenceConfigurationHasBeenSet = true;
    m_textAIPromptInferenceConfiguration = std::forward<TextAIPromptInferenceConfigurationT>(value);
  }
  template <typename TextAIPromptInferenceConfigurationT = TextAIPromptInferenceConfiguration>
  AIPromptInferenceConfiguration& WithTextAIPromptInferenceConfiguration(TextAIPromptInferenceConfigurationT&& value) {
    SetTextAIPromptInferenceConfiguration(std::forward<TextAIPromptInferenceConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  TextAIPromptInferenceConfiguration m_textAIPromptInferenceConfiguration;
  bool m_textAIPromptInferenceConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
