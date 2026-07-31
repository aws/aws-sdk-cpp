/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
 * <p>A structure that represents an endpoint of a data set relation of a
 * topic.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicV2DataSetRelationEndpoint">AWS
 * API Reference</a></p>
 */
class TopicV2DataSetRelationEndpoint {
 public:
  AWS_QUICKSIGHT_API TopicV2DataSetRelationEndpoint() = default;
  AWS_QUICKSIGHT_API TopicV2DataSetRelationEndpoint(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API TopicV2DataSetRelationEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the data set at this endpoint of the
   * relation.</p>
   */
  inline const Aws::String& GetDataSetArn() const { return m_dataSetArn; }
  inline bool DataSetArnHasBeenSet() const { return m_dataSetArnHasBeenSet; }
  template <typename DataSetArnT = Aws::String>
  void SetDataSetArn(DataSetArnT&& value) {
    m_dataSetArnHasBeenSet = true;
    m_dataSetArn = std::forward<DataSetArnT>(value);
  }
  template <typename DataSetArnT = Aws::String>
  TopicV2DataSetRelationEndpoint& WithDataSetArn(DataSetArnT&& value) {
    SetDataSetArn(std::forward<DataSetArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The names of the columns that are used in the data set relation.</p>
   */
  inline const Aws::Vector<Aws::String>& GetColumnNames() const { return m_columnNames; }
  inline bool ColumnNamesHasBeenSet() const { return m_columnNamesHasBeenSet; }
  template <typename ColumnNamesT = Aws::Vector<Aws::String>>
  void SetColumnNames(ColumnNamesT&& value) {
    m_columnNamesHasBeenSet = true;
    m_columnNames = std::forward<ColumnNamesT>(value);
  }
  template <typename ColumnNamesT = Aws::Vector<Aws::String>>
  TopicV2DataSetRelationEndpoint& WithColumnNames(ColumnNamesT&& value) {
    SetColumnNames(std::forward<ColumnNamesT>(value));
    return *this;
  }
  template <typename ColumnNamesT = Aws::String>
  TopicV2DataSetRelationEndpoint& AddColumnNames(ColumnNamesT&& value) {
    m_columnNamesHasBeenSet = true;
    m_columnNames.emplace_back(std::forward<ColumnNamesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_dataSetArn;

  Aws::Vector<Aws::String> m_columnNames;
  bool m_dataSetArnHasBeenSet = false;
  bool m_columnNamesHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
