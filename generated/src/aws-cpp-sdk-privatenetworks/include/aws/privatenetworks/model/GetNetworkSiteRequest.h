/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/PrivateNetworksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PrivateNetworks
{
namespace Model
{

  /**
   */
  class GetNetworkSiteRequest : public PrivateNetworksRequest
  {
  public:
    AWS_PRIVATENETWORKS_API GetNetworkSiteRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetNetworkSite"; }

    AWS_PRIVATENETWORKS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the network site.</p>
     */
    inline const Aws::String& GetNetworkSiteArn() const { return m_networkSiteArn; }
    inline bool NetworkSiteArnHasBeenSet() const { return m_networkSiteArnHasBeenSet; }
    template<typename NetworkSiteArnT = Aws::String>
    void SetNetworkSiteArn(NetworkSiteArnT&& value) { m_networkSiteArnHasBeenSet = true; m_networkSiteArn = std::forward<NetworkSiteArnT>(value); }
    template<typename NetworkSiteArnT = Aws::String>
    GetNetworkSiteRequest& WithNetworkSiteArn(NetworkSiteArnT&& value) { SetNetworkSiteArn(std::forward<NetworkSiteArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_networkSiteArn;
    bool m_networkSiteArnHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
