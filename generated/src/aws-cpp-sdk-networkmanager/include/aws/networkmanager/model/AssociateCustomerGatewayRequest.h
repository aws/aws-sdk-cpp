﻿/**
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
    AWS_NETWORKMANAGER_API AssociateCustomerGatewayRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateCustomerGateway"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the customer gateway.</p>
     */
    inline const Aws::String& GetCustomerGatewayArn() const { return m_customerGatewayArn; }
    inline bool CustomerGatewayArnHasBeenSet() const { return m_customerGatewayArnHasBeenSet; }
    template<typename CustomerGatewayArnT = Aws::String>
    void SetCustomerGatewayArn(CustomerGatewayArnT&& value) { m_customerGatewayArnHasBeenSet = true; m_customerGatewayArn = std::forward<CustomerGatewayArnT>(value); }
    template<typename CustomerGatewayArnT = Aws::String>
    AssociateCustomerGatewayRequest& WithCustomerGatewayArn(CustomerGatewayArnT&& value) { SetCustomerGatewayArn(std::forward<CustomerGatewayArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the global network.</p>
     */
    inline const Aws::String& GetGlobalNetworkId() const { return m_globalNetworkId; }
    inline bool GlobalNetworkIdHasBeenSet() const { return m_globalNetworkIdHasBeenSet; }
    template<typename GlobalNetworkIdT = Aws::String>
    void SetGlobalNetworkId(GlobalNetworkIdT&& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = std::forward<GlobalNetworkIdT>(value); }
    template<typename GlobalNetworkIdT = Aws::String>
    AssociateCustomerGatewayRequest& WithGlobalNetworkId(GlobalNetworkIdT&& value) { SetGlobalNetworkId(std::forward<GlobalNetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the device.</p>
     */
    inline const Aws::String& GetDeviceId() const { return m_deviceId; }
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }
    template<typename DeviceIdT = Aws::String>
    void SetDeviceId(DeviceIdT&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::forward<DeviceIdT>(value); }
    template<typename DeviceIdT = Aws::String>
    AssociateCustomerGatewayRequest& WithDeviceId(DeviceIdT&& value) { SetDeviceId(std::forward<DeviceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the link.</p>
     */
    inline const Aws::String& GetLinkId() const { return m_linkId; }
    inline bool LinkIdHasBeenSet() const { return m_linkIdHasBeenSet; }
    template<typename LinkIdT = Aws::String>
    void SetLinkId(LinkIdT&& value) { m_linkIdHasBeenSet = true; m_linkId = std::forward<LinkIdT>(value); }
    template<typename LinkIdT = Aws::String>
    AssociateCustomerGatewayRequest& WithLinkId(LinkIdT&& value) { SetLinkId(std::forward<LinkIdT>(value)); return *this;}
    ///@}
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
