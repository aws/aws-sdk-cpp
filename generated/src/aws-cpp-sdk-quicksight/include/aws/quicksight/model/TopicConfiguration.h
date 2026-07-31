/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ColumnGroupSchema.h>
#include <aws/quicksight/model/DataSetSchema.h>

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
 * <p>The configuration of a topic.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicConfiguration">AWS
 * API Reference</a></p>
 */
class TopicConfiguration {
 public:
  AWS_QUICKSIGHT_API TopicConfiguration() = default;
  AWS_QUICKSIGHT_API TopicConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API TopicConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The placeholder for the topic configuration.</p>
   */
  inline const Aws::String& GetPlaceholder() const { return m_placeholder; }
  inline bool PlaceholderHasBeenSet() const { return m_placeholderHasBeenSet; }
  template <typename PlaceholderT = Aws::String>
  void SetPlaceholder(PlaceholderT&& value) {
    m_placeholderHasBeenSet = true;
    m_placeholder = std::forward<PlaceholderT>(value);
  }
  template <typename PlaceholderT = Aws::String>
  TopicConfiguration& WithPlaceholder(PlaceholderT&& value) {
    SetPlaceholder(std::forward<PlaceholderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Topic schema.</p>
   */
  inline const DataSetSchema& GetDataSetSchema() const { return m_dataSetSchema; }
  inline bool DataSetSchemaHasBeenSet() const { return m_dataSetSchemaHasBeenSet; }
  template <typename DataSetSchemaT = DataSetSchema>
  void SetDataSetSchema(DataSetSchemaT&& value) {
    m_dataSetSchemaHasBeenSet = true;
    m_dataSetSchema = std::forward<DataSetSchemaT>(value);
  }
  template <typename DataSetSchemaT = DataSetSchema>
  TopicConfiguration& WithDataSetSchema(DataSetSchemaT&& value) {
    SetDataSetSchema(std::forward<DataSetSchemaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of column group schemas in the topic configuration.</p>
   */
  inline const Aws::Vector<ColumnGroupSchema>& GetColumnGroupSchemaList() const { return m_columnGroupSchemaList; }
  inline bool ColumnGroupSchemaListHasBeenSet() const { return m_columnGroupSchemaListHasBeenSet; }
  template <typename ColumnGroupSchemaListT = Aws::Vector<ColumnGroupSchema>>
  void SetColumnGroupSchemaList(ColumnGroupSchemaListT&& value) {
    m_columnGroupSchemaListHasBeenSet = true;
    m_columnGroupSchemaList = std::forward<ColumnGroupSchemaListT>(value);
  }
  template <typename ColumnGroupSchemaListT = Aws::Vector<ColumnGroupSchema>>
  TopicConfiguration& WithColumnGroupSchemaList(ColumnGroupSchemaListT&& value) {
    SetColumnGroupSchemaList(std::forward<ColumnGroupSchemaListT>(value));
    return *this;
  }
  template <typename ColumnGroupSchemaListT = ColumnGroupSchema>
  TopicConfiguration& AddColumnGroupSchemaList(ColumnGroupSchemaListT&& value) {
    m_columnGroupSchemaListHasBeenSet = true;
    m_columnGroupSchemaList.emplace_back(std::forward<ColumnGroupSchemaListT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_placeholder;

  DataSetSchema m_dataSetSchema;

  Aws::Vector<ColumnGroupSchema> m_columnGroupSchemaList;
  bool m_placeholderHasBeenSet = false;
  bool m_dataSetSchemaHasBeenSet = false;
  bool m_columnGroupSchemaListHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
