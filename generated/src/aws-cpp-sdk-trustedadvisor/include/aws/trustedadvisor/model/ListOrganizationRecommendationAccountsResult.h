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
    AWS_TRUSTEDADVISOR_API ListOrganizationRecommendationAccountsResult();
    AWS_TRUSTEDADVISOR_API ListOrganizationRecommendationAccountsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRUSTEDADVISOR_API ListOrganizationRecommendationAccountsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The account recommendations lifecycles that are applicable to the
     * Recommendation</p>
     */
    inline const Aws::Vector<AccountRecommendationLifecycleSummary>& GetAccountRecommendationLifecycleSummaries() const{ return m_accountRecommendationLifecycleSummaries; }

    /**
     * <p>The account recommendations lifecycles that are applicable to the
     * Recommendation</p>
     */
    inline void SetAccountRecommendationLifecycleSummaries(const Aws::Vector<AccountRecommendationLifecycleSummary>& value) { m_accountRecommendationLifecycleSummaries = value; }

    /**
     * <p>The account recommendations lifecycles that are applicable to the
     * Recommendation</p>
     */
    inline void SetAccountRecommendationLifecycleSummaries(Aws::Vector<AccountRecommendationLifecycleSummary>&& value) { m_accountRecommendationLifecycleSummaries = std::move(value); }

    /**
     * <p>The account recommendations lifecycles that are applicable to the
     * Recommendation</p>
     */
    inline ListOrganizationRecommendationAccountsResult& WithAccountRecommendationLifecycleSummaries(const Aws::Vector<AccountRecommendationLifecycleSummary>& value) { SetAccountRecommendationLifecycleSummaries(value); return *this;}

    /**
     * <p>The account recommendations lifecycles that are applicable to the
     * Recommendation</p>
     */
    inline ListOrganizationRecommendationAccountsResult& WithAccountRecommendationLifecycleSummaries(Aws::Vector<AccountRecommendationLifecycleSummary>&& value) { SetAccountRecommendationLifecycleSummaries(std::move(value)); return *this;}

    /**
     * <p>The account recommendations lifecycles that are applicable to the
     * Recommendation</p>
     */
    inline ListOrganizationRecommendationAccountsResult& AddAccountRecommendationLifecycleSummaries(const AccountRecommendationLifecycleSummary& value) { m_accountRecommendationLifecycleSummaries.push_back(value); return *this; }

    /**
     * <p>The account recommendations lifecycles that are applicable to the
     * Recommendation</p>
     */
    inline ListOrganizationRecommendationAccountsResult& AddAccountRecommendationLifecycleSummaries(AccountRecommendationLifecycleSummary&& value) { m_accountRecommendationLifecycleSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline ListOrganizationRecommendationAccountsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline ListOrganizationRecommendationAccountsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline ListOrganizationRecommendationAccountsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListOrganizationRecommendationAccountsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListOrganizationRecommendationAccountsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListOrganizationRecommendationAccountsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AccountRecommendationLifecycleSummary> m_accountRecommendationLifecycleSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
