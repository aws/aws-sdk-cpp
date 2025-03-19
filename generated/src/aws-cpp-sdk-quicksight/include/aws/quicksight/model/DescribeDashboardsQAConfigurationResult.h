/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/DashboardsQAStatus.h>
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
namespace QuickSight
{
namespace Model
{
  class DescribeDashboardsQAConfigurationResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeDashboardsQAConfigurationResult() = default;
    AWS_QUICKSIGHT_API DescribeDashboardsQAConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeDashboardsQAConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of dashboards QA configuration that you want described.</p>
     */
    inline DashboardsQAStatus GetDashboardsQAStatus() const { return m_dashboardsQAStatus; }
    inline void SetDashboardsQAStatus(DashboardsQAStatus value) { m_dashboardsQAStatusHasBeenSet = true; m_dashboardsQAStatus = value; }
    inline DescribeDashboardsQAConfigurationResult& WithDashboardsQAStatus(DashboardsQAStatus value) { SetDashboardsQAStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDashboardsQAConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeDashboardsQAConfigurationResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    DashboardsQAStatus m_dashboardsQAStatus{DashboardsQAStatus::NOT_SET};
    bool m_dashboardsQAStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
