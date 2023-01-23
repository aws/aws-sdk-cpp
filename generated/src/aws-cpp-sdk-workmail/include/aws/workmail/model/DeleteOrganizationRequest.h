/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/WorkMailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace WorkMail
{
namespace Model
{

  /**
   */
  class DeleteOrganizationRequest : public WorkMailRequest
  {
  public:
    AWS_WORKMAIL_API DeleteOrganizationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteOrganization"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The idempotency token associated with the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The idempotency token associated with the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The idempotency token associated with the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The idempotency token associated with the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The idempotency token associated with the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The idempotency token associated with the request.</p>
     */
    inline DeleteOrganizationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The idempotency token associated with the request.</p>
     */
    inline DeleteOrganizationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The idempotency token associated with the request.</p>
     */
    inline DeleteOrganizationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The organization ID.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    /**
     * <p>The organization ID.</p>
     */
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }

    /**
     * <p>The organization ID.</p>
     */
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }

    /**
     * <p>The organization ID.</p>
     */
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }

    /**
     * <p>The organization ID.</p>
     */
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }

    /**
     * <p>The organization ID.</p>
     */
    inline DeleteOrganizationRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    /**
     * <p>The organization ID.</p>
     */
    inline DeleteOrganizationRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    /**
     * <p>The organization ID.</p>
     */
    inline DeleteOrganizationRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}


    /**
     * <p>If true, deletes the AWS Directory Service directory associated with the
     * organization.</p>
     */
    inline bool GetDeleteDirectory() const{ return m_deleteDirectory; }

    /**
     * <p>If true, deletes the AWS Directory Service directory associated with the
     * organization.</p>
     */
    inline bool DeleteDirectoryHasBeenSet() const { return m_deleteDirectoryHasBeenSet; }

    /**
     * <p>If true, deletes the AWS Directory Service directory associated with the
     * organization.</p>
     */
    inline void SetDeleteDirectory(bool value) { m_deleteDirectoryHasBeenSet = true; m_deleteDirectory = value; }

    /**
     * <p>If true, deletes the AWS Directory Service directory associated with the
     * organization.</p>
     */
    inline DeleteOrganizationRequest& WithDeleteDirectory(bool value) { SetDeleteDirectory(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    bool m_deleteDirectory;
    bool m_deleteDirectoryHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
