/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ParentDataSet.h>

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
 * <p>A source table that provides initial data from either a physical table or
 * parent dataset.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SourceTable">AWS
 * API Reference</a></p>
 */
class SourceTable {
 public:
  AWS_QUICKSIGHT_API SourceTable() = default;
  AWS_QUICKSIGHT_API SourceTable(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API SourceTable& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the physical table that serves as the data source.</p>
   */
  inline const Aws::String& GetPhysicalTableId() const { return m_physicalTableId; }
  inline bool PhysicalTableIdHasBeenSet() const { return m_physicalTableIdHasBeenSet; }
  template <typename PhysicalTableIdT = Aws::String>
  void SetPhysicalTableId(PhysicalTableIdT&& value) {
    m_physicalTableIdHasBeenSet = true;
    m_physicalTableId = std::forward<PhysicalTableIdT>(value);
  }
  template <typename PhysicalTableIdT = Aws::String>
  SourceTable& WithPhysicalTableId(PhysicalTableIdT&& value) {
    SetPhysicalTableId(std::forward<PhysicalTableIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A parent dataset that serves as the data source instead of a physical
   * table.</p>
   */
  inline const ParentDataSet& GetDataSet() const { return m_dataSet; }
  inline bool DataSetHasBeenSet() const { return m_dataSetHasBeenSet; }
  template <typename DataSetT = ParentDataSet>
  void SetDataSet(DataSetT&& value) {
    m_dataSetHasBeenSet = true;
    m_dataSet = std::forward<DataSetT>(value);
  }
  template <typename DataSetT = ParentDataSet>
  SourceTable& WithDataSet(DataSetT&& value) {
    SetDataSet(std::forward<DataSetT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_physicalTableId;
  bool m_physicalTableIdHasBeenSet = false;

  ParentDataSet m_dataSet;
  bool m_dataSetHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
