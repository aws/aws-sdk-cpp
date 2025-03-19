/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/trustedadvisor/model/AccountRecommendationLifecycleSummary.h>
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
namespace TrustedAdvisor
{
namespace Model
{
  class ListOrganizationRecommendationAccountsResult
  {
  public:
    AWS_TRUSTEDADVISOR_API ListOrganizationRecommendationAccountsResult() = default;
    AWS_TRUSTEDADVISOR_API ListOrganizationRecommendationAccountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRUSTEDADVISOR_API ListOrganizationRecommendationAccountsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The account recommendations lifecycles that are applicable to the
     * Recommendation</p>
     */
    inline const Aws::Vector<AccountRecommendationLifecycleSummary>& GetAccountRecommendationLifecycleSummaries() const { return m_accountRecommendationLifecycleSummaries; }
    template<typename AccountRecommendationLifecycleSummariesT = Aws::Vector<AccountRecommendationLifecycleSummary>>
    void SetAccountRecommendationLifecycleSummaries(AccountRecommendationLifecycleSummariesT&& value) { m_accountRecommendationLifecycleSummariesHasBeenSet = true; m_accountRecommendationLifecycleSummaries = std::forward<AccountRecommendationLifecycleSummariesT>(value); }
    template<typename AccountRecommendationLifecycleSummariesT = Aws::Vector<AccountRecommendationLifecycleSummary>>
    ListOrganizationRecommendationAccountsResult& WithAccountRecommendationLifecycleSummaries(AccountRecommendationLifecycleSummariesT&& value) { SetAccountRecommendationLifecycleSummaries(std::forward<AccountRecommendationLifecycleSummariesT>(value)); return *this;}
    template<typename AccountRecommendationLifecycleSummariesT = AccountRecommendationLifecycleSummary>
    ListOrganizationRecommendationAccountsResult& AddAccountRecommendationLifecycleSummaries(AccountRecommendationLifecycleSummariesT&& value) { m_accountRecommendationLifecycleSummariesHasBeenSet = true; m_accountRecommendationLifecycleSummaries.emplace_back(std::forward<AccountRecommendationLifecycleSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListOrganizationRecommendationAccountsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListOrganizationRecommendationAccountsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AccountRecommendationLifecycleSummary> m_accountRecommendationLifecycleSummaries;
    bool m_accountRecommendationLifecycleSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
