/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/model/LifecyclePolicySummary.h>
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
  class ListLifecyclePoliciesResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API ListLifecyclePoliciesResult();
    AWS_OPENSEARCHSERVERLESS_API ListLifecyclePoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API ListLifecyclePoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about the requested lifecycle policies.</p>
     */
    inline const Aws::Vector<LifecyclePolicySummary>& GetLifecyclePolicySummaries() const{ return m_lifecyclePolicySummaries; }

    /**
     * <p>Details about the requested lifecycle policies.</p>
     */
    inline void SetLifecyclePolicySummaries(const Aws::Vector<LifecyclePolicySummary>& value) { m_lifecyclePolicySummaries = value; }

    /**
     * <p>Details about the requested lifecycle policies.</p>
     */
    inline void SetLifecyclePolicySummaries(Aws::Vector<LifecyclePolicySummary>&& value) { m_lifecyclePolicySummaries = std::move(value); }

    /**
     * <p>Details about the requested lifecycle policies.</p>
     */
    inline ListLifecyclePoliciesResult& WithLifecyclePolicySummaries(const Aws::Vector<LifecyclePolicySummary>& value) { SetLifecyclePolicySummaries(value); return *this;}

    /**
     * <p>Details about the requested lifecycle policies.</p>
     */
    inline ListLifecyclePoliciesResult& WithLifecyclePolicySummaries(Aws::Vector<LifecyclePolicySummary>&& value) { SetLifecyclePolicySummaries(std::move(value)); return *this;}

    /**
     * <p>Details about the requested lifecycle policies.</p>
     */
    inline ListLifecyclePoliciesResult& AddLifecyclePolicySummaries(const LifecyclePolicySummary& value) { m_lifecyclePolicySummaries.push_back(value); return *this; }

    /**
     * <p>Details about the requested lifecycle policies.</p>
     */
    inline ListLifecyclePoliciesResult& AddLifecyclePolicySummaries(LifecyclePolicySummary&& value) { m_lifecyclePolicySummaries.push_back(std::move(value)); return *this; }


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
    inline ListLifecyclePoliciesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline ListLifecyclePoliciesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline ListLifecyclePoliciesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListLifecyclePoliciesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListLifecyclePoliciesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListLifecyclePoliciesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<LifecyclePolicySummary> m_lifecyclePolicySummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
