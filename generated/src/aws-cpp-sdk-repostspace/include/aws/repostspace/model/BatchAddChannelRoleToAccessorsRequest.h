/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/repostspace/Repostspace_EXPORTS.h>
#include <aws/repostspace/RepostspaceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/repostspace/model/ChannelRole.h>
#include <utility>

namespace Aws
{
namespace repostspace
{
namespace Model
{

  /**
   */
  class BatchAddChannelRoleToAccessorsRequest : public RepostspaceRequest
  {
  public:
    AWS_REPOSTSPACE_API BatchAddChannelRoleToAccessorsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchAddChannelRoleToAccessors"; }

    AWS_REPOSTSPACE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline const Aws::String& GetSpaceId() const { return m_spaceId; }
    inline bool SpaceIdHasBeenSet() const { return m_spaceIdHasBeenSet; }
    template<typename SpaceIdT = Aws::String>
    void SetSpaceId(SpaceIdT&& value) { m_spaceIdHasBeenSet = true; m_spaceId = std::forward<SpaceIdT>(value); }
    template<typename SpaceIdT = Aws::String>
    BatchAddChannelRoleToAccessorsRequest& WithSpaceId(SpaceIdT&& value) { SetSpaceId(std::forward<SpaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the private re:Post channel.</p>
     */
    inline const Aws::String& GetChannelId() const { return m_channelId; }
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }
    template<typename ChannelIdT = Aws::String>
    void SetChannelId(ChannelIdT&& value) { m_channelIdHasBeenSet = true; m_channelId = std::forward<ChannelIdT>(value); }
    template<typename ChannelIdT = Aws::String>
    BatchAddChannelRoleToAccessorsRequest& WithChannelId(ChannelIdT&& value) { SetChannelId(std::forward<ChannelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or group identifiers to add the role to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccessorIds() const { return m_accessorIds; }
    inline bool AccessorIdsHasBeenSet() const { return m_accessorIdsHasBeenSet; }
    template<typename AccessorIdsT = Aws::Vector<Aws::String>>
    void SetAccessorIds(AccessorIdsT&& value) { m_accessorIdsHasBeenSet = true; m_accessorIds = std::forward<AccessorIdsT>(value); }
    template<typename AccessorIdsT = Aws::Vector<Aws::String>>
    BatchAddChannelRoleToAccessorsRequest& WithAccessorIds(AccessorIdsT&& value) { SetAccessorIds(std::forward<AccessorIdsT>(value)); return *this;}
    template<typename AccessorIdsT = Aws::String>
    BatchAddChannelRoleToAccessorsRequest& AddAccessorIds(AccessorIdsT&& value) { m_accessorIdsHasBeenSet = true; m_accessorIds.emplace_back(std::forward<AccessorIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The channel role to add to the users or groups.</p>
     */
    inline ChannelRole GetChannelRole() const { return m_channelRole; }
    inline bool ChannelRoleHasBeenSet() const { return m_channelRoleHasBeenSet; }
    inline void SetChannelRole(ChannelRole value) { m_channelRoleHasBeenSet = true; m_channelRole = value; }
    inline BatchAddChannelRoleToAccessorsRequest& WithChannelRole(ChannelRole value) { SetChannelRole(value); return *this;}
    ///@}
  private:

    Aws::String m_spaceId;
    bool m_spaceIdHasBeenSet = false;

    Aws::String m_channelId;
    bool m_channelIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_accessorIds;
    bool m_accessorIdsHasBeenSet = false;

    ChannelRole m_channelRole{ChannelRole::NOT_SET};
    bool m_channelRoleHasBeenSet = false;
  };

} // namespace Model
} // namespace repostspace
} // namespace Aws
