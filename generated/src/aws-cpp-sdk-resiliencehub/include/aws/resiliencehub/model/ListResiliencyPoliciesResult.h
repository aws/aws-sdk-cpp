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
    AWS_RESILIENCEHUB_API ListResiliencyPoliciesResult() = default;
    AWS_RESILIENCEHUB_API ListResiliencyPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESILIENCEHUB_API ListResiliencyPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Token for the next set of results, or null if there are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResiliencyPoliciesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resiliency policies for the Resilience Hub applications.</p>
     */
    inline const Aws::Vector<ResiliencyPolicy>& GetResiliencyPolicies() const { return m_resiliencyPolicies; }
    template<typename ResiliencyPoliciesT = Aws::Vector<ResiliencyPolicy>>
    void SetResiliencyPolicies(ResiliencyPoliciesT&& value) { m_resiliencyPoliciesHasBeenSet = true; m_resiliencyPolicies = std::forward<ResiliencyPoliciesT>(value); }
    template<typename ResiliencyPoliciesT = Aws::Vector<ResiliencyPolicy>>
    ListResiliencyPoliciesResult& WithResiliencyPolicies(ResiliencyPoliciesT&& value) { SetResiliencyPolicies(std::forward<ResiliencyPoliciesT>(value)); return *this;}
    template<typename ResiliencyPoliciesT = ResiliencyPolicy>
    ListResiliencyPoliciesResult& AddResiliencyPolicies(ResiliencyPoliciesT&& value) { m_resiliencyPoliciesHasBeenSet = true; m_resiliencyPolicies.emplace_back(std::forward<ResiliencyPoliciesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListResiliencyPoliciesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ResiliencyPolicy> m_resiliencyPolicies;
    bool m_resiliencyPoliciesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
