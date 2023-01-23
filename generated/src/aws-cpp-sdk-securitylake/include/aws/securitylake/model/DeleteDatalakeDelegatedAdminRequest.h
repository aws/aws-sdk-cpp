﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/SecurityLakeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

  /**
   */
  class DeleteDatalakeDelegatedAdminRequest : public SecurityLakeRequest
  {
  public:
    AWS_SECURITYLAKE_API DeleteDatalakeDelegatedAdminRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDatalakeDelegatedAdmin"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;


    /**
     * <p>The account ID the Security Lake delegated administrator.</p>
     */
    inline const Aws::String& GetAccount() const{ return m_account; }

    /**
     * <p>The account ID the Security Lake delegated administrator.</p>
     */
    inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }

    /**
     * <p>The account ID the Security Lake delegated administrator.</p>
     */
    inline void SetAccount(const Aws::String& value) { m_accountHasBeenSet = true; m_account = value; }

    /**
     * <p>The account ID the Security Lake delegated administrator.</p>
     */
    inline void SetAccount(Aws::String&& value) { m_accountHasBeenSet = true; m_account = std::move(value); }

    /**
     * <p>The account ID the Security Lake delegated administrator.</p>
     */
    inline void SetAccount(const char* value) { m_accountHasBeenSet = true; m_account.assign(value); }

    /**
     * <p>The account ID the Security Lake delegated administrator.</p>
     */
    inline DeleteDatalakeDelegatedAdminRequest& WithAccount(const Aws::String& value) { SetAccount(value); return *this;}

    /**
     * <p>The account ID the Security Lake delegated administrator.</p>
     */
    inline DeleteDatalakeDelegatedAdminRequest& WithAccount(Aws::String&& value) { SetAccount(std::move(value)); return *this;}

    /**
     * <p>The account ID the Security Lake delegated administrator.</p>
     */
    inline DeleteDatalakeDelegatedAdminRequest& WithAccount(const char* value) { SetAccount(value); return *this;}

  private:

    Aws::String m_account;
    bool m_accountHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
