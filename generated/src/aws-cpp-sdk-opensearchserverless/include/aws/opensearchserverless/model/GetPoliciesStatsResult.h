/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/AccessPolicyStats.h>
#include <aws/opensearchserverless/model/SecurityPolicyStats.h>
#include <aws/opensearchserverless/model/SecurityConfigStats.h>
#include <aws/opensearchserverless/model/LifecyclePolicyStats.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetPoliciesStatsResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API GetPoliciesStatsResult() = default;
    AWS_OPENSEARCHSERVERLESS_API GetPoliciesStatsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API GetPoliciesStatsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the data access policies in your account.</p>
     */
    inline const AccessPolicyStats& GetAccessPolicyStats() const { return m_accessPolicyStats; }
    template<typename AccessPolicyStatsT = AccessPolicyStats>
    void SetAccessPolicyStats(AccessPolicyStatsT&& value) { m_accessPolicyStatsHasBeenSet = true; m_accessPolicyStats = std::forward<AccessPolicyStatsT>(value); }
    template<typename AccessPolicyStatsT = AccessPolicyStats>
    GetPoliciesStatsResult& WithAccessPolicyStats(AccessPolicyStatsT&& value) { SetAccessPolicyStats(std::forward<AccessPolicyStatsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the security policies in your account.</p>
     */
    inline const SecurityPolicyStats& GetSecurityPolicyStats() const { return m_securityPolicyStats; }
    template<typename SecurityPolicyStatsT = SecurityPolicyStats>
    void SetSecurityPolicyStats(SecurityPolicyStatsT&& value) { m_securityPolicyStatsHasBeenSet = true; m_securityPolicyStats = std::forward<SecurityPolicyStatsT>(value); }
    template<typename SecurityPolicyStatsT = SecurityPolicyStats>
    GetPoliciesStatsResult& WithSecurityPolicyStats(SecurityPolicyStatsT&& value) { SetSecurityPolicyStats(std::forward<SecurityPolicyStatsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the security configurations in your account.</p>
     */
    inline const SecurityConfigStats& GetSecurityConfigStats() const { return m_securityConfigStats; }
    template<typename SecurityConfigStatsT = SecurityConfigStats>
    void SetSecurityConfigStats(SecurityConfigStatsT&& value) { m_securityConfigStatsHasBeenSet = true; m_securityConfigStats = std::forward<SecurityConfigStatsT>(value); }
    template<typename SecurityConfigStatsT = SecurityConfigStats>
    GetPoliciesStatsResult& WithSecurityConfigStats(SecurityConfigStatsT&& value) { SetSecurityConfigStats(std::forward<SecurityConfigStatsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the lifecycle policies in your account.</p>
     */
    inline const LifecyclePolicyStats& GetLifecyclePolicyStats() const { return m_lifecyclePolicyStats; }
    template<typename LifecyclePolicyStatsT = LifecyclePolicyStats>
    void SetLifecyclePolicyStats(LifecyclePolicyStatsT&& value) { m_lifecyclePolicyStatsHasBeenSet = true; m_lifecyclePolicyStats = std::forward<LifecyclePolicyStatsT>(value); }
    template<typename LifecyclePolicyStatsT = LifecyclePolicyStats>
    GetPoliciesStatsResult& WithLifecyclePolicyStats(LifecyclePolicyStatsT&& value) { SetLifecyclePolicyStats(std::forward<LifecyclePolicyStatsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of OpenSearch Serverless security policies and
     * configurations in your account.</p>
     */
    inline long long GetTotalPolicyCount() const { return m_totalPolicyCount; }
    inline void SetTotalPolicyCount(long long value) { m_totalPolicyCountHasBeenSet = true; m_totalPolicyCount = value; }
    inline GetPoliciesStatsResult& WithTotalPolicyCount(long long value) { SetTotalPolicyCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPoliciesStatsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AccessPolicyStats m_accessPolicyStats;
    bool m_accessPolicyStatsHasBeenSet = false;

    SecurityPolicyStats m_securityPolicyStats;
    bool m_securityPolicyStatsHasBeenSet = false;

    SecurityConfigStats m_securityConfigStats;
    bool m_securityConfigStatsHasBeenSet = false;

    LifecyclePolicyStats m_lifecyclePolicyStats;
    bool m_lifecyclePolicyStatsHasBeenSet = false;

    long long m_totalPolicyCount{0};
    bool m_totalPolicyCountHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
