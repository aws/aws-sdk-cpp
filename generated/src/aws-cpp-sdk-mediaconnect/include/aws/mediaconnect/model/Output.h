/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/Encryption.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/model/Transport.h>
#include <aws/mediaconnect/model/VpcInterfaceAttachment.h>
#include <aws/mediaconnect/model/OutputStatus.h>
#include <aws/mediaconnect/model/MediaStreamOutputConfiguration.h>
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
   * <p>The settings for an output. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/Output">AWS
   * API Reference</a></p>
   */
  class Output
  {
  public:
    AWS_MEDIACONNECT_API Output() = default;
    AWS_MEDIACONNECT_API Output(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Output& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Percentage from 0-100 of the data transfer cost to be billed to the
     * subscriber.</p>
     */
    inline int GetDataTransferSubscriberFeePercent() const { return m_dataTransferSubscriberFeePercent; }
    inline bool DataTransferSubscriberFeePercentHasBeenSet() const { return m_dataTransferSubscriberFeePercentHasBeenSet; }
    inline void SetDataTransferSubscriberFeePercent(int value) { m_dataTransferSubscriberFeePercentHasBeenSet = true; m_dataTransferSubscriberFeePercent = value; }
    inline Output& WithDataTransferSubscriberFeePercent(int value) { SetDataTransferSubscriberFeePercent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A description of the output.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Output& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The address where you want to send the output.</p>
     */
    inline const Aws::String& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = Aws::String>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Aws::String>
    Output& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of key used for the encryption. If no keyType is provided, the
     * service will use the default setting (static-key).</p>
     */
    inline const Encryption& GetEncryption() const { return m_encryption; }
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }
    template<typename EncryptionT = Encryption>
    void SetEncryption(EncryptionT&& value) { m_encryptionHasBeenSet = true; m_encryption = std::forward<EncryptionT>(value); }
    template<typename EncryptionT = Encryption>
    Output& WithEncryption(EncryptionT&& value) { SetEncryption(std::forward<EncryptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the entitlement on the originator''s flow. This value is relevant
     * only on entitled flows.</p>
     */
    inline const Aws::String& GetEntitlementArn() const { return m_entitlementArn; }
    inline bool EntitlementArnHasBeenSet() const { return m_entitlementArnHasBeenSet; }
    template<typename EntitlementArnT = Aws::String>
    void SetEntitlementArn(EntitlementArnT&& value) { m_entitlementArnHasBeenSet = true; m_entitlementArn = std::forward<EntitlementArnT>(value); }
    template<typename EntitlementArnT = Aws::String>
    Output& WithEntitlementArn(EntitlementArnT&& value) { SetEntitlementArn(std::forward<EntitlementArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The IP address that the receiver requires in order to establish a connection
     * with the flow. For public networking, the ListenerAddress is represented by the
     * elastic IP address of the flow. For private networking, the ListenerAddress is
     * represented by the elastic network interface IP address of the VPC. This field
     * applies only to outputs that use the Zixi pull or SRT listener protocol.</p>
     */
    inline const Aws::String& GetListenerAddress() const { return m_listenerAddress; }
    inline bool ListenerAddressHasBeenSet() const { return m_listenerAddressHasBeenSet; }
    template<typename ListenerAddressT = Aws::String>
    void SetListenerAddress(ListenerAddressT&& value) { m_listenerAddressHasBeenSet = true; m_listenerAddress = std::forward<ListenerAddressT>(value); }
    template<typename ListenerAddressT = Aws::String>
    Output& WithListenerAddress(ListenerAddressT&& value) { SetListenerAddress(std::forward<ListenerAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The input ARN of the MediaLive channel. This parameter is relevant only for
     * outputs that were added by creating a MediaLive input.</p>
     */
    inline const Aws::String& GetMediaLiveInputArn() const { return m_mediaLiveInputArn; }
    inline bool MediaLiveInputArnHasBeenSet() const { return m_mediaLiveInputArnHasBeenSet; }
    template<typename MediaLiveInputArnT = Aws::String>
    void SetMediaLiveInputArn(MediaLiveInputArnT&& value) { m_mediaLiveInputArnHasBeenSet = true; m_mediaLiveInputArn = std::forward<MediaLiveInputArnT>(value); }
    template<typename MediaLiveInputArnT = Aws::String>
    Output& WithMediaLiveInputArn(MediaLiveInputArnT&& value) { SetMediaLiveInputArn(std::forward<MediaLiveInputArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The configuration for each media stream that is associated with the
     * output.</p>
     */
    inline const Aws::Vector<MediaStreamOutputConfiguration>& GetMediaStreamOutputConfigurations() const { return m_mediaStreamOutputConfigurations; }
    inline bool MediaStreamOutputConfigurationsHasBeenSet() const { return m_mediaStreamOutputConfigurationsHasBeenSet; }
    template<typename MediaStreamOutputConfigurationsT = Aws::Vector<MediaStreamOutputConfiguration>>
    void SetMediaStreamOutputConfigurations(MediaStreamOutputConfigurationsT&& value) { m_mediaStreamOutputConfigurationsHasBeenSet = true; m_mediaStreamOutputConfigurations = std::forward<MediaStreamOutputConfigurationsT>(value); }
    template<typename MediaStreamOutputConfigurationsT = Aws::Vector<MediaStreamOutputConfiguration>>
    Output& WithMediaStreamOutputConfigurations(MediaStreamOutputConfigurationsT&& value) { SetMediaStreamOutputConfigurations(std::forward<MediaStreamOutputConfigurationsT>(value)); return *this;}
    template<typename MediaStreamOutputConfigurationsT = MediaStreamOutputConfiguration>
    Output& AddMediaStreamOutputConfigurations(MediaStreamOutputConfigurationsT&& value) { m_mediaStreamOutputConfigurationsHasBeenSet = true; m_mediaStreamOutputConfigurations.emplace_back(std::forward<MediaStreamOutputConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The name of the output. This value must be unique within the current
     * flow.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Output& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the output.</p>
     */
    inline const Aws::String& GetOutputArn() const { return m_outputArn; }
    inline bool OutputArnHasBeenSet() const { return m_outputArnHasBeenSet; }
    template<typename OutputArnT = Aws::String>
    void SetOutputArn(OutputArnT&& value) { m_outputArnHasBeenSet = true; m_outputArn = std::forward<OutputArnT>(value); }
    template<typename OutputArnT = Aws::String>
    Output& WithOutputArn(OutputArnT&& value) { SetOutputArn(std::forward<OutputArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The port to use when content is distributed to this output.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline Output& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Attributes related to the transport stream that are used in the output.</p>
     */
    inline const Transport& GetTransport() const { return m_transport; }
    inline bool TransportHasBeenSet() const { return m_transportHasBeenSet; }
    template<typename TransportT = Transport>
    void SetTransport(TransportT&& value) { m_transportHasBeenSet = true; m_transport = std::forward<TransportT>(value); }
    template<typename TransportT = Transport>
    Output& WithTransport(TransportT&& value) { SetTransport(std::forward<TransportT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the VPC interface attachment to use for this output.</p>
     */
    inline const VpcInterfaceAttachment& GetVpcInterfaceAttachment() const { return m_vpcInterfaceAttachment; }
    inline bool VpcInterfaceAttachmentHasBeenSet() const { return m_vpcInterfaceAttachmentHasBeenSet; }
    template<typename VpcInterfaceAttachmentT = VpcInterfaceAttachment>
    void SetVpcInterfaceAttachment(VpcInterfaceAttachmentT&& value) { m_vpcInterfaceAttachmentHasBeenSet = true; m_vpcInterfaceAttachment = std::forward<VpcInterfaceAttachmentT>(value); }
    template<typename VpcInterfaceAttachmentT = VpcInterfaceAttachment>
    Output& WithVpcInterfaceAttachment(VpcInterfaceAttachmentT&& value) { SetVpcInterfaceAttachment(std::forward<VpcInterfaceAttachmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the bridge added to this output.</p>
     */
    inline const Aws::String& GetBridgeArn() const { return m_bridgeArn; }
    inline bool BridgeArnHasBeenSet() const { return m_bridgeArnHasBeenSet; }
    template<typename BridgeArnT = Aws::String>
    void SetBridgeArn(BridgeArnT&& value) { m_bridgeArnHasBeenSet = true; m_bridgeArn = std::forward<BridgeArnT>(value); }
    template<typename BridgeArnT = Aws::String>
    Output& WithBridgeArn(BridgeArnT&& value) { SetBridgeArn(std::forward<BridgeArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The bridge output ports currently in use.</p>
     */
    inline const Aws::Vector<int>& GetBridgePorts() const { return m_bridgePorts; }
    inline bool BridgePortsHasBeenSet() const { return m_bridgePortsHasBeenSet; }
    template<typename BridgePortsT = Aws::Vector<int>>
    void SetBridgePorts(BridgePortsT&& value) { m_bridgePortsHasBeenSet = true; m_bridgePorts = std::forward<BridgePortsT>(value); }
    template<typename BridgePortsT = Aws::Vector<int>>
    Output& WithBridgePorts(BridgePortsT&& value) { SetBridgePorts(std::forward<BridgePortsT>(value)); return *this;}
    inline Output& AddBridgePorts(int value) { m_bridgePortsHasBeenSet = true; m_bridgePorts.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> An indication of whether the output is transmitting data or not.</p>
     */
    inline OutputStatus GetOutputStatus() const { return m_outputStatus; }
    inline bool OutputStatusHasBeenSet() const { return m_outputStatusHasBeenSet; }
    inline void SetOutputStatus(OutputStatus value) { m_outputStatusHasBeenSet = true; m_outputStatus = value; }
    inline Output& WithOutputStatus(OutputStatus value) { SetOutputStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the device that is currently receiving content from this
     * output.</p>  <ul> <li> <p>For outputs that use protocols where you specify
     * the destination (such as SRT Caller or Zixi Push), this value matches the
     * configured destination address.</p> </li> <li> <p>For outputs that use listener
     * protocols (such as SRT Listener), this value shows the address of the connected
     * receiver. </p> </li> <li> <p>Peer IP addresses aren't available for
     * entitlements, managed MediaLive outputs, NDI outputs, and CDI/ST2110 outputs.
     * </p> </li> <li> <p>The peer IP address might not be visible for flows that
     * haven't been started yet, or flows that were started before May 2025. In these
     * cases, restart your flow to see the peer IP address.</p> </li> </ul> 
     */
    inline const Aws::String& GetPeerIpAddress() const { return m_peerIpAddress; }
    inline bool PeerIpAddressHasBeenSet() const { return m_peerIpAddressHasBeenSet; }
    template<typename PeerIpAddressT = Aws::String>
    void SetPeerIpAddress(PeerIpAddressT&& value) { m_peerIpAddressHasBeenSet = true; m_peerIpAddress = std::forward<PeerIpAddressT>(value); }
    template<typename PeerIpAddressT = Aws::String>
    Output& WithPeerIpAddress(PeerIpAddressT&& value) { SetPeerIpAddress(std::forward<PeerIpAddressT>(value)); return *this;}
    ///@}
  private:

    int m_dataTransferSubscriberFeePercent{0};
    bool m_dataTransferSubscriberFeePercentHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    Encryption m_encryption;
    bool m_encryptionHasBeenSet = false;

    Aws::String m_entitlementArn;
    bool m_entitlementArnHasBeenSet = false;

    Aws::String m_listenerAddress;
    bool m_listenerAddressHasBeenSet = false;

    Aws::String m_mediaLiveInputArn;
    bool m_mediaLiveInputArnHasBeenSet = false;

    Aws::Vector<MediaStreamOutputConfiguration> m_mediaStreamOutputConfigurations;
    bool m_mediaStreamOutputConfigurationsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_outputArn;
    bool m_outputArnHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Transport m_transport;
    bool m_transportHasBeenSet = false;

    VpcInterfaceAttachment m_vpcInterfaceAttachment;
    bool m_vpcInterfaceAttachmentHasBeenSet = false;

    Aws::String m_bridgeArn;
    bool m_bridgeArnHasBeenSet = false;

    Aws::Vector<int> m_bridgePorts;
    bool m_bridgePortsHasBeenSet = false;

    OutputStatus m_outputStatus{OutputStatus::NOT_SET};
    bool m_outputStatusHasBeenSet = false;

    Aws::String m_peerIpAddress;
    bool m_peerIpAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
