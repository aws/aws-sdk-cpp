/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>The parameters for configuring a custom prompt for an agent.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CustomPromptInputParameters">AWS
 * API Reference</a></p>
 */
class CustomPromptInputParameters {
 public:
  AWS_QUICKSIGHT_API CustomPromptInputParameters() = default;
  AWS_QUICKSIGHT_API CustomPromptInputParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API CustomPromptInputParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Instructions for the desired response length.</p>
   */
  inline const Aws::String& GetResponseLength() const { return m_responseLength; }
  inline bool ResponseLengthHasBeenSet() const { return m_responseLengthHasBeenSet; }
  template <typename ResponseLengthT = Aws::String>
  void SetResponseLength(ResponseLengthT&& value) {
    m_responseLengthHasBeenSet = true;
    m_responseLength = std::forward<ResponseLengthT>(value);
  }
  template <typename ResponseLengthT = Aws::String>
  CustomPromptInputParameters& WithResponseLength(ResponseLengthT&& value) {
    SetResponseLength(std::forward<ResponseLengthT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Instructions for the desired output style.</p>
   */
  inline const Aws::String& GetOutputStyle() const { return m_outputStyle; }
  inline bool OutputStyleHasBeenSet() const { return m_outputStyleHasBeenSet; }
  template <typename OutputStyleT = Aws::String>
  void SetOutputStyle(OutputStyleT&& value) {
    m_outputStyleHasBeenSet = true;
    m_outputStyle = std::forward<OutputStyleT>(value);
  }
  template <typename OutputStyleT = Aws::String>
  CustomPromptInputParameters& WithOutputStyle(OutputStyleT&& value) {
    SetOutputStyle(std::forward<OutputStyleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Instructions that define the agent's identity and persona.</p>
   */
  inline const Aws::String& GetIdentity() const { return m_identity; }
  inline bool IdentityHasBeenSet() const { return m_identityHasBeenSet; }
  template <typename IdentityT = Aws::String>
  void SetIdentity(IdentityT&& value) {
    m_identityHasBeenSet = true;
    m_identity = std::forward<IdentityT>(value);
  }
  template <typename IdentityT = Aws::String>
  CustomPromptInputParameters& WithIdentity(IdentityT&& value) {
    SetIdentity(std::forward<IdentityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Instructions for the desired tone of responses.</p>
   */
  inline const Aws::String& GetTone() const { return m_tone; }
  inline bool ToneHasBeenSet() const { return m_toneHasBeenSet; }
  template <typename ToneT = Aws::String>
  void SetTone(ToneT&& value) {
    m_toneHasBeenSet = true;
    m_tone = std::forward<ToneT>(value);
  }
  template <typename ToneT = Aws::String>
  CustomPromptInputParameters& WithTone(ToneT&& value) {
    SetTone(std::forward<ToneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Custom instructions for the agent's behavior.</p>
   */
  inline const Aws::String& GetCustomInstructions() const { return m_customInstructions; }
  inline bool CustomInstructionsHasBeenSet() const { return m_customInstructionsHasBeenSet; }
  template <typename CustomInstructionsT = Aws::String>
  void SetCustomInstructions(CustomInstructionsT&& value) {
    m_customInstructionsHasBeenSet = true;
    m_customInstructions = std::forward<CustomInstructionsT>(value);
  }
  template <typename CustomInstructionsT = Aws::String>
  CustomPromptInputParameters& WithCustomInstructions(CustomInstructionsT&& value) {
    SetCustomInstructions(std::forward<CustomInstructionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_responseLength;

  Aws::String m_outputStyle;

  Aws::String m_identity;

  Aws::String m_tone;

  Aws::String m_customInstructions;
  bool m_responseLengthHasBeenSet = false;
  bool m_outputStyleHasBeenSet = false;
  bool m_identityHasBeenSet = false;
  bool m_toneHasBeenSet = false;
  bool m_customInstructionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
