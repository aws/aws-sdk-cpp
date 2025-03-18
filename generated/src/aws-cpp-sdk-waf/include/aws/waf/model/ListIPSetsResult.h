/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/model/IPSetSummary.h>
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
  class ListIPSetsResult
  {
  public:
    AWS_WAF_API ListIPSetsResult() = default;
    AWS_WAF_API ListIPSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAF_API ListIPSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>To list more <code>IPSet</code> objects, submit another
     * <code>ListIPSets</code> request, and in the next request use the
     * <code>NextMarker</code> response value as the <code>NextMarker</code> value.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    ListIPSetsResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <a>IPSetSummary</a> objects.</p>
     */
    inline const Aws::Vector<IPSetSummary>& GetIPSets() const { return m_iPSets; }
    template<typename IPSetsT = Aws::Vector<IPSetSummary>>
    void SetIPSets(IPSetsT&& value) { m_iPSetsHasBeenSet = true; m_iPSets = std::forward<IPSetsT>(value); }
    template<typename IPSetsT = Aws::Vector<IPSetSummary>>
    ListIPSetsResult& WithIPSets(IPSetsT&& value) { SetIPSets(std::forward<IPSetsT>(value)); return *this;}
    template<typename IPSetsT = IPSetSummary>
    ListIPSetsResult& AddIPSets(IPSetsT&& value) { m_iPSetsHasBeenSet = true; m_iPSets.emplace_back(std::forward<IPSetsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListIPSetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    Aws::Vector<IPSetSummary> m_iPSets;
    bool m_iPSetsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
