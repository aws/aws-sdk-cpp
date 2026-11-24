/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/ManagedServicesAttestationTypeFilters.h>

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
 * <p>Type-specific filters for listing channel contracts.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/ListChannelContractsTypeFilters">AWS
 * API Reference</a></p>
 */
class ListChannelContractsTypeFilters {
 public:
  AWS_PARTNERCENTRALCHANNEL_API ListChannelContractsTypeFilters() = default;
  AWS_PARTNERCENTRALCHANNEL_API ListChannelContractsTypeFilters(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API ListChannelContractsTypeFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Filters specific to managed services attestation channel contracts. Applies
   * only to managed services attestation channel contracts.</p>
   */
  inline const ManagedServicesAttestationTypeFilters& GetManagedServicesAttestationTypeFilters() const {
    return m_managedServicesAttestationTypeFilters;
  }
  inline bool ManagedServicesAttestationTypeFiltersHasBeenSet() const { return m_managedServicesAttestationTypeFiltersHasBeenSet; }
  template <typename ManagedServicesAttestationTypeFiltersT = ManagedServicesAttestationTypeFilters>
  void SetManagedServicesAttestationTypeFilters(ManagedServicesAttestationTypeFiltersT&& value) {
    m_managedServicesAttestationTypeFiltersHasBeenSet = true;
    m_managedServicesAttestationTypeFilters = std::forward<ManagedServicesAttestationTypeFiltersT>(value);
  }
  template <typename ManagedServicesAttestationTypeFiltersT = ManagedServicesAttestationTypeFilters>
  ListChannelContractsTypeFilters& WithManagedServicesAttestationTypeFilters(ManagedServicesAttestationTypeFiltersT&& value) {
    SetManagedServicesAttestationTypeFilters(std::forward<ManagedServicesAttestationTypeFiltersT>(value));
    return *this;
  }
  ///@}
 private:
  ManagedServicesAttestationTypeFilters m_managedServicesAttestationTypeFilters;
  bool m_managedServicesAttestationTypeFiltersHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
