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
  class UpdateDashboardsQAConfigurationResult
  {
  public:
    AWS_QUICKSIGHT_API UpdateDashboardsQAConfigurationResult();
    AWS_QUICKSIGHT_API UpdateDashboardsQAConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API UpdateDashboardsQAConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A value that indicates whether the dashboard QA configuration is enabled or
     * not.</p>
     */
    inline const DashboardsQAStatus& GetDashboardsQAStatus() const{ return m_dashboardsQAStatus; }
    inline void SetDashboardsQAStatus(const DashboardsQAStatus& value) { m_dashboardsQAStatus = value; }
    inline void SetDashboardsQAStatus(DashboardsQAStatus&& value) { m_dashboardsQAStatus = std::move(value); }
    inline UpdateDashboardsQAConfigurationResult& WithDashboardsQAStatus(const DashboardsQAStatus& value) { SetDashboardsQAStatus(value); return *this;}
    inline UpdateDashboardsQAConfigurationResult& WithDashboardsQAStatus(DashboardsQAStatus&& value) { SetDashboardsQAStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateDashboardsQAConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateDashboardsQAConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateDashboardsQAConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }
    inline void SetStatus(int value) { m_status = value; }
    inline UpdateDashboardsQAConfigurationResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    DashboardsQAStatus m_dashboardsQAStatus;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
