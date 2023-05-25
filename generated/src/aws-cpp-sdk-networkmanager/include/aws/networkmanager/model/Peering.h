/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/PeeringType.h>
#include <aws/networkmanager/model/PeeringState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/networkmanager/model/Tag.h>
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
   * <p>Describes a peering connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/Peering">AWS
   * API Reference</a></p>
   */
  class Peering
  {
  public:
    AWS_NETWORKMANAGER_API Peering();
    AWS_NETWORKMANAGER_API Peering(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Peering& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the core network for the peering request.</p>
     */
    inline const Aws::String& GetCoreNetworkId() const{ return m_coreNetworkId; }

    /**
     * <p>The ID of the core network for the peering request.</p>
     */
    inline bool CoreNetworkIdHasBeenSet() const { return m_coreNetworkIdHasBeenSet; }

    /**
     * <p>The ID of the core network for the peering request.</p>
     */
    inline void SetCoreNetworkId(const Aws::String& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = value; }

    /**
     * <p>The ID of the core network for the peering request.</p>
     */
    inline void SetCoreNetworkId(Aws::String&& value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId = std::move(value); }

    /**
     * <p>The ID of the core network for the peering request.</p>
     */
    inline void SetCoreNetworkId(const char* value) { m_coreNetworkIdHasBeenSet = true; m_coreNetworkId.assign(value); }

    /**
     * <p>The ID of the core network for the peering request.</p>
     */
    inline Peering& WithCoreNetworkId(const Aws::String& value) { SetCoreNetworkId(value); return *this;}

    /**
     * <p>The ID of the core network for the peering request.</p>
     */
    inline Peering& WithCoreNetworkId(Aws::String&& value) { SetCoreNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the core network for the peering request.</p>
     */
    inline Peering& WithCoreNetworkId(const char* value) { SetCoreNetworkId(value); return *this;}


    /**
     * <p>The ARN of a core network.</p>
     */
    inline const Aws::String& GetCoreNetworkArn() const{ return m_coreNetworkArn; }

    /**
     * <p>The ARN of a core network.</p>
     */
    inline bool CoreNetworkArnHasBeenSet() const { return m_coreNetworkArnHasBeenSet; }

    /**
     * <p>The ARN of a core network.</p>
     */
    inline void SetCoreNetworkArn(const Aws::String& value) { m_coreNetworkArnHasBeenSet = true; m_coreNetworkArn = value; }

    /**
     * <p>The ARN of a core network.</p>
     */
    inline void SetCoreNetworkArn(Aws::String&& value) { m_coreNetworkArnHasBeenSet = true; m_coreNetworkArn = std::move(value); }

    /**
     * <p>The ARN of a core network.</p>
     */
    inline void SetCoreNetworkArn(const char* value) { m_coreNetworkArnHasBeenSet = true; m_coreNetworkArn.assign(value); }

    /**
     * <p>The ARN of a core network.</p>
     */
    inline Peering& WithCoreNetworkArn(const Aws::String& value) { SetCoreNetworkArn(value); return *this;}

    /**
     * <p>The ARN of a core network.</p>
     */
    inline Peering& WithCoreNetworkArn(Aws::String&& value) { SetCoreNetworkArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of a core network.</p>
     */
    inline Peering& WithCoreNetworkArn(const char* value) { SetCoreNetworkArn(value); return *this;}


    /**
     * <p>The ID of the peering attachment. </p>
     */
    inline const Aws::String& GetPeeringId() const{ return m_peeringId; }

    /**
     * <p>The ID of the peering attachment. </p>
     */
    inline bool PeeringIdHasBeenSet() const { return m_peeringIdHasBeenSet; }

    /**
     * <p>The ID of the peering attachment. </p>
     */
    inline void SetPeeringId(const Aws::String& value) { m_peeringIdHasBeenSet = true; m_peeringId = value; }

    /**
     * <p>The ID of the peering attachment. </p>
     */
    inline void SetPeeringId(Aws::String&& value) { m_peeringIdHasBeenSet = true; m_peeringId = std::move(value); }

    /**
     * <p>The ID of the peering attachment. </p>
     */
    inline void SetPeeringId(const char* value) { m_peeringIdHasBeenSet = true; m_peeringId.assign(value); }

    /**
     * <p>The ID of the peering attachment. </p>
     */
    inline Peering& WithPeeringId(const Aws::String& value) { SetPeeringId(value); return *this;}

    /**
     * <p>The ID of the peering attachment. </p>
     */
    inline Peering& WithPeeringId(Aws::String&& value) { SetPeeringId(std::move(value)); return *this;}

    /**
     * <p>The ID of the peering attachment. </p>
     */
    inline Peering& WithPeeringId(const char* value) { SetPeeringId(value); return *this;}


    /**
     * <p>The ID of the account owner.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const{ return m_ownerAccountId; }

    /**
     * <p>The ID of the account owner.</p>
     */
    inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }

    /**
     * <p>The ID of the account owner.</p>
     */
    inline void SetOwnerAccountId(const Aws::String& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = value; }

    /**
     * <p>The ID of the account owner.</p>
     */
    inline void SetOwnerAccountId(Aws::String&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::move(value); }

    /**
     * <p>The ID of the account owner.</p>
     */
    inline void SetOwnerAccountId(const char* value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId.assign(value); }

    /**
     * <p>The ID of the account owner.</p>
     */
    inline Peering& WithOwnerAccountId(const Aws::String& value) { SetOwnerAccountId(value); return *this;}

    /**
     * <p>The ID of the account owner.</p>
     */
    inline Peering& WithOwnerAccountId(Aws::String&& value) { SetOwnerAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the account owner.</p>
     */
    inline Peering& WithOwnerAccountId(const char* value) { SetOwnerAccountId(value); return *this;}


    /**
     * <p>The type of peering. This will be <code>TRANSIT_GATEWAY</code>.</p>
     */
    inline const PeeringType& GetPeeringType() const{ return m_peeringType; }

    /**
     * <p>The type of peering. This will be <code>TRANSIT_GATEWAY</code>.</p>
     */
    inline bool PeeringTypeHasBeenSet() const { return m_peeringTypeHasBeenSet; }

    /**
     * <p>The type of peering. This will be <code>TRANSIT_GATEWAY</code>.</p>
     */
    inline void SetPeeringType(const PeeringType& value) { m_peeringTypeHasBeenSet = true; m_peeringType = value; }

    /**
     * <p>The type of peering. This will be <code>TRANSIT_GATEWAY</code>.</p>
     */
    inline void SetPeeringType(PeeringType&& value) { m_peeringTypeHasBeenSet = true; m_peeringType = std::move(value); }

    /**
     * <p>The type of peering. This will be <code>TRANSIT_GATEWAY</code>.</p>
     */
    inline Peering& WithPeeringType(const PeeringType& value) { SetPeeringType(value); return *this;}

    /**
     * <p>The type of peering. This will be <code>TRANSIT_GATEWAY</code>.</p>
     */
    inline Peering& WithPeeringType(PeeringType&& value) { SetPeeringType(std::move(value)); return *this;}


    /**
     * <p>The current state of the peering connection. </p>
     */
    inline const PeeringState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the peering connection. </p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of the peering connection. </p>
     */
    inline void SetState(const PeeringState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the peering connection. </p>
     */
    inline void SetState(PeeringState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the peering connection. </p>
     */
    inline Peering& WithState(const PeeringState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the peering connection. </p>
     */
    inline Peering& WithState(PeeringState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The edge location for the peer.</p>
     */
    inline const Aws::String& GetEdgeLocation() const{ return m_edgeLocation; }

    /**
     * <p>The edge location for the peer.</p>
     */
    inline bool EdgeLocationHasBeenSet() const { return m_edgeLocationHasBeenSet; }

    /**
     * <p>The edge location for the peer.</p>
     */
    inline void SetEdgeLocation(const Aws::String& value) { m_edgeLocationHasBeenSet = true; m_edgeLocation = value; }

    /**
     * <p>The edge location for the peer.</p>
     */
    inline void SetEdgeLocation(Aws::String&& value) { m_edgeLocationHasBeenSet = true; m_edgeLocation = std::move(value); }

    /**
     * <p>The edge location for the peer.</p>
     */
    inline void SetEdgeLocation(const char* value) { m_edgeLocationHasBeenSet = true; m_edgeLocation.assign(value); }

    /**
     * <p>The edge location for the peer.</p>
     */
    inline Peering& WithEdgeLocation(const Aws::String& value) { SetEdgeLocation(value); return *this;}

    /**
     * <p>The edge location for the peer.</p>
     */
    inline Peering& WithEdgeLocation(Aws::String&& value) { SetEdgeLocation(std::move(value)); return *this;}

    /**
     * <p>The edge location for the peer.</p>
     */
    inline Peering& WithEdgeLocation(const char* value) { SetEdgeLocation(value); return *this;}


    /**
     * <p>The resource ARN of the peer.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The resource ARN of the peer.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The resource ARN of the peer.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The resource ARN of the peer.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The resource ARN of the peer.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The resource ARN of the peer.</p>
     */
    inline Peering& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The resource ARN of the peer.</p>
     */
    inline Peering& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The resource ARN of the peer.</p>
     */
    inline Peering& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The list of key-value tags associated with the peering.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of key-value tags associated with the peering.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of key-value tags associated with the peering.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of key-value tags associated with the peering.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of key-value tags associated with the peering.</p>
     */
    inline Peering& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of key-value tags associated with the peering.</p>
     */
    inline Peering& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of key-value tags associated with the peering.</p>
     */
    inline Peering& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The list of key-value tags associated with the peering.</p>
     */
    inline Peering& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The timestamp when the attachment peer was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp when the attachment peer was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp when the attachment peer was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp when the attachment peer was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp when the attachment peer was created.</p>
     */
    inline Peering& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp when the attachment peer was created.</p>
     */
    inline Peering& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_coreNetworkId;
    bool m_coreNetworkIdHasBeenSet = false;

    Aws::String m_coreNetworkArn;
    bool m_coreNetworkArnHasBeenSet = false;

    Aws::String m_peeringId;
    bool m_peeringIdHasBeenSet = false;

    Aws::String m_ownerAccountId;
    bool m_ownerAccountIdHasBeenSet = false;

    PeeringType m_peeringType;
    bool m_peeringTypeHasBeenSet = false;

    PeeringState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_edgeLocation;
    bool m_edgeLocationHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
