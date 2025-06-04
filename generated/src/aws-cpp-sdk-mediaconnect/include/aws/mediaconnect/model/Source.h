/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/Encryption.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/model/Transport.h>
#include <aws/mediaconnect/model/GatewayBridgeSource.h>
#include <aws/mediaconnect/model/MediaStreamSourceConfiguration.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * <p> The settings for the source of the flow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/Source">AWS
   * API Reference</a></p>
   */
  class Source
  {
  public:
    AWS_MEDIACONNECT_API Source() = default;
    AWS_MEDIACONNECT_API Source(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Source& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Percentage from 0-100 of the data transfer cost to be billed to the
     * subscriber.</p>
     */
    inline int GetDataTransferSubscriberFeePercent() const { return m_dataTransferSubscriberFeePercent; }
    inline bool DataTransferSubscriberFeePercentHasBeenSet() const { return m_dataTransferSubscriberFeePercentHasBeenSet; }
    inline void SetDataTransferSubscriberFeePercent(int value) { m_dataTransferSubscriberFeePercentHasBeenSet = true; m_dataTransferSubscriberFeePercent = value; }
    inline Source& WithDataTransferSubscriberFeePercent(int value) { SetDataTransferSubscriberFeePercent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of encryption that is used on the content ingested from this
     * source.</p>
     */
    inline const Encryption& GetDecryption() const { return m_decryption; }
    inline bool DecryptionHasBeenSet() const { return m_decryptionHasBeenSet; }
    template<typename DecryptionT = Encryption>
    void SetDecryption(DecryptionT&& value) { m_decryptionHasBeenSet = true; m_decryption = std::forward<DecryptionT>(value); }
    template<typename DecryptionT = Encryption>
    Source& WithDecryption(DecryptionT&& value) { SetDecryption(std::forward<DecryptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A description for the source. This value is not used or seen outside of the
     * current MediaConnect account.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Source& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the entitlement that allows you to subscribe to content that
     * comes from another Amazon Web Services account. The entitlement is set by the
     * content originator and the ARN is generated as part of the originator's
     * flow.</p>
     */
    inline const Aws::String& GetEntitlementArn() const { return m_entitlementArn; }
    inline bool EntitlementArnHasBeenSet() const { return m_entitlementArnHasBeenSet; }
    template<typename EntitlementArnT = Aws::String>
    void SetEntitlementArn(EntitlementArnT&& value) { m_entitlementArnHasBeenSet = true; m_entitlementArn = std::forward<EntitlementArnT>(value); }
    template<typename EntitlementArnT = Aws::String>
    Source& WithEntitlementArn(EntitlementArnT&& value) { SetEntitlementArn(std::forward<EntitlementArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The IP address that the flow will be listening on for incoming content.</p>
     */
    inline const Aws::String& GetIngestIp() const { return m_ingestIp; }
    inline bool IngestIpHasBeenSet() const { return m_ingestIpHasBeenSet; }
    template<typename IngestIpT = Aws::String>
    void SetIngestIp(IngestIpT&& value) { m_ingestIpHasBeenSet = true; m_ingestIp = std::forward<IngestIpT>(value); }
    template<typename IngestIpT = Aws::String>
    Source& WithIngestIp(IngestIpT&& value) { SetIngestIp(std::forward<IngestIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The port that the flow will be listening on for incoming content.</p>
     */
    inline int GetIngestPort() const { return m_ingestPort; }
    inline bool IngestPortHasBeenSet() const { return m_ingestPortHasBeenSet; }
    inline void SetIngestPort(int value) { m_ingestPortHasBeenSet = true; m_ingestPort = value; }
    inline Source& WithIngestPort(int value) { SetIngestPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The media streams that are associated with the source, and the parameters
     * for those associations.</p>
     */
    inline const Aws::Vector<MediaStreamSourceConfiguration>& GetMediaStreamSourceConfigurations() const { return m_mediaStreamSourceConfigurations; }
    inline bool MediaStreamSourceConfigurationsHasBeenSet() const { return m_mediaStreamSourceConfigurationsHasBeenSet; }
    template<typename MediaStreamSourceConfigurationsT = Aws::Vector<MediaStreamSourceConfiguration>>
    void SetMediaStreamSourceConfigurations(MediaStreamSourceConfigurationsT&& value) { m_mediaStreamSourceConfigurationsHasBeenSet = true; m_mediaStreamSourceConfigurations = std::forward<MediaStreamSourceConfigurationsT>(value); }
    template<typename MediaStreamSourceConfigurationsT = Aws::Vector<MediaStreamSourceConfiguration>>
    Source& WithMediaStreamSourceConfigurations(MediaStreamSourceConfigurationsT&& value) { SetMediaStreamSourceConfigurations(std::forward<MediaStreamSourceConfigurationsT>(value)); return *this;}
    template<typename MediaStreamSourceConfigurationsT = MediaStreamSourceConfiguration>
    Source& AddMediaStreamSourceConfigurations(MediaStreamSourceConfigurationsT&& value) { m_mediaStreamSourceConfigurationsHasBeenSet = true; m_mediaStreamSourceConfigurations.emplace_back(std::forward<MediaStreamSourceConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The name of the source.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Source& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The IP address that the flow communicates with to initiate connection with
     * the sender.</p>
     */
    inline int GetSenderControlPort() const { return m_senderControlPort; }
    inline bool SenderControlPortHasBeenSet() const { return m_senderControlPortHasBeenSet; }
    inline void SetSenderControlPort(int value) { m_senderControlPortHasBeenSet = true; m_senderControlPort = value; }
    inline Source& WithSenderControlPort(int value) { SetSenderControlPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The port that the flow uses to send outbound requests to initiate connection
     * with the sender.</p>
     */
    inline const Aws::String& GetSenderIpAddress() const { return m_senderIpAddress; }
    inline bool SenderIpAddressHasBeenSet() const { return m_senderIpAddressHasBeenSet; }
    template<typename SenderIpAddressT = Aws::String>
    void SetSenderIpAddress(SenderIpAddressT&& value) { m_senderIpAddressHasBeenSet = true; m_senderIpAddress = std::forward<SenderIpAddressT>(value); }
    template<typename SenderIpAddressT = Aws::String>
    Source& WithSenderIpAddress(SenderIpAddressT&& value) { SetSenderIpAddress(std::forward<SenderIpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the source.</p>
     */
    inline const Aws::String& GetSourceArn() const { return m_sourceArn; }
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
    template<typename SourceArnT = Aws::String>
    void SetSourceArn(SourceArnT&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::forward<SourceArnT>(value); }
    template<typename SourceArnT = Aws::String>
    Source& WithSourceArn(SourceArnT&& value) { SetSourceArn(std::forward<SourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Attributes related to the transport stream that are used in the source.</p>
     */
    inline const Transport& GetTransport() const { return m_transport; }
    inline bool TransportHasBeenSet() const { return m_transportHasBeenSet; }
    template<typename TransportT = Transport>
    void SetTransport(TransportT&& value) { m_transportHasBeenSet = true; m_transport = std::forward<TransportT>(value); }
    template<typename TransportT = Transport>
    Source& WithTransport(TransportT&& value) { SetTransport(std::forward<TransportT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the VPC interface that is used for this source.</p>
     */
    inline const Aws::String& GetVpcInterfaceName() const { return m_vpcInterfaceName; }
    inline bool VpcInterfaceNameHasBeenSet() const { return m_vpcInterfaceNameHasBeenSet; }
    template<typename VpcInterfaceNameT = Aws::String>
    void SetVpcInterfaceName(VpcInterfaceNameT&& value) { m_vpcInterfaceNameHasBeenSet = true; m_vpcInterfaceName = std::forward<VpcInterfaceNameT>(value); }
    template<typename VpcInterfaceNameT = Aws::String>
    Source& WithVpcInterfaceName(VpcInterfaceNameT&& value) { SetVpcInterfaceName(std::forward<VpcInterfaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The range of IP addresses that should be allowed to contribute content to
     * your source. These IP addresses should be in the form of a Classless
     * Inter-Domain Routing (CIDR) block; for example, 10.0.0.0/16.</p>
     */
    inline const Aws::String& GetWhitelistCidr() const { return m_whitelistCidr; }
    inline bool WhitelistCidrHasBeenSet() const { return m_whitelistCidrHasBeenSet; }
    template<typename WhitelistCidrT = Aws::String>
    void SetWhitelistCidr(WhitelistCidrT&& value) { m_whitelistCidrHasBeenSet = true; m_whitelistCidr = std::forward<WhitelistCidrT>(value); }
    template<typename WhitelistCidrT = Aws::String>
    Source& WithWhitelistCidr(WhitelistCidrT&& value) { SetWhitelistCidr(std::forward<WhitelistCidrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The source configuration for cloud flows receiving a stream from a
     * bridge.</p>
     */
    inline const GatewayBridgeSource& GetGatewayBridgeSource() const { return m_gatewayBridgeSource; }
    inline bool GatewayBridgeSourceHasBeenSet() const { return m_gatewayBridgeSourceHasBeenSet; }
    template<typename GatewayBridgeSourceT = GatewayBridgeSource>
    void SetGatewayBridgeSource(GatewayBridgeSourceT&& value) { m_gatewayBridgeSourceHasBeenSet = true; m_gatewayBridgeSource = std::forward<GatewayBridgeSourceT>(value); }
    template<typename GatewayBridgeSourceT = GatewayBridgeSource>
    Source& WithGatewayBridgeSource(GatewayBridgeSourceT&& value) { SetGatewayBridgeSource(std::forward<GatewayBridgeSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the device that is currently sending content to this
     * source. </p>  <ul> <li> <p>For sources that use protocols where you
     * specify the origin (such as SRT Caller), this value matches the configured
     * origin address. </p> </li> <li> <p>For sources that use listener protocols (such
     * as SRT Listener or RTP), this value shows the address of the connected sender.
     * </p> </li> <li> <p>Peer IP addresses aren't available for entitlements and
     * CDI/ST2110 sources.</p> </li> <li> <p>The peer IP address might not be visible
     * for flows that haven't been started yet, or flows that were started before May
     * 2025. In these cases, restart your flow to see the peer IP address.</p> </li>
     * </ul> 
     */
    inline const Aws::String& GetPeerIpAddress() const { return m_peerIpAddress; }
    inline bool PeerIpAddressHasBeenSet() const { return m_peerIpAddressHasBeenSet; }
    template<typename PeerIpAddressT = Aws::String>
    void SetPeerIpAddress(PeerIpAddressT&& value) { m_peerIpAddressHasBeenSet = true; m_peerIpAddress = std::forward<PeerIpAddressT>(value); }
    template<typename PeerIpAddressT = Aws::String>
    Source& WithPeerIpAddress(PeerIpAddressT&& value) { SetPeerIpAddress(std::forward<PeerIpAddressT>(value)); return *this;}
    ///@}
  private:

    int m_dataTransferSubscriberFeePercent{0};
    bool m_dataTransferSubscriberFeePercentHasBeenSet = false;

    Encryption m_decryption;
    bool m_decryptionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_entitlementArn;
    bool m_entitlementArnHasBeenSet = false;

    Aws::String m_ingestIp;
    bool m_ingestIpHasBeenSet = false;

    int m_ingestPort{0};
    bool m_ingestPortHasBeenSet = false;

    Aws::Vector<MediaStreamSourceConfiguration> m_mediaStreamSourceConfigurations;
    bool m_mediaStreamSourceConfigurationsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_senderControlPort{0};
    bool m_senderControlPortHasBeenSet = false;

    Aws::String m_senderIpAddress;
    bool m_senderIpAddressHasBeenSet = false;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    Transport m_transport;
    bool m_transportHasBeenSet = false;

    Aws::String m_vpcInterfaceName;
    bool m_vpcInterfaceNameHasBeenSet = false;

    Aws::String m_whitelistCidr;
    bool m_whitelistCidrHasBeenSet = false;

    GatewayBridgeSource m_gatewayBridgeSource;
    bool m_gatewayBridgeSourceHasBeenSet = false;

    Aws::String m_peerIpAddress;
    bool m_peerIpAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
