/**
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
  class UpdateGroupRequest : public WorkMailRequest
  {
  public:
    AWS_WORKMAIL_API UpdateGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGroup"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier for the organization under which the group exists.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }
    inline UpdateGroupRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}
    inline UpdateGroupRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}
    inline UpdateGroupRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the group to be updated.</p> <p>The identifier can accept
     * <i>GroupId</i>, <i>Groupname</i>, or <i>email</i>. The following identity
     * formats are available:</p> <ul> <li> <p>Group ID:
     * 12345678-1234-1234-1234-123456789012 or
     * S-1-1-12-1234567890-123456789-123456789-1234</p> </li> <li> <p>Email address:
     * group@domain.tld</p> </li> <li> <p>Group name: group</p> </li> </ul>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }
    inline UpdateGroupRequest& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}
    inline UpdateGroupRequest& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}
    inline UpdateGroupRequest& WithGroupId(const char* value) { SetGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If enabled, the group is hidden from the global address list.</p>
     */
    inline bool GetHiddenFromGlobalAddressList() const{ return m_hiddenFromGlobalAddressList; }
    inline bool HiddenFromGlobalAddressListHasBeenSet() const { return m_hiddenFromGlobalAddressListHasBeenSet; }
    inline void SetHiddenFromGlobalAddressList(bool value) { m_hiddenFromGlobalAddressListHasBeenSet = true; m_hiddenFromGlobalAddressList = value; }
    inline UpdateGroupRequest& WithHiddenFromGlobalAddressList(bool value) { SetHiddenFromGlobalAddressList(value); return *this;}
    ///@}
  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    bool m_hiddenFromGlobalAddressList;
    bool m_hiddenFromGlobalAddressListHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
