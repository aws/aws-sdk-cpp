/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/RouteAnalysis.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace NetworkManager
{
namespace Model
{
  class StartRouteAnalysisResult
  {
  public:
    AWS_NETWORKMANAGER_API StartRouteAnalysisResult() = default;
    AWS_NETWORKMANAGER_API StartRouteAnalysisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API StartRouteAnalysisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The route analysis.</p>
     */
    inline const RouteAnalysis& GetRouteAnalysis() const { return m_routeAnalysis; }
    template<typename RouteAnalysisT = RouteAnalysis>
    void SetRouteAnalysis(RouteAnalysisT&& value) { m_routeAnalysisHasBeenSet = true; m_routeAnalysis = std::forward<RouteAnalysisT>(value); }
    template<typename RouteAnalysisT = RouteAnalysis>
    StartRouteAnalysisResult& WithRouteAnalysis(RouteAnalysisT&& value) { SetRouteAnalysis(std::forward<RouteAnalysisT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartRouteAnalysisResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RouteAnalysis m_routeAnalysis;
    bool m_routeAnalysisHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
