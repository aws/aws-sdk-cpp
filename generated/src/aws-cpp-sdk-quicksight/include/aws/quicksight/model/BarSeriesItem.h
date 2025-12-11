/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DataFieldBarSeriesItem.h>
#include <aws/quicksight/model/FieldBarSeriesItem.h>

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
 * <p>The series item configuration of a <code>BarChartVisual</code>.</p> <p>This
 * is a union type structure. For this structure to be valid, only one of the
 * attributes can be defined.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/BarSeriesItem">AWS
 * API Reference</a></p>
 */
class BarSeriesItem {
 public:
  AWS_QUICKSIGHT_API BarSeriesItem() = default;
  AWS_QUICKSIGHT_API BarSeriesItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API BarSeriesItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The field series item configuration of a <code>BarChartVisual</code>.</p>
   */
  inline const FieldBarSeriesItem& GetFieldBarSeriesItem() const { return m_fieldBarSeriesItem; }
  inline bool FieldBarSeriesItemHasBeenSet() const { return m_fieldBarSeriesItemHasBeenSet; }
  template <typename FieldBarSeriesItemT = FieldBarSeriesItem>
  void SetFieldBarSeriesItem(FieldBarSeriesItemT&& value) {
    m_fieldBarSeriesItemHasBeenSet = true;
    m_fieldBarSeriesItem = std::forward<FieldBarSeriesItemT>(value);
  }
  template <typename FieldBarSeriesItemT = FieldBarSeriesItem>
  BarSeriesItem& WithFieldBarSeriesItem(FieldBarSeriesItemT&& value) {
    SetFieldBarSeriesItem(std::forward<FieldBarSeriesItemT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data field series item configuration of a
   * <code>BarChartVisual</code>.</p>
   */
  inline const DataFieldBarSeriesItem& GetDataFieldBarSeriesItem() const { return m_dataFieldBarSeriesItem; }
  inline bool DataFieldBarSeriesItemHasBeenSet() const { return m_dataFieldBarSeriesItemHasBeenSet; }
  template <typename DataFieldBarSeriesItemT = DataFieldBarSeriesItem>
  void SetDataFieldBarSeriesItem(DataFieldBarSeriesItemT&& value) {
    m_dataFieldBarSeriesItemHasBeenSet = true;
    m_dataFieldBarSeriesItem = std::forward<DataFieldBarSeriesItemT>(value);
  }
  template <typename DataFieldBarSeriesItemT = DataFieldBarSeriesItem>
  BarSeriesItem& WithDataFieldBarSeriesItem(DataFieldBarSeriesItemT&& value) {
    SetDataFieldBarSeriesItem(std::forward<DataFieldBarSeriesItemT>(value));
    return *this;
  }
  ///@}
 private:
  FieldBarSeriesItem m_fieldBarSeriesItem;

  DataFieldBarSeriesItem m_dataFieldBarSeriesItem;
  bool m_fieldBarSeriesItemHasBeenSet = false;
  bool m_dataFieldBarSeriesItemHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
