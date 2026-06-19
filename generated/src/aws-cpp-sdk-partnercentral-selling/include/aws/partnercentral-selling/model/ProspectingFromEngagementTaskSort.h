/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/ProspectingFromEngagementTaskSortName.h>
#include <aws/partnercentral-selling/model/SortOrder.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>Specifies the sort configuration for
 * <code>ListProspectingFromEngagementTasks</code>. Contains the field to sort by
 * and the sort direction.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/ProspectingFromEngagementTaskSort">AWS
 * API Reference</a></p>
 */
class ProspectingFromEngagementTaskSort {
 public:
  AWS_PARTNERCENTRALSELLING_API ProspectingFromEngagementTaskSort() = default;
  AWS_PARTNERCENTRALSELLING_API ProspectingFromEngagementTaskSort(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API ProspectingFromEngagementTaskSort& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The direction in which to sort the results. Use <code>ASCENDING</code> to
   * return the smallest or earliest values first, or <code>DESCENDING</code> to
   * return the largest or most recent values first.</p>
   */
  inline SortOrder GetSortOrder() const { return m_sortOrder; }
  inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
  inline void SetSortOrder(SortOrder value) {
    m_sortOrderHasBeenSet = true;
    m_sortOrder = value;
  }
  inline ProspectingFromEngagementTaskSort& WithSortOrder(SortOrder value) {
    SetSortOrder(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The field by which to sort the returned tasks. Valid values:
   * <code>StartTime</code> (task creation timestamp), <code>TaskName</code>
   * (alphabetically by task name), and <code>FailedEngagementCount</code> (number of
   * failed engagements).</p>
   */
  inline ProspectingFromEngagementTaskSortName GetSortBy() const { return m_sortBy; }
  inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
  inline void SetSortBy(ProspectingFromEngagementTaskSortName value) {
    m_sortByHasBeenSet = true;
    m_sortBy = value;
  }
  inline ProspectingFromEngagementTaskSort& WithSortBy(ProspectingFromEngagementTaskSortName value) {
    SetSortBy(value);
    return *this;
  }
  ///@}
 private:
  SortOrder m_sortOrder{SortOrder::NOT_SET};

  ProspectingFromEngagementTaskSortName m_sortBy{ProspectingFromEngagementTaskSortName::NOT_SET};
  bool m_sortOrderHasBeenSet = false;
  bool m_sortByHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
