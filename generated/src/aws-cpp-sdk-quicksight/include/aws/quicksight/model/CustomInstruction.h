/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/InlineCustomInstruction.h>

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
 * <p>A custom instruction that provides guidance on how the dataset should be
 * consumed.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CustomInstruction">AWS
 * API Reference</a></p>
 */
class CustomInstruction {
 public:
  AWS_QUICKSIGHT_API CustomInstruction() = default;
  AWS_QUICKSIGHT_API CustomInstruction(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API CustomInstruction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An inline custom instruction containing text and optional uploaded document
   * metadata.</p>
   */
  inline const InlineCustomInstruction& GetInlineCustomInstruction() const { return m_inlineCustomInstruction; }
  inline bool InlineCustomInstructionHasBeenSet() const { return m_inlineCustomInstructionHasBeenSet; }
  template <typename InlineCustomInstructionT = InlineCustomInstruction>
  void SetInlineCustomInstruction(InlineCustomInstructionT&& value) {
    m_inlineCustomInstructionHasBeenSet = true;
    m_inlineCustomInstruction = std::forward<InlineCustomInstructionT>(value);
  }
  template <typename InlineCustomInstructionT = InlineCustomInstruction>
  CustomInstruction& WithInlineCustomInstruction(InlineCustomInstructionT&& value) {
    SetInlineCustomInstruction(std::forward<InlineCustomInstructionT>(value));
    return *this;
  }
  ///@}
 private:
  InlineCustomInstruction m_inlineCustomInstruction;
  bool m_inlineCustomInstructionHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
