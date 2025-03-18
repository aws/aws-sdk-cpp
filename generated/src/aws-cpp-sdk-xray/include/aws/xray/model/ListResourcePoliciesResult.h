﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/ResourcePolicy.h>
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
namespace XRay
{
namespace Model
{
  class ListResourcePoliciesResult
  {
  public:
    AWS_XRAY_API ListResourcePoliciesResult() = default;
    AWS_XRAY_API ListResourcePoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API ListResourcePoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of resource policies in the target Amazon Web Services account.</p>
     */
    inline const Aws::Vector<ResourcePolicy>& GetResourcePolicies() const { return m_resourcePolicies; }
    template<typename ResourcePoliciesT = Aws::Vector<ResourcePolicy>>
    void SetResourcePolicies(ResourcePoliciesT&& value) { m_resourcePoliciesHasBeenSet = true; m_resourcePolicies = std::forward<ResourcePoliciesT>(value); }
    template<typename ResourcePoliciesT = Aws::Vector<ResourcePolicy>>
    ListResourcePoliciesResult& WithResourcePolicies(ResourcePoliciesT&& value) { SetResourcePolicies(std::forward<ResourcePoliciesT>(value)); return *this;}
    template<typename ResourcePoliciesT = ResourcePolicy>
    ListResourcePoliciesResult& AddResourcePolicies(ResourcePoliciesT&& value) { m_resourcePoliciesHasBeenSet = true; m_resourcePolicies.emplace_back(std::forward<ResourcePoliciesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Pagination token. Not currently supported.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListResourcePoliciesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListResourcePoliciesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ResourcePolicy> m_resourcePolicies;
    bool m_resourcePoliciesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
