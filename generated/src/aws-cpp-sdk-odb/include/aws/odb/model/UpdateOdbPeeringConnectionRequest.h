/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/OdbRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace odb
{
namespace Model
{

  /**
   */
  class UpdateOdbPeeringConnectionRequest : public OdbRequest
  {
  public:
    AWS_ODB_API UpdateOdbPeeringConnectionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateOdbPeeringConnection"; }

    AWS_ODB_API Aws::String SerializePayload() const override;

    AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the Oracle Database@Amazon Web Services peering connection
     * to update.</p>
     */
    inline const Aws::String& GetOdbPeeringConnectionId() const { return m_odbPeeringConnectionId; }
    inline bool OdbPeeringConnectionIdHasBeenSet() const { return m_odbPeeringConnectionIdHasBeenSet; }
    template<typename OdbPeeringConnectionIdT = Aws::String>
    void SetOdbPeeringConnectionId(OdbPeeringConnectionIdT&& value) { m_odbPeeringConnectionIdHasBeenSet = true; m_odbPeeringConnectionId = std::forward<OdbPeeringConnectionIdT>(value); }
    template<typename OdbPeeringConnectionIdT = Aws::String>
    UpdateOdbPeeringConnectionRequest& WithOdbPeeringConnectionId(OdbPeeringConnectionIdT&& value) { SetOdbPeeringConnectionId(std::forward<OdbPeeringConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new display name for the peering connection.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    UpdateOdbPeeringConnectionRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of CIDR blocks to add to the peering connection. These CIDR blocks
     * define the IP address ranges that can communicate through the peering
     * connection. The CIDR blocks must not overlap with existing CIDR blocks in the
     * Oracle Database@Amazon Web Services network.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPeerNetworkCidrsToBeAdded() const { return m_peerNetworkCidrsToBeAdded; }
    inline bool PeerNetworkCidrsToBeAddedHasBeenSet() const { return m_peerNetworkCidrsToBeAddedHasBeenSet; }
    template<typename PeerNetworkCidrsToBeAddedT = Aws::Vector<Aws::String>>
    void SetPeerNetworkCidrsToBeAdded(PeerNetworkCidrsToBeAddedT&& value) { m_peerNetworkCidrsToBeAddedHasBeenSet = true; m_peerNetworkCidrsToBeAdded = std::forward<PeerNetworkCidrsToBeAddedT>(value); }
    template<typename PeerNetworkCidrsToBeAddedT = Aws::Vector<Aws::String>>
    UpdateOdbPeeringConnectionRequest& WithPeerNetworkCidrsToBeAdded(PeerNetworkCidrsToBeAddedT&& value) { SetPeerNetworkCidrsToBeAdded(std::forward<PeerNetworkCidrsToBeAddedT>(value)); return *this;}
    template<typename PeerNetworkCidrsToBeAddedT = Aws::String>
    UpdateOdbPeeringConnectionRequest& AddPeerNetworkCidrsToBeAdded(PeerNetworkCidrsToBeAddedT&& value) { m_peerNetworkCidrsToBeAddedHasBeenSet = true; m_peerNetworkCidrsToBeAdded.emplace_back(std::forward<PeerNetworkCidrsToBeAddedT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of CIDR blocks to remove from the peering connection. The CIDR blocks
     * must currently exist in the peering connection.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPeerNetworkCidrsToBeRemoved() const { return m_peerNetworkCidrsToBeRemoved; }
    inline bool PeerNetworkCidrsToBeRemovedHasBeenSet() const { return m_peerNetworkCidrsToBeRemovedHasBeenSet; }
    template<typename PeerNetworkCidrsToBeRemovedT = Aws::Vector<Aws::String>>
    void SetPeerNetworkCidrsToBeRemoved(PeerNetworkCidrsToBeRemovedT&& value) { m_peerNetworkCidrsToBeRemovedHasBeenSet = true; m_peerNetworkCidrsToBeRemoved = std::forward<PeerNetworkCidrsToBeRemovedT>(value); }
    template<typename PeerNetworkCidrsToBeRemovedT = Aws::Vector<Aws::String>>
    UpdateOdbPeeringConnectionRequest& WithPeerNetworkCidrsToBeRemoved(PeerNetworkCidrsToBeRemovedT&& value) { SetPeerNetworkCidrsToBeRemoved(std::forward<PeerNetworkCidrsToBeRemovedT>(value)); return *this;}
    template<typename PeerNetworkCidrsToBeRemovedT = Aws::String>
    UpdateOdbPeeringConnectionRequest& AddPeerNetworkCidrsToBeRemoved(PeerNetworkCidrsToBeRemovedT&& value) { m_peerNetworkCidrsToBeRemovedHasBeenSet = true; m_peerNetworkCidrsToBeRemoved.emplace_back(std::forward<PeerNetworkCidrsToBeRemovedT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_odbPeeringConnectionId;
    bool m_odbPeeringConnectionIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_peerNetworkCidrsToBeAdded;
    bool m_peerNetworkCidrsToBeAddedHasBeenSet = false;

    Aws::Vector<Aws::String> m_peerNetworkCidrsToBeRemoved;
    bool m_peerNetworkCidrsToBeRemovedHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
