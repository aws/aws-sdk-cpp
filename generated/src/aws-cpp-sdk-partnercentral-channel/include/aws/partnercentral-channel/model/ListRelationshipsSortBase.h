/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/ListRelationshipsSortName.h>
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
 * <p>Base sorting configuration for relationships.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/ListRelationshipsSortBase">AWS
 * API Reference</a></p>
 */
class ListRelationshipsSortBase {
 public:
  AWS_PARTNERCENTRALCHANNEL_API ListRelationshipsSortBase() = default;
  AWS_PARTNERCENTRALCHANNEL_API ListRelationshipsSortBase(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API ListRelationshipsSortBase& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  inline ListRelationshipsSortBase& WithSortOrder(SortOrder value) {
    SetSortOrder(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The field to sort by.</p>
   */
  inline ListRelationshipsSortName GetSortBy() const { return m_sortBy; }
  inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
  inline void SetSortBy(ListRelationshipsSortName value) {
    m_sortByHasBeenSet = true;
    m_sortBy = value;
  }
  inline ListRelationshipsSortBase& WithSortBy(ListRelationshipsSortName value) {
    SetSortBy(value);
    return *this;
  }
  ///@}
 private:
  SortOrder m_sortOrder{SortOrder::NOT_SET};
  bool m_sortOrderHasBeenSet = false;

  ListRelationshipsSortName m_sortBy{ListRelationshipsSortName::NOT_SET};
  bool m_sortByHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
