/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/model/CentralizationRuleSummary.h>
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
namespace ObservabilityAdmin
{
namespace Model
{
  class ListCentralizationRulesForOrganizationResult
  {
  public:
    AWS_OBSERVABILITYADMIN_API ListCentralizationRulesForOrganizationResult() = default;
    AWS_OBSERVABILITYADMIN_API ListCentralizationRulesForOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OBSERVABILITYADMIN_API ListCentralizationRulesForOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of centralization rule summaries.</p>
     */
    inline const Aws::Vector<CentralizationRuleSummary>& GetCentralizationRuleSummaries() const { return m_centralizationRuleSummaries; }
    template<typename CentralizationRuleSummariesT = Aws::Vector<CentralizationRuleSummary>>
    void SetCentralizationRuleSummaries(CentralizationRuleSummariesT&& value) { m_centralizationRuleSummariesHasBeenSet = true; m_centralizationRuleSummaries = std::forward<CentralizationRuleSummariesT>(value); }
    template<typename CentralizationRuleSummariesT = Aws::Vector<CentralizationRuleSummary>>
    ListCentralizationRulesForOrganizationResult& WithCentralizationRuleSummaries(CentralizationRuleSummariesT&& value) { SetCentralizationRuleSummaries(std::forward<CentralizationRuleSummariesT>(value)); return *this;}
    template<typename CentralizationRuleSummariesT = CentralizationRuleSummary>
    ListCentralizationRulesForOrganizationResult& AddCentralizationRuleSummaries(CentralizationRuleSummariesT&& value) { m_centralizationRuleSummariesHasBeenSet = true; m_centralizationRuleSummaries.emplace_back(std::forward<CentralizationRuleSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token to resume pagination of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCentralizationRulesForOrganizationResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCentralizationRulesForOrganizationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CentralizationRuleSummary> m_centralizationRuleSummaries;
    bool m_centralizationRuleSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
