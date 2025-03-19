/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/ReleaseSummary.h>
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
namespace WAFV2
{
namespace Model
{
  class ListMobileSdkReleasesResult
  {
  public:
    AWS_WAFV2_API ListMobileSdkReleasesResult() = default;
    AWS_WAFV2_API ListMobileSdkReleasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API ListMobileSdkReleasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The high level information for the available SDK releases. If you specified a
     * <code>Limit</code> in your request, this might not be the full list. </p>
     */
    inline const Aws::Vector<ReleaseSummary>& GetReleaseSummaries() const { return m_releaseSummaries; }
    template<typename ReleaseSummariesT = Aws::Vector<ReleaseSummary>>
    void SetReleaseSummaries(ReleaseSummariesT&& value) { m_releaseSummariesHasBeenSet = true; m_releaseSummaries = std::forward<ReleaseSummariesT>(value); }
    template<typename ReleaseSummariesT = Aws::Vector<ReleaseSummary>>
    ListMobileSdkReleasesResult& WithReleaseSummaries(ReleaseSummariesT&& value) { SetReleaseSummaries(std::forward<ReleaseSummariesT>(value)); return *this;}
    template<typename ReleaseSummariesT = ReleaseSummary>
    ListMobileSdkReleasesResult& AddReleaseSummaries(ReleaseSummariesT&& value) { m_releaseSummariesHasBeenSet = true; m_releaseSummaries.emplace_back(std::forward<ReleaseSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When you request a list of objects with a <code>Limit</code> setting, if the
     * number of objects that are still available for retrieval exceeds the limit, WAF
     * returns a <code>NextMarker</code> value in the response. To retrieve the next
     * batch of objects, provide the marker from the prior call in your next
     * request.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    ListMobileSdkReleasesResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMobileSdkReleasesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ReleaseSummary> m_releaseSummaries;
    bool m_releaseSummariesHasBeenSet = false;

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
