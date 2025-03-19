/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/GatewayState.h>
#include <aws/mediaconnect/model/MessageDetail.h>
#include <aws/mediaconnect/model/GatewayNetwork.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * <p>The settings for a gateway, including its networks. </p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/Gateway">AWS
   * API Reference</a></p>
   */
  class Gateway
  {
  public:
    AWS_MEDIACONNECT_API Gateway() = default;
    AWS_MEDIACONNECT_API Gateway(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Gateway& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The range of IP addresses that contribute content or initiate output
     * requests for flows communicating with this gateway. These IP addresses should be
     * in the form of a Classless Inter-Domain Routing (CIDR) block; for example,
     * 10.0.0.0/16.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEgressCidrBlocks() const { return m_egressCidrBlocks; }
    inline bool EgressCidrBlocksHasBeenSet() const { return m_egressCidrBlocksHasBeenSet; }
    template<typename EgressCidrBlocksT = Aws::Vector<Aws::String>>
    void SetEgressCidrBlocks(EgressCidrBlocksT&& value) { m_egressCidrBlocksHasBeenSet = true; m_egressCidrBlocks = std::forward<EgressCidrBlocksT>(value); }
    template<typename EgressCidrBlocksT = Aws::Vector<Aws::String>>
    Gateway& WithEgressCidrBlocks(EgressCidrBlocksT&& value) { SetEgressCidrBlocks(std::forward<EgressCidrBlocksT>(value)); return *this;}
    template<typename EgressCidrBlocksT = Aws::String>
    Gateway& AddEgressCidrBlocks(EgressCidrBlocksT&& value) { m_egressCidrBlocksHasBeenSet = true; m_egressCidrBlocks.emplace_back(std::forward<EgressCidrBlocksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the gateway.</p>
     */
    inline const Aws::String& GetGatewayArn() const { return m_gatewayArn; }
    inline bool GatewayArnHasBeenSet() const { return m_gatewayArnHasBeenSet; }
    template<typename GatewayArnT = Aws::String>
    void SetGatewayArn(GatewayArnT&& value) { m_gatewayArnHasBeenSet = true; m_gatewayArn = std::forward<GatewayArnT>(value); }
    template<typename GatewayArnT = Aws::String>
    Gateway& WithGatewayArn(GatewayArnT&& value) { SetGatewayArn(std::forward<GatewayArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Messages with information about the gateway. </p>
     */
    inline const Aws::Vector<MessageDetail>& GetGatewayMessages() const { return m_gatewayMessages; }
    inline bool GatewayMessagesHasBeenSet() const { return m_gatewayMessagesHasBeenSet; }
    template<typename GatewayMessagesT = Aws::Vector<MessageDetail>>
    void SetGatewayMessages(GatewayMessagesT&& value) { m_gatewayMessagesHasBeenSet = true; m_gatewayMessages = std::forward<GatewayMessagesT>(value); }
    template<typename GatewayMessagesT = Aws::Vector<MessageDetail>>
    Gateway& WithGatewayMessages(GatewayMessagesT&& value) { SetGatewayMessages(std::forward<GatewayMessagesT>(value)); return *this;}
    template<typename GatewayMessagesT = MessageDetail>
    Gateway& AddGatewayMessages(GatewayMessagesT&& value) { m_gatewayMessagesHasBeenSet = true; m_gatewayMessages.emplace_back(std::forward<GatewayMessagesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The current status of the gateway.</p>
     */
    inline GatewayState GetGatewayState() const { return m_gatewayState; }
    inline bool GatewayStateHasBeenSet() const { return m_gatewayStateHasBeenSet; }
    inline void SetGatewayState(GatewayState value) { m_gatewayStateHasBeenSet = true; m_gatewayState = value; }
    inline Gateway& WithGatewayState(GatewayState value) { SetGatewayState(value); return *this;}
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
    Gateway& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of networks in the gateway.</p>
     */
    inline const Aws::Vector<GatewayNetwork>& GetNetworks() const { return m_networks; }
    inline bool NetworksHasBeenSet() const { return m_networksHasBeenSet; }
    template<typename NetworksT = Aws::Vector<GatewayNetwork>>
    void SetNetworks(NetworksT&& value) { m_networksHasBeenSet = true; m_networks = std::forward<NetworksT>(value); }
    template<typename NetworksT = Aws::Vector<GatewayNetwork>>
    Gateway& WithNetworks(NetworksT&& value) { SetNetworks(std::forward<NetworksT>(value)); return *this;}
    template<typename NetworksT = GatewayNetwork>
    Gateway& AddNetworks(NetworksT&& value) { m_networksHasBeenSet = true; m_networks.emplace_back(std::forward<NetworksT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_egressCidrBlocks;
    bool m_egressCidrBlocksHasBeenSet = false;

    Aws::String m_gatewayArn;
    bool m_gatewayArnHasBeenSet = false;

    Aws::Vector<MessageDetail> m_gatewayMessages;
    bool m_gatewayMessagesHasBeenSet = false;

    GatewayState m_gatewayState{GatewayState::NOT_SET};
    bool m_gatewayStateHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<GatewayNetwork> m_networks;
    bool m_networksHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
