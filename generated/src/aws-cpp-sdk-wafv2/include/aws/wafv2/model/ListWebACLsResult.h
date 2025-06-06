﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/WebACLSummary.h>
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
  class ListWebACLsResult
  {
  public:
    AWS_WAFV2_API ListWebACLsResult() = default;
    AWS_WAFV2_API ListWebACLsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFV2_API ListWebACLsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    ListWebACLsResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Array of web ACLs. If you specified a <code>Limit</code> in your request,
     * this might not be the full list. </p>
     */
    inline const Aws::Vector<WebACLSummary>& GetWebACLs() const { return m_webACLs; }
    template<typename WebACLsT = Aws::Vector<WebACLSummary>>
    void SetWebACLs(WebACLsT&& value) { m_webACLsHasBeenSet = true; m_webACLs = std::forward<WebACLsT>(value); }
    template<typename WebACLsT = Aws::Vector<WebACLSummary>>
    ListWebACLsResult& WithWebACLs(WebACLsT&& value) { SetWebACLs(std::forward<WebACLsT>(value)); return *this;}
    template<typename WebACLsT = WebACLSummary>
    ListWebACLsResult& AddWebACLs(WebACLsT&& value) { m_webACLsHasBeenSet = true; m_webACLs.emplace_back(std::forward<WebACLsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListWebACLsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    Aws::Vector<WebACLSummary> m_webACLs;
    bool m_webACLsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
