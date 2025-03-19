/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/waf/model/LoggingConfiguration.h>
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
  class ListLoggingConfigurationsResult
  {
  public:
    AWS_WAF_API ListLoggingConfigurationsResult() = default;
    AWS_WAF_API ListLoggingConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAF_API ListLoggingConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <a>LoggingConfiguration</a> objects.</p>
     */
    inline const Aws::Vector<LoggingConfiguration>& GetLoggingConfigurations() const { return m_loggingConfigurations; }
    template<typename LoggingConfigurationsT = Aws::Vector<LoggingConfiguration>>
    void SetLoggingConfigurations(LoggingConfigurationsT&& value) { m_loggingConfigurationsHasBeenSet = true; m_loggingConfigurations = std::forward<LoggingConfigurationsT>(value); }
    template<typename LoggingConfigurationsT = Aws::Vector<LoggingConfiguration>>
    ListLoggingConfigurationsResult& WithLoggingConfigurations(LoggingConfigurationsT&& value) { SetLoggingConfigurations(std::forward<LoggingConfigurationsT>(value)); return *this;}
    template<typename LoggingConfigurationsT = LoggingConfiguration>
    ListLoggingConfigurationsResult& AddLoggingConfigurations(LoggingConfigurationsT&& value) { m_loggingConfigurationsHasBeenSet = true; m_loggingConfigurations.emplace_back(std::forward<LoggingConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If you have more <code>LoggingConfigurations</code> than the number that you
     * specified for <code>Limit</code> in the request, the response includes a
     * <code>NextMarker</code> value. To list more <code>LoggingConfigurations</code>,
     * submit another <code>ListLoggingConfigurations</code> request, and specify the
     * <code>NextMarker</code> value from the response in the <code>NextMarker</code>
     * value in the next request.</p>
     */
    inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
    template<typename NextMarkerT = Aws::String>
    void SetNextMarker(NextMarkerT&& value) { m_nextMarkerHasBeenSet = true; m_nextMarker = std::forward<NextMarkerT>(value); }
    template<typename NextMarkerT = Aws::String>
    ListLoggingConfigurationsResult& WithNextMarker(NextMarkerT&& value) { SetNextMarker(std::forward<NextMarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListLoggingConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LoggingConfiguration> m_loggingConfigurations;
    bool m_loggingConfigurationsHasBeenSet = false;

    Aws::String m_nextMarker;
    bool m_nextMarkerHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
