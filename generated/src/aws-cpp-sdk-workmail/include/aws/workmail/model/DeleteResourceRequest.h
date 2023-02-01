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
  class DeleteResourceRequest : public WorkMailRequest
  {
  public:
    AWS_WORKMAIL_API DeleteResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteResource"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier associated with the organization from which the resource is
     * deleted.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    /**
     * <p>The identifier associated with the organization from which the resource is
     * deleted.</p>
     */
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }

    /**
     * <p>The identifier associated with the organization from which the resource is
     * deleted.</p>
     */
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }

    /**
     * <p>The identifier associated with the organization from which the resource is
     * deleted.</p>
     */
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }

    /**
     * <p>The identifier associated with the organization from which the resource is
     * deleted.</p>
     */
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }

    /**
     * <p>The identifier associated with the organization from which the resource is
     * deleted.</p>
     */
    inline DeleteResourceRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    /**
     * <p>The identifier associated with the organization from which the resource is
     * deleted.</p>
     */
    inline DeleteResourceRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    /**
     * <p>The identifier associated with the organization from which the resource is
     * deleted.</p>
     */
    inline DeleteResourceRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}


    /**
     * <p>The identifier of the resource to be deleted.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The identifier of the resource to be deleted.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The identifier of the resource to be deleted.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The identifier of the resource to be deleted.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The identifier of the resource to be deleted.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The identifier of the resource to be deleted.</p>
     */
    inline DeleteResourceRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The identifier of the resource to be deleted.</p>
     */
    inline DeleteResourceRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the resource to be deleted.</p>
     */
    inline DeleteResourceRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}

  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
