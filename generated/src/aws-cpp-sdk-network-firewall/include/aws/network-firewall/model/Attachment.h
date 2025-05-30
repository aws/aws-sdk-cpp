/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/AttachmentStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>The definition and status of the firewall endpoint for a single subnet. In
   * each configured subnet, Network Firewall instantiates a firewall endpoint to
   * handle network traffic. </p> <p>This data type is used for any firewall endpoint
   * type: </p> <ul> <li> <p>For <code>Firewall.SubnetMappings</code>, this
   * <code>Attachment</code> is part of the <code>FirewallStatus</code> sync states
   * information. You define firewall subnets using <code>CreateFirewall</code> and
   * <code>AssociateSubnets</code>. </p> </li> <li> <p>For
   * <code>VpcEndpointAssociation</code>, this <code>Attachment</code> is part of the
   * <code>VpcEndpointAssociationStatus</code> sync states information. You define
   * these subnets using <code>CreateVpcEndpointAssociation</code>. </p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/Attachment">AWS
   * API Reference</a></p>
   */
  class Attachment
  {
  public:
    AWS_NETWORKFIREWALL_API Attachment() = default;
    AWS_NETWORKFIREWALL_API Attachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Attachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the subnet that you've specified to be used for a
     * firewall endpoint. </p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    Attachment& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the firewall endpoint that Network Firewall has
     * instantiated in the subnet. You use this to identify the firewall endpoint in
     * the VPC route tables, when you redirect the VPC traffic through the endpoint.
     * </p>
     */
    inline const Aws::String& GetEndpointId() const { return m_endpointId; }
    inline bool EndpointIdHasBeenSet() const { return m_endpointIdHasBeenSet; }
    template<typename EndpointIdT = Aws::String>
    void SetEndpointId(EndpointIdT&& value) { m_endpointIdHasBeenSet = true; m_endpointId = std::forward<EndpointIdT>(value); }
    template<typename EndpointIdT = Aws::String>
    Attachment& WithEndpointId(EndpointIdT&& value) { SetEndpointId(std::forward<EndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the firewall endpoint instantiation in the subnet. </p>
     * <p>When this value is <code>READY</code>, the endpoint is available to handle
     * network traffic. Otherwise, this value reflects its state, for example
     * <code>CREATING</code> or <code>DELETING</code>.</p>
     */
    inline AttachmentStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AttachmentStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Attachment& WithStatus(AttachmentStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If Network Firewall fails to create or delete the firewall endpoint in the
     * subnet, it populates this with the reason for the error or failure and how to
     * resolve it. A <code>FAILED</code> status indicates a non-recoverable state, and
     * a <code>ERROR</code> status indicates an issue that you can fix. Depending on
     * the error, it can take as many as 15 minutes to populate this field. For more
     * information about the causes for failiure or errors and solutions available for
     * this field, see <a
     * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/firewall-troubleshooting-endpoint-failures.html">Troubleshooting
     * firewall endpoint failures</a> in the <i>Network Firewall Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    Attachment& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_endpointId;
    bool m_endpointIdHasBeenSet = false;

    AttachmentStatus m_status{AttachmentStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
