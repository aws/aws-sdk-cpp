/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/TransitGatewayConnectPeerAssociationState.h>
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
   * <p>Describes a transit gateway Connect peer association.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/TransitGatewayConnectPeerAssociation">AWS
   * API Reference</a></p>
   */
  class TransitGatewayConnectPeerAssociation
  {
  public:
    AWS_NETWORKMANAGER_API TransitGatewayConnectPeerAssociation() = default;
    AWS_NETWORKMANAGER_API TransitGatewayConnectPeerAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API TransitGatewayConnectPeerAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the transit gateway Connect peer.</p>
     */
    inline const Aws::String& GetTransitGatewayConnectPeerArn() const { return m_transitGatewayConnectPeerArn; }
    inline bool TransitGatewayConnectPeerArnHasBeenSet() const { return m_transitGatewayConnectPeerArnHasBeenSet; }
    template<typename TransitGatewayConnectPeerArnT = Aws::String>
    void SetTransitGatewayConnectPeerArn(TransitGatewayConnectPeerArnT&& value) { m_transitGatewayConnectPeerArnHasBeenSet = true; m_transitGatewayConnectPeerArn = std::forward<TransitGatewayConnectPeerArnT>(value); }
    template<typename TransitGatewayConnectPeerArnT = Aws::String>
    TransitGatewayConnectPeerAssociation& WithTransitGatewayConnectPeerArn(TransitGatewayConnectPeerArnT&& value) { SetTransitGatewayConnectPeerArn(std::forward<TransitGatewayConnectPeerArnT>(value)); return *this;}
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
    TransitGatewayConnectPeerAssociation& WithGlobalNetworkId(GlobalNetworkIdT&& value) { SetGlobalNetworkId(std::forward<GlobalNetworkIdT>(value)); return *this;}
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
    TransitGatewayConnectPeerAssociation& WithDeviceId(DeviceIdT&& value) { SetDeviceId(std::forward<DeviceIdT>(value)); return *this;}
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
    TransitGatewayConnectPeerAssociation& WithLinkId(LinkIdT&& value) { SetLinkId(std::forward<LinkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the association.</p>
     */
    inline TransitGatewayConnectPeerAssociationState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(TransitGatewayConnectPeerAssociationState value) { m_stateHasBeenSet = true; m_state = value; }
    inline TransitGatewayConnectPeerAssociation& WithState(TransitGatewayConnectPeerAssociationState value) { SetState(value); return *this;}
    ///@}
  private:

    Aws::String m_transitGatewayConnectPeerArn;
    bool m_transitGatewayConnectPeerArnHasBeenSet = false;

    Aws::String m_globalNetworkId;
    bool m_globalNetworkIdHasBeenSet = false;

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    Aws::String m_linkId;
    bool m_linkIdHasBeenSet = false;

    TransitGatewayConnectPeerAssociationState m_state{TransitGatewayConnectPeerAssociationState::NOT_SET};
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
