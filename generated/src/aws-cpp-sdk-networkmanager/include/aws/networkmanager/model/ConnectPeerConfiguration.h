/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/model/TunnelProtocol.h>
#include <aws/networkmanager/model/ConnectPeerBgpConfiguration.h>
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
   * <p>Describes a core network Connect peer configuration.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ConnectPeerConfiguration">AWS
   * API Reference</a></p>
   */
  class ConnectPeerConfiguration
  {
  public:
    AWS_NETWORKMANAGER_API ConnectPeerConfiguration() = default;
    AWS_NETWORKMANAGER_API ConnectPeerConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API ConnectPeerConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IP address of a core network.</p>
     */
    inline const Aws::String& GetCoreNetworkAddress() const { return m_coreNetworkAddress; }
    inline bool CoreNetworkAddressHasBeenSet() const { return m_coreNetworkAddressHasBeenSet; }
    template<typename CoreNetworkAddressT = Aws::String>
    void SetCoreNetworkAddress(CoreNetworkAddressT&& value) { m_coreNetworkAddressHasBeenSet = true; m_coreNetworkAddress = std::forward<CoreNetworkAddressT>(value); }
    template<typename CoreNetworkAddressT = Aws::String>
    ConnectPeerConfiguration& WithCoreNetworkAddress(CoreNetworkAddressT&& value) { SetCoreNetworkAddress(std::forward<CoreNetworkAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the Connect peer.</p>
     */
    inline const Aws::String& GetPeerAddress() const { return m_peerAddress; }
    inline bool PeerAddressHasBeenSet() const { return m_peerAddressHasBeenSet; }
    template<typename PeerAddressT = Aws::String>
    void SetPeerAddress(PeerAddressT&& value) { m_peerAddressHasBeenSet = true; m_peerAddress = std::forward<PeerAddressT>(value); }
    template<typename PeerAddressT = Aws::String>
    ConnectPeerConfiguration& WithPeerAddress(PeerAddressT&& value) { SetPeerAddress(std::forward<PeerAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inside IP addresses used for a Connect peer configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInsideCidrBlocks() const { return m_insideCidrBlocks; }
    inline bool InsideCidrBlocksHasBeenSet() const { return m_insideCidrBlocksHasBeenSet; }
    template<typename InsideCidrBlocksT = Aws::Vector<Aws::String>>
    void SetInsideCidrBlocks(InsideCidrBlocksT&& value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks = std::forward<InsideCidrBlocksT>(value); }
    template<typename InsideCidrBlocksT = Aws::Vector<Aws::String>>
    ConnectPeerConfiguration& WithInsideCidrBlocks(InsideCidrBlocksT&& value) { SetInsideCidrBlocks(std::forward<InsideCidrBlocksT>(value)); return *this;}
    template<typename InsideCidrBlocksT = Aws::String>
    ConnectPeerConfiguration& AddInsideCidrBlocks(InsideCidrBlocksT&& value) { m_insideCidrBlocksHasBeenSet = true; m_insideCidrBlocks.emplace_back(std::forward<InsideCidrBlocksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The protocol used for a Connect peer configuration.</p>
     */
    inline TunnelProtocol GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(TunnelProtocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline ConnectPeerConfiguration& WithProtocol(TunnelProtocol value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Connect peer BGP configurations.</p>
     */
    inline const Aws::Vector<ConnectPeerBgpConfiguration>& GetBgpConfigurations() const { return m_bgpConfigurations; }
    inline bool BgpConfigurationsHasBeenSet() const { return m_bgpConfigurationsHasBeenSet; }
    template<typename BgpConfigurationsT = Aws::Vector<ConnectPeerBgpConfiguration>>
    void SetBgpConfigurations(BgpConfigurationsT&& value) { m_bgpConfigurationsHasBeenSet = true; m_bgpConfigurations = std::forward<BgpConfigurationsT>(value); }
    template<typename BgpConfigurationsT = Aws::Vector<ConnectPeerBgpConfiguration>>
    ConnectPeerConfiguration& WithBgpConfigurations(BgpConfigurationsT&& value) { SetBgpConfigurations(std::forward<BgpConfigurationsT>(value)); return *this;}
    template<typename BgpConfigurationsT = ConnectPeerBgpConfiguration>
    ConnectPeerConfiguration& AddBgpConfigurations(BgpConfigurationsT&& value) { m_bgpConfigurationsHasBeenSet = true; m_bgpConfigurations.emplace_back(std::forward<BgpConfigurationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_coreNetworkAddress;
    bool m_coreNetworkAddressHasBeenSet = false;

    Aws::String m_peerAddress;
    bool m_peerAddressHasBeenSet = false;

    Aws::Vector<Aws::String> m_insideCidrBlocks;
    bool m_insideCidrBlocksHasBeenSet = false;

    TunnelProtocol m_protocol{TunnelProtocol::NOT_SET};
    bool m_protocolHasBeenSet = false;

    Aws::Vector<ConnectPeerBgpConfiguration> m_bgpConfigurations;
    bool m_bgpConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
