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
  class CreateAliasRequest : public WorkMailRequest
  {
  public:
    AWS_WORKMAIL_API CreateAliasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAlias"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The organization under which the member (user or group) exists.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }
    inline CreateAliasRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}
    inline CreateAliasRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}
    inline CreateAliasRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The member (user or group) to which this alias is added.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }
    inline CreateAliasRequest& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}
    inline CreateAliasRequest& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}
    inline CreateAliasRequest& WithEntityId(const char* value) { SetEntityId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias to add to the member set.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }
    inline CreateAliasRequest& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}
    inline CreateAliasRequest& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}
    inline CreateAliasRequest& WithAlias(const char* value) { SetAlias(value); return *this;}
    ///@}
  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
