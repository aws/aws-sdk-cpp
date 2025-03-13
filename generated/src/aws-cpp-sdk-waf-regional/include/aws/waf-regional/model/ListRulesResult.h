/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf-regional/model/RuleSummary.h>
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
namespace WAFRegional
{
namespace Model
{
  class ListRulesResult
  {
  public:
    AWS_WAFREGIONAL_API ListRulesResult() = default;
    AWS_WAFREGIONAL_API ListRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFREGIONAL_API ListRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If you have more <code>Rules</code> than the number that you specified for
     * <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>Rules</code>, submit another
     * <code>ListRules</code> request, and specify the <code>NextMarker</code> value
     * from the response in the <code>NextMarker</code> value in the next request.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    ListRulesResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <a>RuleSummary</a> objects.</p>
     */
    inline const Aws::Vector<RuleSummary>& GetRules() const { return m_rules; }
    template<typename RulesT = Aws::Vector<RuleSummary>>
    void SetRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules = std::forward<RulesT>(value); }
    template<typename RulesT = Aws::Vector<RuleSummary>>
    ListRulesResult& WithRules(RulesT&& value) { SetRules(std::forward<RulesT>(value)); return *this;}
    template<typename RulesT = RuleSummary>
    ListRulesResult& AddRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules.emplace_back(std::forward<RulesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRulesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    Aws::Vector<RuleSummary> m_rules;
    bool m_rulesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
