/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf-regional/model/RegexMatchSetSummary.h>
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
  class ListRegexMatchSetsResult
  {
  public:
    AWS_WAFREGIONAL_API ListRegexMatchSetsResult() = default;
    AWS_WAFREGIONAL_API ListRegexMatchSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFREGIONAL_API ListRegexMatchSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If you have more <code>RegexMatchSet</code> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>RegexMatchSet</code> objects,
     * submit another <code>ListRegexMatchSets</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    ListRegexMatchSetsResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <a>RegexMatchSetSummary</a> objects.</p>
     */
    inline const Aws::Vector<RegexMatchSetSummary>& GetRegexMatchSets() const { return m_regexMatchSets; }
    template<typename RegexMatchSetsT = Aws::Vector<RegexMatchSetSummary>>
    void SetRegexMatchSets(RegexMatchSetsT&& value) { m_regexMatchSetsHasBeenSet = true; m_regexMatchSets = std::forward<RegexMatchSetsT>(value); }
    template<typename RegexMatchSetsT = Aws::Vector<RegexMatchSetSummary>>
    ListRegexMatchSetsResult& WithRegexMatchSets(RegexMatchSetsT&& value) { SetRegexMatchSets(std::forward<RegexMatchSetsT>(value)); return *this;}
    template<typename RegexMatchSetsT = RegexMatchSetSummary>
    ListRegexMatchSetsResult& AddRegexMatchSets(RegexMatchSetsT&& value) { m_regexMatchSetsHasBeenSet = true; m_regexMatchSets.emplace_back(std::forward<RegexMatchSetsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRegexMatchSetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    Aws::Vector<RegexMatchSetSummary> m_regexMatchSets;
    bool m_regexMatchSetsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
