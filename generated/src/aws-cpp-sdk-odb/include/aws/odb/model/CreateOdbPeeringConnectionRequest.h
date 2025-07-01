/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/OdbRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace odb
{
namespace Model
{

  /**
   */
  class CreateOdbPeeringConnectionRequest : public OdbRequest
  {
  public:
    AWS_ODB_API CreateOdbPeeringConnectionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateOdbPeeringConnection"; }

    AWS_ODB_API Aws::String SerializePayload() const override;

    AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier of the ODB network that initiates the peering
     * connection.</p>
     */
    inline const Aws::String& GetOdbNetworkId() const { return m_odbNetworkId; }
    inline bool OdbNetworkIdHasBeenSet() const { return m_odbNetworkIdHasBeenSet; }
    template<typename OdbNetworkIdT = Aws::String>
    void SetOdbNetworkId(OdbNetworkIdT&& value) { m_odbNetworkIdHasBeenSet = true; m_odbNetworkId = std::forward<OdbNetworkIdT>(value); }
    template<typename OdbNetworkIdT = Aws::String>
    CreateOdbPeeringConnectionRequest& WithOdbNetworkId(OdbNetworkIdT&& value) { SetOdbNetworkId(std::forward<OdbNetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the peer network. This can be either a VPC ID or
     * another ODB network ID.</p>
     */
    inline const Aws::String& GetPeerNetworkId() const { return m_peerNetworkId; }
    inline bool PeerNetworkIdHasBeenSet() const { return m_peerNetworkIdHasBeenSet; }
    template<typename PeerNetworkIdT = Aws::String>
    void SetPeerNetworkId(PeerNetworkIdT&& value) { m_peerNetworkIdHasBeenSet = true; m_peerNetworkId = std::forward<PeerNetworkIdT>(value); }
    template<typename PeerNetworkIdT = Aws::String>
    CreateOdbPeeringConnectionRequest& WithPeerNetworkId(PeerNetworkIdT&& value) { SetPeerNetworkId(std::forward<PeerNetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name for the ODB peering connection.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    CreateOdbPeeringConnectionRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client token for the ODB peering connection request.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be unique for each request.</p> </li>
     * </ul>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateOdbPeeringConnectionRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to assign to the ODB peering connection.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateOdbPeeringConnectionRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateOdbPeeringConnectionRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_odbNetworkId;
    bool m_odbNetworkIdHasBeenSet = false;

    Aws::String m_peerNetworkId;
    bool m_peerNetworkIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
