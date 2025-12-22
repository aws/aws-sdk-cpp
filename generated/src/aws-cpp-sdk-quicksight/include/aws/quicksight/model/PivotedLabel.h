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
 * <p>Specifies a label value to be pivoted into a separate column, including the
 * new column name and identifier.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PivotedLabel">AWS
 * API Reference</a></p>
 */
class PivotedLabel {
 public:
  AWS_QUICKSIGHT_API PivotedLabel() = default;
  AWS_QUICKSIGHT_API PivotedLabel(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API PivotedLabel& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The label value from the source data to be pivoted.</p>
   */
  inline const Aws::String& GetLabelName() const { return m_labelName; }
  inline bool LabelNameHasBeenSet() const { return m_labelNameHasBeenSet; }
  template <typename LabelNameT = Aws::String>
  void SetLabelName(LabelNameT&& value) {
    m_labelNameHasBeenSet = true;
    m_labelName = std::forward<LabelNameT>(value);
  }
  template <typename LabelNameT = Aws::String>
  PivotedLabel& WithLabelName(LabelNameT&& value) {
    SetLabelName(std::forward<LabelNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name for the new column created from this pivoted label.</p>
   */
  inline const Aws::String& GetNewColumnName() const { return m_newColumnName; }
  inline bool NewColumnNameHasBeenSet() const { return m_newColumnNameHasBeenSet; }
  template <typename NewColumnNameT = Aws::String>
  void SetNewColumnName(NewColumnNameT&& value) {
    m_newColumnNameHasBeenSet = true;
    m_newColumnName = std::forward<NewColumnNameT>(value);
  }
  template <typename NewColumnNameT = Aws::String>
  PivotedLabel& WithNewColumnName(NewColumnNameT&& value) {
    SetNewColumnName(std::forward<NewColumnNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique identifier for the new column created from this pivoted label.</p>
   */
  inline const Aws::String& GetNewColumnId() const { return m_newColumnId; }
  inline bool NewColumnIdHasBeenSet() const { return m_newColumnIdHasBeenSet; }
  template <typename NewColumnIdT = Aws::String>
  void SetNewColumnId(NewColumnIdT&& value) {
    m_newColumnIdHasBeenSet = true;
    m_newColumnId = std::forward<NewColumnIdT>(value);
  }
  template <typename NewColumnIdT = Aws::String>
  PivotedLabel& WithNewColumnId(NewColumnIdT&& value) {
    SetNewColumnId(std::forward<NewColumnIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_labelName;

  Aws::String m_newColumnName;

  Aws::String m_newColumnId;
  bool m_labelNameHasBeenSet = false;
  bool m_newColumnNameHasBeenSet = false;
  bool m_newColumnIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
