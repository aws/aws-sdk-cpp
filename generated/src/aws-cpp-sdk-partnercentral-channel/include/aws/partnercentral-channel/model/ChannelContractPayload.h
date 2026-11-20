/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/ManagedServicesAttestationPayload.h>

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
 * <p>Contains the payload data for different types of channel
 * contracts.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-channel-2024-03-18/ChannelContractPayload">AWS
 * API Reference</a></p>
 */
class ChannelContractPayload {
 public:
  AWS_PARTNERCENTRALCHANNEL_API ChannelContractPayload() = default;
  AWS_PARTNERCENTRALCHANNEL_API ChannelContractPayload(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API ChannelContractPayload& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALCHANNEL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Payload for creating a managed services attestation channel contract. Applies
   * only to managed services attestation channel contracts.</p>
   */
  inline const ManagedServicesAttestationPayload& GetManagedServicesAttestationPayload() const {
    return m_managedServicesAttestationPayload;
  }
  inline bool ManagedServicesAttestationPayloadHasBeenSet() const { return m_managedServicesAttestationPayloadHasBeenSet; }
  template <typename ManagedServicesAttestationPayloadT = ManagedServicesAttestationPayload>
  void SetManagedServicesAttestationPayload(ManagedServicesAttestationPayloadT&& value) {
    m_managedServicesAttestationPayloadHasBeenSet = true;
    m_managedServicesAttestationPayload = std::forward<ManagedServicesAttestationPayloadT>(value);
  }
  template <typename ManagedServicesAttestationPayloadT = ManagedServicesAttestationPayload>
  ChannelContractPayload& WithManagedServicesAttestationPayload(ManagedServicesAttestationPayloadT&& value) {
    SetManagedServicesAttestationPayload(std::forward<ManagedServicesAttestationPayloadT>(value));
    return *this;
  }
  ///@}
 private:
  ManagedServicesAttestationPayload m_managedServicesAttestationPayload;
  bool m_managedServicesAttestationPayloadHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralChannel
}  // namespace Aws
