/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class DisableOrganizationAdminAccountRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API DisableOrganizationAdminAccountRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisableOrganizationAdminAccount"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Web Services account identifier of the Security Hub administrator
     * account.</p>
     */
    inline const Aws::String& GetAdminAccountId() const{ return m_adminAccountId; }

    /**
     * <p>The Amazon Web Services account identifier of the Security Hub administrator
     * account.</p>
     */
    inline bool AdminAccountIdHasBeenSet() const { return m_adminAccountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account identifier of the Security Hub administrator
     * account.</p>
     */
    inline void SetAdminAccountId(const Aws::String& value) { m_adminAccountIdHasBeenSet = true; m_adminAccountId = value; }

    /**
     * <p>The Amazon Web Services account identifier of the Security Hub administrator
     * account.</p>
     */
    inline void SetAdminAccountId(Aws::String&& value) { m_adminAccountIdHasBeenSet = true; m_adminAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account identifier of the Security Hub administrator
     * account.</p>
     */
    inline void SetAdminAccountId(const char* value) { m_adminAccountIdHasBeenSet = true; m_adminAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account identifier of the Security Hub administrator
     * account.</p>
     */
    inline DisableOrganizationAdminAccountRequest& WithAdminAccountId(const Aws::String& value) { SetAdminAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account identifier of the Security Hub administrator
     * account.</p>
     */
    inline DisableOrganizationAdminAccountRequest& WithAdminAccountId(Aws::String&& value) { SetAdminAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account identifier of the Security Hub administrator
     * account.</p>
     */
    inline DisableOrganizationAdminAccountRequest& WithAdminAccountId(const char* value) { SetAdminAccountId(value); return *this;}

  private:

    Aws::String m_adminAccountId;
    bool m_adminAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
