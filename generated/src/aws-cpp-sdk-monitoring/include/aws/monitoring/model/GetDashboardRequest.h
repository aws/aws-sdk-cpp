/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
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
  class GetDashboardRequest : public CloudWatchRequest
  {
  public:
    AWS_CLOUDWATCH_API GetDashboardRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDashboard"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the dashboard to be described.</p>
     */
    inline const Aws::String& GetDashboardName() const{ return m_dashboardName; }

    /**
     * <p>The name of the dashboard to be described.</p>
     */
    inline bool DashboardNameHasBeenSet() const { return m_dashboardNameHasBeenSet; }

    /**
     * <p>The name of the dashboard to be described.</p>
     */
    inline void SetDashboardName(const Aws::String& value) { m_dashboardNameHasBeenSet = true; m_dashboardName = value; }

    /**
     * <p>The name of the dashboard to be described.</p>
     */
    inline void SetDashboardName(Aws::String&& value) { m_dashboardNameHasBeenSet = true; m_dashboardName = std::move(value); }

    /**
     * <p>The name of the dashboard to be described.</p>
     */
    inline void SetDashboardName(const char* value) { m_dashboardNameHasBeenSet = true; m_dashboardName.assign(value); }

    /**
     * <p>The name of the dashboard to be described.</p>
     */
    inline GetDashboardRequest& WithDashboardName(const Aws::String& value) { SetDashboardName(value); return *this;}

    /**
     * <p>The name of the dashboard to be described.</p>
     */
    inline GetDashboardRequest& WithDashboardName(Aws::String&& value) { SetDashboardName(std::move(value)); return *this;}

    /**
     * <p>The name of the dashboard to be described.</p>
     */
    inline GetDashboardRequest& WithDashboardName(const char* value) { SetDashboardName(value); return *this;}

  private:

    Aws::String m_dashboardName;
    bool m_dashboardNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
