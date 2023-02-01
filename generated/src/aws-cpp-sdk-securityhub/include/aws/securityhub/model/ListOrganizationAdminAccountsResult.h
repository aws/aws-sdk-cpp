/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AdminAccount.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{
  class ListOrganizationAdminAccountsResult
  {
  public:
    AWS_SECURITYHUB_API ListOrganizationAdminAccountsResult();
    AWS_SECURITYHUB_API ListOrganizationAdminAccountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API ListOrganizationAdminAccountsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of Security Hub administrator accounts.</p>
     */
    inline const Aws::Vector<AdminAccount>& GetAdminAccounts() const{ return m_adminAccounts; }

    /**
     * <p>The list of Security Hub administrator accounts.</p>
     */
    inline void SetAdminAccounts(const Aws::Vector<AdminAccount>& value) { m_adminAccounts = value; }

    /**
     * <p>The list of Security Hub administrator accounts.</p>
     */
    inline void SetAdminAccounts(Aws::Vector<AdminAccount>&& value) { m_adminAccounts = std::move(value); }

    /**
     * <p>The list of Security Hub administrator accounts.</p>
     */
    inline ListOrganizationAdminAccountsResult& WithAdminAccounts(const Aws::Vector<AdminAccount>& value) { SetAdminAccounts(value); return *this;}

    /**
     * <p>The list of Security Hub administrator accounts.</p>
     */
    inline ListOrganizationAdminAccountsResult& WithAdminAccounts(Aws::Vector<AdminAccount>&& value) { SetAdminAccounts(std::move(value)); return *this;}

    /**
     * <p>The list of Security Hub administrator accounts.</p>
     */
    inline ListOrganizationAdminAccountsResult& AddAdminAccounts(const AdminAccount& value) { m_adminAccounts.push_back(value); return *this; }

    /**
     * <p>The list of Security Hub administrator accounts.</p>
     */
    inline ListOrganizationAdminAccountsResult& AddAdminAccounts(AdminAccount&& value) { m_adminAccounts.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline ListOrganizationAdminAccountsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline ListOrganizationAdminAccountsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline ListOrganizationAdminAccountsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AdminAccount> m_adminAccounts;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
