/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearchserverless/model/SecurityPolicySummary.h>
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
namespace OpenSearchServerless
{
namespace Model
{
  class ListSecurityPoliciesResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API ListSecurityPoliciesResult();
    AWS_OPENSEARCHSERVERLESS_API ListSecurityPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API ListSecurityPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline ListSecurityPoliciesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline ListSecurityPoliciesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline ListSecurityPoliciesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Details about the security policies in your account.</p>
     */
    inline const Aws::Vector<SecurityPolicySummary>& GetSecurityPolicySummaries() const{ return m_securityPolicySummaries; }

    /**
     * <p>Details about the security policies in your account.</p>
     */
    inline void SetSecurityPolicySummaries(const Aws::Vector<SecurityPolicySummary>& value) { m_securityPolicySummaries = value; }

    /**
     * <p>Details about the security policies in your account.</p>
     */
    inline void SetSecurityPolicySummaries(Aws::Vector<SecurityPolicySummary>&& value) { m_securityPolicySummaries = std::move(value); }

    /**
     * <p>Details about the security policies in your account.</p>
     */
    inline ListSecurityPoliciesResult& WithSecurityPolicySummaries(const Aws::Vector<SecurityPolicySummary>& value) { SetSecurityPolicySummaries(value); return *this;}

    /**
     * <p>Details about the security policies in your account.</p>
     */
    inline ListSecurityPoliciesResult& WithSecurityPolicySummaries(Aws::Vector<SecurityPolicySummary>&& value) { SetSecurityPolicySummaries(std::move(value)); return *this;}

    /**
     * <p>Details about the security policies in your account.</p>
     */
    inline ListSecurityPoliciesResult& AddSecurityPolicySummaries(const SecurityPolicySummary& value) { m_securityPolicySummaries.push_back(value); return *this; }

    /**
     * <p>Details about the security policies in your account.</p>
     */
    inline ListSecurityPoliciesResult& AddSecurityPolicySummaries(SecurityPolicySummary&& value) { m_securityPolicySummaries.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<SecurityPolicySummary> m_securityPolicySummaries;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
