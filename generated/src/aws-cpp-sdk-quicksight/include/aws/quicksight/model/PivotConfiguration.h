/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/PivotedLabel.h>

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
 * <p>Configuration for a pivot operation, specifying which column contains labels
 * and how to pivot them.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PivotConfiguration">AWS
 * API Reference</a></p>
 */
class PivotConfiguration {
 public:
  AWS_QUICKSIGHT_API PivotConfiguration() = default;
  AWS_QUICKSIGHT_API PivotConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API PivotConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the column that contains the labels to be pivoted into separate
   * columns.</p>
   */
  inline const Aws::String& GetLabelColumnName() const { return m_labelColumnName; }
  inline bool LabelColumnNameHasBeenSet() const { return m_labelColumnNameHasBeenSet; }
  template <typename LabelColumnNameT = Aws::String>
  void SetLabelColumnName(LabelColumnNameT&& value) {
    m_labelColumnNameHasBeenSet = true;
    m_labelColumnName = std::forward<LabelColumnNameT>(value);
  }
  template <typename LabelColumnNameT = Aws::String>
  PivotConfiguration& WithLabelColumnName(LabelColumnNameT&& value) {
    SetLabelColumnName(std::forward<LabelColumnNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of specific label values to pivot into separate columns.</p>
   */
  inline const Aws::Vector<PivotedLabel>& GetPivotedLabels() const { return m_pivotedLabels; }
  inline bool PivotedLabelsHasBeenSet() const { return m_pivotedLabelsHasBeenSet; }
  template <typename PivotedLabelsT = Aws::Vector<PivotedLabel>>
  void SetPivotedLabels(PivotedLabelsT&& value) {
    m_pivotedLabelsHasBeenSet = true;
    m_pivotedLabels = std::forward<PivotedLabelsT>(value);
  }
  template <typename PivotedLabelsT = Aws::Vector<PivotedLabel>>
  PivotConfiguration& WithPivotedLabels(PivotedLabelsT&& value) {
    SetPivotedLabels(std::forward<PivotedLabelsT>(value));
    return *this;
  }
  template <typename PivotedLabelsT = PivotedLabel>
  PivotConfiguration& AddPivotedLabels(PivotedLabelsT&& value) {
    m_pivotedLabelsHasBeenSet = true;
    m_pivotedLabels.emplace_back(std::forward<PivotedLabelsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_labelColumnName;

  Aws::Vector<PivotedLabel> m_pivotedLabels;
  bool m_labelColumnNameHasBeenSet = false;
  bool m_pivotedLabelsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
