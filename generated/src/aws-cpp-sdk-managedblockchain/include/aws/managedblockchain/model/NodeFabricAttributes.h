/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
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
namespace ManagedBlockchain
{
namespace Model
{

  /**
   * <p>Attributes of Hyperledger Fabric for a peer node on a Hyperledger Fabric
   * network on Managed Blockchain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/NodeFabricAttributes">AWS
   * API Reference</a></p>
   */
  class NodeFabricAttributes
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API NodeFabricAttributes() = default;
    AWS_MANAGEDBLOCKCHAIN_API NodeFabricAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API NodeFabricAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MANAGEDBLOCKCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The endpoint that identifies the peer node for all services except peer
     * channel-based event services.</p>
     */
    inline const Aws::String& GetPeerEndpoint() const { return m_peerEndpoint; }
    inline bool PeerEndpointHasBeenSet() const { return m_peerEndpointHasBeenSet; }
    template<typename PeerEndpointT = Aws::String>
    void SetPeerEndpoint(PeerEndpointT&& value) { m_peerEndpointHasBeenSet = true; m_peerEndpoint = std::forward<PeerEndpointT>(value); }
    template<typename PeerEndpointT = Aws::String>
    NodeFabricAttributes& WithPeerEndpoint(PeerEndpointT&& value) { SetPeerEndpoint(std::forward<PeerEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint that identifies the peer node for peer channel-based event
     * services.</p>
     */
    inline const Aws::String& GetPeerEventEndpoint() const { return m_peerEventEndpoint; }
    inline bool PeerEventEndpointHasBeenSet() const { return m_peerEventEndpointHasBeenSet; }
    template<typename PeerEventEndpointT = Aws::String>
    void SetPeerEventEndpoint(PeerEventEndpointT&& value) { m_peerEventEndpointHasBeenSet = true; m_peerEventEndpoint = std::forward<PeerEventEndpointT>(value); }
    template<typename PeerEventEndpointT = Aws::String>
    NodeFabricAttributes& WithPeerEventEndpoint(PeerEventEndpointT&& value) { SetPeerEventEndpoint(std::forward<PeerEventEndpointT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_peerEndpoint;
    bool m_peerEndpointHasBeenSet = false;

    Aws::String m_peerEventEndpoint;
    bool m_peerEventEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
