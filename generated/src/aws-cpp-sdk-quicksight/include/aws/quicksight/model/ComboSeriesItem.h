/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DataFieldComboSeriesItem.h>
#include <aws/quicksight/model/FieldComboSeriesItem.h>

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
 * <p>The series item configuration of a <code>ComboChartVisual</code>.</p> <p>This
 * is a union type structure. For this structure to be valid, only one of the
 * attributes can be defined.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ComboSeriesItem">AWS
 * API Reference</a></p>
 */
class ComboSeriesItem {
 public:
  AWS_QUICKSIGHT_API ComboSeriesItem() = default;
  AWS_QUICKSIGHT_API ComboSeriesItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API ComboSeriesItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The field series item configuration of a <code>ComboChartVisual</code>.</p>
   */
  inline const FieldComboSeriesItem& GetFieldComboSeriesItem() const { return m_fieldComboSeriesItem; }
  inline bool FieldComboSeriesItemHasBeenSet() const { return m_fieldComboSeriesItemHasBeenSet; }
  template <typename FieldComboSeriesItemT = FieldComboSeriesItem>
  void SetFieldComboSeriesItem(FieldComboSeriesItemT&& value) {
    m_fieldComboSeriesItemHasBeenSet = true;
    m_fieldComboSeriesItem = std::forward<FieldComboSeriesItemT>(value);
  }
  template <typename FieldComboSeriesItemT = FieldComboSeriesItem>
  ComboSeriesItem& WithFieldComboSeriesItem(FieldComboSeriesItemT&& value) {
    SetFieldComboSeriesItem(std::forward<FieldComboSeriesItemT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data field series item configuration of a
   * <code>ComboChartVisual</code>.</p>
   */
  inline const DataFieldComboSeriesItem& GetDataFieldComboSeriesItem() const { return m_dataFieldComboSeriesItem; }
  inline bool DataFieldComboSeriesItemHasBeenSet() const { return m_dataFieldComboSeriesItemHasBeenSet; }
  template <typename DataFieldComboSeriesItemT = DataFieldComboSeriesItem>
  void SetDataFieldComboSeriesItem(DataFieldComboSeriesItemT&& value) {
    m_dataFieldComboSeriesItemHasBeenSet = true;
    m_dataFieldComboSeriesItem = std::forward<DataFieldComboSeriesItemT>(value);
  }
  template <typename DataFieldComboSeriesItemT = DataFieldComboSeriesItem>
  ComboSeriesItem& WithDataFieldComboSeriesItem(DataFieldComboSeriesItemT&& value) {
    SetDataFieldComboSeriesItem(std::forward<DataFieldComboSeriesItemT>(value));
    return *this;
  }
  ///@}
 private:
  FieldComboSeriesItem m_fieldComboSeriesItem;

  DataFieldComboSeriesItem m_dataFieldComboSeriesItem;
  bool m_fieldComboSeriesItemHasBeenSet = false;
  bool m_dataFieldComboSeriesItemHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
