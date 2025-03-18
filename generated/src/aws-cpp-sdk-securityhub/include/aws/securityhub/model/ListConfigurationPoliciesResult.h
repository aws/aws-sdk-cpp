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
    AWS_SECURITYHUB_API ListConfigurationPoliciesResult() = default;
    AWS_SECURITYHUB_API ListConfigurationPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API ListConfigurationPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Provides metadata for each of your configuration policies. </p>
     */
    inline const Aws::Vector<ConfigurationPolicySummary>& GetConfigurationPolicySummaries() const { return m_configurationPolicySummaries; }
    template<typename ConfigurationPolicySummariesT = Aws::Vector<ConfigurationPolicySummary>>
    void SetConfigurationPolicySummaries(ConfigurationPolicySummariesT&& value) { m_configurationPolicySummariesHasBeenSet = true; m_configurationPolicySummaries = std::forward<ConfigurationPolicySummariesT>(value); }
    template<typename ConfigurationPolicySummariesT = Aws::Vector<ConfigurationPolicySummary>>
    ListConfigurationPoliciesResult& WithConfigurationPolicySummaries(ConfigurationPolicySummariesT&& value) { SetConfigurationPolicySummaries(std::forward<ConfigurationPolicySummariesT>(value)); return *this;}
    template<typename ConfigurationPolicySummariesT = ConfigurationPolicySummary>
    ListConfigurationPoliciesResult& AddConfigurationPolicySummaries(ConfigurationPolicySummariesT&& value) { m_configurationPolicySummariesHasBeenSet = true; m_configurationPolicySummaries.emplace_back(std::forward<ConfigurationPolicySummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The <code>NextToken</code> value to include in the next
     * <code>ListConfigurationPolicies</code> request. When the results of a
     * <code>ListConfigurationPolicies</code> request exceed <code>MaxResults</code>,
     * this value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListConfigurationPoliciesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListConfigurationPoliciesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConfigurationPolicySummary> m_configurationPolicySummaries;
    bool m_configurationPolicySummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
