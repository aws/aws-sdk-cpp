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
    AWS_WORKSPACES_API CreateIpGroupRequest();

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
    inline const Aws::String& GetGroupName() const{ return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }
    inline CreateIpGroupRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}
    inline CreateIpGroupRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}
    inline CreateIpGroupRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the group.</p>
     */
    inline const Aws::String& GetGroupDesc() const{ return m_groupDesc; }
    inline bool GroupDescHasBeenSet() const { return m_groupDescHasBeenSet; }
    inline void SetGroupDesc(const Aws::String& value) { m_groupDescHasBeenSet = true; m_groupDesc = value; }
    inline void SetGroupDesc(Aws::String&& value) { m_groupDescHasBeenSet = true; m_groupDesc = std::move(value); }
    inline void SetGroupDesc(const char* value) { m_groupDescHasBeenSet = true; m_groupDesc.assign(value); }
    inline CreateIpGroupRequest& WithGroupDesc(const Aws::String& value) { SetGroupDesc(value); return *this;}
    inline CreateIpGroupRequest& WithGroupDesc(Aws::String&& value) { SetGroupDesc(std::move(value)); return *this;}
    inline CreateIpGroupRequest& WithGroupDesc(const char* value) { SetGroupDesc(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rules to add to the group.</p>
     */
    inline const Aws::Vector<IpRuleItem>& GetUserRules() const{ return m_userRules; }
    inline bool UserRulesHasBeenSet() const { return m_userRulesHasBeenSet; }
    inline void SetUserRules(const Aws::Vector<IpRuleItem>& value) { m_userRulesHasBeenSet = true; m_userRules = value; }
    inline void SetUserRules(Aws::Vector<IpRuleItem>&& value) { m_userRulesHasBeenSet = true; m_userRules = std::move(value); }
    inline CreateIpGroupRequest& WithUserRules(const Aws::Vector<IpRuleItem>& value) { SetUserRules(value); return *this;}
    inline CreateIpGroupRequest& WithUserRules(Aws::Vector<IpRuleItem>&& value) { SetUserRules(std::move(value)); return *this;}
    inline CreateIpGroupRequest& AddUserRules(const IpRuleItem& value) { m_userRulesHasBeenSet = true; m_userRules.push_back(value); return *this; }
    inline CreateIpGroupRequest& AddUserRules(IpRuleItem&& value) { m_userRulesHasBeenSet = true; m_userRules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags. Each WorkSpaces resource can have a maximum of 50 tags.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateIpGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateIpGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateIpGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateIpGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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
