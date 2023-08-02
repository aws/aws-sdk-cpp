/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehub/model/ResiliencyPolicy.h>
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
namespace ResilienceHub
{
namespace Model
{
  class ListResiliencyPoliciesResult
  {
  public:
    AWS_RESILIENCEHUB_API ListResiliencyPoliciesResult();
    AWS_RESILIENCEHUB_API ListResiliencyPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API ListResiliencyPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline ListResiliencyPoliciesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline ListResiliencyPoliciesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline ListResiliencyPoliciesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The resiliency policies for the Resilience Hub applications.</p>
     */
    inline const Aws::Vector<ResiliencyPolicy>& GetResiliencyPolicies() const{ return m_resiliencyPolicies; }

    /**
     * <p>The resiliency policies for the Resilience Hub applications.</p>
     */
    inline void SetResiliencyPolicies(const Aws::Vector<ResiliencyPolicy>& value) { m_resiliencyPolicies = value; }

    /**
     * <p>The resiliency policies for the Resilience Hub applications.</p>
     */
    inline void SetResiliencyPolicies(Aws::Vector<ResiliencyPolicy>&& value) { m_resiliencyPolicies = std::move(value); }

    /**
     * <p>The resiliency policies for the Resilience Hub applications.</p>
     */
    inline ListResiliencyPoliciesResult& WithResiliencyPolicies(const Aws::Vector<ResiliencyPolicy>& value) { SetResiliencyPolicies(value); return *this;}

    /**
     * <p>The resiliency policies for the Resilience Hub applications.</p>
     */
    inline ListResiliencyPoliciesResult& WithResiliencyPolicies(Aws::Vector<ResiliencyPolicy>&& value) { SetResiliencyPolicies(std::move(value)); return *this;}

    /**
     * <p>The resiliency policies for the Resilience Hub applications.</p>
     */
    inline ListResiliencyPoliciesResult& AddResiliencyPolicies(const ResiliencyPolicy& value) { m_resiliencyPolicies.push_back(value); return *this; }

    /**
     * <p>The resiliency policies for the Resilience Hub applications.</p>
     */
    inline ListResiliencyPoliciesResult& AddResiliencyPolicies(ResiliencyPolicy&& value) { m_resiliencyPolicies.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListResiliencyPoliciesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListResiliencyPoliciesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListResiliencyPoliciesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<ResiliencyPolicy> m_resiliencyPolicies;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
