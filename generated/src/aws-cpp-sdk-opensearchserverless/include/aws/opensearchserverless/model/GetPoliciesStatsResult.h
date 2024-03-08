/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/AccessPolicyStats.h>
#include <aws/opensearchserverless/model/LifecyclePolicyStats.h>
#include <aws/opensearchserverless/model/SecurityConfigStats.h>
#include <aws/opensearchserverless/model/SecurityPolicyStats.h>
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
    AWS_OPENSEARCHSERVERLESS_API GetPoliciesStatsResult();
    AWS_OPENSEARCHSERVERLESS_API GetPoliciesStatsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API GetPoliciesStatsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the data access policies in your account.</p>
     */
    inline const AccessPolicyStats& GetAccessPolicyStats() const{ return m_accessPolicyStats; }

    /**
     * <p>Information about the data access policies in your account.</p>
     */
    inline void SetAccessPolicyStats(const AccessPolicyStats& value) { m_accessPolicyStats = value; }

    /**
     * <p>Information about the data access policies in your account.</p>
     */
    inline void SetAccessPolicyStats(AccessPolicyStats&& value) { m_accessPolicyStats = std::move(value); }

    /**
     * <p>Information about the data access policies in your account.</p>
     */
    inline GetPoliciesStatsResult& WithAccessPolicyStats(const AccessPolicyStats& value) { SetAccessPolicyStats(value); return *this;}

    /**
     * <p>Information about the data access policies in your account.</p>
     */
    inline GetPoliciesStatsResult& WithAccessPolicyStats(AccessPolicyStats&& value) { SetAccessPolicyStats(std::move(value)); return *this;}


    /**
     * <p>Information about the lifecycle policies in your account.</p>
     */
    inline const LifecyclePolicyStats& GetLifecyclePolicyStats() const{ return m_lifecyclePolicyStats; }

    /**
     * <p>Information about the lifecycle policies in your account.</p>
     */
    inline void SetLifecyclePolicyStats(const LifecyclePolicyStats& value) { m_lifecyclePolicyStats = value; }

    /**
     * <p>Information about the lifecycle policies in your account.</p>
     */
    inline void SetLifecyclePolicyStats(LifecyclePolicyStats&& value) { m_lifecyclePolicyStats = std::move(value); }

    /**
     * <p>Information about the lifecycle policies in your account.</p>
     */
    inline GetPoliciesStatsResult& WithLifecyclePolicyStats(const LifecyclePolicyStats& value) { SetLifecyclePolicyStats(value); return *this;}

    /**
     * <p>Information about the lifecycle policies in your account.</p>
     */
    inline GetPoliciesStatsResult& WithLifecyclePolicyStats(LifecyclePolicyStats&& value) { SetLifecyclePolicyStats(std::move(value)); return *this;}


    /**
     * <p>Information about the security configurations in your account.</p>
     */
    inline const SecurityConfigStats& GetSecurityConfigStats() const{ return m_securityConfigStats; }

    /**
     * <p>Information about the security configurations in your account.</p>
     */
    inline void SetSecurityConfigStats(const SecurityConfigStats& value) { m_securityConfigStats = value; }

    /**
     * <p>Information about the security configurations in your account.</p>
     */
    inline void SetSecurityConfigStats(SecurityConfigStats&& value) { m_securityConfigStats = std::move(value); }

    /**
     * <p>Information about the security configurations in your account.</p>
     */
    inline GetPoliciesStatsResult& WithSecurityConfigStats(const SecurityConfigStats& value) { SetSecurityConfigStats(value); return *this;}

    /**
     * <p>Information about the security configurations in your account.</p>
     */
    inline GetPoliciesStatsResult& WithSecurityConfigStats(SecurityConfigStats&& value) { SetSecurityConfigStats(std::move(value)); return *this;}


    /**
     * <p>Information about the security policies in your account.</p>
     */
    inline const SecurityPolicyStats& GetSecurityPolicyStats() const{ return m_securityPolicyStats; }

    /**
     * <p>Information about the security policies in your account.</p>
     */
    inline void SetSecurityPolicyStats(const SecurityPolicyStats& value) { m_securityPolicyStats = value; }

    /**
     * <p>Information about the security policies in your account.</p>
     */
    inline void SetSecurityPolicyStats(SecurityPolicyStats&& value) { m_securityPolicyStats = std::move(value); }

    /**
     * <p>Information about the security policies in your account.</p>
     */
    inline GetPoliciesStatsResult& WithSecurityPolicyStats(const SecurityPolicyStats& value) { SetSecurityPolicyStats(value); return *this;}

    /**
     * <p>Information about the security policies in your account.</p>
     */
    inline GetPoliciesStatsResult& WithSecurityPolicyStats(SecurityPolicyStats&& value) { SetSecurityPolicyStats(std::move(value)); return *this;}


    /**
     * <p>The total number of OpenSearch Serverless security policies and
     * configurations in your account.</p>
     */
    inline long long GetTotalPolicyCount() const{ return m_totalPolicyCount; }

    /**
     * <p>The total number of OpenSearch Serverless security policies and
     * configurations in your account.</p>
     */
    inline void SetTotalPolicyCount(long long value) { m_totalPolicyCount = value; }

    /**
     * <p>The total number of OpenSearch Serverless security policies and
     * configurations in your account.</p>
     */
    inline GetPoliciesStatsResult& WithTotalPolicyCount(long long value) { SetTotalPolicyCount(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetPoliciesStatsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetPoliciesStatsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetPoliciesStatsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AccessPolicyStats m_accessPolicyStats;

    LifecyclePolicyStats m_lifecyclePolicyStats;

    SecurityConfigStats m_securityConfigStats;

    SecurityPolicyStats m_securityPolicyStats;

    long long m_totalPolicyCount;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
