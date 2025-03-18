﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/repostspace/Repostspace_EXPORTS.h>
#include <aws/repostspace/RepostspaceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/repostspace/model/Role.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace repostspace
{
namespace Model
{

  /**
   */
  class BatchRemoveRoleRequest : public RepostspaceRequest
  {
  public:
    AWS_REPOSTSPACE_API BatchRemoveRoleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchRemoveRole"; }

    AWS_REPOSTSPACE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The user or group accessor identifiers to remove the role from.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccessorIds() const { return m_accessorIds; }
    inline bool AccessorIdsHasBeenSet() const { return m_accessorIdsHasBeenSet; }
    template<typename AccessorIdsT = Aws::Vector<Aws::String>>
    void SetAccessorIds(AccessorIdsT&& value) { m_accessorIdsHasBeenSet = true; m_accessorIds = std::forward<AccessorIdsT>(value); }
    template<typename AccessorIdsT = Aws::Vector<Aws::String>>
    BatchRemoveRoleRequest& WithAccessorIds(AccessorIdsT&& value) { SetAccessorIds(std::forward<AccessorIdsT>(value)); return *this;}
    template<typename AccessorIdsT = Aws::String>
    BatchRemoveRoleRequest& AddAccessorIds(AccessorIdsT&& value) { m_accessorIdsHasBeenSet = true; m_accessorIds.emplace_back(std::forward<AccessorIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The role to remove from the users or groups.</p>
     */
    inline Role GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(Role value) { m_roleHasBeenSet = true; m_role = value; }
    inline BatchRemoveRoleRequest& WithRole(Role value) { SetRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the private re:Post.</p>
     */
    inline const Aws::String& GetSpaceId() const { return m_spaceId; }
    inline bool SpaceIdHasBeenSet() const { return m_spaceIdHasBeenSet; }
    template<typename SpaceIdT = Aws::String>
    void SetSpaceId(SpaceIdT&& value) { m_spaceIdHasBeenSet = true; m_spaceId = std::forward<SpaceIdT>(value); }
    template<typename SpaceIdT = Aws::String>
    BatchRemoveRoleRequest& WithSpaceId(SpaceIdT&& value) { SetSpaceId(std::forward<SpaceIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_accessorIds;
    bool m_accessorIdsHasBeenSet = false;

    Role m_role{Role::NOT_SET};
    bool m_roleHasBeenSet = false;

    Aws::String m_spaceId;
    bool m_spaceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace repostspace
} // namespace Aws
