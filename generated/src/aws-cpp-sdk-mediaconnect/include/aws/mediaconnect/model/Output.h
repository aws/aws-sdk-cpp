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
   * The settings for an output.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/Output">AWS
   * API Reference</a></p>
   */
  class Output
  {
  public:
    AWS_MEDIACONNECT_API Output();
    AWS_MEDIACONNECT_API Output(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Output& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Percentage from 0-100 of the data transfer cost to be billed to the subscriber.
     */
    inline int GetDataTransferSubscriberFeePercent() const{ return m_dataTransferSubscriberFeePercent; }
    inline bool DataTransferSubscriberFeePercentHasBeenSet() const { return m_dataTransferSubscriberFeePercentHasBeenSet; }
    inline void SetDataTransferSubscriberFeePercent(int value) { m_dataTransferSubscriberFeePercentHasBeenSet = true; m_dataTransferSubscriberFeePercent = value; }
    inline Output& WithDataTransferSubscriberFeePercent(int value) { SetDataTransferSubscriberFeePercent(value); return *this;}
    ///@}

    ///@{
    /**
     * A description of the output.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Output& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Output& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Output& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * The address where you want to send the output.
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }
    inline Output& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}
    inline Output& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}
    inline Output& WithDestination(const char* value) { SetDestination(value); return *this;}
    ///@}

    ///@{
    /**
     * The type of key used for the encryption. If no keyType is provided, the service
     * will use the default setting (static-key).
     */
    inline const Encryption& GetEncryption() const{ return m_encryption; }
    inline bool EncryptionHasBeenSet() const { return m_encryptionHasBeenSet; }
    inline void SetEncryption(const Encryption& value) { m_encryptionHasBeenSet = true; m_encryption = value; }
    inline void SetEncryption(Encryption&& value) { m_encryptionHasBeenSet = true; m_encryption = std::move(value); }
    inline Output& WithEncryption(const Encryption& value) { SetEncryption(value); return *this;}
    inline Output& WithEncryption(Encryption&& value) { SetEncryption(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the entitlement on the originator''s flow. This value is relevant
     * only on entitled flows.
     */
    inline const Aws::String& GetEntitlementArn() const{ return m_entitlementArn; }
    inline bool EntitlementArnHasBeenSet() const { return m_entitlementArnHasBeenSet; }
    inline void SetEntitlementArn(const Aws::String& value) { m_entitlementArnHasBeenSet = true; m_entitlementArn = value; }
    inline void SetEntitlementArn(Aws::String&& value) { m_entitlementArnHasBeenSet = true; m_entitlementArn = std::move(value); }
    inline void SetEntitlementArn(const char* value) { m_entitlementArnHasBeenSet = true; m_entitlementArn.assign(value); }
    inline Output& WithEntitlementArn(const Aws::String& value) { SetEntitlementArn(value); return *this;}
    inline Output& WithEntitlementArn(Aws::String&& value) { SetEntitlementArn(std::move(value)); return *this;}
    inline Output& WithEntitlementArn(const char* value) { SetEntitlementArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The IP address that the receiver requires in order to establish a connection
     * with the flow. For public networking, the ListenerAddress is represented by the
     * elastic IP address of the flow. For private networking, the ListenerAddress is
     * represented by the elastic network interface IP address of the VPC. This field
     * applies only to outputs that use the Zixi pull or SRT listener protocol.
     */
    inline const Aws::String& GetListenerAddress() const{ return m_listenerAddress; }
    inline bool ListenerAddressHasBeenSet() const { return m_listenerAddressHasBeenSet; }
    inline void SetListenerAddress(const Aws::String& value) { m_listenerAddressHasBeenSet = true; m_listenerAddress = value; }
    inline void SetListenerAddress(Aws::String&& value) { m_listenerAddressHasBeenSet = true; m_listenerAddress = std::move(value); }
    inline void SetListenerAddress(const char* value) { m_listenerAddressHasBeenSet = true; m_listenerAddress.assign(value); }
    inline Output& WithListenerAddress(const Aws::String& value) { SetListenerAddress(value); return *this;}
    inline Output& WithListenerAddress(Aws::String&& value) { SetListenerAddress(std::move(value)); return *this;}
    inline Output& WithListenerAddress(const char* value) { SetListenerAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * The input ARN of the AWS Elemental MediaLive channel. This parameter is relevant
     * only for outputs that were added by creating a MediaLive input.
     */
    inline const Aws::String& GetMediaLiveInputArn() const{ return m_mediaLiveInputArn; }
    inline bool MediaLiveInputArnHasBeenSet() const { return m_mediaLiveInputArnHasBeenSet; }
    inline void SetMediaLiveInputArn(const Aws::String& value) { m_mediaLiveInputArnHasBeenSet = true; m_mediaLiveInputArn = value; }
    inline void SetMediaLiveInputArn(Aws::String&& value) { m_mediaLiveInputArnHasBeenSet = true; m_mediaLiveInputArn = std::move(value); }
    inline void SetMediaLiveInputArn(const char* value) { m_mediaLiveInputArnHasBeenSet = true; m_mediaLiveInputArn.assign(value); }
    inline Output& WithMediaLiveInputArn(const Aws::String& value) { SetMediaLiveInputArn(value); return *this;}
    inline Output& WithMediaLiveInputArn(Aws::String&& value) { SetMediaLiveInputArn(std::move(value)); return *this;}
    inline Output& WithMediaLiveInputArn(const char* value) { SetMediaLiveInputArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The configuration for each media stream that is associated with the output.
     */
    inline const Aws::Vector<MediaStreamOutputConfiguration>& GetMediaStreamOutputConfigurations() const{ return m_mediaStreamOutputConfigurations; }
    inline bool MediaStreamOutputConfigurationsHasBeenSet() const { return m_mediaStreamOutputConfigurationsHasBeenSet; }
    inline void SetMediaStreamOutputConfigurations(const Aws::Vector<MediaStreamOutputConfiguration>& value) { m_mediaStreamOutputConfigurationsHasBeenSet = true; m_mediaStreamOutputConfigurations = value; }
    inline void SetMediaStreamOutputConfigurations(Aws::Vector<MediaStreamOutputConfiguration>&& value) { m_mediaStreamOutputConfigurationsHasBeenSet = true; m_mediaStreamOutputConfigurations = std::move(value); }
    inline Output& WithMediaStreamOutputConfigurations(const Aws::Vector<MediaStreamOutputConfiguration>& value) { SetMediaStreamOutputConfigurations(value); return *this;}
    inline Output& WithMediaStreamOutputConfigurations(Aws::Vector<MediaStreamOutputConfiguration>&& value) { SetMediaStreamOutputConfigurations(std::move(value)); return *this;}
    inline Output& AddMediaStreamOutputConfigurations(const MediaStreamOutputConfiguration& value) { m_mediaStreamOutputConfigurationsHasBeenSet = true; m_mediaStreamOutputConfigurations.push_back(value); return *this; }
    inline Output& AddMediaStreamOutputConfigurations(MediaStreamOutputConfiguration&& value) { m_mediaStreamOutputConfigurationsHasBeenSet = true; m_mediaStreamOutputConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * The name of the output. This value must be unique within the current flow.
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Output& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Output& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Output& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the output.
     */
    inline const Aws::String& GetOutputArn() const{ return m_outputArn; }
    inline bool OutputArnHasBeenSet() const { return m_outputArnHasBeenSet; }
    inline void SetOutputArn(const Aws::String& value) { m_outputArnHasBeenSet = true; m_outputArn = value; }
    inline void SetOutputArn(Aws::String&& value) { m_outputArnHasBeenSet = true; m_outputArn = std::move(value); }
    inline void SetOutputArn(const char* value) { m_outputArnHasBeenSet = true; m_outputArn.assign(value); }
    inline Output& WithOutputArn(const Aws::String& value) { SetOutputArn(value); return *this;}
    inline Output& WithOutputArn(Aws::String&& value) { SetOutputArn(std::move(value)); return *this;}
    inline Output& WithOutputArn(const char* value) { SetOutputArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The port to use when content is distributed to this output.
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline Output& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * Attributes related to the transport stream that are used in the output.
     */
    inline const Transport& GetTransport() const{ return m_transport; }
    inline bool TransportHasBeenSet() const { return m_transportHasBeenSet; }
    inline void SetTransport(const Transport& value) { m_transportHasBeenSet = true; m_transport = value; }
    inline void SetTransport(Transport&& value) { m_transportHasBeenSet = true; m_transport = std::move(value); }
    inline Output& WithTransport(const Transport& value) { SetTransport(value); return *this;}
    inline Output& WithTransport(Transport&& value) { SetTransport(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The name of the VPC interface attachment to use for this output.
     */
    inline const VpcInterfaceAttachment& GetVpcInterfaceAttachment() const{ return m_vpcInterfaceAttachment; }
    inline bool VpcInterfaceAttachmentHasBeenSet() const { return m_vpcInterfaceAttachmentHasBeenSet; }
    inline void SetVpcInterfaceAttachment(const VpcInterfaceAttachment& value) { m_vpcInterfaceAttachmentHasBeenSet = true; m_vpcInterfaceAttachment = value; }
    inline void SetVpcInterfaceAttachment(VpcInterfaceAttachment&& value) { m_vpcInterfaceAttachmentHasBeenSet = true; m_vpcInterfaceAttachment = std::move(value); }
    inline Output& WithVpcInterfaceAttachment(const VpcInterfaceAttachment& value) { SetVpcInterfaceAttachment(value); return *this;}
    inline Output& WithVpcInterfaceAttachment(VpcInterfaceAttachment&& value) { SetVpcInterfaceAttachment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ARN of the bridge that added this output.
     */
    inline const Aws::String& GetBridgeArn() const{ return m_bridgeArn; }
    inline bool BridgeArnHasBeenSet() const { return m_bridgeArnHasBeenSet; }
    inline void SetBridgeArn(const Aws::String& value) { m_bridgeArnHasBeenSet = true; m_bridgeArn = value; }
    inline void SetBridgeArn(Aws::String&& value) { m_bridgeArnHasBeenSet = true; m_bridgeArn = std::move(value); }
    inline void SetBridgeArn(const char* value) { m_bridgeArnHasBeenSet = true; m_bridgeArn.assign(value); }
    inline Output& WithBridgeArn(const Aws::String& value) { SetBridgeArn(value); return *this;}
    inline Output& WithBridgeArn(Aws::String&& value) { SetBridgeArn(std::move(value)); return *this;}
    inline Output& WithBridgeArn(const char* value) { SetBridgeArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The bridge output ports currently in use.
     */
    inline const Aws::Vector<int>& GetBridgePorts() const{ return m_bridgePorts; }
    inline bool BridgePortsHasBeenSet() const { return m_bridgePortsHasBeenSet; }
    inline void SetBridgePorts(const Aws::Vector<int>& value) { m_bridgePortsHasBeenSet = true; m_bridgePorts = value; }
    inline void SetBridgePorts(Aws::Vector<int>&& value) { m_bridgePortsHasBeenSet = true; m_bridgePorts = std::move(value); }
    inline Output& WithBridgePorts(const Aws::Vector<int>& value) { SetBridgePorts(value); return *this;}
    inline Output& WithBridgePorts(Aws::Vector<int>&& value) { SetBridgePorts(std::move(value)); return *this;}
    inline Output& AddBridgePorts(int value) { m_bridgePortsHasBeenSet = true; m_bridgePorts.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * An indication of whether the output is transmitting data or not.
     */
    inline const OutputStatus& GetOutputStatus() const{ return m_outputStatus; }
    inline bool OutputStatusHasBeenSet() const { return m_outputStatusHasBeenSet; }
    inline void SetOutputStatus(const OutputStatus& value) { m_outputStatusHasBeenSet = true; m_outputStatus = value; }
    inline void SetOutputStatus(OutputStatus&& value) { m_outputStatusHasBeenSet = true; m_outputStatus = std::move(value); }
    inline Output& WithOutputStatus(const OutputStatus& value) { SetOutputStatus(value); return *this;}
    inline Output& WithOutputStatus(OutputStatus&& value) { SetOutputStatus(std::move(value)); return *this;}
    ///@}
  private:

    int m_dataTransferSubscriberFeePercent;
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

    int m_port;
    bool m_portHasBeenSet = false;

    Transport m_transport;
    bool m_transportHasBeenSet = false;

    VpcInterfaceAttachment m_vpcInterfaceAttachment;
    bool m_vpcInterfaceAttachmentHasBeenSet = false;

    Aws::String m_bridgeArn;
    bool m_bridgeArnHasBeenSet = false;

    Aws::Vector<int> m_bridgePorts;
    bool m_bridgePortsHasBeenSet = false;

    OutputStatus m_outputStatus;
    bool m_outputStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
