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
    AWS_CLOUDWATCH_API DeleteDashboardsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDashboards"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The dashboards to be deleted. This parameter is required.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDashboardNames() const{ return m_dashboardNames; }

    /**
     * <p>The dashboards to be deleted. This parameter is required.</p>
     */
    inline bool DashboardNamesHasBeenSet() const { return m_dashboardNamesHasBeenSet; }

    /**
     * <p>The dashboards to be deleted. This parameter is required.</p>
     */
    inline void SetDashboardNames(const Aws::Vector<Aws::String>& value) { m_dashboardNamesHasBeenSet = true; m_dashboardNames = value; }

    /**
     * <p>The dashboards to be deleted. This parameter is required.</p>
     */
    inline void SetDashboardNames(Aws::Vector<Aws::String>&& value) { m_dashboardNamesHasBeenSet = true; m_dashboardNames = std::move(value); }

    /**
     * <p>The dashboards to be deleted. This parameter is required.</p>
     */
    inline DeleteDashboardsRequest& WithDashboardNames(const Aws::Vector<Aws::String>& value) { SetDashboardNames(value); return *this;}

    /**
     * <p>The dashboards to be deleted. This parameter is required.</p>
     */
    inline DeleteDashboardsRequest& WithDashboardNames(Aws::Vector<Aws::String>&& value) { SetDashboardNames(std::move(value)); return *this;}

    /**
     * <p>The dashboards to be deleted. This parameter is required.</p>
     */
    inline DeleteDashboardsRequest& AddDashboardNames(const Aws::String& value) { m_dashboardNamesHasBeenSet = true; m_dashboardNames.push_back(value); return *this; }

    /**
     * <p>The dashboards to be deleted. This parameter is required.</p>
     */
    inline DeleteDashboardsRequest& AddDashboardNames(Aws::String&& value) { m_dashboardNamesHasBeenSet = true; m_dashboardNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The dashboards to be deleted. This parameter is required.</p>
     */
    inline DeleteDashboardsRequest& AddDashboardNames(const char* value) { m_dashboardNamesHasBeenSet = true; m_dashboardNames.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_dashboardNames;
    bool m_dashboardNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
