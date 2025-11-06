/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/InputColumn.h>

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
 * <p>References a parent dataset that serves as a data source, including its
 * columns and metadata.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ParentDataSet">AWS
 * API Reference</a></p>
 */
class ParentDataSet {
 public:
  AWS_QUICKSIGHT_API ParentDataSet() = default;
  AWS_QUICKSIGHT_API ParentDataSet(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API ParentDataSet& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the parent dataset.</p>
   */
  inline const Aws::String& GetDataSetArn() const { return m_dataSetArn; }
  inline bool DataSetArnHasBeenSet() const { return m_dataSetArnHasBeenSet; }
  template <typename DataSetArnT = Aws::String>
  void SetDataSetArn(DataSetArnT&& value) {
    m_dataSetArnHasBeenSet = true;
    m_dataSetArn = std::forward<DataSetArnT>(value);
  }
  template <typename DataSetArnT = Aws::String>
  ParentDataSet& WithDataSetArn(DataSetArnT&& value) {
    SetDataSetArn(std::forward<DataSetArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of input columns available from the parent dataset.</p>
   */
  inline const Aws::Vector<InputColumn>& GetInputColumns() const { return m_inputColumns; }
  inline bool InputColumnsHasBeenSet() const { return m_inputColumnsHasBeenSet; }
  template <typename InputColumnsT = Aws::Vector<InputColumn>>
  void SetInputColumns(InputColumnsT&& value) {
    m_inputColumnsHasBeenSet = true;
    m_inputColumns = std::forward<InputColumnsT>(value);
  }
  template <typename InputColumnsT = Aws::Vector<InputColumn>>
  ParentDataSet& WithInputColumns(InputColumnsT&& value) {
    SetInputColumns(std::forward<InputColumnsT>(value));
    return *this;
  }
  template <typename InputColumnsT = InputColumn>
  ParentDataSet& AddInputColumns(InputColumnsT&& value) {
    m_inputColumnsHasBeenSet = true;
    m_inputColumns.emplace_back(std::forward<InputColumnsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_dataSetArn;
  bool m_dataSetArnHasBeenSet = false;

  Aws::Vector<InputColumn> m_inputColumns;
  bool m_inputColumnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
