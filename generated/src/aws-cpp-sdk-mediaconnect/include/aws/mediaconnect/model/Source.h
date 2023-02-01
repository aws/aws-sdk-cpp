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
   * The settings for the source of the flow.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/Source">AWS
   * API Reference</a></p>
   */
  class Source
  {
  public:
    AWS_MEDIACONNECT_API Source();
    AWS_MEDIACONNECT_API Source(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Source& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Percentage from 0-100 of the data transfer cost to be billed to the subscriber.
     */
    inline int GetDataTransferSubscriberFeePercent() const{ return m_dataTransferSubscriberFeePercent; }

    /**
     * Percentage from 0-100 of the data transfer cost to be billed to the subscriber.
     */
    inline bool DataTransferSubscriberFeePercentHasBeenSet() const { return m_dataTransferSubscriberFeePercentHasBeenSet; }

    /**
     * Percentage from 0-100 of the data transfer cost to be billed to the subscriber.
     */
    inline void SetDataTransferSubscriberFeePercent(int value) { m_dataTransferSubscriberFeePercentHasBeenSet = true; m_dataTransferSubscriberFeePercent = value; }

    /**
     * Percentage from 0-100 of the data transfer cost to be billed to the subscriber.
     */
    inline Source& WithDataTransferSubscriberFeePercent(int value) { SetDataTransferSubscriberFeePercent(value); return *this;}


    /**
     * The type of encryption that is used on the content ingested from this source.
     */
    inline const Encryption& GetDecryption() const{ return m_decryption; }

    /**
     * The type of encryption that is used on the content ingested from this source.
     */
    inline bool DecryptionHasBeenSet() const { return m_decryptionHasBeenSet; }

    /**
     * The type of encryption that is used on the content ingested from this source.
     */
    inline void SetDecryption(const Encryption& value) { m_decryptionHasBeenSet = true; m_decryption = value; }

    /**
     * The type of encryption that is used on the content ingested from this source.
     */
    inline void SetDecryption(Encryption&& value) { m_decryptionHasBeenSet = true; m_decryption = std::move(value); }

    /**
     * The type of encryption that is used on the content ingested from this source.
     */
    inline Source& WithDecryption(const Encryption& value) { SetDecryption(value); return *this;}

    /**
     * The type of encryption that is used on the content ingested from this source.
     */
    inline Source& WithDecryption(Encryption&& value) { SetDecryption(std::move(value)); return *this;}


    /**
     * A description for the source. This value is not used or seen outside of the
     * current AWS Elemental MediaConnect account.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * A description for the source. This value is not used or seen outside of the
     * current AWS Elemental MediaConnect account.
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * A description for the source. This value is not used or seen outside of the
     * current AWS Elemental MediaConnect account.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * A description for the source. This value is not used or seen outside of the
     * current AWS Elemental MediaConnect account.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * A description for the source. This value is not used or seen outside of the
     * current AWS Elemental MediaConnect account.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * A description for the source. This value is not used or seen outside of the
     * current AWS Elemental MediaConnect account.
     */
    inline Source& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * A description for the source. This value is not used or seen outside of the
     * current AWS Elemental MediaConnect account.
     */
    inline Source& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * A description for the source. This value is not used or seen outside of the
     * current AWS Elemental MediaConnect account.
     */
    inline Source& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * The ARN of the entitlement that allows you to subscribe to content that comes
     * from another AWS account. The entitlement is set by the content originator and
     * the ARN is generated as part of the originator's flow.
     */
    inline const Aws::String& GetEntitlementArn() const{ return m_entitlementArn; }

    /**
     * The ARN of the entitlement that allows you to subscribe to content that comes
     * from another AWS account. The entitlement is set by the content originator and
     * the ARN is generated as part of the originator's flow.
     */
    inline bool EntitlementArnHasBeenSet() const { return m_entitlementArnHasBeenSet; }

    /**
     * The ARN of the entitlement that allows you to subscribe to content that comes
     * from another AWS account. The entitlement is set by the content originator and
     * the ARN is generated as part of the originator's flow.
     */
    inline void SetEntitlementArn(const Aws::String& value) { m_entitlementArnHasBeenSet = true; m_entitlementArn = value; }

    /**
     * The ARN of the entitlement that allows you to subscribe to content that comes
     * from another AWS account. The entitlement is set by the content originator and
     * the ARN is generated as part of the originator's flow.
     */
    inline void SetEntitlementArn(Aws::String&& value) { m_entitlementArnHasBeenSet = true; m_entitlementArn = std::move(value); }

    /**
     * The ARN of the entitlement that allows you to subscribe to content that comes
     * from another AWS account. The entitlement is set by the content originator and
     * the ARN is generated as part of the originator's flow.
     */
    inline void SetEntitlementArn(const char* value) { m_entitlementArnHasBeenSet = true; m_entitlementArn.assign(value); }

    /**
     * The ARN of the entitlement that allows you to subscribe to content that comes
     * from another AWS account. The entitlement is set by the content originator and
     * the ARN is generated as part of the originator's flow.
     */
    inline Source& WithEntitlementArn(const Aws::String& value) { SetEntitlementArn(value); return *this;}

    /**
     * The ARN of the entitlement that allows you to subscribe to content that comes
     * from another AWS account. The entitlement is set by the content originator and
     * the ARN is generated as part of the originator's flow.
     */
    inline Source& WithEntitlementArn(Aws::String&& value) { SetEntitlementArn(std::move(value)); return *this;}

    /**
     * The ARN of the entitlement that allows you to subscribe to content that comes
     * from another AWS account. The entitlement is set by the content originator and
     * the ARN is generated as part of the originator's flow.
     */
    inline Source& WithEntitlementArn(const char* value) { SetEntitlementArn(value); return *this;}


    /**
     * The IP address that the flow will be listening on for incoming content.
     */
    inline const Aws::String& GetIngestIp() const{ return m_ingestIp; }

    /**
     * The IP address that the flow will be listening on for incoming content.
     */
    inline bool IngestIpHasBeenSet() const { return m_ingestIpHasBeenSet; }

    /**
     * The IP address that the flow will be listening on for incoming content.
     */
    inline void SetIngestIp(const Aws::String& value) { m_ingestIpHasBeenSet = true; m_ingestIp = value; }

    /**
     * The IP address that the flow will be listening on for incoming content.
     */
    inline void SetIngestIp(Aws::String&& value) { m_ingestIpHasBeenSet = true; m_ingestIp = std::move(value); }

    /**
     * The IP address that the flow will be listening on for incoming content.
     */
    inline void SetIngestIp(const char* value) { m_ingestIpHasBeenSet = true; m_ingestIp.assign(value); }

    /**
     * The IP address that the flow will be listening on for incoming content.
     */
    inline Source& WithIngestIp(const Aws::String& value) { SetIngestIp(value); return *this;}

    /**
     * The IP address that the flow will be listening on for incoming content.
     */
    inline Source& WithIngestIp(Aws::String&& value) { SetIngestIp(std::move(value)); return *this;}

    /**
     * The IP address that the flow will be listening on for incoming content.
     */
    inline Source& WithIngestIp(const char* value) { SetIngestIp(value); return *this;}


    /**
     * The port that the flow will be listening on for incoming content.
     */
    inline int GetIngestPort() const{ return m_ingestPort; }

    /**
     * The port that the flow will be listening on for incoming content.
     */
    inline bool IngestPortHasBeenSet() const { return m_ingestPortHasBeenSet; }

    /**
     * The port that the flow will be listening on for incoming content.
     */
    inline void SetIngestPort(int value) { m_ingestPortHasBeenSet = true; m_ingestPort = value; }

    /**
     * The port that the flow will be listening on for incoming content.
     */
    inline Source& WithIngestPort(int value) { SetIngestPort(value); return *this;}


    /**
     * The media streams that are associated with the source, and the parameters for
     * those associations.
     */
    inline const Aws::Vector<MediaStreamSourceConfiguration>& GetMediaStreamSourceConfigurations() const{ return m_mediaStreamSourceConfigurations; }

    /**
     * The media streams that are associated with the source, and the parameters for
     * those associations.
     */
    inline bool MediaStreamSourceConfigurationsHasBeenSet() const { return m_mediaStreamSourceConfigurationsHasBeenSet; }

    /**
     * The media streams that are associated with the source, and the parameters for
     * those associations.
     */
    inline void SetMediaStreamSourceConfigurations(const Aws::Vector<MediaStreamSourceConfiguration>& value) { m_mediaStreamSourceConfigurationsHasBeenSet = true; m_mediaStreamSourceConfigurations = value; }

    /**
     * The media streams that are associated with the source, and the parameters for
     * those associations.
     */
    inline void SetMediaStreamSourceConfigurations(Aws::Vector<MediaStreamSourceConfiguration>&& value) { m_mediaStreamSourceConfigurationsHasBeenSet = true; m_mediaStreamSourceConfigurations = std::move(value); }

    /**
     * The media streams that are associated with the source, and the parameters for
     * those associations.
     */
    inline Source& WithMediaStreamSourceConfigurations(const Aws::Vector<MediaStreamSourceConfiguration>& value) { SetMediaStreamSourceConfigurations(value); return *this;}

    /**
     * The media streams that are associated with the source, and the parameters for
     * those associations.
     */
    inline Source& WithMediaStreamSourceConfigurations(Aws::Vector<MediaStreamSourceConfiguration>&& value) { SetMediaStreamSourceConfigurations(std::move(value)); return *this;}

    /**
     * The media streams that are associated with the source, and the parameters for
     * those associations.
     */
    inline Source& AddMediaStreamSourceConfigurations(const MediaStreamSourceConfiguration& value) { m_mediaStreamSourceConfigurationsHasBeenSet = true; m_mediaStreamSourceConfigurations.push_back(value); return *this; }

    /**
     * The media streams that are associated with the source, and the parameters for
     * those associations.
     */
    inline Source& AddMediaStreamSourceConfigurations(MediaStreamSourceConfiguration&& value) { m_mediaStreamSourceConfigurationsHasBeenSet = true; m_mediaStreamSourceConfigurations.push_back(std::move(value)); return *this; }


    /**
     * The name of the source.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the source.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of the source.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the source.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the source.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the source.
     */
    inline Source& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the source.
     */
    inline Source& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the source.
     */
    inline Source& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The port that the flow uses to send outbound requests to initiate connection
     * with the sender.
     */
    inline int GetSenderControlPort() const{ return m_senderControlPort; }

    /**
     * The port that the flow uses to send outbound requests to initiate connection
     * with the sender.
     */
    inline bool SenderControlPortHasBeenSet() const { return m_senderControlPortHasBeenSet; }

    /**
     * The port that the flow uses to send outbound requests to initiate connection
     * with the sender.
     */
    inline void SetSenderControlPort(int value) { m_senderControlPortHasBeenSet = true; m_senderControlPort = value; }

    /**
     * The port that the flow uses to send outbound requests to initiate connection
     * with the sender.
     */
    inline Source& WithSenderControlPort(int value) { SetSenderControlPort(value); return *this;}


    /**
     * The IP address that the flow communicates with to initiate connection with the
     * sender.
     */
    inline const Aws::String& GetSenderIpAddress() const{ return m_senderIpAddress; }

    /**
     * The IP address that the flow communicates with to initiate connection with the
     * sender.
     */
    inline bool SenderIpAddressHasBeenSet() const { return m_senderIpAddressHasBeenSet; }

    /**
     * The IP address that the flow communicates with to initiate connection with the
     * sender.
     */
    inline void SetSenderIpAddress(const Aws::String& value) { m_senderIpAddressHasBeenSet = true; m_senderIpAddress = value; }

    /**
     * The IP address that the flow communicates with to initiate connection with the
     * sender.
     */
    inline void SetSenderIpAddress(Aws::String&& value) { m_senderIpAddressHasBeenSet = true; m_senderIpAddress = std::move(value); }

    /**
     * The IP address that the flow communicates with to initiate connection with the
     * sender.
     */
    inline void SetSenderIpAddress(const char* value) { m_senderIpAddressHasBeenSet = true; m_senderIpAddress.assign(value); }

    /**
     * The IP address that the flow communicates with to initiate connection with the
     * sender.
     */
    inline Source& WithSenderIpAddress(const Aws::String& value) { SetSenderIpAddress(value); return *this;}

    /**
     * The IP address that the flow communicates with to initiate connection with the
     * sender.
     */
    inline Source& WithSenderIpAddress(Aws::String&& value) { SetSenderIpAddress(std::move(value)); return *this;}

    /**
     * The IP address that the flow communicates with to initiate connection with the
     * sender.
     */
    inline Source& WithSenderIpAddress(const char* value) { SetSenderIpAddress(value); return *this;}


    /**
     * The ARN of the source.
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * The ARN of the source.
     */
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }

    /**
     * The ARN of the source.
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }

    /**
     * The ARN of the source.
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }

    /**
     * The ARN of the source.
     */
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }

    /**
     * The ARN of the source.
     */
    inline Source& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * The ARN of the source.
     */
    inline Source& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}

    /**
     * The ARN of the source.
     */
    inline Source& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}


    /**
     * Attributes related to the transport stream that are used in the source.
     */
    inline const Transport& GetTransport() const{ return m_transport; }

    /**
     * Attributes related to the transport stream that are used in the source.
     */
    inline bool TransportHasBeenSet() const { return m_transportHasBeenSet; }

    /**
     * Attributes related to the transport stream that are used in the source.
     */
    inline void SetTransport(const Transport& value) { m_transportHasBeenSet = true; m_transport = value; }

    /**
     * Attributes related to the transport stream that are used in the source.
     */
    inline void SetTransport(Transport&& value) { m_transportHasBeenSet = true; m_transport = std::move(value); }

    /**
     * Attributes related to the transport stream that are used in the source.
     */
    inline Source& WithTransport(const Transport& value) { SetTransport(value); return *this;}

    /**
     * Attributes related to the transport stream that are used in the source.
     */
    inline Source& WithTransport(Transport&& value) { SetTransport(std::move(value)); return *this;}


    /**
     * The name of the VPC interface that is used for this source.
     */
    inline const Aws::String& GetVpcInterfaceName() const{ return m_vpcInterfaceName; }

    /**
     * The name of the VPC interface that is used for this source.
     */
    inline bool VpcInterfaceNameHasBeenSet() const { return m_vpcInterfaceNameHasBeenSet; }

    /**
     * The name of the VPC interface that is used for this source.
     */
    inline void SetVpcInterfaceName(const Aws::String& value) { m_vpcInterfaceNameHasBeenSet = true; m_vpcInterfaceName = value; }

    /**
     * The name of the VPC interface that is used for this source.
     */
    inline void SetVpcInterfaceName(Aws::String&& value) { m_vpcInterfaceNameHasBeenSet = true; m_vpcInterfaceName = std::move(value); }

    /**
     * The name of the VPC interface that is used for this source.
     */
    inline void SetVpcInterfaceName(const char* value) { m_vpcInterfaceNameHasBeenSet = true; m_vpcInterfaceName.assign(value); }

    /**
     * The name of the VPC interface that is used for this source.
     */
    inline Source& WithVpcInterfaceName(const Aws::String& value) { SetVpcInterfaceName(value); return *this;}

    /**
     * The name of the VPC interface that is used for this source.
     */
    inline Source& WithVpcInterfaceName(Aws::String&& value) { SetVpcInterfaceName(std::move(value)); return *this;}

    /**
     * The name of the VPC interface that is used for this source.
     */
    inline Source& WithVpcInterfaceName(const char* value) { SetVpcInterfaceName(value); return *this;}


    /**
     * The range of IP addresses that should be allowed to contribute content to your
     * source. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline const Aws::String& GetWhitelistCidr() const{ return m_whitelistCidr; }

    /**
     * The range of IP addresses that should be allowed to contribute content to your
     * source. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline bool WhitelistCidrHasBeenSet() const { return m_whitelistCidrHasBeenSet; }

    /**
     * The range of IP addresses that should be allowed to contribute content to your
     * source. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline void SetWhitelistCidr(const Aws::String& value) { m_whitelistCidrHasBeenSet = true; m_whitelistCidr = value; }

    /**
     * The range of IP addresses that should be allowed to contribute content to your
     * source. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline void SetWhitelistCidr(Aws::String&& value) { m_whitelistCidrHasBeenSet = true; m_whitelistCidr = std::move(value); }

    /**
     * The range of IP addresses that should be allowed to contribute content to your
     * source. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline void SetWhitelistCidr(const char* value) { m_whitelistCidrHasBeenSet = true; m_whitelistCidr.assign(value); }

    /**
     * The range of IP addresses that should be allowed to contribute content to your
     * source. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline Source& WithWhitelistCidr(const Aws::String& value) { SetWhitelistCidr(value); return *this;}

    /**
     * The range of IP addresses that should be allowed to contribute content to your
     * source. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline Source& WithWhitelistCidr(Aws::String&& value) { SetWhitelistCidr(std::move(value)); return *this;}

    /**
     * The range of IP addresses that should be allowed to contribute content to your
     * source. These IP addresses should be in the form of a Classless Inter-Domain
     * Routing (CIDR) block; for example, 10.0.0.0/16.
     */
    inline Source& WithWhitelistCidr(const char* value) { SetWhitelistCidr(value); return *this;}

  private:

    int m_dataTransferSubscriberFeePercent;
    bool m_dataTransferSubscriberFeePercentHasBeenSet = false;

    Encryption m_decryption;
    bool m_decryptionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_entitlementArn;
    bool m_entitlementArnHasBeenSet = false;

    Aws::String m_ingestIp;
    bool m_ingestIpHasBeenSet = false;

    int m_ingestPort;
    bool m_ingestPortHasBeenSet = false;

    Aws::Vector<MediaStreamSourceConfiguration> m_mediaStreamSourceConfigurations;
    bool m_mediaStreamSourceConfigurationsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_senderControlPort;
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
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
