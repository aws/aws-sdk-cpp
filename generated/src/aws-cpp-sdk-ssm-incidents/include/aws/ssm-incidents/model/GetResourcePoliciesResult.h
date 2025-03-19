/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-incidents/model/ResourcePolicy.h>
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
namespace SSMIncidents
{
namespace Model
{
  class GetResourcePoliciesResult
  {
  public:
    AWS_SSMINCIDENTS_API GetResourcePoliciesResult() = default;
    AWS_SSMINCIDENTS_API GetResourcePoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMINCIDENTS_API GetResourcePoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token to use when requesting the next set of items. If there
     * are no additional items to return, the string is null.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetResourcePoliciesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the resource policy attached to the response plan.</p>
     */
    inline const Aws::Vector<ResourcePolicy>& GetResourcePolicies() const { return m_resourcePolicies; }
    template<typename ResourcePoliciesT = Aws::Vector<ResourcePolicy>>
    void SetResourcePolicies(ResourcePoliciesT&& value) { m_resourcePoliciesHasBeenSet = true; m_resourcePolicies = std::forward<ResourcePoliciesT>(value); }
    template<typename ResourcePoliciesT = Aws::Vector<ResourcePolicy>>
    GetResourcePoliciesResult& WithResourcePolicies(ResourcePoliciesT&& value) { SetResourcePolicies(std::forward<ResourcePoliciesT>(value)); return *this;}
    template<typename ResourcePoliciesT = ResourcePolicy>
    GetResourcePoliciesResult& AddResourcePolicies(ResourcePoliciesT&& value) { m_resourcePoliciesHasBeenSet = true; m_resourcePolicies.emplace_back(std::forward<ResourcePoliciesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetResourcePoliciesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ResourcePolicy> m_resourcePolicies;
    bool m_resourcePoliciesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
