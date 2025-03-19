/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/CustomerGatewayAssociationState.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes the association between a customer gateway, a device, and a
   * link.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/CustomerGatewayAssociation">AWS
   * API Reference</a></p>
   */
  class CustomerGatewayAssociation
  {
  public:
    AWS_NETWORKMANAGER_API CustomerGatewayAssociation() = default;
    AWS_NETWORKMANAGER_API CustomerGatewayAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API CustomerGatewayAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the customer gateway.</p>
     */
    inline const Aws::String& GetCustomerGatewayArn() const { return m_customerGatewayArn; }
    inline bool CustomerGatewayArnHasBeenSet() const { return m_customerGatewayArnHasBeenSet; }
    template<typename CustomerGatewayArnT = Aws::String>
    void SetCustomerGatewayArn(CustomerGatewayArnT&& value) { m_customerGatewayArnHasBeenSet = true; m_customerGatewayArn = std::forward<CustomerGatewayArnT>(value); }
    template<typename CustomerGatewayArnT = Aws::String>
    CustomerGatewayAssociation& WithCustomerGatewayArn(CustomerGatewayArnT&& value) { SetCustomerGatewayArn(std::forward<CustomerGatewayArnT>(value)); return *this;}
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
    CustomerGatewayAssociation& WithGlobalNetworkId(GlobalNetworkIdT&& value) { SetGlobalNetworkId(std::forward<GlobalNetworkIdT>(value)); return *this;}
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
    CustomerGatewayAssociation& WithDeviceId(DeviceIdT&& value) { SetDeviceId(std::forward<DeviceIdT>(value)); return *this;}
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
    CustomerGatewayAssociation& WithLinkId(LinkIdT&& value) { SetLinkId(std::forward<LinkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The association state.</p>
     */
    inline CustomerGatewayAssociationState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(CustomerGatewayAssociationState value) { m_stateHasBeenSet = true; m_state = value; }
    inline CustomerGatewayAssociation& WithState(CustomerGatewayAssociationState value) { SetState(value); return *this;}
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

    CustomerGatewayAssociationState m_state{CustomerGatewayAssociationState::NOT_SET};
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
