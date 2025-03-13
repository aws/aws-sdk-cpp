/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/ResourceGroupsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ResourceGroups
{
namespace Model
{

  /**
   */
  class UpdateGroupRequest : public ResourceGroupsRequest
  {
  public:
    AWS_RESOURCEGROUPS_API UpdateGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGroup"; }

    AWS_RESOURCEGROUPS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name or the ARN of the resource group to update.</p>
     */
    inline const Aws::String& GetGroup() const { return m_group; }
    inline bool GroupHasBeenSet() const { return m_groupHasBeenSet; }
    template<typename GroupT = Aws::String>
    void SetGroup(GroupT&& value) { m_groupHasBeenSet = true; m_group = std::forward<GroupT>(value); }
    template<typename GroupT = Aws::String>
    UpdateGroupRequest& WithGroup(GroupT&& value) { SetGroup(std::forward<GroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new description that you want to update the resource group with.
     * Descriptions can contain letters, numbers, hyphens, underscores, periods, and
     * spaces.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateGroupRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The critical rank of the application group on a scale of 1 to 10, with a rank
     * of 1 being the most critical, and a rank of 10 being least critical.</p>
     */
    inline int GetCriticality() const { return m_criticality; }
    inline bool CriticalityHasBeenSet() const { return m_criticalityHasBeenSet; }
    inline void SetCriticality(int value) { m_criticalityHasBeenSet = true; m_criticality = value; }
    inline UpdateGroupRequest& WithCriticality(int value) { SetCriticality(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name, email address or other identifier for the person or group who is
     * considered as the owner of this application group within your organization. </p>
     */
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    UpdateGroupRequest& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application group, which you can change at any time. </p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    UpdateGroupRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_group;
    bool m_groupHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    int m_criticality{0};
    bool m_criticalityHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
