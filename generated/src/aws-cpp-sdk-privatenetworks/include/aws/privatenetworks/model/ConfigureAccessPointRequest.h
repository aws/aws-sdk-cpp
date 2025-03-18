/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/PrivateNetworksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/privatenetworks/model/Position.h>
#include <utility>

namespace Aws
{
namespace PrivateNetworks
{
namespace Model
{

  /**
   */
  class ConfigureAccessPointRequest : public PrivateNetworksRequest
  {
  public:
    AWS_PRIVATENETWORKS_API ConfigureAccessPointRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ConfigureAccessPoint"; }

    AWS_PRIVATENETWORKS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the network resource.</p>
     */
    inline const Aws::String& GetAccessPointArn() const { return m_accessPointArn; }
    inline bool AccessPointArnHasBeenSet() const { return m_accessPointArnHasBeenSet; }
    template<typename AccessPointArnT = Aws::String>
    void SetAccessPointArn(AccessPointArnT&& value) { m_accessPointArnHasBeenSet = true; m_accessPointArn = std::forward<AccessPointArnT>(value); }
    template<typename AccessPointArnT = Aws::String>
    ConfigureAccessPointRequest& WithAccessPointArn(AccessPointArnT&& value) { SetAccessPointArn(std::forward<AccessPointArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Base64 encoded string of the CPI certificate associated with the CPI user
     * who is certifying the coordinates of the network resource. </p>
     */
    inline const Aws::String& GetCpiSecretKey() const { return m_cpiSecretKey; }
    inline bool CpiSecretKeyHasBeenSet() const { return m_cpiSecretKeyHasBeenSet; }
    template<typename CpiSecretKeyT = Aws::String>
    void SetCpiSecretKey(CpiSecretKeyT&& value) { m_cpiSecretKeyHasBeenSet = true; m_cpiSecretKey = std::forward<CpiSecretKeyT>(value); }
    template<typename CpiSecretKeyT = Aws::String>
    ConfigureAccessPointRequest& WithCpiSecretKey(CpiSecretKeyT&& value) { SetCpiSecretKey(std::forward<CpiSecretKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CPI user ID of the CPI user who is certifying the coordinates of the
     * network resource. </p>
     */
    inline const Aws::String& GetCpiUserId() const { return m_cpiUserId; }
    inline bool CpiUserIdHasBeenSet() const { return m_cpiUserIdHasBeenSet; }
    template<typename CpiUserIdT = Aws::String>
    void SetCpiUserId(CpiUserIdT&& value) { m_cpiUserIdHasBeenSet = true; m_cpiUserId = std::forward<CpiUserIdT>(value); }
    template<typename CpiUserIdT = Aws::String>
    ConfigureAccessPointRequest& WithCpiUserId(CpiUserIdT&& value) { SetCpiUserId(std::forward<CpiUserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CPI password associated with the CPI certificate in
     * <code>cpiSecretKey</code>.</p>
     */
    inline const Aws::String& GetCpiUserPassword() const { return m_cpiUserPassword; }
    inline bool CpiUserPasswordHasBeenSet() const { return m_cpiUserPasswordHasBeenSet; }
    template<typename CpiUserPasswordT = Aws::String>
    void SetCpiUserPassword(CpiUserPasswordT&& value) { m_cpiUserPasswordHasBeenSet = true; m_cpiUserPassword = std::forward<CpiUserPasswordT>(value); }
    template<typename CpiUserPasswordT = Aws::String>
    ConfigureAccessPointRequest& WithCpiUserPassword(CpiUserPasswordT&& value) { SetCpiUserPassword(std::forward<CpiUserPasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CPI user name of the CPI user who is certifying the coordinates of the
     * radio unit.</p>
     */
    inline const Aws::String& GetCpiUsername() const { return m_cpiUsername; }
    inline bool CpiUsernameHasBeenSet() const { return m_cpiUsernameHasBeenSet; }
    template<typename CpiUsernameT = Aws::String>
    void SetCpiUsername(CpiUsernameT&& value) { m_cpiUsernameHasBeenSet = true; m_cpiUsername = std::forward<CpiUsernameT>(value); }
    template<typename CpiUsernameT = Aws::String>
    ConfigureAccessPointRequest& WithCpiUsername(CpiUsernameT&& value) { SetCpiUsername(std::forward<CpiUsernameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The position of the network resource.</p>
     */
    inline const Position& GetPosition() const { return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    template<typename PositionT = Position>
    void SetPosition(PositionT&& value) { m_positionHasBeenSet = true; m_position = std::forward<PositionT>(value); }
    template<typename PositionT = Position>
    ConfigureAccessPointRequest& WithPosition(PositionT&& value) { SetPosition(std::forward<PositionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accessPointArn;
    bool m_accessPointArnHasBeenSet = false;

    Aws::String m_cpiSecretKey;
    bool m_cpiSecretKeyHasBeenSet = false;

    Aws::String m_cpiUserId;
    bool m_cpiUserIdHasBeenSet = false;

    Aws::String m_cpiUserPassword;
    bool m_cpiUserPasswordHasBeenSet = false;

    Aws::String m_cpiUsername;
    bool m_cpiUsernameHasBeenSet = false;

    Position m_position;
    bool m_positionHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
