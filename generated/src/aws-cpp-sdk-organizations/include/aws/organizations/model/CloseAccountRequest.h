/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/OrganizationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Organizations
{
namespace Model
{

  /**
   */
  class CloseAccountRequest : public OrganizationsRequest
  {
  public:
    AWS_ORGANIZATIONS_API CloseAccountRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CloseAccount"; }

    AWS_ORGANIZATIONS_API Aws::String SerializePayload() const override;

    AWS_ORGANIZATIONS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Retrieves the Amazon Web Services account Id for the current
     * <code>CloseAccount</code> API request. </p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>Retrieves the Amazon Web Services account Id for the current
     * <code>CloseAccount</code> API request. </p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>Retrieves the Amazon Web Services account Id for the current
     * <code>CloseAccount</code> API request. </p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>Retrieves the Amazon Web Services account Id for the current
     * <code>CloseAccount</code> API request. </p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>Retrieves the Amazon Web Services account Id for the current
     * <code>CloseAccount</code> API request. </p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>Retrieves the Amazon Web Services account Id for the current
     * <code>CloseAccount</code> API request. </p>
     */
    inline CloseAccountRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>Retrieves the Amazon Web Services account Id for the current
     * <code>CloseAccount</code> API request. </p>
     */
    inline CloseAccountRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>Retrieves the Amazon Web Services account Id for the current
     * <code>CloseAccount</code> API request. </p>
     */
    inline CloseAccountRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
