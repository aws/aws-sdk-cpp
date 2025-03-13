/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class DeleteDashboardsRequest : public CloudWatchRequest
  {
  public:
    AWS_CLOUDWATCH_API DeleteDashboardsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDashboards"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The dashboards to be deleted. This parameter is required.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDashboardNames() const { return m_dashboardNames; }
    inline bool DashboardNamesHasBeenSet() const { return m_dashboardNamesHasBeenSet; }
    template<typename DashboardNamesT = Aws::Vector<Aws::String>>
    void SetDashboardNames(DashboardNamesT&& value) { m_dashboardNamesHasBeenSet = true; m_dashboardNames = std::forward<DashboardNamesT>(value); }
    template<typename DashboardNamesT = Aws::Vector<Aws::String>>
    DeleteDashboardsRequest& WithDashboardNames(DashboardNamesT&& value) { SetDashboardNames(std::forward<DashboardNamesT>(value)); return *this;}
    template<typename DashboardNamesT = Aws::String>
    DeleteDashboardsRequest& AddDashboardNames(DashboardNamesT&& value) { m_dashboardNamesHasBeenSet = true; m_dashboardNames.emplace_back(std::forward<DashboardNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_dashboardNames;
    bool m_dashboardNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
