/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/InputColumn.h>
#include <aws/quicksight/model/TablePathElement.h>

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
 * <p>A table from a Software-as-a-Service (SaaS) data source, including connection
 * details and column definitions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SaaSTable">AWS
 * API Reference</a></p>
 */
class SaaSTable {
 public:
  AWS_QUICKSIGHT_API SaaSTable() = default;
  AWS_QUICKSIGHT_API SaaSTable(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API SaaSTable& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the SaaS data source.</p>
   */
  inline const Aws::String& GetDataSourceArn() const { return m_dataSourceArn; }
  inline bool DataSourceArnHasBeenSet() const { return m_dataSourceArnHasBeenSet; }
  template <typename DataSourceArnT = Aws::String>
  void SetDataSourceArn(DataSourceArnT&& value) {
    m_dataSourceArnHasBeenSet = true;
    m_dataSourceArn = std::forward<DataSourceArnT>(value);
  }
  template <typename DataSourceArnT = Aws::String>
  SaaSTable& WithDataSourceArn(DataSourceArnT&& value) {
    SetDataSourceArn(std::forward<DataSourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The hierarchical path to the table within the SaaS data source.</p>
   */
  inline const Aws::Vector<TablePathElement>& GetTablePath() const { return m_tablePath; }
  inline bool TablePathHasBeenSet() const { return m_tablePathHasBeenSet; }
  template <typename TablePathT = Aws::Vector<TablePathElement>>
  void SetTablePath(TablePathT&& value) {
    m_tablePathHasBeenSet = true;
    m_tablePath = std::forward<TablePathT>(value);
  }
  template <typename TablePathT = Aws::Vector<TablePathElement>>
  SaaSTable& WithTablePath(TablePathT&& value) {
    SetTablePath(std::forward<TablePathT>(value));
    return *this;
  }
  template <typename TablePathT = TablePathElement>
  SaaSTable& AddTablePath(TablePathT&& value) {
    m_tablePathHasBeenSet = true;
    m_tablePath.emplace_back(std::forward<TablePathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of input columns available from the SaaS table.</p>
   */
  inline const Aws::Vector<InputColumn>& GetInputColumns() const { return m_inputColumns; }
  inline bool InputColumnsHasBeenSet() const { return m_inputColumnsHasBeenSet; }
  template <typename InputColumnsT = Aws::Vector<InputColumn>>
  void SetInputColumns(InputColumnsT&& value) {
    m_inputColumnsHasBeenSet = true;
    m_inputColumns = std::forward<InputColumnsT>(value);
  }
  template <typename InputColumnsT = Aws::Vector<InputColumn>>
  SaaSTable& WithInputColumns(InputColumnsT&& value) {
    SetInputColumns(std::forward<InputColumnsT>(value));
    return *this;
  }
  template <typename InputColumnsT = InputColumn>
  SaaSTable& AddInputColumns(InputColumnsT&& value) {
    m_inputColumnsHasBeenSet = true;
    m_inputColumns.emplace_back(std::forward<InputColumnsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_dataSourceArn;
  bool m_dataSourceArnHasBeenSet = false;

  Aws::Vector<TablePathElement> m_tablePath;
  bool m_tablePathHasBeenSet = false;

  Aws::Vector<InputColumn> m_inputColumns;
  bool m_inputColumnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
