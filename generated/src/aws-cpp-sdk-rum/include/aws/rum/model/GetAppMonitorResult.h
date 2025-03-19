/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/rum/model/AppMonitor.h>
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
namespace CloudWatchRUM
{
namespace Model
{
  class GetAppMonitorResult
  {
  public:
    AWS_CLOUDWATCHRUM_API GetAppMonitorResult() = default;
    AWS_CLOUDWATCHRUM_API GetAppMonitorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHRUM_API GetAppMonitorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A structure containing all the configuration information for the app
     * monitor.</p>
     */
    inline const AppMonitor& GetAppMonitor() const { return m_appMonitor; }
    template<typename AppMonitorT = AppMonitor>
    void SetAppMonitor(AppMonitorT&& value) { m_appMonitorHasBeenSet = true; m_appMonitor = std::forward<AppMonitorT>(value); }
    template<typename AppMonitorT = AppMonitor>
    GetAppMonitorResult& WithAppMonitor(AppMonitorT&& value) { SetAppMonitor(std::forward<AppMonitorT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAppMonitorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AppMonitor m_appMonitor;
    bool m_appMonitorHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
