﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsEc2ClientVpnEndpointConnectionLogOptionsDetails.h>
#include <aws/securityhub/model/AwsEc2ClientVpnEndpointClientConnectOptionsDetails.h>
#include <aws/securityhub/model/AwsEc2ClientVpnEndpointClientLoginBannerOptionsDetails.h>
#include <aws/securityhub/model/AwsEc2ClientVpnEndpointAuthenticationOptionsDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Describes an Client VPN endpoint. A Client VPN endpoint is the resource that
   * you create and configure to enable and manage client VPN sessions. It's the
   * termination point for all client VPN sessions. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2ClientVpnEndpointDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2ClientVpnEndpointDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointDetails();
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ID of the Client VPN endpoint. </p>
     */
    inline const Aws::String& GetClientVpnEndpointId() const{ return m_clientVpnEndpointId; }
    inline bool ClientVpnEndpointIdHasBeenSet() const { return m_clientVpnEndpointIdHasBeenSet; }
    inline void SetClientVpnEndpointId(const Aws::String& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = value; }
    inline void SetClientVpnEndpointId(Aws::String&& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = std::move(value); }
    inline void SetClientVpnEndpointId(const char* value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId.assign(value); }
    inline AwsEc2ClientVpnEndpointDetails& WithClientVpnEndpointId(const Aws::String& value) { SetClientVpnEndpointId(value); return *this;}
    inline AwsEc2ClientVpnEndpointDetails& WithClientVpnEndpointId(Aws::String&& value) { SetClientVpnEndpointId(std::move(value)); return *this;}
    inline AwsEc2ClientVpnEndpointDetails& WithClientVpnEndpointId(const char* value) { SetClientVpnEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A brief description of the endpoint. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline AwsEc2ClientVpnEndpointDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AwsEc2ClientVpnEndpointDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AwsEc2ClientVpnEndpointDetails& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The IPv4 address range, in CIDR notation, from which client IP addresses are
     * assigned. </p>
     */
    inline const Aws::String& GetClientCidrBlock() const{ return m_clientCidrBlock; }
    inline bool ClientCidrBlockHasBeenSet() const { return m_clientCidrBlockHasBeenSet; }
    inline void SetClientCidrBlock(const Aws::String& value) { m_clientCidrBlockHasBeenSet = true; m_clientCidrBlock = value; }
    inline void SetClientCidrBlock(Aws::String&& value) { m_clientCidrBlockHasBeenSet = true; m_clientCidrBlock = std::move(value); }
    inline void SetClientCidrBlock(const char* value) { m_clientCidrBlockHasBeenSet = true; m_clientCidrBlock.assign(value); }
    inline AwsEc2ClientVpnEndpointDetails& WithClientCidrBlock(const Aws::String& value) { SetClientCidrBlock(value); return *this;}
    inline AwsEc2ClientVpnEndpointDetails& WithClientCidrBlock(Aws::String&& value) { SetClientCidrBlock(std::move(value)); return *this;}
    inline AwsEc2ClientVpnEndpointDetails& WithClientCidrBlock(const char* value) { SetClientCidrBlock(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about the DNS servers to be used for DNS resolution. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsServer() const{ return m_dnsServer; }
    inline bool DnsServerHasBeenSet() const { return m_dnsServerHasBeenSet; }
    inline void SetDnsServer(const Aws::Vector<Aws::String>& value) { m_dnsServerHasBeenSet = true; m_dnsServer = value; }
    inline void SetDnsServer(Aws::Vector<Aws::String>&& value) { m_dnsServerHasBeenSet = true; m_dnsServer = std::move(value); }
    inline AwsEc2ClientVpnEndpointDetails& WithDnsServer(const Aws::Vector<Aws::String>& value) { SetDnsServer(value); return *this;}
    inline AwsEc2ClientVpnEndpointDetails& WithDnsServer(Aws::Vector<Aws::String>&& value) { SetDnsServer(std::move(value)); return *this;}
    inline AwsEc2ClientVpnEndpointDetails& AddDnsServer(const Aws::String& value) { m_dnsServerHasBeenSet = true; m_dnsServer.push_back(value); return *this; }
    inline AwsEc2ClientVpnEndpointDetails& AddDnsServer(Aws::String&& value) { m_dnsServerHasBeenSet = true; m_dnsServer.push_back(std::move(value)); return *this; }
    inline AwsEc2ClientVpnEndpointDetails& AddDnsServer(const char* value) { m_dnsServerHasBeenSet = true; m_dnsServer.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> Indicates whether split-tunnel is enabled in the Client VPN endpoint. </p>
     */
    inline bool GetSplitTunnel() const{ return m_splitTunnel; }
    inline bool SplitTunnelHasBeenSet() const { return m_splitTunnelHasBeenSet; }
    inline void SetSplitTunnel(bool value) { m_splitTunnelHasBeenSet = true; m_splitTunnel = value; }
    inline AwsEc2ClientVpnEndpointDetails& WithSplitTunnel(bool value) { SetSplitTunnel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The transport protocol used by the Client VPN endpoint. </p>
     */
    inline const Aws::String& GetTransportProtocol() const{ return m_transportProtocol; }
    inline bool TransportProtocolHasBeenSet() const { return m_transportProtocolHasBeenSet; }
    inline void SetTransportProtocol(const Aws::String& value) { m_transportProtocolHasBeenSet = true; m_transportProtocol = value; }
    inline void SetTransportProtocol(Aws::String&& value) { m_transportProtocolHasBeenSet = true; m_transportProtocol = std::move(value); }
    inline void SetTransportProtocol(const char* value) { m_transportProtocolHasBeenSet = true; m_transportProtocol.assign(value); }
    inline AwsEc2ClientVpnEndpointDetails& WithTransportProtocol(const Aws::String& value) { SetTransportProtocol(value); return *this;}
    inline AwsEc2ClientVpnEndpointDetails& WithTransportProtocol(Aws::String&& value) { SetTransportProtocol(std::move(value)); return *this;}
    inline AwsEc2ClientVpnEndpointDetails& WithTransportProtocol(const char* value) { SetTransportProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The port number for the Client VPN endpoint. </p>
     */
    inline int GetVpnPort() const{ return m_vpnPort; }
    inline bool VpnPortHasBeenSet() const { return m_vpnPortHasBeenSet; }
    inline void SetVpnPort(int value) { m_vpnPortHasBeenSet = true; m_vpnPort = value; }
    inline AwsEc2ClientVpnEndpointDetails& WithVpnPort(int value) { SetVpnPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the server certificate. </p>
     */
    inline const Aws::String& GetServerCertificateArn() const{ return m_serverCertificateArn; }
    inline bool ServerCertificateArnHasBeenSet() const { return m_serverCertificateArnHasBeenSet; }
    inline void SetServerCertificateArn(const Aws::String& value) { m_serverCertificateArnHasBeenSet = true; m_serverCertificateArn = value; }
    inline void SetServerCertificateArn(Aws::String&& value) { m_serverCertificateArnHasBeenSet = true; m_serverCertificateArn = std::move(value); }
    inline void SetServerCertificateArn(const char* value) { m_serverCertificateArnHasBeenSet = true; m_serverCertificateArn.assign(value); }
    inline AwsEc2ClientVpnEndpointDetails& WithServerCertificateArn(const Aws::String& value) { SetServerCertificateArn(value); return *this;}
    inline AwsEc2ClientVpnEndpointDetails& WithServerCertificateArn(Aws::String&& value) { SetServerCertificateArn(std::move(value)); return *this;}
    inline AwsEc2ClientVpnEndpointDetails& WithServerCertificateArn(const char* value) { SetServerCertificateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about the authentication method used by the Client VPN endpoint.
     * </p>
     */
    inline const Aws::Vector<AwsEc2ClientVpnEndpointAuthenticationOptionsDetails>& GetAuthenticationOptions() const{ return m_authenticationOptions; }
    inline bool AuthenticationOptionsHasBeenSet() const { return m_authenticationOptionsHasBeenSet; }
    inline void SetAuthenticationOptions(const Aws::Vector<AwsEc2ClientVpnEndpointAuthenticationOptionsDetails>& value) { m_authenticationOptionsHasBeenSet = true; m_authenticationOptions = value; }
    inline void SetAuthenticationOptions(Aws::Vector<AwsEc2ClientVpnEndpointAuthenticationOptionsDetails>&& value) { m_authenticationOptionsHasBeenSet = true; m_authenticationOptions = std::move(value); }
    inline AwsEc2ClientVpnEndpointDetails& WithAuthenticationOptions(const Aws::Vector<AwsEc2ClientVpnEndpointAuthenticationOptionsDetails>& value) { SetAuthenticationOptions(value); return *this;}
    inline AwsEc2ClientVpnEndpointDetails& WithAuthenticationOptions(Aws::Vector<AwsEc2ClientVpnEndpointAuthenticationOptionsDetails>&& value) { SetAuthenticationOptions(std::move(value)); return *this;}
    inline AwsEc2ClientVpnEndpointDetails& AddAuthenticationOptions(const AwsEc2ClientVpnEndpointAuthenticationOptionsDetails& value) { m_authenticationOptionsHasBeenSet = true; m_authenticationOptions.push_back(value); return *this; }
    inline AwsEc2ClientVpnEndpointDetails& AddAuthenticationOptions(AwsEc2ClientVpnEndpointAuthenticationOptionsDetails&& value) { m_authenticationOptionsHasBeenSet = true; m_authenticationOptions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Information about the client connection logging options for the Client VPN
     * endpoint. </p>
     */
    inline const AwsEc2ClientVpnEndpointConnectionLogOptionsDetails& GetConnectionLogOptions() const{ return m_connectionLogOptions; }
    inline bool ConnectionLogOptionsHasBeenSet() const { return m_connectionLogOptionsHasBeenSet; }
    inline void SetConnectionLogOptions(const AwsEc2ClientVpnEndpointConnectionLogOptionsDetails& value) { m_connectionLogOptionsHasBeenSet = true; m_connectionLogOptions = value; }
    inline void SetConnectionLogOptions(AwsEc2ClientVpnEndpointConnectionLogOptionsDetails&& value) { m_connectionLogOptionsHasBeenSet = true; m_connectionLogOptions = std::move(value); }
    inline AwsEc2ClientVpnEndpointDetails& WithConnectionLogOptions(const AwsEc2ClientVpnEndpointConnectionLogOptionsDetails& value) { SetConnectionLogOptions(value); return *this;}
    inline AwsEc2ClientVpnEndpointDetails& WithConnectionLogOptions(AwsEc2ClientVpnEndpointConnectionLogOptionsDetails&& value) { SetConnectionLogOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The IDs of the security groups for the target network. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIdSet() const{ return m_securityGroupIdSet; }
    inline bool SecurityGroupIdSetHasBeenSet() const { return m_securityGroupIdSetHasBeenSet; }
    inline void SetSecurityGroupIdSet(const Aws::Vector<Aws::String>& value) { m_securityGroupIdSetHasBeenSet = true; m_securityGroupIdSet = value; }
    inline void SetSecurityGroupIdSet(Aws::Vector<Aws::String>&& value) { m_securityGroupIdSetHasBeenSet = true; m_securityGroupIdSet = std::move(value); }
    inline AwsEc2ClientVpnEndpointDetails& WithSecurityGroupIdSet(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIdSet(value); return *this;}
    inline AwsEc2ClientVpnEndpointDetails& WithSecurityGroupIdSet(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIdSet(std::move(value)); return *this;}
    inline AwsEc2ClientVpnEndpointDetails& AddSecurityGroupIdSet(const Aws::String& value) { m_securityGroupIdSetHasBeenSet = true; m_securityGroupIdSet.push_back(value); return *this; }
    inline AwsEc2ClientVpnEndpointDetails& AddSecurityGroupIdSet(Aws::String&& value) { m_securityGroupIdSetHasBeenSet = true; m_securityGroupIdSet.push_back(std::move(value)); return *this; }
    inline AwsEc2ClientVpnEndpointDetails& AddSecurityGroupIdSet(const char* value) { m_securityGroupIdSetHasBeenSet = true; m_securityGroupIdSet.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The ID of the VPC. </p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline AwsEc2ClientVpnEndpointDetails& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline AwsEc2ClientVpnEndpointDetails& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline AwsEc2ClientVpnEndpointDetails& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The URL of the self-service portal. </p>
     */
    inline const Aws::String& GetSelfServicePortalUrl() const{ return m_selfServicePortalUrl; }
    inline bool SelfServicePortalUrlHasBeenSet() const { return m_selfServicePortalUrlHasBeenSet; }
    inline void SetSelfServicePortalUrl(const Aws::String& value) { m_selfServicePortalUrlHasBeenSet = true; m_selfServicePortalUrl = value; }
    inline void SetSelfServicePortalUrl(Aws::String&& value) { m_selfServicePortalUrlHasBeenSet = true; m_selfServicePortalUrl = std::move(value); }
    inline void SetSelfServicePortalUrl(const char* value) { m_selfServicePortalUrlHasBeenSet = true; m_selfServicePortalUrl.assign(value); }
    inline AwsEc2ClientVpnEndpointDetails& WithSelfServicePortalUrl(const Aws::String& value) { SetSelfServicePortalUrl(value); return *this;}
    inline AwsEc2ClientVpnEndpointDetails& WithSelfServicePortalUrl(Aws::String&& value) { SetSelfServicePortalUrl(std::move(value)); return *this;}
    inline AwsEc2ClientVpnEndpointDetails& WithSelfServicePortalUrl(const char* value) { SetSelfServicePortalUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The options for managing connection authorization for new client
     * connections. </p>
     */
    inline const AwsEc2ClientVpnEndpointClientConnectOptionsDetails& GetClientConnectOptions() const{ return m_clientConnectOptions; }
    inline bool ClientConnectOptionsHasBeenSet() const { return m_clientConnectOptionsHasBeenSet; }
    inline void SetClientConnectOptions(const AwsEc2ClientVpnEndpointClientConnectOptionsDetails& value) { m_clientConnectOptionsHasBeenSet = true; m_clientConnectOptions = value; }
    inline void SetClientConnectOptions(AwsEc2ClientVpnEndpointClientConnectOptionsDetails&& value) { m_clientConnectOptionsHasBeenSet = true; m_clientConnectOptions = std::move(value); }
    inline AwsEc2ClientVpnEndpointDetails& WithClientConnectOptions(const AwsEc2ClientVpnEndpointClientConnectOptionsDetails& value) { SetClientConnectOptions(value); return *this;}
    inline AwsEc2ClientVpnEndpointDetails& WithClientConnectOptions(AwsEc2ClientVpnEndpointClientConnectOptionsDetails&& value) { SetClientConnectOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum VPN session duration time in hours. </p>
     */
    inline int GetSessionTimeoutHours() const{ return m_sessionTimeoutHours; }
    inline bool SessionTimeoutHoursHasBeenSet() const { return m_sessionTimeoutHoursHasBeenSet; }
    inline void SetSessionTimeoutHours(int value) { m_sessionTimeoutHoursHasBeenSet = true; m_sessionTimeoutHours = value; }
    inline AwsEc2ClientVpnEndpointDetails& WithSessionTimeoutHours(int value) { SetSessionTimeoutHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Options for enabling a customizable text banner that will be displayed on
     * Amazon Web Services provided clients when a VPN session is established. </p>
     */
    inline const AwsEc2ClientVpnEndpointClientLoginBannerOptionsDetails& GetClientLoginBannerOptions() const{ return m_clientLoginBannerOptions; }
    inline bool ClientLoginBannerOptionsHasBeenSet() const { return m_clientLoginBannerOptionsHasBeenSet; }
    inline void SetClientLoginBannerOptions(const AwsEc2ClientVpnEndpointClientLoginBannerOptionsDetails& value) { m_clientLoginBannerOptionsHasBeenSet = true; m_clientLoginBannerOptions = value; }
    inline void SetClientLoginBannerOptions(AwsEc2ClientVpnEndpointClientLoginBannerOptionsDetails&& value) { m_clientLoginBannerOptionsHasBeenSet = true; m_clientLoginBannerOptions = std::move(value); }
    inline AwsEc2ClientVpnEndpointDetails& WithClientLoginBannerOptions(const AwsEc2ClientVpnEndpointClientLoginBannerOptionsDetails& value) { SetClientLoginBannerOptions(value); return *this;}
    inline AwsEc2ClientVpnEndpointDetails& WithClientLoginBannerOptions(AwsEc2ClientVpnEndpointClientLoginBannerOptionsDetails&& value) { SetClientLoginBannerOptions(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientVpnEndpointId;
    bool m_clientVpnEndpointIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_clientCidrBlock;
    bool m_clientCidrBlockHasBeenSet = false;

    Aws::Vector<Aws::String> m_dnsServer;
    bool m_dnsServerHasBeenSet = false;

    bool m_splitTunnel;
    bool m_splitTunnelHasBeenSet = false;

    Aws::String m_transportProtocol;
    bool m_transportProtocolHasBeenSet = false;

    int m_vpnPort;
    bool m_vpnPortHasBeenSet = false;

    Aws::String m_serverCertificateArn;
    bool m_serverCertificateArnHasBeenSet = false;

    Aws::Vector<AwsEc2ClientVpnEndpointAuthenticationOptionsDetails> m_authenticationOptions;
    bool m_authenticationOptionsHasBeenSet = false;

    AwsEc2ClientVpnEndpointConnectionLogOptionsDetails m_connectionLogOptions;
    bool m_connectionLogOptionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIdSet;
    bool m_securityGroupIdSetHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_selfServicePortalUrl;
    bool m_selfServicePortalUrlHasBeenSet = false;

    AwsEc2ClientVpnEndpointClientConnectOptionsDetails m_clientConnectOptions;
    bool m_clientConnectOptionsHasBeenSet = false;

    int m_sessionTimeoutHours;
    bool m_sessionTimeoutHoursHasBeenSet = false;

    AwsEc2ClientVpnEndpointClientLoginBannerOptionsDetails m_clientLoginBannerOptions;
    bool m_clientLoginBannerOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
