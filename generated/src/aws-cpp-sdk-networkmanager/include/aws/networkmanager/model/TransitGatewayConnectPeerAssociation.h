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
    AWS_NETWORKMANAGER_API TransitGatewayConnectPeerAssociation();
    AWS_NETWORKMANAGER_API TransitGatewayConnectPeerAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API TransitGatewayConnectPeerAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the transit gateway Connect peer.</p>
     */
    inline const Aws::String& GetTransitGatewayConnectPeerArn() const{ return m_transitGatewayConnectPeerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the transit gateway Connect peer.</p>
     */
    inline bool TransitGatewayConnectPeerArnHasBeenSet() const { return m_transitGatewayConnectPeerArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the transit gateway Connect peer.</p>
     */
    inline void SetTransitGatewayConnectPeerArn(const Aws::String& value) { m_transitGatewayConnectPeerArnHasBeenSet = true; m_transitGatewayConnectPeerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the transit gateway Connect peer.</p>
     */
    inline void SetTransitGatewayConnectPeerArn(Aws::String&& value) { m_transitGatewayConnectPeerArnHasBeenSet = true; m_transitGatewayConnectPeerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the transit gateway Connect peer.</p>
     */
    inline void SetTransitGatewayConnectPeerArn(const char* value) { m_transitGatewayConnectPeerArnHasBeenSet = true; m_transitGatewayConnectPeerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the transit gateway Connect peer.</p>
     */
    inline TransitGatewayConnectPeerAssociation& WithTransitGatewayConnectPeerArn(const Aws::String& value) { SetTransitGatewayConnectPeerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the transit gateway Connect peer.</p>
     */
    inline TransitGatewayConnectPeerAssociation& WithTransitGatewayConnectPeerArn(Aws::String&& value) { SetTransitGatewayConnectPeerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the transit gateway Connect peer.</p>
     */
    inline TransitGatewayConnectPeerAssociation& WithTransitGatewayConnectPeerArn(const char* value) { SetTransitGatewayConnectPeerArn(value); return *this;}


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
    inline TransitGatewayConnectPeerAssociation& WithGlobalNetworkId(const Aws::String& value) { SetGlobalNetworkId(value); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline TransitGatewayConnectPeerAssociation& WithGlobalNetworkId(Aws::String&& value) { SetGlobalNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline TransitGatewayConnectPeerAssociation& WithGlobalNetworkId(const char* value) { SetGlobalNetworkId(value); return *this;}


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
    inline TransitGatewayConnectPeerAssociation& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}

    /**
     * <p>The ID of the device.</p>
     */
    inline TransitGatewayConnectPeerAssociation& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the device.</p>
     */
    inline TransitGatewayConnectPeerAssociation& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}


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
    inline TransitGatewayConnectPeerAssociation& WithLinkId(const Aws::String& value) { SetLinkId(value); return *this;}

    /**
     * <p>The ID of the link.</p>
     */
    inline TransitGatewayConnectPeerAssociation& WithLinkId(Aws::String&& value) { SetLinkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the link.</p>
     */
    inline TransitGatewayConnectPeerAssociation& WithLinkId(const char* value) { SetLinkId(value); return *this;}


    /**
     * <p>The state of the association.</p>
     */
    inline const TransitGatewayConnectPeerAssociationState& GetState() const{ return m_state; }

    /**
     * <p>The state of the association.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the association.</p>
     */
    inline void SetState(const TransitGatewayConnectPeerAssociationState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the association.</p>
     */
    inline void SetState(TransitGatewayConnectPeerAssociationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the association.</p>
     */
    inline TransitGatewayConnectPeerAssociation& WithState(const TransitGatewayConnectPeerAssociationState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the association.</p>
     */
    inline TransitGatewayConnectPeerAssociation& WithState(TransitGatewayConnectPeerAssociationState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_transitGatewayConnectPeerArn;
    bool m_transitGatewayConnectPeerArnHasBeenSet = false;

    Aws::String m_globalNetworkId;
    bool m_globalNetworkIdHasBeenSet = false;

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    Aws::String m_linkId;
    bool m_linkIdHasBeenSet = false;

    TransitGatewayConnectPeerAssociationState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
