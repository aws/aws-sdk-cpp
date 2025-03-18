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
  class PutDashboardRequest : public CloudWatchRequest
  {
  public:
    AWS_CLOUDWATCH_API PutDashboardRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutDashboard"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the dashboard. If a dashboard with this name already exists, this
     * call modifies that dashboard, replacing its current contents. Otherwise, a new
     * dashboard is created. The maximum length is 255, and valid characters are A-Z,
     * a-z, 0-9, "-", and "_". This parameter is required.</p>
     */
    inline const Aws::String& GetDashboardName() const { return m_dashboardName; }
    inline bool DashboardNameHasBeenSet() const { return m_dashboardNameHasBeenSet; }
    template<typename DashboardNameT = Aws::String>
    void SetDashboardName(DashboardNameT&& value) { m_dashboardNameHasBeenSet = true; m_dashboardName = std::forward<DashboardNameT>(value); }
    template<typename DashboardNameT = Aws::String>
    PutDashboardRequest& WithDashboardName(DashboardNameT&& value) { SetDashboardName(std::forward<DashboardNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detailed information about the dashboard in JSON format, including the
     * widgets to include and their location on the dashboard. This parameter is
     * required.</p> <p>For more information about the syntax, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/CloudWatch-Dashboard-Body-Structure.html">Dashboard
     * Body Structure and Syntax</a>.</p>
     */
    inline const Aws::String& GetDashboardBody() const { return m_dashboardBody; }
    inline bool DashboardBodyHasBeenSet() const { return m_dashboardBodyHasBeenSet; }
    template<typename DashboardBodyT = Aws::String>
    void SetDashboardBody(DashboardBodyT&& value) { m_dashboardBodyHasBeenSet = true; m_dashboardBody = std::forward<DashboardBodyT>(value); }
    template<typename DashboardBodyT = Aws::String>
    PutDashboardRequest& WithDashboardBody(DashboardBodyT&& value) { SetDashboardBody(std::forward<DashboardBodyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dashboardName;
    bool m_dashboardNameHasBeenSet = false;

    Aws::String m_dashboardBody;
    bool m_dashboardBodyHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
