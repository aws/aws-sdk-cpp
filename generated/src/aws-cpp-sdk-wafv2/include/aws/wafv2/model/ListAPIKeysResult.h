/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/APIKeySummary.h>
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
  class ListAPIKeysResult
  {
  public:
    AWS_WAFV2_API ListAPIKeysResult() = default;
    AWS_WAFV2_API ListAPIKeysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API ListAPIKeysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    ListAPIKeysResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The array of key summaries. If you specified a <code>Limit</code> in your
     * request, this might not be the full list. </p>
     */
    inline const Aws::Vector<APIKeySummary>& GetAPIKeySummaries() const { return m_aPIKeySummaries; }
    template<typename APIKeySummariesT = Aws::Vector<APIKeySummary>>
    void SetAPIKeySummaries(APIKeySummariesT&& value) { m_aPIKeySummariesHasBeenSet = true; m_aPIKeySummaries = std::forward<APIKeySummariesT>(value); }
    template<typename APIKeySummariesT = Aws::Vector<APIKeySummary>>
    ListAPIKeysResult& WithAPIKeySummaries(APIKeySummariesT&& value) { SetAPIKeySummaries(std::forward<APIKeySummariesT>(value)); return *this;}
    template<typename APIKeySummariesT = APIKeySummary>
    ListAPIKeysResult& AddAPIKeySummaries(APIKeySummariesT&& value) { m_aPIKeySummariesHasBeenSet = true; m_aPIKeySummaries.emplace_back(std::forward<APIKeySummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The CAPTCHA application integration URL, for use in your JavaScript
     * implementation. </p>
     */
    inline const Aws::String& GetApplicationIntegrationURL() const { return m_applicationIntegrationURL; }
    template<typename ApplicationIntegrationURLT = Aws::String>
    void SetApplicationIntegrationURL(ApplicationIntegrationURLT&& value) { m_applicationIntegrationURLHasBeenSet = true; m_applicationIntegrationURL = std::forward<ApplicationIntegrationURLT>(value); }
    template<typename ApplicationIntegrationURLT = Aws::String>
    ListAPIKeysResult& WithApplicationIntegrationURL(ApplicationIntegrationURLT&& value) { SetApplicationIntegrationURL(std::forward<ApplicationIntegrationURLT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAPIKeysResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    Aws::Vector<APIKeySummary> m_aPIKeySummaries;
    bool m_aPIKeySummariesHasBeenSet = false;

    Aws::String m_applicationIntegrationURL;
    bool m_applicationIntegrationURLHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
