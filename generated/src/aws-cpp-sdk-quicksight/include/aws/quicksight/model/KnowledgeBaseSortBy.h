/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/KnowledgeBaseSortByField.h>
#include <aws/quicksight/model/SortOrder.h>

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
 * <p>The sort configuration for searching knowledge bases.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/KnowledgeBaseSortBy">AWS
 * API Reference</a></p>
 */
class KnowledgeBaseSortBy {
 public:
  AWS_QUICKSIGHT_API KnowledgeBaseSortBy() = default;
  AWS_QUICKSIGHT_API KnowledgeBaseSortBy(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API KnowledgeBaseSortBy& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The field to sort by.</p>
   */
  inline KnowledgeBaseSortByField GetSortByField() const { return m_sortByField; }
  inline bool SortByFieldHasBeenSet() const { return m_sortByFieldHasBeenSet; }
  inline void SetSortByField(KnowledgeBaseSortByField value) {
    m_sortByFieldHasBeenSet = true;
    m_sortByField = value;
  }
  inline KnowledgeBaseSortBy& WithSortByField(KnowledgeBaseSortByField value) {
    SetSortByField(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sort order (ascending or descending).</p>
   */
  inline SortOrder GetSortOrder() const { return m_sortOrder; }
  inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
  inline void SetSortOrder(SortOrder value) {
    m_sortOrderHasBeenSet = true;
    m_sortOrder = value;
  }
  inline KnowledgeBaseSortBy& WithSortOrder(SortOrder value) {
    SetSortOrder(value);
    return *this;
  }
  ///@}
 private:
  KnowledgeBaseSortByField m_sortByField{KnowledgeBaseSortByField::NOT_SET};

  SortOrder m_sortOrder{SortOrder::NOT_SET};
  bool m_sortByFieldHasBeenSet = false;
  bool m_sortOrderHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
