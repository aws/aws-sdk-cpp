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
  class CreateGroupRequest : public WorkMailRequest
  {
  public:
    AWS_WORKMAIL_API CreateGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGroup"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The organization under which the group is to be created.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }
    inline CreateGroupRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}
    inline CreateGroupRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}
    inline CreateGroupRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateGroupRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateGroupRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateGroupRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this parameter is enabled, the group will be hidden from the address
     * book.</p>
     */
    inline bool GetHiddenFromGlobalAddressList() const{ return m_hiddenFromGlobalAddressList; }
    inline bool HiddenFromGlobalAddressListHasBeenSet() const { return m_hiddenFromGlobalAddressListHasBeenSet; }
    inline void SetHiddenFromGlobalAddressList(bool value) { m_hiddenFromGlobalAddressListHasBeenSet = true; m_hiddenFromGlobalAddressList = value; }
    inline CreateGroupRequest& WithHiddenFromGlobalAddressList(bool value) { SetHiddenFromGlobalAddressList(value); return *this;}
    ///@}
  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_hiddenFromGlobalAddressList;
    bool m_hiddenFromGlobalAddressListHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
