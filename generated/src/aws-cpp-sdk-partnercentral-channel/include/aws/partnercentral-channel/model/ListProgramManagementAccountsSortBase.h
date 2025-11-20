/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/ListProgramManagementAccountsSortName.h>
#include <aws/partnercentral-channel/model/SortOrder.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralChannel {
namespace Model {

/**
 * <p>Base sorting configuration for program management accounts.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/ListProgramManagementAccountsSortBase">AWS
 * API Reference</a></p>
 */
class ListProgramManagementAccountsSortBase {
 public:
  AWS_PARTNERCENTRALCHANNEL_API ListProgramManagementAccountsSortBase() = default;
  AWS_PARTNERCENTRALCHANNEL_API ListProgramManagementAccountsSortBase(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API ListProgramManagementAccountsSortBase& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  inline ListProgramManagementAccountsSortBase& WithSortOrder(SortOrder value) {
    SetSortOrder(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The field to sort by.</p>
   */
  inline ListProgramManagementAccountsSortName GetSortBy() const { return m_sortBy; }
  inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
  inline void SetSortBy(ListProgramManagementAccountsSortName value) {
    m_sortByHasBeenSet = true;
    m_sortBy = value;
  }
  inline ListProgramManagementAccountsSortBase& WithSortBy(ListProgramManagementAccountsSortName value) {
    SetSortBy(value);
    return *this;
  }
  ///@}
 private:
  SortOrder m_sortOrder{SortOrder::NOT_SET};
  bool m_sortOrderHasBeenSet = false;

  ListProgramManagementAccountsSortName m_sortBy{ListProgramManagementAccountsSortName::NOT_SET};
  bool m_sortByHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
