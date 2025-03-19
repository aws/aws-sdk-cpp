/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/ConfigurationPolicyAssociationSummary.h>
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
  class ListConfigurationPolicyAssociationsResult
  {
  public:
    AWS_SECURITYHUB_API ListConfigurationPolicyAssociationsResult() = default;
    AWS_SECURITYHUB_API ListConfigurationPolicyAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API ListConfigurationPolicyAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> An object that contains the details of each configuration policy association
     * that’s returned in a <code>ListConfigurationPolicyAssociations</code> request.
     * </p>
     */
    inline const Aws::Vector<ConfigurationPolicyAssociationSummary>& GetConfigurationPolicyAssociationSummaries() const { return m_configurationPolicyAssociationSummaries; }
    template<typename ConfigurationPolicyAssociationSummariesT = Aws::Vector<ConfigurationPolicyAssociationSummary>>
    void SetConfigurationPolicyAssociationSummaries(ConfigurationPolicyAssociationSummariesT&& value) { m_configurationPolicyAssociationSummariesHasBeenSet = true; m_configurationPolicyAssociationSummaries = std::forward<ConfigurationPolicyAssociationSummariesT>(value); }
    template<typename ConfigurationPolicyAssociationSummariesT = Aws::Vector<ConfigurationPolicyAssociationSummary>>
    ListConfigurationPolicyAssociationsResult& WithConfigurationPolicyAssociationSummaries(ConfigurationPolicyAssociationSummariesT&& value) { SetConfigurationPolicyAssociationSummaries(std::forward<ConfigurationPolicyAssociationSummariesT>(value)); return *this;}
    template<typename ConfigurationPolicyAssociationSummariesT = ConfigurationPolicyAssociationSummary>
    ListConfigurationPolicyAssociationsResult& AddConfigurationPolicyAssociationSummaries(ConfigurationPolicyAssociationSummariesT&& value) { m_configurationPolicyAssociationSummariesHasBeenSet = true; m_configurationPolicyAssociationSummaries.emplace_back(std::forward<ConfigurationPolicyAssociationSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The <code>NextToken</code> value to include in the next
     * <code>ListConfigurationPolicyAssociations</code> request. When the results of a
     * <code>ListConfigurationPolicyAssociations</code> request exceed
     * <code>MaxResults</code>, this value can be used to retrieve the next page of
     * results. This value is <code>null</code> when there are no more results to
     * return. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListConfigurationPolicyAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListConfigurationPolicyAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ConfigurationPolicyAssociationSummary> m_configurationPolicyAssociationSummaries;
    bool m_configurationPolicyAssociationSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
