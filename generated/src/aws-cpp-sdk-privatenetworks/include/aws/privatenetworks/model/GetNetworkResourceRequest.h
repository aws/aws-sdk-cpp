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
  class GetNetworkResourceRequest : public PrivateNetworksRequest
  {
  public:
    AWS_PRIVATENETWORKS_API GetNetworkResourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetNetworkResource"; }

    AWS_PRIVATENETWORKS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the network resource.</p>
     */
    inline const Aws::String& GetNetworkResourceArn() const { return m_networkResourceArn; }
    inline bool NetworkResourceArnHasBeenSet() const { return m_networkResourceArnHasBeenSet; }
    template<typename NetworkResourceArnT = Aws::String>
    void SetNetworkResourceArn(NetworkResourceArnT&& value) { m_networkResourceArnHasBeenSet = true; m_networkResourceArn = std::forward<NetworkResourceArnT>(value); }
    template<typename NetworkResourceArnT = Aws::String>
    GetNetworkResourceRequest& WithNetworkResourceArn(NetworkResourceArnT&& value) { SetNetworkResourceArn(std::forward<NetworkResourceArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_networkResourceArn;
    bool m_networkResourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
