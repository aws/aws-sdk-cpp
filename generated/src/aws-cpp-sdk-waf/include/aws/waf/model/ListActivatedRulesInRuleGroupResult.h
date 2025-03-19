/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/model/ActivatedRule.h>
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
namespace WAF
{
namespace Model
{
  class ListActivatedRulesInRuleGroupResult
  {
  public:
    AWS_WAF_API ListActivatedRulesInRuleGroupResult() = default;
    AWS_WAF_API ListActivatedRulesInRuleGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAF_API ListActivatedRulesInRuleGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If you have more <code>ActivatedRules</code> than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>ActivatedRules</code>, submit
     * another <code>ListActivatedRulesInRuleGroup</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    ListActivatedRulesInRuleGroupResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>ActivatedRules</code> objects.</p>
     */
    inline const Aws::Vector<ActivatedRule>& GetActivatedRules() const { return m_activatedRules; }
    template<typename ActivatedRulesT = Aws::Vector<ActivatedRule>>
    void SetActivatedRules(ActivatedRulesT&& value) { m_activatedRulesHasBeenSet = true; m_activatedRules = std::forward<ActivatedRulesT>(value); }
    template<typename ActivatedRulesT = Aws::Vector<ActivatedRule>>
    ListActivatedRulesInRuleGroupResult& WithActivatedRules(ActivatedRulesT&& value) { SetActivatedRules(std::forward<ActivatedRulesT>(value)); return *this;}
    template<typename ActivatedRulesT = ActivatedRule>
    ListActivatedRulesInRuleGroupResult& AddActivatedRules(ActivatedRulesT&& value) { m_activatedRulesHasBeenSet = true; m_activatedRules.emplace_back(std::forward<ActivatedRulesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListActivatedRulesInRuleGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    Aws::Vector<ActivatedRule> m_activatedRules;
    bool m_activatedRulesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
