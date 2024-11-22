/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DashboardsQAStatus.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class UpdateDashboardsQAConfigurationRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API UpdateDashboardsQAConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDashboardsQAConfiguration"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that contains the dashboard QA
     * configuration that you want to update.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline UpdateDashboardsQAConfigurationRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline UpdateDashboardsQAConfigurationRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline UpdateDashboardsQAConfigurationRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of dashboards QA configuration that you want to update.</p>
     */
    inline const DashboardsQAStatus& GetDashboardsQAStatus() const{ return m_dashboardsQAStatus; }
    inline bool DashboardsQAStatusHasBeenSet() const { return m_dashboardsQAStatusHasBeenSet; }
    inline void SetDashboardsQAStatus(const DashboardsQAStatus& value) { m_dashboardsQAStatusHasBeenSet = true; m_dashboardsQAStatus = value; }
    inline void SetDashboardsQAStatus(DashboardsQAStatus&& value) { m_dashboardsQAStatusHasBeenSet = true; m_dashboardsQAStatus = std::move(value); }
    inline UpdateDashboardsQAConfigurationRequest& WithDashboardsQAStatus(const DashboardsQAStatus& value) { SetDashboardsQAStatus(value); return *this;}
    inline UpdateDashboardsQAConfigurationRequest& WithDashboardsQAStatus(DashboardsQAStatus&& value) { SetDashboardsQAStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    DashboardsQAStatus m_dashboardsQAStatus;
    bool m_dashboardsQAStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
