/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace NetworkManager
{
namespace Model
{

  /**
   */
  class GetNetworkResourcesRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API GetNetworkResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetNetworkResources"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;

    AWS_NETWORKMANAGER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the global network.</p>
     */
    inline const Aws::String& GetGlobalNetworkId() const{ return m_globalNetworkId; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline bool GlobalNetworkIdHasBeenSet() const { return m_globalNetworkIdHasBeenSet; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(const Aws::String& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = value; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(Aws::String&& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = std::move(value); }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(const char* value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId.assign(value); }

    /**
     * <p>The ID of the global network.</p>
     */
    inline GetNetworkResourcesRequest& WithGlobalNetworkId(const Aws::String& value) { SetGlobalNetworkId(value); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline GetNetworkResourcesRequest& WithGlobalNetworkId(Aws::String&& value) { SetGlobalNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline GetNetworkResourcesRequest& WithGlobalNetworkId(const char* value) { SetGlobalNetworkId(value); return *this;}


    /**
     * <p>The ID of a core network.</p>
     */
    inline const Aws::String& GetCoreNetworkId() const{ return m_coreNetworkId; }

    /**
     * <p>The ID of a core network.</p>
     */
    inline bool CoreNetworkIdHasBeenSet() const { return m_coreNetworkIdHasBeenSet; }

    /**
     * <p>The ID of a core network.</p>
     */
    inline void SetCoreNetworkId(const Aws::String& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = value; }

    /**
     * <p>The ID of a core network.</p>
     */
    inline void SetCoreNetworkId(Aws::String&& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = std::move(value); }

    /**
     * <p>The ID of a core network.</p>
     */
    inline void SetCoreNetworkId(const char* value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId.assign(value); }

    /**
     * <p>The ID of a core network.</p>
     */
    inline GetNetworkResourcesRequest& WithCoreNetworkId(const Aws::String& value) { SetCoreNetworkId(value); return *this;}

    /**
     * <p>The ID of a core network.</p>
     */
    inline GetNetworkResourcesRequest& WithCoreNetworkId(Aws::String&& value) { SetCoreNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of a core network.</p>
     */
    inline GetNetworkResourcesRequest& WithCoreNetworkId(const char* value) { SetCoreNetworkId(value); return *this;}


    /**
     * <p>The ARN of the gateway.</p>
     */
    inline const Aws::String& GetRegisteredGatewayArn() const{ return m_registeredGatewayArn; }

    /**
     * <p>The ARN of the gateway.</p>
     */
    inline bool RegisteredGatewayArnHasBeenSet() const { return m_registeredGatewayArnHasBeenSet; }

    /**
     * <p>The ARN of the gateway.</p>
     */
    inline void SetRegisteredGatewayArn(const Aws::String& value) { m_registeredGatewayArnHasBeenSet = true; m_registeredGatewayArn = value; }

    /**
     * <p>The ARN of the gateway.</p>
     */
    inline void SetRegisteredGatewayArn(Aws::String&& value) { m_registeredGatewayArnHasBeenSet = true; m_registeredGatewayArn = std::move(value); }

    /**
     * <p>The ARN of the gateway.</p>
     */
    inline void SetRegisteredGatewayArn(const char* value) { m_registeredGatewayArnHasBeenSet = true; m_registeredGatewayArn.assign(value); }

    /**
     * <p>The ARN of the gateway.</p>
     */
    inline GetNetworkResourcesRequest& WithRegisteredGatewayArn(const Aws::String& value) { SetRegisteredGatewayArn(value); return *this;}

    /**
     * <p>The ARN of the gateway.</p>
     */
    inline GetNetworkResourcesRequest& WithRegisteredGatewayArn(Aws::String&& value) { SetRegisteredGatewayArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the gateway.</p>
     */
    inline GetNetworkResourcesRequest& WithRegisteredGatewayArn(const char* value) { SetRegisteredGatewayArn(value); return *this;}


    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetAwsRegion() const{ return m_awsRegion; }

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline bool AwsRegionHasBeenSet() const { return m_awsRegionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline void SetAwsRegion(const Aws::String& value) { m_awsRegionHasBeenSet = true; m_awsRegion = value; }

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline void SetAwsRegion(Aws::String&& value) { m_awsRegionHasBeenSet = true; m_awsRegion = std::move(value); }

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline void SetAwsRegion(const char* value) { m_awsRegionHasBeenSet = true; m_awsRegion.assign(value); }

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline GetNetworkResourcesRequest& WithAwsRegion(const Aws::String& value) { SetAwsRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline GetNetworkResourcesRequest& WithAwsRegion(Aws::String&& value) { SetAwsRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region.</p>
     */
    inline GetNetworkResourcesRequest& WithAwsRegion(const char* value) { SetAwsRegion(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline GetNetworkResourcesRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline GetNetworkResourcesRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID.</p>
     */
    inline GetNetworkResourcesRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The resource type.</p> <p>The following are the supported resource types for
     * Direct Connect:</p> <ul> <li> <p> <code>dxcon</code> - The definition model is
     * <a
     * href="https://docs.aws.amazon.com/directconnect/latest/APIReference/API_Connection.html">Connection</a>.</p>
     * </li> <li> <p> <code>dx-gateway</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/directconnect/latest/APIReference/API_DirectConnectGateway.html">DirectConnectGateway</a>.</p>
     * </li> <li> <p> <code>dx-vif</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/directconnect/latest/APIReference/API_VirtualInterface.html">VirtualInterface</a>.</p>
     * </li> </ul> <p>The following are the supported resource types for Network
     * Manager:</p> <ul> <li> <p> <code>connection</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/networkmanager/latest/APIReference/API_Connection.html">Connection</a>.</p>
     * </li> <li> <p> <code>device</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/networkmanager/latest/APIReference/API_Device.html">Device</a>.</p>
     * </li> <li> <p> <code>link</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/networkmanager/latest/APIReference/API_Link.html">Link</a>.</p>
     * </li> <li> <p> <code>site</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/networkmanager/latest/APIReference/API_Site.html">Site</a>.</p>
     * </li> </ul> <p>The following are the supported resource types for Amazon
     * VPC:</p> <ul> <li> <p> <code>customer-gateway</code> - The definition model is
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CustomerGateway.html">CustomerGateway</a>.</p>
     * </li> <li> <p> <code>transit-gateway</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_TransitGateway.html">TransitGateway</a>.</p>
     * </li> <li> <p> <code>transit-gateway-attachment</code> - The definition model is
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_TransitGatewayAttachment.html">TransitGatewayAttachment</a>.</p>
     * </li> <li> <p> <code>transit-gateway-connect-peer</code> - The definition model
     * is <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_TransitGatewayConnectPeer.html">TransitGatewayConnectPeer</a>.</p>
     * </li> <li> <p> <code>transit-gateway-route-table</code> - The definition model
     * is <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_TransitGatewayRouteTable.html">TransitGatewayRouteTable</a>.</p>
     * </li> <li> <p> <code>vpn-connection</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_VpnConnection.html">VpnConnection</a>.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type.</p> <p>The following are the supported resource types for
     * Direct Connect:</p> <ul> <li> <p> <code>dxcon</code> - The definition model is
     * <a
     * href="https://docs.aws.amazon.com/directconnect/latest/APIReference/API_Connection.html">Connection</a>.</p>
     * </li> <li> <p> <code>dx-gateway</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/directconnect/latest/APIReference/API_DirectConnectGateway.html">DirectConnectGateway</a>.</p>
     * </li> <li> <p> <code>dx-vif</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/directconnect/latest/APIReference/API_VirtualInterface.html">VirtualInterface</a>.</p>
     * </li> </ul> <p>The following are the supported resource types for Network
     * Manager:</p> <ul> <li> <p> <code>connection</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/networkmanager/latest/APIReference/API_Connection.html">Connection</a>.</p>
     * </li> <li> <p> <code>device</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/networkmanager/latest/APIReference/API_Device.html">Device</a>.</p>
     * </li> <li> <p> <code>link</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/networkmanager/latest/APIReference/API_Link.html">Link</a>.</p>
     * </li> <li> <p> <code>site</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/networkmanager/latest/APIReference/API_Site.html">Site</a>.</p>
     * </li> </ul> <p>The following are the supported resource types for Amazon
     * VPC:</p> <ul> <li> <p> <code>customer-gateway</code> - The definition model is
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CustomerGateway.html">CustomerGateway</a>.</p>
     * </li> <li> <p> <code>transit-gateway</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_TransitGateway.html">TransitGateway</a>.</p>
     * </li> <li> <p> <code>transit-gateway-attachment</code> - The definition model is
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_TransitGatewayAttachment.html">TransitGatewayAttachment</a>.</p>
     * </li> <li> <p> <code>transit-gateway-connect-peer</code> - The definition model
     * is <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_TransitGatewayConnectPeer.html">TransitGatewayConnectPeer</a>.</p>
     * </li> <li> <p> <code>transit-gateway-route-table</code> - The definition model
     * is <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_TransitGatewayRouteTable.html">TransitGatewayRouteTable</a>.</p>
     * </li> <li> <p> <code>vpn-connection</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_VpnConnection.html">VpnConnection</a>.</p>
     * </li> </ul>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type.</p> <p>The following are the supported resource types for
     * Direct Connect:</p> <ul> <li> <p> <code>dxcon</code> - The definition model is
     * <a
     * href="https://docs.aws.amazon.com/directconnect/latest/APIReference/API_Connection.html">Connection</a>.</p>
     * </li> <li> <p> <code>dx-gateway</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/directconnect/latest/APIReference/API_DirectConnectGateway.html">DirectConnectGateway</a>.</p>
     * </li> <li> <p> <code>dx-vif</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/directconnect/latest/APIReference/API_VirtualInterface.html">VirtualInterface</a>.</p>
     * </li> </ul> <p>The following are the supported resource types for Network
     * Manager:</p> <ul> <li> <p> <code>connection</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/networkmanager/latest/APIReference/API_Connection.html">Connection</a>.</p>
     * </li> <li> <p> <code>device</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/networkmanager/latest/APIReference/API_Device.html">Device</a>.</p>
     * </li> <li> <p> <code>link</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/networkmanager/latest/APIReference/API_Link.html">Link</a>.</p>
     * </li> <li> <p> <code>site</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/networkmanager/latest/APIReference/API_Site.html">Site</a>.</p>
     * </li> </ul> <p>The following are the supported resource types for Amazon
     * VPC:</p> <ul> <li> <p> <code>customer-gateway</code> - The definition model is
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CustomerGateway.html">CustomerGateway</a>.</p>
     * </li> <li> <p> <code>transit-gateway</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_TransitGateway.html">TransitGateway</a>.</p>
     * </li> <li> <p> <code>transit-gateway-attachment</code> - The definition model is
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_TransitGatewayAttachment.html">TransitGatewayAttachment</a>.</p>
     * </li> <li> <p> <code>transit-gateway-connect-peer</code> - The definition model
     * is <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_TransitGatewayConnectPeer.html">TransitGatewayConnectPeer</a>.</p>
     * </li> <li> <p> <code>transit-gateway-route-table</code> - The definition model
     * is <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_TransitGatewayRouteTable.html">TransitGatewayRouteTable</a>.</p>
     * </li> <li> <p> <code>vpn-connection</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_VpnConnection.html">VpnConnection</a>.</p>
     * </li> </ul>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type.</p> <p>The following are the supported resource types for
     * Direct Connect:</p> <ul> <li> <p> <code>dxcon</code> - The definition model is
     * <a
     * href="https://docs.aws.amazon.com/directconnect/latest/APIReference/API_Connection.html">Connection</a>.</p>
     * </li> <li> <p> <code>dx-gateway</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/directconnect/latest/APIReference/API_DirectConnectGateway.html">DirectConnectGateway</a>.</p>
     * </li> <li> <p> <code>dx-vif</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/directconnect/latest/APIReference/API_VirtualInterface.html">VirtualInterface</a>.</p>
     * </li> </ul> <p>The following are the supported resource types for Network
     * Manager:</p> <ul> <li> <p> <code>connection</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/networkmanager/latest/APIReference/API_Connection.html">Connection</a>.</p>
     * </li> <li> <p> <code>device</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/networkmanager/latest/APIReference/API_Device.html">Device</a>.</p>
     * </li> <li> <p> <code>link</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/networkmanager/latest/APIReference/API_Link.html">Link</a>.</p>
     * </li> <li> <p> <code>site</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/networkmanager/latest/APIReference/API_Site.html">Site</a>.</p>
     * </li> </ul> <p>The following are the supported resource types for Amazon
     * VPC:</p> <ul> <li> <p> <code>customer-gateway</code> - The definition model is
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CustomerGateway.html">CustomerGateway</a>.</p>
     * </li> <li> <p> <code>transit-gateway</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_TransitGateway.html">TransitGateway</a>.</p>
     * </li> <li> <p> <code>transit-gateway-attachment</code> - The definition model is
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_TransitGatewayAttachment.html">TransitGatewayAttachment</a>.</p>
     * </li> <li> <p> <code>transit-gateway-connect-peer</code> - The definition model
     * is <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_TransitGatewayConnectPeer.html">TransitGatewayConnectPeer</a>.</p>
     * </li> <li> <p> <code>transit-gateway-route-table</code> - The definition model
     * is <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_TransitGatewayRouteTable.html">TransitGatewayRouteTable</a>.</p>
     * </li> <li> <p> <code>vpn-connection</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_VpnConnection.html">VpnConnection</a>.</p>
     * </li> </ul>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type.</p> <p>The following are the supported resource types for
     * Direct Connect:</p> <ul> <li> <p> <code>dxcon</code> - The definition model is
     * <a
     * href="https://docs.aws.amazon.com/directconnect/latest/APIReference/API_Connection.html">Connection</a>.</p>
     * </li> <li> <p> <code>dx-gateway</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/directconnect/latest/APIReference/API_DirectConnectGateway.html">DirectConnectGateway</a>.</p>
     * </li> <li> <p> <code>dx-vif</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/directconnect/latest/APIReference/API_VirtualInterface.html">VirtualInterface</a>.</p>
     * </li> </ul> <p>The following are the supported resource types for Network
     * Manager:</p> <ul> <li> <p> <code>connection</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/networkmanager/latest/APIReference/API_Connection.html">Connection</a>.</p>
     * </li> <li> <p> <code>device</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/networkmanager/latest/APIReference/API_Device.html">Device</a>.</p>
     * </li> <li> <p> <code>link</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/networkmanager/latest/APIReference/API_Link.html">Link</a>.</p>
     * </li> <li> <p> <code>site</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/networkmanager/latest/APIReference/API_Site.html">Site</a>.</p>
     * </li> </ul> <p>The following are the supported resource types for Amazon
     * VPC:</p> <ul> <li> <p> <code>customer-gateway</code> - The definition model is
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CustomerGateway.html">CustomerGateway</a>.</p>
     * </li> <li> <p> <code>transit-gateway</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_TransitGateway.html">TransitGateway</a>.</p>
     * </li> <li> <p> <code>transit-gateway-attachment</code> - The definition model is
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_TransitGatewayAttachment.html">TransitGatewayAttachment</a>.</p>
     * </li> <li> <p> <code>transit-gateway-connect-peer</code> - The definition model
     * is <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_TransitGatewayConnectPeer.html">TransitGatewayConnectPeer</a>.</p>
     * </li> <li> <p> <code>transit-gateway-route-table</code> - The definition model
     * is <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_TransitGatewayRouteTable.html">TransitGatewayRouteTable</a>.</p>
     * </li> <li> <p> <code>vpn-connection</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_VpnConnection.html">VpnConnection</a>.</p>
     * </li> </ul>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The resource type.</p> <p>The following are the supported resource types for
     * Direct Connect:</p> <ul> <li> <p> <code>dxcon</code> - The definition model is
     * <a
     * href="https://docs.aws.amazon.com/directconnect/latest/APIReference/API_Connection.html">Connection</a>.</p>
     * </li> <li> <p> <code>dx-gateway</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/directconnect/latest/APIReference/API_DirectConnectGateway.html">DirectConnectGateway</a>.</p>
     * </li> <li> <p> <code>dx-vif</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/directconnect/latest/APIReference/API_VirtualInterface.html">VirtualInterface</a>.</p>
     * </li> </ul> <p>The following are the supported resource types for Network
     * Manager:</p> <ul> <li> <p> <code>connection</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/networkmanager/latest/APIReference/API_Connection.html">Connection</a>.</p>
     * </li> <li> <p> <code>device</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/networkmanager/latest/APIReference/API_Device.html">Device</a>.</p>
     * </li> <li> <p> <code>link</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/networkmanager/latest/APIReference/API_Link.html">Link</a>.</p>
     * </li> <li> <p> <code>site</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/networkmanager/latest/APIReference/API_Site.html">Site</a>.</p>
     * </li> </ul> <p>The following are the supported resource types for Amazon
     * VPC:</p> <ul> <li> <p> <code>customer-gateway</code> - The definition model is
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CustomerGateway.html">CustomerGateway</a>.</p>
     * </li> <li> <p> <code>transit-gateway</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_TransitGateway.html">TransitGateway</a>.</p>
     * </li> <li> <p> <code>transit-gateway-attachment</code> - The definition model is
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_TransitGatewayAttachment.html">TransitGatewayAttachment</a>.</p>
     * </li> <li> <p> <code>transit-gateway-connect-peer</code> - The definition model
     * is <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_TransitGatewayConnectPeer.html">TransitGatewayConnectPeer</a>.</p>
     * </li> <li> <p> <code>transit-gateway-route-table</code> - The definition model
     * is <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_TransitGatewayRouteTable.html">TransitGatewayRouteTable</a>.</p>
     * </li> <li> <p> <code>vpn-connection</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_VpnConnection.html">VpnConnection</a>.</p>
     * </li> </ul>
     */
    inline GetNetworkResourcesRequest& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type.</p> <p>The following are the supported resource types for
     * Direct Connect:</p> <ul> <li> <p> <code>dxcon</code> - The definition model is
     * <a
     * href="https://docs.aws.amazon.com/directconnect/latest/APIReference/API_Connection.html">Connection</a>.</p>
     * </li> <li> <p> <code>dx-gateway</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/directconnect/latest/APIReference/API_DirectConnectGateway.html">DirectConnectGateway</a>.</p>
     * </li> <li> <p> <code>dx-vif</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/directconnect/latest/APIReference/API_VirtualInterface.html">VirtualInterface</a>.</p>
     * </li> </ul> <p>The following are the supported resource types for Network
     * Manager:</p> <ul> <li> <p> <code>connection</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/networkmanager/latest/APIReference/API_Connection.html">Connection</a>.</p>
     * </li> <li> <p> <code>device</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/networkmanager/latest/APIReference/API_Device.html">Device</a>.</p>
     * </li> <li> <p> <code>link</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/networkmanager/latest/APIReference/API_Link.html">Link</a>.</p>
     * </li> <li> <p> <code>site</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/networkmanager/latest/APIReference/API_Site.html">Site</a>.</p>
     * </li> </ul> <p>The following are the supported resource types for Amazon
     * VPC:</p> <ul> <li> <p> <code>customer-gateway</code> - The definition model is
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CustomerGateway.html">CustomerGateway</a>.</p>
     * </li> <li> <p> <code>transit-gateway</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_TransitGateway.html">TransitGateway</a>.</p>
     * </li> <li> <p> <code>transit-gateway-attachment</code> - The definition model is
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_TransitGatewayAttachment.html">TransitGatewayAttachment</a>.</p>
     * </li> <li> <p> <code>transit-gateway-connect-peer</code> - The definition model
     * is <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_TransitGatewayConnectPeer.html">TransitGatewayConnectPeer</a>.</p>
     * </li> <li> <p> <code>transit-gateway-route-table</code> - The definition model
     * is <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_TransitGatewayRouteTable.html">TransitGatewayRouteTable</a>.</p>
     * </li> <li> <p> <code>vpn-connection</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_VpnConnection.html">VpnConnection</a>.</p>
     * </li> </ul>
     */
    inline GetNetworkResourcesRequest& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The resource type.</p> <p>The following are the supported resource types for
     * Direct Connect:</p> <ul> <li> <p> <code>dxcon</code> - The definition model is
     * <a
     * href="https://docs.aws.amazon.com/directconnect/latest/APIReference/API_Connection.html">Connection</a>.</p>
     * </li> <li> <p> <code>dx-gateway</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/directconnect/latest/APIReference/API_DirectConnectGateway.html">DirectConnectGateway</a>.</p>
     * </li> <li> <p> <code>dx-vif</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/directconnect/latest/APIReference/API_VirtualInterface.html">VirtualInterface</a>.</p>
     * </li> </ul> <p>The following are the supported resource types for Network
     * Manager:</p> <ul> <li> <p> <code>connection</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/networkmanager/latest/APIReference/API_Connection.html">Connection</a>.</p>
     * </li> <li> <p> <code>device</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/networkmanager/latest/APIReference/API_Device.html">Device</a>.</p>
     * </li> <li> <p> <code>link</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/networkmanager/latest/APIReference/API_Link.html">Link</a>.</p>
     * </li> <li> <p> <code>site</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/networkmanager/latest/APIReference/API_Site.html">Site</a>.</p>
     * </li> </ul> <p>The following are the supported resource types for Amazon
     * VPC:</p> <ul> <li> <p> <code>customer-gateway</code> - The definition model is
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_CustomerGateway.html">CustomerGateway</a>.</p>
     * </li> <li> <p> <code>transit-gateway</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_TransitGateway.html">TransitGateway</a>.</p>
     * </li> <li> <p> <code>transit-gateway-attachment</code> - The definition model is
     * <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_TransitGatewayAttachment.html">TransitGatewayAttachment</a>.</p>
     * </li> <li> <p> <code>transit-gateway-connect-peer</code> - The definition model
     * is <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_TransitGatewayConnectPeer.html">TransitGatewayConnectPeer</a>.</p>
     * </li> <li> <p> <code>transit-gateway-route-table</code> - The definition model
     * is <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_TransitGatewayRouteTable.html">TransitGatewayRouteTable</a>.</p>
     * </li> <li> <p> <code>vpn-connection</code> - The definition model is <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_VpnConnection.html">VpnConnection</a>.</p>
     * </li> </ul>
     */
    inline GetNetworkResourcesRequest& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The ARN of the resource.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The ARN of the resource.</p>
     */
    inline GetNetworkResourcesRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The ARN of the resource.</p>
     */
    inline GetNetworkResourcesRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the resource.</p>
     */
    inline GetNetworkResourcesRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline GetNetworkResourcesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next page of results.</p>
     */
    inline GetNetworkResourcesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline GetNetworkResourcesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next page of results.</p>
     */
    inline GetNetworkResourcesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_globalNetworkId;
    bool m_globalNetworkIdHasBeenSet = false;

    Aws::String m_coreNetworkId;
    bool m_coreNetworkIdHasBeenSet = false;

    Aws::String m_registeredGatewayArn;
    bool m_registeredGatewayArnHasBeenSet = false;

    Aws::String m_awsRegion;
    bool m_awsRegionHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
