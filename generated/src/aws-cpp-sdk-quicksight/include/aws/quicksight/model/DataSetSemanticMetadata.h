/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/CustomInstruction.h>
#include <aws/quicksight/model/DataSetSemanticDescription.h>

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
 * <p>Semantic metadata for a dataset, including a description and custom
 * instructions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataSetSemanticMetadata">AWS
 * API Reference</a></p>
 */
class DataSetSemanticMetadata {
 public:
  AWS_QUICKSIGHT_API DataSetSemanticMetadata() = default;
  AWS_QUICKSIGHT_API DataSetSemanticMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API DataSetSemanticMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A description of the dataset.</p>
   */
  inline const DataSetSemanticDescription& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = DataSetSemanticDescription>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = DataSetSemanticDescription>
  DataSetSemanticMetadata& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of custom instructions that guide how the dataset should be
   * consumed.</p>
   */
  inline const Aws::Vector<CustomInstruction>& GetCustomInstructions() const { return m_customInstructions; }
  inline bool CustomInstructionsHasBeenSet() const { return m_customInstructionsHasBeenSet; }
  template <typename CustomInstructionsT = Aws::Vector<CustomInstruction>>
  void SetCustomInstructions(CustomInstructionsT&& value) {
    m_customInstructionsHasBeenSet = true;
    m_customInstructions = std::forward<CustomInstructionsT>(value);
  }
  template <typename CustomInstructionsT = Aws::Vector<CustomInstruction>>
  DataSetSemanticMetadata& WithCustomInstructions(CustomInstructionsT&& value) {
    SetCustomInstructions(std::forward<CustomInstructionsT>(value));
    return *this;
  }
  template <typename CustomInstructionsT = CustomInstruction>
  DataSetSemanticMetadata& AddCustomInstructions(CustomInstructionsT&& value) {
    m_customInstructionsHasBeenSet = true;
    m_customInstructions.emplace_back(std::forward<CustomInstructionsT>(value));
    return *this;
  }
  ///@}
 private:
  DataSetSemanticDescription m_description;

  Aws::Vector<CustomInstruction> m_customInstructions;
  bool m_descriptionHasBeenSet = false;
  bool m_customInstructionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
