/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class InviteMembersRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API InviteMembersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "InviteMembers"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    /**
     * <p>The list of account IDs of the Amazon Web Services accounts to invite to
     * Security Hub as members. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    /**
     * <p>The list of account IDs of the Amazon Web Services accounts to invite to
     * Security Hub as members. </p>
     */
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }

    /**
     * <p>The list of account IDs of the Amazon Web Services accounts to invite to
     * Security Hub as members. </p>
     */
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }

    /**
     * <p>The list of account IDs of the Amazon Web Services accounts to invite to
     * Security Hub as members. </p>
     */
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }

    /**
     * <p>The list of account IDs of the Amazon Web Services accounts to invite to
     * Security Hub as members. </p>
     */
    inline InviteMembersRequest& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    /**
     * <p>The list of account IDs of the Amazon Web Services accounts to invite to
     * Security Hub as members. </p>
     */
    inline InviteMembersRequest& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * <p>The list of account IDs of the Amazon Web Services accounts to invite to
     * Security Hub as members. </p>
     */
    inline InviteMembersRequest& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

    /**
     * <p>The list of account IDs of the Amazon Web Services accounts to invite to
     * Security Hub as members. </p>
     */
    inline InviteMembersRequest& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of account IDs of the Amazon Web Services accounts to invite to
     * Security Hub as members. </p>
     */
    inline InviteMembersRequest& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
