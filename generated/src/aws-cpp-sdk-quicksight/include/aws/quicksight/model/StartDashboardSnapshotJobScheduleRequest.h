/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class StartDashboardSnapshotJobScheduleRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API StartDashboardSnapshotJobScheduleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartDashboardSnapshotJobSchedule"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that the dashboard snapshot job is
     * executed in.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline StartDashboardSnapshotJobScheduleRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline StartDashboardSnapshotJobScheduleRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline StartDashboardSnapshotJobScheduleRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the dashboard that you want to start a snapshot job schedule for.
     * </p>
     */
    inline const Aws::String& GetDashboardId() const{ return m_dashboardId; }
    inline bool DashboardIdHasBeenSet() const { return m_dashboardIdHasBeenSet; }
    inline void SetDashboardId(const Aws::String& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = value; }
    inline void SetDashboardId(Aws::String&& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = std::move(value); }
    inline void SetDashboardId(const char* value) { m_dashboardIdHasBeenSet = true; m_dashboardId.assign(value); }
    inline StartDashboardSnapshotJobScheduleRequest& WithDashboardId(const Aws::String& value) { SetDashboardId(value); return *this;}
    inline StartDashboardSnapshotJobScheduleRequest& WithDashboardId(Aws::String&& value) { SetDashboardId(std::move(value)); return *this;}
    inline StartDashboardSnapshotJobScheduleRequest& WithDashboardId(const char* value) { SetDashboardId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the schedule that you want to start a snapshot job schedule for.
     * The schedule ID can be found in the Amazon QuickSight console in the
     * <b>Schedules</b> pane of the dashboard that the schedule is configured for.</p>
     */
    inline const Aws::String& GetScheduleId() const{ return m_scheduleId; }
    inline bool ScheduleIdHasBeenSet() const { return m_scheduleIdHasBeenSet; }
    inline void SetScheduleId(const Aws::String& value) { m_scheduleIdHasBeenSet = true; m_scheduleId = value; }
    inline void SetScheduleId(Aws::String&& value) { m_scheduleIdHasBeenSet = true; m_scheduleId = std::move(value); }
    inline void SetScheduleId(const char* value) { m_scheduleIdHasBeenSet = true; m_scheduleId.assign(value); }
    inline StartDashboardSnapshotJobScheduleRequest& WithScheduleId(const Aws::String& value) { SetScheduleId(value); return *this;}
    inline StartDashboardSnapshotJobScheduleRequest& WithScheduleId(Aws::String&& value) { SetScheduleId(std::move(value)); return *this;}
    inline StartDashboardSnapshotJobScheduleRequest& WithScheduleId(const char* value) { SetScheduleId(value); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_dashboardId;
    bool m_dashboardIdHasBeenSet = false;

    Aws::String m_scheduleId;
    bool m_scheduleIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
