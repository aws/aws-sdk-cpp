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
 * <p>A column of a data set.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ColumnIdentifier">AWS
 * API Reference</a></p>
 */
class ColumnIdentifier {
 public:
  AWS_QUICKSIGHT_API ColumnIdentifier() = default;
  AWS_QUICKSIGHT_API ColumnIdentifier(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API ColumnIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The data set that the column belongs to.</p>
   */
  inline const Aws::String& GetDataSetIdentifier() const { return m_dataSetIdentifier; }
  inline bool DataSetIdentifierHasBeenSet() const { return m_dataSetIdentifierHasBeenSet; }
  template <typename DataSetIdentifierT = Aws::String>
  void SetDataSetIdentifier(DataSetIdentifierT&& value) {
    m_dataSetIdentifierHasBeenSet = true;
    m_dataSetIdentifier = std::forward<DataSetIdentifierT>(value);
  }
  template <typename DataSetIdentifierT = Aws::String>
  ColumnIdentifier& WithDataSetIdentifier(DataSetIdentifierT&& value) {
    SetDataSetIdentifier(std::forward<DataSetIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The topic that the column belongs to.</p>
   */
  inline const Aws::String& GetTopicIdentifier() const { return m_topicIdentifier; }
  inline bool TopicIdentifierHasBeenSet() const { return m_topicIdentifierHasBeenSet; }
  template <typename TopicIdentifierT = Aws::String>
  void SetTopicIdentifier(TopicIdentifierT&& value) {
    m_topicIdentifierHasBeenSet = true;
    m_topicIdentifier = std::forward<TopicIdentifierT>(value);
  }
  template <typename TopicIdentifierT = Aws::String>
  ColumnIdentifier& WithTopicIdentifier(TopicIdentifierT&& value) {
    SetTopicIdentifier(std::forward<TopicIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the column.</p>
   */
  inline const Aws::String& GetColumnName() const { return m_columnName; }
  inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }
  template <typename ColumnNameT = Aws::String>
  void SetColumnName(ColumnNameT&& value) {
    m_columnNameHasBeenSet = true;
    m_columnName = std::forward<ColumnNameT>(value);
  }
  template <typename ColumnNameT = Aws::String>
  ColumnIdentifier& WithColumnName(ColumnNameT&& value) {
    SetColumnName(std::forward<ColumnNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_dataSetIdentifier;

  Aws::String m_topicIdentifier;

  Aws::String m_columnName;
  bool m_dataSetIdentifierHasBeenSet = false;
  bool m_topicIdentifierHasBeenSet = false;
  bool m_columnNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
