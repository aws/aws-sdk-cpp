/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/ConfigurationPolicySummary.h>
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
namespace SecurityHub
{
namespace Model
{
  class ListConfigurationPoliciesResult
  {
  public:
    AWS_SECURITYHUB_API ListConfigurationPoliciesResult();
    AWS_SECURITYHUB_API ListConfigurationPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API ListConfigurationPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> Provides metadata for each of your configuration policies. </p>
     */
    inline const Aws::Vector<ConfigurationPolicySummary>& GetConfigurationPolicySummaries() const{ return m_configurationPolicySummaries; }

    /**
     * <p> Provides metadata for each of your configuration policies. </p>
     */
    inline void SetConfigurationPolicySummaries(const Aws::Vector<ConfigurationPolicySummary>& value) { m_configurationPolicySummaries = value; }

    /**
     * <p> Provides metadata for each of your configuration policies. </p>
     */
    inline void SetConfigurationPolicySummaries(Aws::Vector<ConfigurationPolicySummary>&& value) { m_configurationPolicySummaries = std::move(value); }

    /**
     * <p> Provides metadata for each of your configuration policies. </p>
     */
    inline ListConfigurationPoliciesResult& WithConfigurationPolicySummaries(const Aws::Vector<ConfigurationPolicySummary>& value) { SetConfigurationPolicySummaries(value); return *this;}

    /**
     * <p> Provides metadata for each of your configuration policies. </p>
     */
    inline ListConfigurationPoliciesResult& WithConfigurationPolicySummaries(Aws::Vector<ConfigurationPolicySummary>&& value) { SetConfigurationPolicySummaries(std::move(value)); return *this;}

    /**
     * <p> Provides metadata for each of your configuration policies. </p>
     */
    inline ListConfigurationPoliciesResult& AddConfigurationPolicySummaries(const ConfigurationPolicySummary& value) { m_configurationPolicySummaries.push_back(value); return *this; }

    /**
     * <p> Provides metadata for each of your configuration policies. </p>
     */
    inline ListConfigurationPoliciesResult& AddConfigurationPolicySummaries(ConfigurationPolicySummary&& value) { m_configurationPolicySummaries.push_back(std::move(value)); return *this; }


    /**
     * <p> The <code>NextToken</code> value to include in the next
     * <code>ListConfigurationPolicies</code> request. When the results of a
     * <code>ListConfigurationPolicies</code> request exceed <code>MaxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The <code>NextToken</code> value to include in the next
     * <code>ListConfigurationPolicies</code> request. When the results of a
     * <code>ListConfigurationPolicies</code> request exceed <code>MaxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> The <code>NextToken</code> value to include in the next
     * <code>ListConfigurationPolicies</code> request. When the results of a
     * <code>ListConfigurationPolicies</code> request exceed <code>MaxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> The <code>NextToken</code> value to include in the next
     * <code>ListConfigurationPolicies</code> request. When the results of a
     * <code>ListConfigurationPolicies</code> request exceed <code>MaxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> The <code>NextToken</code> value to include in the next
     * <code>ListConfigurationPolicies</code> request. When the results of a
     * <code>ListConfigurationPolicies</code> request exceed <code>MaxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline ListConfigurationPoliciesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The <code>NextToken</code> value to include in the next
     * <code>ListConfigurationPolicies</code> request. When the results of a
     * <code>ListConfigurationPolicies</code> request exceed <code>MaxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline ListConfigurationPoliciesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The <code>NextToken</code> value to include in the next
     * <code>ListConfigurationPolicies</code> request. When the results of a
     * <code>ListConfigurationPolicies</code> request exceed <code>MaxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline ListConfigurationPoliciesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListConfigurationPoliciesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListConfigurationPoliciesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListConfigurationPoliciesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ConfigurationPolicySummary> m_configurationPolicySummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
