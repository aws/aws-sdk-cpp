/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/ManagedServicesAttestationTypeSort.h>

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
 * <p>Type-specific sorting options for listing channel contracts.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/ListChannelContractsTypeSort">AWS
 * API Reference</a></p>
 */
class ListChannelContractsTypeSort {
 public:
  AWS_PARTNERCENTRALCHANNEL_API ListChannelContractsTypeSort() = default;
  AWS_PARTNERCENTRALCHANNEL_API ListChannelContractsTypeSort(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API ListChannelContractsTypeSort& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Sorting options specific to managed services attestation channel contracts.
   * Applies only to managed services attestation channel contracts.</p>
   */
  inline const ManagedServicesAttestationTypeSort& GetManagedServicesAttestationTypeSort() const {
    return m_managedServicesAttestationTypeSort;
  }
  inline bool ManagedServicesAttestationTypeSortHasBeenSet() const { return m_managedServicesAttestationTypeSortHasBeenSet; }
  template <typename ManagedServicesAttestationTypeSortT = ManagedServicesAttestationTypeSort>
  void SetManagedServicesAttestationTypeSort(ManagedServicesAttestationTypeSortT&& value) {
    m_managedServicesAttestationTypeSortHasBeenSet = true;
    m_managedServicesAttestationTypeSort = std::forward<ManagedServicesAttestationTypeSortT>(value);
  }
  template <typename ManagedServicesAttestationTypeSortT = ManagedServicesAttestationTypeSort>
  ListChannelContractsTypeSort& WithManagedServicesAttestationTypeSort(ManagedServicesAttestationTypeSortT&& value) {
    SetManagedServicesAttestationTypeSort(std::forward<ManagedServicesAttestationTypeSortT>(value));
    return *this;
  }
  ///@}
 private:
  ManagedServicesAttestationTypeSort m_managedServicesAttestationTypeSort;
  bool m_managedServicesAttestationTypeSortHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
