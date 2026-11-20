/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/ManagedServicesAttestationDetails.h>

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
 * <p>Contains detailed information about different types of channel
 * contracts.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/ChannelContractDetails">AWS
 * API Reference</a></p>
 */
class ChannelContractDetails {
 public:
  AWS_PARTNERCENTRALCHANNEL_API ChannelContractDetails() = default;
  AWS_PARTNERCENTRALCHANNEL_API ChannelContractDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API ChannelContractDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Details specific to managed services attestation channel contracts. Applies
   * only to managed services attestation channel contracts.</p>
   */
  inline const ManagedServicesAttestationDetails& GetManagedServicesAttestationDetails() const {
    return m_managedServicesAttestationDetails;
  }
  inline bool ManagedServicesAttestationDetailsHasBeenSet() const { return m_managedServicesAttestationDetailsHasBeenSet; }
  template <typename ManagedServicesAttestationDetailsT = ManagedServicesAttestationDetails>
  void SetManagedServicesAttestationDetails(ManagedServicesAttestationDetailsT&& value) {
    m_managedServicesAttestationDetailsHasBeenSet = true;
    m_managedServicesAttestationDetails = std::forward<ManagedServicesAttestationDetailsT>(value);
  }
  template <typename ManagedServicesAttestationDetailsT = ManagedServicesAttestationDetails>
  ChannelContractDetails& WithManagedServicesAttestationDetails(ManagedServicesAttestationDetailsT&& value) {
    SetManagedServicesAttestationDetails(std::forward<ManagedServicesAttestationDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  ManagedServicesAttestationDetails m_managedServicesAttestationDetails;
  bool m_managedServicesAttestationDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
