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
namespace NetworkManager
{
namespace Model
{

  /**
   */
  class AssociateCustomerGatewayRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API AssociateCustomerGatewayRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateCustomerGateway"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the customer gateway.</p>
     */
    inline const Aws::String& GetCustomerGatewayArn() const{ return m_customerGatewayArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the customer gateway.</p>
     */
    inline bool CustomerGatewayArnHasBeenSet() const { return m_customerGatewayArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the customer gateway.</p>
     */
    inline void SetCustomerGatewayArn(const Aws::String& value) { m_customerGatewayArnHasBeenSet = true; m_customerGatewayArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the customer gateway.</p>
     */
    inline void SetCustomerGatewayArn(Aws::String&& value) { m_customerGatewayArnHasBeenSet = true; m_customerGatewayArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the customer gateway.</p>
     */
    inline void SetCustomerGatewayArn(const char* value) { m_customerGatewayArnHasBeenSet = true; m_customerGatewayArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the customer gateway.</p>
     */
    inline AssociateCustomerGatewayRequest& WithCustomerGatewayArn(const Aws::String& value) { SetCustomerGatewayArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the customer gateway.</p>
     */
    inline AssociateCustomerGatewayRequest& WithCustomerGatewayArn(Aws::String&& value) { SetCustomerGatewayArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the customer gateway.</p>
     */
    inline AssociateCustomerGatewayRequest& WithCustomerGatewayArn(const char* value) { SetCustomerGatewayArn(value); return *this;}


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
    inline AssociateCustomerGatewayRequest& WithGlobalNetworkId(const Aws::String& value) { SetGlobalNetworkId(value); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline AssociateCustomerGatewayRequest& WithGlobalNetworkId(Aws::String&& value) { SetGlobalNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline AssociateCustomerGatewayRequest& WithGlobalNetworkId(const char* value) { SetGlobalNetworkId(value); return *this;}


    /**
     * <p>The ID of the device.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }

    /**
     * <p>The ID of the device.</p>
     */
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }

    /**
     * <p>The ID of the device.</p>
     */
    inline void SetDeviceId(const Aws::String& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }

    /**
     * <p>The ID of the device.</p>
     */
    inline void SetDeviceId(Aws::String&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::move(value); }

    /**
     * <p>The ID of the device.</p>
     */
    inline void SetDeviceId(const char* value) { m_deviceIdHasBeenSet = true; m_deviceId.assign(value); }

    /**
     * <p>The ID of the device.</p>
     */
    inline AssociateCustomerGatewayRequest& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}

    /**
     * <p>The ID of the device.</p>
     */
    inline AssociateCustomerGatewayRequest& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the device.</p>
     */
    inline AssociateCustomerGatewayRequest& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}


    /**
     * <p>The ID of the link.</p>
     */
    inline const Aws::String& GetLinkId() const{ return m_linkId; }

    /**
     * <p>The ID of the link.</p>
     */
    inline bool LinkIdHasBeenSet() const { return m_linkIdHasBeenSet; }

    /**
     * <p>The ID of the link.</p>
     */
    inline void SetLinkId(const Aws::String& value) { m_linkIdHasBeenSet = true; m_linkId = value; }

    /**
     * <p>The ID of the link.</p>
     */
    inline void SetLinkId(Aws::String&& value) { m_linkIdHasBeenSet = true; m_linkId = std::move(value); }

    /**
     * <p>The ID of the link.</p>
     */
    inline void SetLinkId(const char* value) { m_linkIdHasBeenSet = true; m_linkId.assign(value); }

    /**
     * <p>The ID of the link.</p>
     */
    inline AssociateCustomerGatewayRequest& WithLinkId(const Aws::String& value) { SetLinkId(value); return *this;}

    /**
     * <p>The ID of the link.</p>
     */
    inline AssociateCustomerGatewayRequest& WithLinkId(Aws::String&& value) { SetLinkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the link.</p>
     */
    inline AssociateCustomerGatewayRequest& WithLinkId(const char* value) { SetLinkId(value); return *this;}

  private:

    Aws::String m_customerGatewayArn;
    bool m_customerGatewayArnHasBeenSet = false;

    Aws::String m_globalNetworkId;
    bool m_globalNetworkIdHasBeenSet = false;

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    Aws::String m_linkId;
    bool m_linkIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
