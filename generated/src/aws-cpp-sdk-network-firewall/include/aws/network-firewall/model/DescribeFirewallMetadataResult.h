/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/FirewallStatusValue.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/network-firewall/model/AvailabilityZoneMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace NetworkFirewall
{
namespace Model
{
  class DescribeFirewallMetadataResult
  {
  public:
    AWS_NETWORKFIREWALL_API DescribeFirewallMetadataResult() = default;
    AWS_NETWORKFIREWALL_API DescribeFirewallMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API DescribeFirewallMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the firewall.</p>
     */
    inline const Aws::String& GetFirewallArn() const { return m_firewallArn; }
    template<typename FirewallArnT = Aws::String>
    void SetFirewallArn(FirewallArnT&& value) { m_firewallArnHasBeenSet = true; m_firewallArn = std::forward<FirewallArnT>(value); }
    template<typename FirewallArnT = Aws::String>
    DescribeFirewallMetadataResult& WithFirewallArn(FirewallArnT&& value) { SetFirewallArn(std::forward<FirewallArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the firewall policy.</p>
     */
    inline const Aws::String& GetFirewallPolicyArn() const { return m_firewallPolicyArn; }
    template<typename FirewallPolicyArnT = Aws::String>
    void SetFirewallPolicyArn(FirewallPolicyArnT&& value) { m_firewallPolicyArnHasBeenSet = true; m_firewallPolicyArn = std::forward<FirewallPolicyArnT>(value); }
    template<typename FirewallPolicyArnT = Aws::String>
    DescribeFirewallMetadataResult& WithFirewallPolicyArn(FirewallPolicyArnT&& value) { SetFirewallPolicyArn(std::forward<FirewallPolicyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the firewall.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeFirewallMetadataResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The readiness of the configured firewall to handle network traffic across all
     * of the Availability Zones where you have it configured. This setting is
     * <code>READY</code> only when the <code>ConfigurationSyncStateSummary</code>
     * value is <code>IN_SYNC</code> and the <code>Attachment</code>
     * <code>Status</code> values for all of the configured subnets are
     * <code>READY</code>. </p>
     */
    inline FirewallStatusValue GetStatus() const { return m_status; }
    inline void SetStatus(FirewallStatusValue value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeFirewallMetadataResult& WithStatus(FirewallStatusValue value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zones that the firewall currently supports. This includes
     * all Availability Zones for which the firewall has a subnet defined. </p>
     */
    inline const Aws::Map<Aws::String, AvailabilityZoneMetadata>& GetSupportedAvailabilityZones() const { return m_supportedAvailabilityZones; }
    template<typename SupportedAvailabilityZonesT = Aws::Map<Aws::String, AvailabilityZoneMetadata>>
    void SetSupportedAvailabilityZones(SupportedAvailabilityZonesT&& value) { m_supportedAvailabilityZonesHasBeenSet = true; m_supportedAvailabilityZones = std::forward<SupportedAvailabilityZonesT>(value); }
    template<typename SupportedAvailabilityZonesT = Aws::Map<Aws::String, AvailabilityZoneMetadata>>
    DescribeFirewallMetadataResult& WithSupportedAvailabilityZones(SupportedAvailabilityZonesT&& value) { SetSupportedAvailabilityZones(std::forward<SupportedAvailabilityZonesT>(value)); return *this;}
    template<typename SupportedAvailabilityZonesKeyT = Aws::String, typename SupportedAvailabilityZonesValueT = AvailabilityZoneMetadata>
    DescribeFirewallMetadataResult& AddSupportedAvailabilityZones(SupportedAvailabilityZonesKeyT&& key, SupportedAvailabilityZonesValueT&& value) {
      m_supportedAvailabilityZonesHasBeenSet = true; m_supportedAvailabilityZones.emplace(std::forward<SupportedAvailabilityZonesKeyT>(key), std::forward<SupportedAvailabilityZonesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the transit gateway attachment associated with this
     * firewall. This field is only present for transit gateway-attached firewalls.</p>
     */
    inline const Aws::String& GetTransitGatewayAttachmentId() const { return m_transitGatewayAttachmentId; }
    template<typename TransitGatewayAttachmentIdT = Aws::String>
    void SetTransitGatewayAttachmentId(TransitGatewayAttachmentIdT&& value) { m_transitGatewayAttachmentIdHasBeenSet = true; m_transitGatewayAttachmentId = std::forward<TransitGatewayAttachmentIdT>(value); }
    template<typename TransitGatewayAttachmentIdT = Aws::String>
    DescribeFirewallMetadataResult& WithTransitGatewayAttachmentId(TransitGatewayAttachmentIdT&& value) { SetTransitGatewayAttachmentId(std::forward<TransitGatewayAttachmentIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeFirewallMetadataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_firewallArn;
    bool m_firewallArnHasBeenSet = false;

    Aws::String m_firewallPolicyArn;
    bool m_firewallPolicyArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    FirewallStatusValue m_status{FirewallStatusValue::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, AvailabilityZoneMetadata> m_supportedAvailabilityZones;
    bool m_supportedAvailabilityZonesHasBeenSet = false;

    Aws::String m_transitGatewayAttachmentId;
    bool m_transitGatewayAttachmentIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
