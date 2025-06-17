/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/SecurityHubFeature.h>
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
    AWS_SECURITYHUB_API ListOrganizationAdminAccountsResult() = default;
    AWS_SECURITYHUB_API ListOrganizationAdminAccountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API ListOrganizationAdminAccountsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of Security Hub administrator accounts.</p>
     */
    inline const Aws::Vector<AdminAccount>& GetAdminAccounts() const { return m_adminAccounts; }
    template<typename AdminAccountsT = Aws::Vector<AdminAccount>>
    void SetAdminAccounts(AdminAccountsT&& value) { m_adminAccountsHasBeenSet = true; m_adminAccounts = std::forward<AdminAccountsT>(value); }
    template<typename AdminAccountsT = Aws::Vector<AdminAccount>>
    ListOrganizationAdminAccountsResult& WithAdminAccounts(AdminAccountsT&& value) { SetAdminAccounts(std::forward<AdminAccountsT>(value)); return *this;}
    template<typename AdminAccountsT = AdminAccount>
    ListOrganizationAdminAccountsResult& AddAdminAccounts(AdminAccountsT&& value) { m_adminAccountsHasBeenSet = true; m_adminAccounts.emplace_back(std::forward<AdminAccountsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListOrganizationAdminAccountsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The feature where the delegated administrator account is listed. Defaults to
     * Security Hub CSPM if not specified.</p>
     */
    inline SecurityHubFeature GetFeature() const { return m_feature; }
    inline void SetFeature(SecurityHubFeature value) { m_featureHasBeenSet = true; m_feature = value; }
    inline ListOrganizationAdminAccountsResult& WithFeature(SecurityHubFeature value) { SetFeature(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListOrganizationAdminAccountsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AdminAccount> m_adminAccounts;
    bool m_adminAccountsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    SecurityHubFeature m_feature{SecurityHubFeature::NOT_SET};
    bool m_featureHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
