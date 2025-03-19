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
  class GetConnectPeerRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API GetConnectPeerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetConnectPeer"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Connect peer.</p>
     */
    inline const Aws::String& GetConnectPeerId() const { return m_connectPeerId; }
    inline bool ConnectPeerIdHasBeenSet() const { return m_connectPeerIdHasBeenSet; }
    template<typename ConnectPeerIdT = Aws::String>
    void SetConnectPeerId(ConnectPeerIdT&& value) { m_connectPeerIdHasBeenSet = true; m_connectPeerId = std::forward<ConnectPeerIdT>(value); }
    template<typename ConnectPeerIdT = Aws::String>
    GetConnectPeerRequest& WithConnectPeerId(ConnectPeerIdT&& value) { SetConnectPeerId(std::forward<ConnectPeerIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectPeerId;
    bool m_connectPeerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
