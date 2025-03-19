/**
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
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointDetails() = default;
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2ClientVpnEndpointDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ID of the Client VPN endpoint. </p>
     */
    inline const Aws::String& GetClientVpnEndpointId() const { return m_clientVpnEndpointId; }
    inline bool ClientVpnEndpointIdHasBeenSet() const { return m_clientVpnEndpointIdHasBeenSet; }
    template<typename ClientVpnEndpointIdT = Aws::String>
    void SetClientVpnEndpointId(ClientVpnEndpointIdT&& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = std::forward<ClientVpnEndpointIdT>(value); }
    template<typename ClientVpnEndpointIdT = Aws::String>
    AwsEc2ClientVpnEndpointDetails& WithClientVpnEndpointId(ClientVpnEndpointIdT&& value) { SetClientVpnEndpointId(std::forward<ClientVpnEndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A brief description of the endpoint. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AwsEc2ClientVpnEndpointDetails& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The IPv4 address range, in CIDR notation, from which client IP addresses are
     * assigned. </p>
     */
    inline const Aws::String& GetClientCidrBlock() const { return m_clientCidrBlock; }
    inline bool ClientCidrBlockHasBeenSet() const { return m_clientCidrBlockHasBeenSet; }
    template<typename ClientCidrBlockT = Aws::String>
    void SetClientCidrBlock(ClientCidrBlockT&& value) { m_clientCidrBlockHasBeenSet = true; m_clientCidrBlock = std::forward<ClientCidrBlockT>(value); }
    template<typename ClientCidrBlockT = Aws::String>
    AwsEc2ClientVpnEndpointDetails& WithClientCidrBlock(ClientCidrBlockT&& value) { SetClientCidrBlock(std::forward<ClientCidrBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about the DNS servers to be used for DNS resolution. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDnsServer() const { return m_dnsServer; }
    inline bool DnsServerHasBeenSet() const { return m_dnsServerHasBeenSet; }
    template<typename DnsServerT = Aws::Vector<Aws::String>>
    void SetDnsServer(DnsServerT&& value) { m_dnsServerHasBeenSet = true; m_dnsServer = std::forward<DnsServerT>(value); }
    template<typename DnsServerT = Aws::Vector<Aws::String>>
    AwsEc2ClientVpnEndpointDetails& WithDnsServer(DnsServerT&& value) { SetDnsServer(std::forward<DnsServerT>(value)); return *this;}
    template<typename DnsServerT = Aws::String>
    AwsEc2ClientVpnEndpointDetails& AddDnsServer(DnsServerT&& value) { m_dnsServerHasBeenSet = true; m_dnsServer.emplace_back(std::forward<DnsServerT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Indicates whether split-tunnel is enabled in the Client VPN endpoint. </p>
     */
    inline bool GetSplitTunnel() const { return m_splitTunnel; }
    inline bool SplitTunnelHasBeenSet() const { return m_splitTunnelHasBeenSet; }
    inline void SetSplitTunnel(bool value) { m_splitTunnelHasBeenSet = true; m_splitTunnel = value; }
    inline AwsEc2ClientVpnEndpointDetails& WithSplitTunnel(bool value) { SetSplitTunnel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The transport protocol used by the Client VPN endpoint. </p>
     */
    inline const Aws::String& GetTransportProtocol() const { return m_transportProtocol; }
    inline bool TransportProtocolHasBeenSet() const { return m_transportProtocolHasBeenSet; }
    template<typename TransportProtocolT = Aws::String>
    void SetTransportProtocol(TransportProtocolT&& value) { m_transportProtocolHasBeenSet = true; m_transportProtocol = std::forward<TransportProtocolT>(value); }
    template<typename TransportProtocolT = Aws::String>
    AwsEc2ClientVpnEndpointDetails& WithTransportProtocol(TransportProtocolT&& value) { SetTransportProtocol(std::forward<TransportProtocolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The port number for the Client VPN endpoint. </p>
     */
    inline int GetVpnPort() const { return m_vpnPort; }
    inline bool VpnPortHasBeenSet() const { return m_vpnPortHasBeenSet; }
    inline void SetVpnPort(int value) { m_vpnPortHasBeenSet = true; m_vpnPort = value; }
    inline AwsEc2ClientVpnEndpointDetails& WithVpnPort(int value) { SetVpnPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the server certificate. </p>
     */
    inline const Aws::String& GetServerCertificateArn() const { return m_serverCertificateArn; }
    inline bool ServerCertificateArnHasBeenSet() const { return m_serverCertificateArnHasBeenSet; }
    template<typename ServerCertificateArnT = Aws::String>
    void SetServerCertificateArn(ServerCertificateArnT&& value) { m_serverCertificateArnHasBeenSet = true; m_serverCertificateArn = std::forward<ServerCertificateArnT>(value); }
    template<typename ServerCertificateArnT = Aws::String>
    AwsEc2ClientVpnEndpointDetails& WithServerCertificateArn(ServerCertificateArnT&& value) { SetServerCertificateArn(std::forward<ServerCertificateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about the authentication method used by the Client VPN endpoint.
     * </p>
     */
    inline const Aws::Vector<AwsEc2ClientVpnEndpointAuthenticationOptionsDetails>& GetAuthenticationOptions() const { return m_authenticationOptions; }
    inline bool AuthenticationOptionsHasBeenSet() const { return m_authenticationOptionsHasBeenSet; }
    template<typename AuthenticationOptionsT = Aws::Vector<AwsEc2ClientVpnEndpointAuthenticationOptionsDetails>>
    void SetAuthenticationOptions(AuthenticationOptionsT&& value) { m_authenticationOptionsHasBeenSet = true; m_authenticationOptions = std::forward<AuthenticationOptionsT>(value); }
    template<typename AuthenticationOptionsT = Aws::Vector<AwsEc2ClientVpnEndpointAuthenticationOptionsDetails>>
    AwsEc2ClientVpnEndpointDetails& WithAuthenticationOptions(AuthenticationOptionsT&& value) { SetAuthenticationOptions(std::forward<AuthenticationOptionsT>(value)); return *this;}
    template<typename AuthenticationOptionsT = AwsEc2ClientVpnEndpointAuthenticationOptionsDetails>
    AwsEc2ClientVpnEndpointDetails& AddAuthenticationOptions(AuthenticationOptionsT&& value) { m_authenticationOptionsHasBeenSet = true; m_authenticationOptions.emplace_back(std::forward<AuthenticationOptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Information about the client connection logging options for the Client VPN
     * endpoint. </p>
     */
    inline const AwsEc2ClientVpnEndpointConnectionLogOptionsDetails& GetConnectionLogOptions() const { return m_connectionLogOptions; }
    inline bool ConnectionLogOptionsHasBeenSet() const { return m_connectionLogOptionsHasBeenSet; }
    template<typename ConnectionLogOptionsT = AwsEc2ClientVpnEndpointConnectionLogOptionsDetails>
    void SetConnectionLogOptions(ConnectionLogOptionsT&& value) { m_connectionLogOptionsHasBeenSet = true; m_connectionLogOptions = std::forward<ConnectionLogOptionsT>(value); }
    template<typename ConnectionLogOptionsT = AwsEc2ClientVpnEndpointConnectionLogOptionsDetails>
    AwsEc2ClientVpnEndpointDetails& WithConnectionLogOptions(ConnectionLogOptionsT&& value) { SetConnectionLogOptions(std::forward<ConnectionLogOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The IDs of the security groups for the target network. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIdSet() const { return m_securityGroupIdSet; }
    inline bool SecurityGroupIdSetHasBeenSet() const { return m_securityGroupIdSetHasBeenSet; }
    template<typename SecurityGroupIdSetT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIdSet(SecurityGroupIdSetT&& value) { m_securityGroupIdSetHasBeenSet = true; m_securityGroupIdSet = std::forward<SecurityGroupIdSetT>(value); }
    template<typename SecurityGroupIdSetT = Aws::Vector<Aws::String>>
    AwsEc2ClientVpnEndpointDetails& WithSecurityGroupIdSet(SecurityGroupIdSetT&& value) { SetSecurityGroupIdSet(std::forward<SecurityGroupIdSetT>(value)); return *this;}
    template<typename SecurityGroupIdSetT = Aws::String>
    AwsEc2ClientVpnEndpointDetails& AddSecurityGroupIdSet(SecurityGroupIdSetT&& value) { m_securityGroupIdSetHasBeenSet = true; m_securityGroupIdSet.emplace_back(std::forward<SecurityGroupIdSetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The ID of the VPC. </p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    AwsEc2ClientVpnEndpointDetails& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The URL of the self-service portal. </p>
     */
    inline const Aws::String& GetSelfServicePortalUrl() const { return m_selfServicePortalUrl; }
    inline bool SelfServicePortalUrlHasBeenSet() const { return m_selfServicePortalUrlHasBeenSet; }
    template<typename SelfServicePortalUrlT = Aws::String>
    void SetSelfServicePortalUrl(SelfServicePortalUrlT&& value) { m_selfServicePortalUrlHasBeenSet = true; m_selfServicePortalUrl = std::forward<SelfServicePortalUrlT>(value); }
    template<typename SelfServicePortalUrlT = Aws::String>
    AwsEc2ClientVpnEndpointDetails& WithSelfServicePortalUrl(SelfServicePortalUrlT&& value) { SetSelfServicePortalUrl(std::forward<SelfServicePortalUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The options for managing connection authorization for new client
     * connections. </p>
     */
    inline const AwsEc2ClientVpnEndpointClientConnectOptionsDetails& GetClientConnectOptions() const { return m_clientConnectOptions; }
    inline bool ClientConnectOptionsHasBeenSet() const { return m_clientConnectOptionsHasBeenSet; }
    template<typename ClientConnectOptionsT = AwsEc2ClientVpnEndpointClientConnectOptionsDetails>
    void SetClientConnectOptions(ClientConnectOptionsT&& value) { m_clientConnectOptionsHasBeenSet = true; m_clientConnectOptions = std::forward<ClientConnectOptionsT>(value); }
    template<typename ClientConnectOptionsT = AwsEc2ClientVpnEndpointClientConnectOptionsDetails>
    AwsEc2ClientVpnEndpointDetails& WithClientConnectOptions(ClientConnectOptionsT&& value) { SetClientConnectOptions(std::forward<ClientConnectOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum VPN session duration time in hours. </p>
     */
    inline int GetSessionTimeoutHours() const { return m_sessionTimeoutHours; }
    inline bool SessionTimeoutHoursHasBeenSet() const { return m_sessionTimeoutHoursHasBeenSet; }
    inline void SetSessionTimeoutHours(int value) { m_sessionTimeoutHoursHasBeenSet = true; m_sessionTimeoutHours = value; }
    inline AwsEc2ClientVpnEndpointDetails& WithSessionTimeoutHours(int value) { SetSessionTimeoutHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Options for enabling a customizable text banner that will be displayed on
     * Amazon Web Services provided clients when a VPN session is established. </p>
     */
    inline const AwsEc2ClientVpnEndpointClientLoginBannerOptionsDetails& GetClientLoginBannerOptions() const { return m_clientLoginBannerOptions; }
    inline bool ClientLoginBannerOptionsHasBeenSet() const { return m_clientLoginBannerOptionsHasBeenSet; }
    template<typename ClientLoginBannerOptionsT = AwsEc2ClientVpnEndpointClientLoginBannerOptionsDetails>
    void SetClientLoginBannerOptions(ClientLoginBannerOptionsT&& value) { m_clientLoginBannerOptionsHasBeenSet = true; m_clientLoginBannerOptions = std::forward<ClientLoginBannerOptionsT>(value); }
    template<typename ClientLoginBannerOptionsT = AwsEc2ClientVpnEndpointClientLoginBannerOptionsDetails>
    AwsEc2ClientVpnEndpointDetails& WithClientLoginBannerOptions(ClientLoginBannerOptionsT&& value) { SetClientLoginBannerOptions(std::forward<ClientLoginBannerOptionsT>(value)); return *this;}
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

    bool m_splitTunnel{false};
    bool m_splitTunnelHasBeenSet = false;

    Aws::String m_transportProtocol;
    bool m_transportProtocolHasBeenSet = false;

    int m_vpnPort{0};
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

    int m_sessionTimeoutHours{0};
    bool m_sessionTimeoutHoursHasBeenSet = false;

    AwsEc2ClientVpnEndpointClientLoginBannerOptionsDetails m_clientLoginBannerOptions;
    bool m_clientLoginBannerOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
