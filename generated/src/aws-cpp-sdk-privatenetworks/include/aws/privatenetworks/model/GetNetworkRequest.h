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
  class GetNetworkRequest : public PrivateNetworksRequest
  {
  public:
    AWS_PRIVATENETWORKS_API GetNetworkRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetNetwork"; }

    AWS_PRIVATENETWORKS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the network.</p>
     */
    inline const Aws::String& GetNetworkArn() const { return m_networkArn; }
    inline bool NetworkArnHasBeenSet() const { return m_networkArnHasBeenSet; }
    template<typename NetworkArnT = Aws::String>
    void SetNetworkArn(NetworkArnT&& value) { m_networkArnHasBeenSet = true; m_networkArn = std::forward<NetworkArnT>(value); }
    template<typename NetworkArnT = Aws::String>
    GetNetworkRequest& WithNetworkArn(NetworkArnT&& value) { SetNetworkArn(std::forward<NetworkArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_networkArn;
    bool m_networkArnHasBeenSet = false;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
