/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/GatewayNetwork.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   */
  class CreateGatewayRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API CreateGatewayRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGateway"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The range of IP addresses that are allowed to contribute content or initiate
     * output requests for flows communicating with this gateway. These IP addresses
     * should be in the form of a Classless Inter-Domain Routing (CIDR) block; for
     * example, 10.0.0.0/16.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEgressCidrBlocks() const { return m_egressCidrBlocks; }
    inline bool EgressCidrBlocksHasBeenSet() const { return m_egressCidrBlocksHasBeenSet; }
    template<typename EgressCidrBlocksT = Aws::Vector<Aws::String>>
    void SetEgressCidrBlocks(EgressCidrBlocksT&& value) { m_egressCidrBlocksHasBeenSet = true; m_egressCidrBlocks = std::forward<EgressCidrBlocksT>(value); }
    template<typename EgressCidrBlocksT = Aws::Vector<Aws::String>>
    CreateGatewayRequest& WithEgressCidrBlocks(EgressCidrBlocksT&& value) { SetEgressCidrBlocks(std::forward<EgressCidrBlocksT>(value)); return *this;}
    template<typename EgressCidrBlocksT = Aws::String>
    CreateGatewayRequest& AddEgressCidrBlocks(EgressCidrBlocksT&& value) { m_egressCidrBlocksHasBeenSet = true; m_egressCidrBlocks.emplace_back(std::forward<EgressCidrBlocksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The name of the gateway. This name can not be modified after the gateway is
     * created.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateGatewayRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of networks that you want to add to the gateway.</p>
     */
    inline const Aws::Vector<GatewayNetwork>& GetNetworks() const { return m_networks; }
    inline bool NetworksHasBeenSet() const { return m_networksHasBeenSet; }
    template<typename NetworksT = Aws::Vector<GatewayNetwork>>
    void SetNetworks(NetworksT&& value) { m_networksHasBeenSet = true; m_networks = std::forward<NetworksT>(value); }
    template<typename NetworksT = Aws::Vector<GatewayNetwork>>
    CreateGatewayRequest& WithNetworks(NetworksT&& value) { SetNetworks(std::forward<NetworksT>(value)); return *this;}
    template<typename NetworksT = GatewayNetwork>
    CreateGatewayRequest& AddNetworks(NetworksT&& value) { m_networksHasBeenSet = true; m_networks.emplace_back(std::forward<NetworksT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_egressCidrBlocks;
    bool m_egressCidrBlocksHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<GatewayNetwork> m_networks;
    bool m_networksHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
