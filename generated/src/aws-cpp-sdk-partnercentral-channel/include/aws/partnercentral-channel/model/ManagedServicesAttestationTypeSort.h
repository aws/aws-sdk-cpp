/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/ManagedServicesAttestationTypeSortName.h>
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
 * <p>Sorting options specific to managed services attestation channel contracts.
 * Applies only to managed services attestation channel contracts.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/ManagedServicesAttestationTypeSort">AWS
 * API Reference</a></p>
 */
class ManagedServicesAttestationTypeSort {
 public:
  AWS_PARTNERCENTRALCHANNEL_API ManagedServicesAttestationTypeSort() = default;
  AWS_PARTNERCENTRALCHANNEL_API ManagedServicesAttestationTypeSort(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API ManagedServicesAttestationTypeSort& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  inline ManagedServicesAttestationTypeSort& WithSortOrder(SortOrder value) {
    SetSortOrder(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The field to sort by.</p>
   */
  inline ManagedServicesAttestationTypeSortName GetSortBy() const { return m_sortBy; }
  inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
  inline void SetSortBy(ManagedServicesAttestationTypeSortName value) {
    m_sortByHasBeenSet = true;
    m_sortBy = value;
  }
  inline ManagedServicesAttestationTypeSort& WithSortBy(ManagedServicesAttestationTypeSortName value) {
    SetSortBy(value);
    return *this;
  }
  ///@}
 private:
  SortOrder m_sortOrder{SortOrder::NOT_SET};

  ManagedServicesAttestationTypeSortName m_sortBy{ManagedServicesAttestationTypeSortName::NOT_SET};
  bool m_sortOrderHasBeenSet = false;
  bool m_sortByHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
