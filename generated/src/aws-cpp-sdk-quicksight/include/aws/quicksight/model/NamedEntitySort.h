/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/TopicSortDirection.h>

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
 * <p>A structure that represents a sort for a named entity.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/NamedEntitySort">AWS
 * API Reference</a></p>
 */
class NamedEntitySort {
 public:
  AWS_QUICKSIGHT_API NamedEntitySort() = default;
  AWS_QUICKSIGHT_API NamedEntitySort(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API NamedEntitySort& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the field that is used for the sort.</p>
   */
  inline const Aws::String& GetFieldName() const { return m_fieldName; }
  inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
  template <typename FieldNameT = Aws::String>
  void SetFieldName(FieldNameT&& value) {
    m_fieldNameHasBeenSet = true;
    m_fieldName = std::forward<FieldNameT>(value);
  }
  template <typename FieldNameT = Aws::String>
  NamedEntitySort& WithFieldName(FieldNameT&& value) {
    SetFieldName(std::forward<FieldNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The direction of the sort. Valid values are <code>ASCENDING</code> and
   * <code>DESCENDING</code>.</p>
   */
  inline TopicSortDirection GetDirection() const { return m_direction; }
  inline bool DirectionHasBeenSet() const { return m_directionHasBeenSet; }
  inline void SetDirection(TopicSortDirection value) {
    m_directionHasBeenSet = true;
    m_direction = value;
  }
  inline NamedEntitySort& WithDirection(TopicSortDirection value) {
    SetDirection(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_fieldName;

  TopicSortDirection m_direction{TopicSortDirection::NOT_SET};
  bool m_fieldNameHasBeenSet = false;
  bool m_directionHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
