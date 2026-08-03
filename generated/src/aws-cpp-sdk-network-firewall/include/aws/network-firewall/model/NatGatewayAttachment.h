/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/NatGatewayAttachmentStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkFirewall {
namespace Model {

/**
 * <p>The definition and status of the attachment between a proxy mode firewall and
 * a NAT gateway that proxies its traffic. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/NatGatewayAttachment">AWS
 * API Reference</a></p>
 */
class NatGatewayAttachment {
 public:
  AWS_NETWORKFIREWALL_API NatGatewayAttachment() = default;
  AWS_NETWORKFIREWALL_API NatGatewayAttachment(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API NatGatewayAttachment& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A unique identifier for the NAT gateway to use with proxy resources.</p>
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
   * <p>The current status of the NAT gateway attachment. </p> <p>When this value is
   * <code>READY</code>, the attachment is available to proxy traffic. Otherwise,
   * this value reflects its state, for example <code>CREATING</code> or
   * <code>DELETING</code>.</p>
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
   * <p>If Network Firewall encounters an issue with the NAT gateway attachment, it
   * populates this with an explanation of the problem. </p>
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
   * <p>The DNS name that resolves to the firewall's proxy for traffic sent through
   * this NAT gateway attachment. </p>
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
