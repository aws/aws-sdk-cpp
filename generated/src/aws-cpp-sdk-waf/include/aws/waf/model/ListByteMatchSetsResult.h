/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/model/ByteMatchSetSummary.h>
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
  class ListByteMatchSetsResult
  {
  public:
    AWS_WAF_API ListByteMatchSetsResult() = default;
    AWS_WAF_API ListByteMatchSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAF_API ListByteMatchSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If you have more <code>ByteMatchSet</code> objects than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>ByteMatchSet</code> objects,
     * submit another <code>ListByteMatchSets</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    ListByteMatchSetsResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <a>ByteMatchSetSummary</a> objects.</p>
     */
    inline const Aws::Vector<ByteMatchSetSummary>& GetByteMatchSets() const { return m_byteMatchSets; }
    template<typename ByteMatchSetsT = Aws::Vector<ByteMatchSetSummary>>
    void SetByteMatchSets(ByteMatchSetsT&& value) { m_byteMatchSetsHasBeenSet = true; m_byteMatchSets = std::forward<ByteMatchSetsT>(value); }
    template<typename ByteMatchSetsT = Aws::Vector<ByteMatchSetSummary>>
    ListByteMatchSetsResult& WithByteMatchSets(ByteMatchSetsT&& value) { SetByteMatchSets(std::forward<ByteMatchSetsT>(value)); return *this;}
    template<typename ByteMatchSetsT = ByteMatchSetSummary>
    ListByteMatchSetsResult& AddByteMatchSets(ByteMatchSetsT&& value) { m_byteMatchSetsHasBeenSet = true; m_byteMatchSets.emplace_back(std::forward<ByteMatchSetsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListByteMatchSetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    Aws::Vector<ByteMatchSetSummary> m_byteMatchSets;
    bool m_byteMatchSetsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
