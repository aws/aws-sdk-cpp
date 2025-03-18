/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/IpRuleItem.h>
#include <aws/workspaces/model/Tag.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class CreateIpGroupRequest : public WorkSpacesRequest
  {
  public:
    AWS_WORKSPACES_API CreateIpGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIpGroup"; }

    AWS_WORKSPACES_API Aws::String SerializePayload() const override;

    AWS_WORKSPACES_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the group.</p>
     */
    inline const Aws::String& GetGroupName() const { return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    template<typename GroupNameT = Aws::String>
    void SetGroupName(GroupNameT&& value) { m_groupNameHasBeenSet = true; m_groupName = std::forward<GroupNameT>(value); }
    template<typename GroupNameT = Aws::String>
    CreateIpGroupRequest& WithGroupName(GroupNameT&& value) { SetGroupName(std::forward<GroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the group.</p>
     */
    inline const Aws::String& GetGroupDesc() const { return m_groupDesc; }
    inline bool GroupDescHasBeenSet() const { return m_groupDescHasBeenSet; }
    template<typename GroupDescT = Aws::String>
    void SetGroupDesc(GroupDescT&& value) { m_groupDescHasBeenSet = true; m_groupDesc = std::forward<GroupDescT>(value); }
    template<typename GroupDescT = Aws::String>
    CreateIpGroupRequest& WithGroupDesc(GroupDescT&& value) { SetGroupDesc(std::forward<GroupDescT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rules to add to the group.</p>
     */
    inline const Aws::Vector<IpRuleItem>& GetUserRules() const { return m_userRules; }
    inline bool UserRulesHasBeenSet() const { return m_userRulesHasBeenSet; }
    template<typename UserRulesT = Aws::Vector<IpRuleItem>>
    void SetUserRules(UserRulesT&& value) { m_userRulesHasBeenSet = true; m_userRules = std::forward<UserRulesT>(value); }
    template<typename UserRulesT = Aws::Vector<IpRuleItem>>
    CreateIpGroupRequest& WithUserRules(UserRulesT&& value) { SetUserRules(std::forward<UserRulesT>(value)); return *this;}
    template<typename UserRulesT = IpRuleItem>
    CreateIpGroupRequest& AddUserRules(UserRulesT&& value) { m_userRulesHasBeenSet = true; m_userRules.emplace_back(std::forward<UserRulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags. Each WorkSpaces resource can have a maximum of 50 tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateIpGroupRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateIpGroupRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    Aws::String m_groupDesc;
    bool m_groupDescHasBeenSet = false;

    Aws::Vector<IpRuleItem> m_userRules;
    bool m_userRulesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
