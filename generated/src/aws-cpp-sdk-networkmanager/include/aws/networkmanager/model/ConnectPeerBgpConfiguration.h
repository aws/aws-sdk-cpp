/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes a core network BGP configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ConnectPeerBgpConfiguration">AWS
   * API Reference</a></p>
   */
  class ConnectPeerBgpConfiguration
  {
  public:
    AWS_NETWORKMANAGER_API ConnectPeerBgpConfiguration() = default;
    AWS_NETWORKMANAGER_API ConnectPeerBgpConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API ConnectPeerBgpConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ASN of the Coret Network.</p>
     */
    inline long long GetCoreNetworkAsn() const { return m_coreNetworkAsn; }
    inline bool CoreNetworkAsnHasBeenSet() const { return m_coreNetworkAsnHasBeenSet; }
    inline void SetCoreNetworkAsn(long long value) { m_coreNetworkAsnHasBeenSet = true; m_coreNetworkAsn = value; }
    inline ConnectPeerBgpConfiguration& WithCoreNetworkAsn(long long value) { SetCoreNetworkAsn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ASN of the Connect peer.</p>
     */
    inline long long GetPeerAsn() const { return m_peerAsn; }
    inline bool PeerAsnHasBeenSet() const { return m_peerAsnHasBeenSet; }
    inline void SetPeerAsn(long long value) { m_peerAsnHasBeenSet = true; m_peerAsn = value; }
    inline ConnectPeerBgpConfiguration& WithPeerAsn(long long value) { SetPeerAsn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The address of a core network.</p>
     */
    inline const Aws::String& GetCoreNetworkAddress() const { return m_coreNetworkAddress; }
    inline bool CoreNetworkAddressHasBeenSet() const { return m_coreNetworkAddressHasBeenSet; }
    template<typename CoreNetworkAddressT = Aws::String>
    void SetCoreNetworkAddress(CoreNetworkAddressT&& value) { m_coreNetworkAddressHasBeenSet = true; m_coreNetworkAddress = std::forward<CoreNetworkAddressT>(value); }
    template<typename CoreNetworkAddressT = Aws::String>
    ConnectPeerBgpConfiguration& WithCoreNetworkAddress(CoreNetworkAddressT&& value) { SetCoreNetworkAddress(std::forward<CoreNetworkAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The address of a core network Connect peer.</p>
     */
    inline const Aws::String& GetPeerAddress() const { return m_peerAddress; }
    inline bool PeerAddressHasBeenSet() const { return m_peerAddressHasBeenSet; }
    template<typename PeerAddressT = Aws::String>
    void SetPeerAddress(PeerAddressT&& value) { m_peerAddressHasBeenSet = true; m_peerAddress = std::forward<PeerAddressT>(value); }
    template<typename PeerAddressT = Aws::String>
    ConnectPeerBgpConfiguration& WithPeerAddress(PeerAddressT&& value) { SetPeerAddress(std::forward<PeerAddressT>(value)); return *this;}
    ///@}
  private:

    long long m_coreNetworkAsn{0};
    bool m_coreNetworkAsnHasBeenSet = false;

    long long m_peerAsn{0};
    bool m_peerAsnHasBeenSet = false;

    Aws::String m_coreNetworkAddress;
    bool m_coreNetworkAddressHasBeenSet = false;

    Aws::String m_peerAddress;
    bool m_peerAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
