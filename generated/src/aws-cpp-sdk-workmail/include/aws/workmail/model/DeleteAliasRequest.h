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
  class DeleteAliasRequest : public WorkMailRequest
  {
  public:
    AWS_WORKMAIL_API DeleteAliasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAlias"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier for the organization under which the user exists.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    /**
     * <p>The identifier for the organization under which the user exists.</p>
     */
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }

    /**
     * <p>The identifier for the organization under which the user exists.</p>
     */
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }

    /**
     * <p>The identifier for the organization under which the user exists.</p>
     */
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }

    /**
     * <p>The identifier for the organization under which the user exists.</p>
     */
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }

    /**
     * <p>The identifier for the organization under which the user exists.</p>
     */
    inline DeleteAliasRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    /**
     * <p>The identifier for the organization under which the user exists.</p>
     */
    inline DeleteAliasRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the organization under which the user exists.</p>
     */
    inline DeleteAliasRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}


    /**
     * <p>The identifier for the member (user or group) from which to have the aliases
     * removed.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }

    /**
     * <p>The identifier for the member (user or group) from which to have the aliases
     * removed.</p>
     */
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }

    /**
     * <p>The identifier for the member (user or group) from which to have the aliases
     * removed.</p>
     */
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }

    /**
     * <p>The identifier for the member (user or group) from which to have the aliases
     * removed.</p>
     */
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }

    /**
     * <p>The identifier for the member (user or group) from which to have the aliases
     * removed.</p>
     */
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }

    /**
     * <p>The identifier for the member (user or group) from which to have the aliases
     * removed.</p>
     */
    inline DeleteAliasRequest& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>The identifier for the member (user or group) from which to have the aliases
     * removed.</p>
     */
    inline DeleteAliasRequest& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the member (user or group) from which to have the aliases
     * removed.</p>
     */
    inline DeleteAliasRequest& WithEntityId(const char* value) { SetEntityId(value); return *this;}


    /**
     * <p>The aliases to be removed from the user's set of aliases. Duplicate entries
     * in the list are collapsed into single entries (the list is transformed into a
     * set).</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p>The aliases to be removed from the user's set of aliases. Duplicate entries
     * in the list are collapsed into single entries (the list is transformed into a
     * set).</p>
     */
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }

    /**
     * <p>The aliases to be removed from the user's set of aliases. Duplicate entries
     * in the list are collapsed into single entries (the list is transformed into a
     * set).</p>
     */
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }

    /**
     * <p>The aliases to be removed from the user's set of aliases. Duplicate entries
     * in the list are collapsed into single entries (the list is transformed into a
     * set).</p>
     */
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }

    /**
     * <p>The aliases to be removed from the user's set of aliases. Duplicate entries
     * in the list are collapsed into single entries (the list is transformed into a
     * set).</p>
     */
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }

    /**
     * <p>The aliases to be removed from the user's set of aliases. Duplicate entries
     * in the list are collapsed into single entries (the list is transformed into a
     * set).</p>
     */
    inline DeleteAliasRequest& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>The aliases to be removed from the user's set of aliases. Duplicate entries
     * in the list are collapsed into single entries (the list is transformed into a
     * set).</p>
     */
    inline DeleteAliasRequest& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}

    /**
     * <p>The aliases to be removed from the user's set of aliases. Duplicate entries
     * in the list are collapsed into single entries (the list is transformed into a
     * set).</p>
     */
    inline DeleteAliasRequest& WithAlias(const char* value) { SetAlias(value); return *this;}

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
