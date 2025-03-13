/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class UpdateDashboardLinksResult
  {
  public:
    AWS_QUICKSIGHT_API UpdateDashboardLinksResult() = default;
    AWS_QUICKSIGHT_API UpdateDashboardLinksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API UpdateDashboardLinksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateDashboardLinksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateDashboardLinksResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the dashboard.</p>
     */
    inline const Aws::String& GetDashboardArn() const { return m_dashboardArn; }
    template<typename DashboardArnT = Aws::String>
    void SetDashboardArn(DashboardArnT&& value) { m_dashboardArnHasBeenSet = true; m_dashboardArn = std::forward<DashboardArnT>(value); }
    template<typename DashboardArnT = Aws::String>
    UpdateDashboardLinksResult& WithDashboardArn(DashboardArnT&& value) { SetDashboardArn(std::forward<DashboardArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of analysis Amazon Resource Names (ARNs) to be linked to the
     * dashboard.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLinkEntities() const { return m_linkEntities; }
    template<typename LinkEntitiesT = Aws::Vector<Aws::String>>
    void SetLinkEntities(LinkEntitiesT&& value) { m_linkEntitiesHasBeenSet = true; m_linkEntities = std::forward<LinkEntitiesT>(value); }
    template<typename LinkEntitiesT = Aws::Vector<Aws::String>>
    UpdateDashboardLinksResult& WithLinkEntities(LinkEntitiesT&& value) { SetLinkEntities(std::forward<LinkEntitiesT>(value)); return *this;}
    template<typename LinkEntitiesT = Aws::String>
    UpdateDashboardLinksResult& AddLinkEntities(LinkEntitiesT&& value) { m_linkEntitiesHasBeenSet = true; m_linkEntities.emplace_back(std::forward<LinkEntitiesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;

    Aws::String m_dashboardArn;
    bool m_dashboardArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_linkEntities;
    bool m_linkEntitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
