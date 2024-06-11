﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/LinkAssociationState.h>
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
   * <p>Describes the association between a device and a link.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/LinkAssociation">AWS
   * API Reference</a></p>
   */
  class LinkAssociation
  {
  public:
    AWS_NETWORKMANAGER_API LinkAssociation();
    AWS_NETWORKMANAGER_API LinkAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API LinkAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the global network.</p>
     */
    inline const Aws::String& GetGlobalNetworkId() const{ return m_globalNetworkId; }
    inline bool GlobalNetworkIdHasBeenSet() const { return m_globalNetworkIdHasBeenSet; }
    inline void SetGlobalNetworkId(const Aws::String& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = value; }
    inline void SetGlobalNetworkId(Aws::String&& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = std::move(value); }
    inline void SetGlobalNetworkId(const char* value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId.assign(value); }
    inline LinkAssociation& WithGlobalNetworkId(const Aws::String& value) { SetGlobalNetworkId(value); return *this;}
    inline LinkAssociation& WithGlobalNetworkId(Aws::String&& value) { SetGlobalNetworkId(std::move(value)); return *this;}
    inline LinkAssociation& WithGlobalNetworkId(const char* value) { SetGlobalNetworkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device ID for the link association.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }
    inline void SetDeviceId(const Aws::String& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }
    inline void SetDeviceId(Aws::String&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::move(value); }
    inline void SetDeviceId(const char* value) { m_deviceIdHasBeenSet = true; m_deviceId.assign(value); }
    inline LinkAssociation& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}
    inline LinkAssociation& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}
    inline LinkAssociation& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the link.</p>
     */
    inline const Aws::String& GetLinkId() const{ return m_linkId; }
    inline bool LinkIdHasBeenSet() const { return m_linkIdHasBeenSet; }
    inline void SetLinkId(const Aws::String& value) { m_linkIdHasBeenSet = true; m_linkId = value; }
    inline void SetLinkId(Aws::String&& value) { m_linkIdHasBeenSet = true; m_linkId = std::move(value); }
    inline void SetLinkId(const char* value) { m_linkIdHasBeenSet = true; m_linkId.assign(value); }
    inline LinkAssociation& WithLinkId(const Aws::String& value) { SetLinkId(value); return *this;}
    inline LinkAssociation& WithLinkId(Aws::String&& value) { SetLinkId(std::move(value)); return *this;}
    inline LinkAssociation& WithLinkId(const char* value) { SetLinkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the association.</p>
     */
    inline const LinkAssociationState& GetLinkAssociationState() const{ return m_linkAssociationState; }
    inline bool LinkAssociationStateHasBeenSet() const { return m_linkAssociationStateHasBeenSet; }
    inline void SetLinkAssociationState(const LinkAssociationState& value) { m_linkAssociationStateHasBeenSet = true; m_linkAssociationState = value; }
    inline void SetLinkAssociationState(LinkAssociationState&& value) { m_linkAssociationStateHasBeenSet = true; m_linkAssociationState = std::move(value); }
    inline LinkAssociation& WithLinkAssociationState(const LinkAssociationState& value) { SetLinkAssociationState(value); return *this;}
    inline LinkAssociation& WithLinkAssociationState(LinkAssociationState&& value) { SetLinkAssociationState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_globalNetworkId;
    bool m_globalNetworkIdHasBeenSet = false;

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    Aws::String m_linkId;
    bool m_linkIdHasBeenSet = false;

    LinkAssociationState m_linkAssociationState;
    bool m_linkAssociationStateHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
