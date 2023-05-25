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
  class GetRouteAnalysisResult
  {
  public:
    AWS_NETWORKMANAGER_API GetRouteAnalysisResult();
    AWS_NETWORKMANAGER_API GetRouteAnalysisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKMANAGER_API GetRouteAnalysisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The route analysis.</p>
     */
    inline const RouteAnalysis& GetRouteAnalysis() const{ return m_routeAnalysis; }

    /**
     * <p>The route analysis.</p>
     */
    inline void SetRouteAnalysis(const RouteAnalysis& value) { m_routeAnalysis = value; }

    /**
     * <p>The route analysis.</p>
     */
    inline void SetRouteAnalysis(RouteAnalysis&& value) { m_routeAnalysis = std::move(value); }

    /**
     * <p>The route analysis.</p>
     */
    inline GetRouteAnalysisResult& WithRouteAnalysis(const RouteAnalysis& value) { SetRouteAnalysis(value); return *this;}

    /**
     * <p>The route analysis.</p>
     */
    inline GetRouteAnalysisResult& WithRouteAnalysis(RouteAnalysis&& value) { SetRouteAnalysis(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetRouteAnalysisResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetRouteAnalysisResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetRouteAnalysisResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    RouteAnalysis m_routeAnalysis;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
