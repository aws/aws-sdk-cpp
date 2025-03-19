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
  class GetCoreNetworkRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API GetCoreNetworkRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCoreNetwork"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of a core network.</p>
     */
    inline const Aws::String& GetCoreNetworkId() const { return m_coreNetworkId; }
    inline bool CoreNetworkIdHasBeenSet() const { return m_coreNetworkIdHasBeenSet; }
    template<typename CoreNetworkIdT = Aws::String>
    void SetCoreNetworkId(CoreNetworkIdT&& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = std::forward<CoreNetworkIdT>(value); }
    template<typename CoreNetworkIdT = Aws::String>
    GetCoreNetworkRequest& WithCoreNetworkId(CoreNetworkIdT&& value) { SetCoreNetworkId(std::forward<CoreNetworkIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_coreNetworkId;
    bool m_coreNetworkIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
