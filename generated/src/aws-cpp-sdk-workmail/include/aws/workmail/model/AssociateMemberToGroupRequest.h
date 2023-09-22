﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/WorkMailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkMail
{
namespace Model
{

  /**
   */
  class AssociateMemberToGroupRequest : public WorkMailRequest
  {
  public:
    AWS_WORKMAIL_API AssociateMemberToGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateMemberToGroup"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The organization under which the group exists.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    /**
     * <p>The organization under which the group exists.</p>
     */
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }

    /**
     * <p>The organization under which the group exists.</p>
     */
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }

    /**
     * <p>The organization under which the group exists.</p>
     */
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }

    /**
     * <p>The organization under which the group exists.</p>
     */
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }

    /**
     * <p>The organization under which the group exists.</p>
     */
    inline AssociateMemberToGroupRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    /**
     * <p>The organization under which the group exists.</p>
     */
    inline AssociateMemberToGroupRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    /**
     * <p>The organization under which the group exists.</p>
     */
    inline AssociateMemberToGroupRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}


    /**
     * <p>The group to which the member (user or group) is associated.</p> <p>The
     * identifier can accept <i>GroupId</i>, <i>Groupname</i>, or <i>email</i>. The
     * following identity formats are available:</p> <ul> <li> <p>Group ID:
     * 12345678-1234-1234-1234-123456789012 or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * group@domain.tld</p> </li> <li> <p>Group name: group</p> </li> </ul>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * <p>The group to which the member (user or group) is associated.</p> <p>The
     * identifier can accept <i>GroupId</i>, <i>Groupname</i>, or <i>email</i>. The
     * following identity formats are available:</p> <ul> <li> <p>Group ID:
     * 12345678-1234-1234-1234-123456789012 or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * group@domain.tld</p> </li> <li> <p>Group name: group</p> </li> </ul>
     */
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }

    /**
     * <p>The group to which the member (user or group) is associated.</p> <p>The
     * identifier can accept <i>GroupId</i>, <i>Groupname</i>, or <i>email</i>. The
     * following identity formats are available:</p> <ul> <li> <p>Group ID:
     * 12345678-1234-1234-1234-123456789012 or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * group@domain.tld</p> </li> <li> <p>Group name: group</p> </li> </ul>
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>The group to which the member (user or group) is associated.</p> <p>The
     * identifier can accept <i>GroupId</i>, <i>Groupname</i>, or <i>email</i>. The
     * following identity formats are available:</p> <ul> <li> <p>Group ID:
     * 12345678-1234-1234-1234-123456789012 or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * group@domain.tld</p> </li> <li> <p>Group name: group</p> </li> </ul>
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * <p>The group to which the member (user or group) is associated.</p> <p>The
     * identifier can accept <i>GroupId</i>, <i>Groupname</i>, or <i>email</i>. The
     * following identity formats are available:</p> <ul> <li> <p>Group ID:
     * 12345678-1234-1234-1234-123456789012 or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * group@domain.tld</p> </li> <li> <p>Group name: group</p> </li> </ul>
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * <p>The group to which the member (user or group) is associated.</p> <p>The
     * identifier can accept <i>GroupId</i>, <i>Groupname</i>, or <i>email</i>. The
     * following identity formats are available:</p> <ul> <li> <p>Group ID:
     * 12345678-1234-1234-1234-123456789012 or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * group@domain.tld</p> </li> <li> <p>Group name: group</p> </li> </ul>
     */
    inline AssociateMemberToGroupRequest& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>The group to which the member (user or group) is associated.</p> <p>The
     * identifier can accept <i>GroupId</i>, <i>Groupname</i>, or <i>email</i>. The
     * following identity formats are available:</p> <ul> <li> <p>Group ID:
     * 12345678-1234-1234-1234-123456789012 or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * group@domain.tld</p> </li> <li> <p>Group name: group</p> </li> </ul>
     */
    inline AssociateMemberToGroupRequest& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>The group to which the member (user or group) is associated.</p> <p>The
     * identifier can accept <i>GroupId</i>, <i>Groupname</i>, or <i>email</i>. The
     * following identity formats are available:</p> <ul> <li> <p>Group ID:
     * 12345678-1234-1234-1234-123456789012 or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * group@domain.tld</p> </li> <li> <p>Group name: group</p> </li> </ul>
     */
    inline AssociateMemberToGroupRequest& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * <p>The member (user or group) to associate to the group.</p> <p>The member ID
     * can accept <i>UserID or GroupId</i>, <i>Username or Groupname</i>, or
     * <i>email</i>.</p> <ul> <li> <p>Member: 12345678-1234-1234-1234-123456789012 or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * member@domain.tld</p> </li> <li> <p>Member name: member</p> </li> </ul>
     */
    inline const Aws::String& GetMemberId() const{ return m_memberId; }

    /**
     * <p>The member (user or group) to associate to the group.</p> <p>The member ID
     * can accept <i>UserID or GroupId</i>, <i>Username or Groupname</i>, or
     * <i>email</i>.</p> <ul> <li> <p>Member: 12345678-1234-1234-1234-123456789012 or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * member@domain.tld</p> </li> <li> <p>Member name: member</p> </li> </ul>
     */
    inline bool MemberIdHasBeenSet() const { return m_memberIdHasBeenSet; }

    /**
     * <p>The member (user or group) to associate to the group.</p> <p>The member ID
     * can accept <i>UserID or GroupId</i>, <i>Username or Groupname</i>, or
     * <i>email</i>.</p> <ul> <li> <p>Member: 12345678-1234-1234-1234-123456789012 or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * member@domain.tld</p> </li> <li> <p>Member name: member</p> </li> </ul>
     */
    inline void SetMemberId(const Aws::String& value) { m_memberIdHasBeenSet = true; m_memberId = value; }

    /**
     * <p>The member (user or group) to associate to the group.</p> <p>The member ID
     * can accept <i>UserID or GroupId</i>, <i>Username or Groupname</i>, or
     * <i>email</i>.</p> <ul> <li> <p>Member: 12345678-1234-1234-1234-123456789012 or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * member@domain.tld</p> </li> <li> <p>Member name: member</p> </li> </ul>
     */
    inline void SetMemberId(Aws::String&& value) { m_memberIdHasBeenSet = true; m_memberId = std::move(value); }

    /**
     * <p>The member (user or group) to associate to the group.</p> <p>The member ID
     * can accept <i>UserID or GroupId</i>, <i>Username or Groupname</i>, or
     * <i>email</i>.</p> <ul> <li> <p>Member: 12345678-1234-1234-1234-123456789012 or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * member@domain.tld</p> </li> <li> <p>Member name: member</p> </li> </ul>
     */
    inline void SetMemberId(const char* value) { m_memberIdHasBeenSet = true; m_memberId.assign(value); }

    /**
     * <p>The member (user or group) to associate to the group.</p> <p>The member ID
     * can accept <i>UserID or GroupId</i>, <i>Username or Groupname</i>, or
     * <i>email</i>.</p> <ul> <li> <p>Member: 12345678-1234-1234-1234-123456789012 or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * member@domain.tld</p> </li> <li> <p>Member name: member</p> </li> </ul>
     */
    inline AssociateMemberToGroupRequest& WithMemberId(const Aws::String& value) { SetMemberId(value); return *this;}

    /**
     * <p>The member (user or group) to associate to the group.</p> <p>The member ID
     * can accept <i>UserID or GroupId</i>, <i>Username or Groupname</i>, or
     * <i>email</i>.</p> <ul> <li> <p>Member: 12345678-1234-1234-1234-123456789012 or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * member@domain.tld</p> </li> <li> <p>Member name: member</p> </li> </ul>
     */
    inline AssociateMemberToGroupRequest& WithMemberId(Aws::String&& value) { SetMemberId(std::move(value)); return *this;}

    /**
     * <p>The member (user or group) to associate to the group.</p> <p>The member ID
     * can accept <i>UserID or GroupId</i>, <i>Username or Groupname</i>, or
     * <i>email</i>.</p> <ul> <li> <p>Member: 12345678-1234-1234-1234-123456789012 or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * member@domain.tld</p> </li> <li> <p>Member name: member</p> </li> </ul>
     */
    inline AssociateMemberToGroupRequest& WithMemberId(const char* value) { SetMemberId(value); return *this;}

  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::String m_memberId;
    bool m_memberIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
