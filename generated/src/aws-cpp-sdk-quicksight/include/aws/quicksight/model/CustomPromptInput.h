/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/CustomPromptInputParameters.h>
#include <aws/quicksight/model/CustomPromptProfile.h>

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
 * <p>The custom prompt input for an agent. This is a union type that can be either
 * an existing prompt profile or new prompt parameters.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CustomPromptInput">AWS
 * API Reference</a></p>
 */
class CustomPromptInput {
 public:
  AWS_QUICKSIGHT_API CustomPromptInput() = default;
  AWS_QUICKSIGHT_API CustomPromptInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API CustomPromptInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An existing custom prompt profile to use for the agent.</p>
   */
  inline const CustomPromptProfile& GetExistingPrompt() const { return m_existingPrompt; }
  inline bool ExistingPromptHasBeenSet() const { return m_existingPromptHasBeenSet; }
  template <typename ExistingPromptT = CustomPromptProfile>
  void SetExistingPrompt(ExistingPromptT&& value) {
    m_existingPromptHasBeenSet = true;
    m_existingPrompt = std::forward<ExistingPromptT>(value);
  }
  template <typename ExistingPromptT = CustomPromptProfile>
  CustomPromptInput& WithExistingPrompt(ExistingPromptT&& value) {
    SetExistingPrompt(std::forward<ExistingPromptT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>New custom prompt parameters to configure for the agent.</p>
   */
  inline const CustomPromptInputParameters& GetNewPrompt() const { return m_newPrompt; }
  inline bool NewPromptHasBeenSet() const { return m_newPromptHasBeenSet; }
  template <typename NewPromptT = CustomPromptInputParameters>
  void SetNewPrompt(NewPromptT&& value) {
    m_newPromptHasBeenSet = true;
    m_newPrompt = std::forward<NewPromptT>(value);
  }
  template <typename NewPromptT = CustomPromptInputParameters>
  CustomPromptInput& WithNewPrompt(NewPromptT&& value) {
    SetNewPrompt(std::forward<NewPromptT>(value));
    return *this;
  }
  ///@}
 private:
  CustomPromptProfile m_existingPrompt;

  CustomPromptInputParameters m_newPrompt;
  bool m_existingPromptHasBeenSet = false;
  bool m_newPromptHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
