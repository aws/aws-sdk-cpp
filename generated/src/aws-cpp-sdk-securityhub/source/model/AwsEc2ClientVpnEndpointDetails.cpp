/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2ClientVpnEndpointDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEc2ClientVpnEndpointDetails::AwsEc2ClientVpnEndpointDetails() : 
    m_clientVpnEndpointIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_clientCidrBlockHasBeenSet(false),
    m_dnsServerHasBeenSet(false),
    m_splitTunnel(false),
    m_splitTunnelHasBeenSet(false),
    m_transportProtocolHasBeenSet(false),
    m_vpnPort(0),
    m_vpnPortHasBeenSet(false),
    m_serverCertificateArnHasBeenSet(false),
    m_authenticationOptionsHasBeenSet(false),
    m_connectionLogOptionsHasBeenSet(false),
    m_securityGroupIdSetHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_selfServicePortalUrlHasBeenSet(false),
    m_clientConnectOptionsHasBeenSet(false),
    m_sessionTimeoutHours(0),
    m_sessionTimeoutHoursHasBeenSet(false),
    m_clientLoginBannerOptionsHasBeenSet(false)
{
}

AwsEc2ClientVpnEndpointDetails::AwsEc2ClientVpnEndpointDetails(JsonView jsonValue) : 
    m_clientVpnEndpointIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_clientCidrBlockHasBeenSet(false),
    m_dnsServerHasBeenSet(false),
    m_splitTunnel(false),
    m_splitTunnelHasBeenSet(false),
    m_transportProtocolHasBeenSet(false),
    m_vpnPort(0),
    m_vpnPortHasBeenSet(false),
    m_serverCertificateArnHasBeenSet(false),
    m_authenticationOptionsHasBeenSet(false),
    m_connectionLogOptionsHasBeenSet(false),
    m_securityGroupIdSetHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_selfServicePortalUrlHasBeenSet(false),
    m_clientConnectOptionsHasBeenSet(false),
    m_sessionTimeoutHours(0),
    m_sessionTimeoutHoursHasBeenSet(false),
    m_clientLoginBannerOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2ClientVpnEndpointDetails& AwsEc2ClientVpnEndpointDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClientVpnEndpointId"))
  {
    m_clientVpnEndpointId = jsonValue.GetString("ClientVpnEndpointId");

    m_clientVpnEndpointIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClientCidrBlock"))
  {
    m_clientCidrBlock = jsonValue.GetString("ClientCidrBlock");

    m_clientCidrBlockHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DnsServer"))
  {
    Aws::Utils::Array<JsonView> dnsServerJsonList = jsonValue.GetArray("DnsServer");
    for(unsigned dnsServerIndex = 0; dnsServerIndex < dnsServerJsonList.GetLength(); ++dnsServerIndex)
    {
      m_dnsServer.push_back(dnsServerJsonList[dnsServerIndex].AsString());
    }
    m_dnsServerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SplitTunnel"))
  {
    m_splitTunnel = jsonValue.GetBool("SplitTunnel");

    m_splitTunnelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TransportProtocol"))
  {
    m_transportProtocol = jsonValue.GetString("TransportProtocol");

    m_transportProtocolHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpnPort"))
  {
    m_vpnPort = jsonValue.GetInteger("VpnPort");

    m_vpnPortHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerCertificateArn"))
  {
    m_serverCertificateArn = jsonValue.GetString("ServerCertificateArn");

    m_serverCertificateArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuthenticationOptions"))
  {
    Aws::Utils::Array<JsonView> authenticationOptionsJsonList = jsonValue.GetArray("AuthenticationOptions");
    for(unsigned authenticationOptionsIndex = 0; authenticationOptionsIndex < authenticationOptionsJsonList.GetLength(); ++authenticationOptionsIndex)
    {
      m_authenticationOptions.push_back(authenticationOptionsJsonList[authenticationOptionsIndex].AsObject());
    }
    m_authenticationOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionLogOptions"))
  {
    m_connectionLogOptions = jsonValue.GetObject("ConnectionLogOptions");

    m_connectionLogOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityGroupIdSet"))
  {
    Aws::Utils::Array<JsonView> securityGroupIdSetJsonList = jsonValue.GetArray("SecurityGroupIdSet");
    for(unsigned securityGroupIdSetIndex = 0; securityGroupIdSetIndex < securityGroupIdSetJsonList.GetLength(); ++securityGroupIdSetIndex)
    {
      m_securityGroupIdSet.push_back(securityGroupIdSetJsonList[securityGroupIdSetIndex].AsString());
    }
    m_securityGroupIdSetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SelfServicePortalUrl"))
  {
    m_selfServicePortalUrl = jsonValue.GetString("SelfServicePortalUrl");

    m_selfServicePortalUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClientConnectOptions"))
  {
    m_clientConnectOptions = jsonValue.GetObject("ClientConnectOptions");

    m_clientConnectOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SessionTimeoutHours"))
  {
    m_sessionTimeoutHours = jsonValue.GetInteger("SessionTimeoutHours");

    m_sessionTimeoutHoursHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClientLoginBannerOptions"))
  {
    m_clientLoginBannerOptions = jsonValue.GetObject("ClientLoginBannerOptions");

    m_clientLoginBannerOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2ClientVpnEndpointDetails::Jsonize() const
{
  JsonValue payload;

  if(m_clientVpnEndpointIdHasBeenSet)
  {
   payload.WithString("ClientVpnEndpointId", m_clientVpnEndpointId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_clientCidrBlockHasBeenSet)
  {
   payload.WithString("ClientCidrBlock", m_clientCidrBlock);

  }

  if(m_dnsServerHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> dnsServerJsonList(m_dnsServer.size());
   for(unsigned dnsServerIndex = 0; dnsServerIndex < dnsServerJsonList.GetLength(); ++dnsServerIndex)
   {
     dnsServerJsonList[dnsServerIndex].AsString(m_dnsServer[dnsServerIndex]);
   }
   payload.WithArray("DnsServer", std::move(dnsServerJsonList));

  }

  if(m_splitTunnelHasBeenSet)
  {
   payload.WithBool("SplitTunnel", m_splitTunnel);

  }

  if(m_transportProtocolHasBeenSet)
  {
   payload.WithString("TransportProtocol", m_transportProtocol);

  }

  if(m_vpnPortHasBeenSet)
  {
   payload.WithInteger("VpnPort", m_vpnPort);

  }

  if(m_serverCertificateArnHasBeenSet)
  {
   payload.WithString("ServerCertificateArn", m_serverCertificateArn);

  }

  if(m_authenticationOptionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> authenticationOptionsJsonList(m_authenticationOptions.size());
   for(unsigned authenticationOptionsIndex = 0; authenticationOptionsIndex < authenticationOptionsJsonList.GetLength(); ++authenticationOptionsIndex)
   {
     authenticationOptionsJsonList[authenticationOptionsIndex].AsObject(m_authenticationOptions[authenticationOptionsIndex].Jsonize());
   }
   payload.WithArray("AuthenticationOptions", std::move(authenticationOptionsJsonList));

  }

  if(m_connectionLogOptionsHasBeenSet)
  {
   payload.WithObject("ConnectionLogOptions", m_connectionLogOptions.Jsonize());

  }

  if(m_securityGroupIdSetHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupIdSetJsonList(m_securityGroupIdSet.size());
   for(unsigned securityGroupIdSetIndex = 0; securityGroupIdSetIndex < securityGroupIdSetJsonList.GetLength(); ++securityGroupIdSetIndex)
   {
     securityGroupIdSetJsonList[securityGroupIdSetIndex].AsString(m_securityGroupIdSet[securityGroupIdSetIndex]);
   }
   payload.WithArray("SecurityGroupIdSet", std::move(securityGroupIdSetJsonList));

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  if(m_selfServicePortalUrlHasBeenSet)
  {
   payload.WithString("SelfServicePortalUrl", m_selfServicePortalUrl);

  }

  if(m_clientConnectOptionsHasBeenSet)
  {
   payload.WithObject("ClientConnectOptions", m_clientConnectOptions.Jsonize());

  }

  if(m_sessionTimeoutHoursHasBeenSet)
  {
   payload.WithInteger("SessionTimeoutHours", m_sessionTimeoutHours);

  }

  if(m_clientLoginBannerOptionsHasBeenSet)
  {
   payload.WithObject("ClientLoginBannerOptions", m_clientLoginBannerOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
