/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-sap/model/RuleResult.h>
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
namespace SsmSap
{
namespace Model
{
  class ListSubCheckRuleResultsResult
  {
  public:
    AWS_SSMSAP_API ListSubCheckRuleResultsResult() = default;
    AWS_SSMSAP_API ListSubCheckRuleResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMSAP_API ListSubCheckRuleResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The rule results of a sub-check belonging to a configuration check
     * operation.</p>
     */
    inline const Aws::Vector<RuleResult>& GetRuleResults() const { return m_ruleResults; }
    template<typename RuleResultsT = Aws::Vector<RuleResult>>
    void SetRuleResults(RuleResultsT&& value) { m_ruleResultsHasBeenSet = true; m_ruleResults = std::forward<RuleResultsT>(value); }
    template<typename RuleResultsT = Aws::Vector<RuleResult>>
    ListSubCheckRuleResultsResult& WithRuleResults(RuleResultsT&& value) { SetRuleResults(std::forward<RuleResultsT>(value)); return *this;}
    template<typename RuleResultsT = RuleResult>
    ListSubCheckRuleResultsResult& AddRuleResults(RuleResultsT&& value) { m_ruleResultsHasBeenSet = true; m_ruleResults.emplace_back(std::forward<RuleResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSubCheckRuleResultsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSubCheckRuleResultsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RuleResult> m_ruleResults;
    bool m_ruleResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
