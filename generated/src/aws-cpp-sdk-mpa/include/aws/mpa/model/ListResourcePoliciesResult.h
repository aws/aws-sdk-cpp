/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mpa/model/ListResourcePoliciesResponseResourcePolicy.h>
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
namespace MPA
{
namespace Model
{
  class ListResourcePoliciesResult
  {
  public:
    AWS_MPA_API ListResourcePoliciesResult() = default;
    AWS_MPA_API ListResourcePoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MPA_API ListResourcePoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If present, indicates that more output is available than is included in the
     * current response. Use this value in the <code>NextToken</code> request parameter
     * in a next call to the operation to get more output. You can repeat this until
     * the <code>NextToken</code> response element returns <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResourcePoliciesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>ListResourcePoliciesResponseResourcePolicy</code> objects.
     * Contains details about the policy for the resource.</p>
     */
    inline const Aws::Vector<ListResourcePoliciesResponseResourcePolicy>& GetResourcePolicies() const { return m_resourcePolicies; }
    template<typename ResourcePoliciesT = Aws::Vector<ListResourcePoliciesResponseResourcePolicy>>
    void SetResourcePolicies(ResourcePoliciesT&& value) { m_resourcePoliciesHasBeenSet = true; m_resourcePolicies = std::forward<ResourcePoliciesT>(value); }
    template<typename ResourcePoliciesT = Aws::Vector<ListResourcePoliciesResponseResourcePolicy>>
    ListResourcePoliciesResult& WithResourcePolicies(ResourcePoliciesT&& value) { SetResourcePolicies(std::forward<ResourcePoliciesT>(value)); return *this;}
    template<typename ResourcePoliciesT = ListResourcePoliciesResponseResourcePolicy>
    ListResourcePoliciesResult& AddResourcePolicies(ResourcePoliciesT&& value) { m_resourcePoliciesHasBeenSet = true; m_resourcePolicies.emplace_back(std::forward<ResourcePoliciesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListResourcePoliciesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ListResourcePoliciesResponseResourcePolicy> m_resourcePolicies;
    bool m_resourcePoliciesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MPA
} // namespace Aws
