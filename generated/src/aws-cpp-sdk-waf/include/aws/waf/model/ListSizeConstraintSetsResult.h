/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/model/SizeConstraintSetSummary.h>
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
  class ListSizeConstraintSetsResult
  {
  public:
    AWS_WAF_API ListSizeConstraintSetsResult() = default;
    AWS_WAF_API ListSizeConstraintSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAF_API ListSizeConstraintSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If you have more <code>SizeConstraintSet</code> objects than the number that
     * you specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>SizeConstraintSet</code>
     * objects, submit another <code>ListSizeConstraintSets</code> request, and specify
     * the <code>NextMarker</code> value from the response in the
     * <code>NextMarker</code> value in the next request.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    ListSizeConstraintSetsResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <a>SizeConstraintSetSummary</a> objects.</p>
     */
    inline const Aws::Vector<SizeConstraintSetSummary>& GetSizeConstraintSets() const { return m_sizeConstraintSets; }
    template<typename SizeConstraintSetsT = Aws::Vector<SizeConstraintSetSummary>>
    void SetSizeConstraintSets(SizeConstraintSetsT&& value) { m_sizeConstraintSetsHasBeenSet = true; m_sizeConstraintSets = std::forward<SizeConstraintSetsT>(value); }
    template<typename SizeConstraintSetsT = Aws::Vector<SizeConstraintSetSummary>>
    ListSizeConstraintSetsResult& WithSizeConstraintSets(SizeConstraintSetsT&& value) { SetSizeConstraintSets(std::forward<SizeConstraintSetsT>(value)); return *this;}
    template<typename SizeConstraintSetsT = SizeConstraintSetSummary>
    ListSizeConstraintSetsResult& AddSizeConstraintSets(SizeConstraintSetsT&& value) { m_sizeConstraintSetsHasBeenSet = true; m_sizeConstraintSets.emplace_back(std::forward<SizeConstraintSetsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSizeConstraintSetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    Aws::Vector<SizeConstraintSetSummary> m_sizeConstraintSets;
    bool m_sizeConstraintSetsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
