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
    AWS_CLOUDWATCH_API GetDashboardRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDashboard"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the dashboard to be described.</p>
     */
    inline const Aws::String& GetDashboardName() const { return m_dashboardName; }
    inline bool DashboardNameHasBeenSet() const { return m_dashboardNameHasBeenSet; }
    template<typename DashboardNameT = Aws::String>
    void SetDashboardName(DashboardNameT&& value) { m_dashboardNameHasBeenSet = true; m_dashboardName = std::forward<DashboardNameT>(value); }
    template<typename DashboardNameT = Aws::String>
    GetDashboardRequest& WithDashboardName(DashboardNameT&& value) { SetDashboardName(std::forward<DashboardNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dashboardName;
    bool m_dashboardNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
