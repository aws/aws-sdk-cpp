/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/NatGatewayAttachmentStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace NetworkFirewall {
namespace Model {

/**
 * <p>The NAT gateway that's attached to a proxy mode firewall in an Availability
 * Zone, and the status of the attachment. Traffic that the firewall allows in the
 * Availability Zone leaves through this NAT gateway.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/NatGatewayAttachment">AWS
 * API Reference</a></p>
 */
class NatGatewayAttachment {
 public:
  AWS_NETWORKFIREWALL_API NatGatewayAttachment() = default;
  AWS_NETWORKFIREWALL_API NatGatewayAttachment(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API NatGatewayAttachment& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_NETWORKFIREWALL_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The ID of the NAT gateway.</p>
   */
  inline const Aws::String& GetNatGatewayId() const { return m_natGatewayId; }
  inline bool NatGatewayIdHasBeenSet() const { return m_natGatewayIdHasBeenSet; }
  template <typename NatGatewayIdT = Aws::String>
  void SetNatGatewayId(NatGatewayIdT&& value) {
    m_natGatewayIdHasBeenSet = true;
    m_natGatewayId = std::forward<NatGatewayIdT>(value);
  }
  template <typename NatGatewayIdT = Aws::String>
  NatGatewayAttachment& WithNatGatewayId(NatGatewayIdT&& value) {
    SetNatGatewayId(std::forward<NatGatewayIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the NAT gateway attachment. <code>READY</code> means that the
   * NAT gateway is attached and the firewall can send traffic through it. Other
   * values are <code>CREATING</code>, <code>UPDATING</code>, <code>DELETING</code>,
   * and <code>FAILED</code>.</p>
   */
  inline NatGatewayAttachmentStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(NatGatewayAttachmentStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline NatGatewayAttachment& WithStatus(NatGatewayAttachmentStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason that Network Firewall couldn't create or attach the NAT gateway,
   * if it couldn't.</p>
   */
  inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
  inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
  template <typename StatusMessageT = Aws::String>
  void SetStatusMessage(StatusMessageT&& value) {
    m_statusMessageHasBeenSet = true;
    m_statusMessage = std::forward<StatusMessageT>(value);
  }
  template <typename StatusMessageT = Aws::String>
  NatGatewayAttachment& WithStatusMessage(StatusMessageT&& value) {
    SetStatusMessage(std::forward<StatusMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The proxy DNS name of the firewall in this Availability Zone. This is the
   * same as the <code>DnsName</code> of the firewall's <code>Attachment</code>.</p>
   */
  inline const Aws::String& GetDnsName() const { return m_dnsName; }
  inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }
  template <typename DnsNameT = Aws::String>
  void SetDnsName(DnsNameT&& value) {
    m_dnsNameHasBeenSet = true;
    m_dnsName = std::forward<DnsNameT>(value);
  }
  template <typename DnsNameT = Aws::String>
  NatGatewayAttachment& WithDnsName(DnsNameT&& value) {
    SetDnsName(std::forward<DnsNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_natGatewayId;

  NatGatewayAttachmentStatus m_status{NatGatewayAttachmentStatus::NOT_SET};

  Aws::String m_statusMessage;

  Aws::String m_dnsName;
  bool m_natGatewayIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusMessageHasBeenSet = false;
  bool m_dnsNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws
