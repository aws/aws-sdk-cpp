/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/SnapshotUserConfiguration.h>
#include <aws/quicksight/model/SnapshotConfiguration.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class StartDashboardSnapshotJobRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API StartDashboardSnapshotJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartDashboardSnapshotJob"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the Amazon Web Services account that the dashboard snapshot job is
     * executed in.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID of the Amazon Web Services account that the dashboard snapshot job is
     * executed in.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that the dashboard snapshot job is
     * executed in.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that the dashboard snapshot job is
     * executed in.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that the dashboard snapshot job is
     * executed in.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that the dashboard snapshot job is
     * executed in.</p>
     */
    inline StartDashboardSnapshotJobRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that the dashboard snapshot job is
     * executed in.</p>
     */
    inline StartDashboardSnapshotJobRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that the dashboard snapshot job is
     * executed in.</p>
     */
    inline StartDashboardSnapshotJobRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The ID of the dashboard that you want to start a snapshot job for. </p>
     */
    inline const Aws::String& GetDashboardId() const{ return m_dashboardId; }

    /**
     * <p>The ID of the dashboard that you want to start a snapshot job for. </p>
     */
    inline bool DashboardIdHasBeenSet() const { return m_dashboardIdHasBeenSet; }

    /**
     * <p>The ID of the dashboard that you want to start a snapshot job for. </p>
     */
    inline void SetDashboardId(const Aws::String& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = value; }

    /**
     * <p>The ID of the dashboard that you want to start a snapshot job for. </p>
     */
    inline void SetDashboardId(Aws::String&& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = std::move(value); }

    /**
     * <p>The ID of the dashboard that you want to start a snapshot job for. </p>
     */
    inline void SetDashboardId(const char* value) { m_dashboardIdHasBeenSet = true; m_dashboardId.assign(value); }

    /**
     * <p>The ID of the dashboard that you want to start a snapshot job for. </p>
     */
    inline StartDashboardSnapshotJobRequest& WithDashboardId(const Aws::String& value) { SetDashboardId(value); return *this;}

    /**
     * <p>The ID of the dashboard that you want to start a snapshot job for. </p>
     */
    inline StartDashboardSnapshotJobRequest& WithDashboardId(Aws::String&& value) { SetDashboardId(std::move(value)); return *this;}

    /**
     * <p>The ID of the dashboard that you want to start a snapshot job for. </p>
     */
    inline StartDashboardSnapshotJobRequest& WithDashboardId(const char* value) { SetDashboardId(value); return *this;}


    /**
     * <p>An ID for the dashboard snapshot job. This ID is unique to the dashboard
     * while the job is running. This ID can be used to poll the status of a job with a
     * <code>DescribeDashboardSnapshotJob</code> while the job runs. You can reuse this
     * ID for another job 24 hours after the current job is completed.</p>
     */
    inline const Aws::String& GetSnapshotJobId() const{ return m_snapshotJobId; }

    /**
     * <p>An ID for the dashboard snapshot job. This ID is unique to the dashboard
     * while the job is running. This ID can be used to poll the status of a job with a
     * <code>DescribeDashboardSnapshotJob</code> while the job runs. You can reuse this
     * ID for another job 24 hours after the current job is completed.</p>
     */
    inline bool SnapshotJobIdHasBeenSet() const { return m_snapshotJobIdHasBeenSet; }

    /**
     * <p>An ID for the dashboard snapshot job. This ID is unique to the dashboard
     * while the job is running. This ID can be used to poll the status of a job with a
     * <code>DescribeDashboardSnapshotJob</code> while the job runs. You can reuse this
     * ID for another job 24 hours after the current job is completed.</p>
     */
    inline void SetSnapshotJobId(const Aws::String& value) { m_snapshotJobIdHasBeenSet = true; m_snapshotJobId = value; }

    /**
     * <p>An ID for the dashboard snapshot job. This ID is unique to the dashboard
     * while the job is running. This ID can be used to poll the status of a job with a
     * <code>DescribeDashboardSnapshotJob</code> while the job runs. You can reuse this
     * ID for another job 24 hours after the current job is completed.</p>
     */
    inline void SetSnapshotJobId(Aws::String&& value) { m_snapshotJobIdHasBeenSet = true; m_snapshotJobId = std::move(value); }

    /**
     * <p>An ID for the dashboard snapshot job. This ID is unique to the dashboard
     * while the job is running. This ID can be used to poll the status of a job with a
     * <code>DescribeDashboardSnapshotJob</code> while the job runs. You can reuse this
     * ID for another job 24 hours after the current job is completed.</p>
     */
    inline void SetSnapshotJobId(const char* value) { m_snapshotJobIdHasBeenSet = true; m_snapshotJobId.assign(value); }

    /**
     * <p>An ID for the dashboard snapshot job. This ID is unique to the dashboard
     * while the job is running. This ID can be used to poll the status of a job with a
     * <code>DescribeDashboardSnapshotJob</code> while the job runs. You can reuse this
     * ID for another job 24 hours after the current job is completed.</p>
     */
    inline StartDashboardSnapshotJobRequest& WithSnapshotJobId(const Aws::String& value) { SetSnapshotJobId(value); return *this;}

    /**
     * <p>An ID for the dashboard snapshot job. This ID is unique to the dashboard
     * while the job is running. This ID can be used to poll the status of a job with a
     * <code>DescribeDashboardSnapshotJob</code> while the job runs. You can reuse this
     * ID for another job 24 hours after the current job is completed.</p>
     */
    inline StartDashboardSnapshotJobRequest& WithSnapshotJobId(Aws::String&& value) { SetSnapshotJobId(std::move(value)); return *this;}

    /**
     * <p>An ID for the dashboard snapshot job. This ID is unique to the dashboard
     * while the job is running. This ID can be used to poll the status of a job with a
     * <code>DescribeDashboardSnapshotJob</code> while the job runs. You can reuse this
     * ID for another job 24 hours after the current job is completed.</p>
     */
    inline StartDashboardSnapshotJobRequest& WithSnapshotJobId(const char* value) { SetSnapshotJobId(value); return *this;}


    /**
     * <p> A structure that contains information about the anonymous users that the
     * generated snapshot is for. This API will not return information about registered
     * Amazon QuickSight.</p>
     */
    inline const SnapshotUserConfiguration& GetUserConfiguration() const{ return m_userConfiguration; }

    /**
     * <p> A structure that contains information about the anonymous users that the
     * generated snapshot is for. This API will not return information about registered
     * Amazon QuickSight.</p>
     */
    inline bool UserConfigurationHasBeenSet() const { return m_userConfigurationHasBeenSet; }

    /**
     * <p> A structure that contains information about the anonymous users that the
     * generated snapshot is for. This API will not return information about registered
     * Amazon QuickSight.</p>
     */
    inline void SetUserConfiguration(const SnapshotUserConfiguration& value) { m_userConfigurationHasBeenSet = true; m_userConfiguration = value; }

    /**
     * <p> A structure that contains information about the anonymous users that the
     * generated snapshot is for. This API will not return information about registered
     * Amazon QuickSight.</p>
     */
    inline void SetUserConfiguration(SnapshotUserConfiguration&& value) { m_userConfigurationHasBeenSet = true; m_userConfiguration = std::move(value); }

    /**
     * <p> A structure that contains information about the anonymous users that the
     * generated snapshot is for. This API will not return information about registered
     * Amazon QuickSight.</p>
     */
    inline StartDashboardSnapshotJobRequest& WithUserConfiguration(const SnapshotUserConfiguration& value) { SetUserConfiguration(value); return *this;}

    /**
     * <p> A structure that contains information about the anonymous users that the
     * generated snapshot is for. This API will not return information about registered
     * Amazon QuickSight.</p>
     */
    inline StartDashboardSnapshotJobRequest& WithUserConfiguration(SnapshotUserConfiguration&& value) { SetUserConfiguration(std::move(value)); return *this;}


    /**
     * <p>A structure that describes the configuration of the dashboard snapshot.</p>
     */
    inline const SnapshotConfiguration& GetSnapshotConfiguration() const{ return m_snapshotConfiguration; }

    /**
     * <p>A structure that describes the configuration of the dashboard snapshot.</p>
     */
    inline bool SnapshotConfigurationHasBeenSet() const { return m_snapshotConfigurationHasBeenSet; }

    /**
     * <p>A structure that describes the configuration of the dashboard snapshot.</p>
     */
    inline void SetSnapshotConfiguration(const SnapshotConfiguration& value) { m_snapshotConfigurationHasBeenSet = true; m_snapshotConfiguration = value; }

    /**
     * <p>A structure that describes the configuration of the dashboard snapshot.</p>
     */
    inline void SetSnapshotConfiguration(SnapshotConfiguration&& value) { m_snapshotConfigurationHasBeenSet = true; m_snapshotConfiguration = std::move(value); }

    /**
     * <p>A structure that describes the configuration of the dashboard snapshot.</p>
     */
    inline StartDashboardSnapshotJobRequest& WithSnapshotConfiguration(const SnapshotConfiguration& value) { SetSnapshotConfiguration(value); return *this;}

    /**
     * <p>A structure that describes the configuration of the dashboard snapshot.</p>
     */
    inline StartDashboardSnapshotJobRequest& WithSnapshotConfiguration(SnapshotConfiguration&& value) { SetSnapshotConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_dashboardId;
    bool m_dashboardIdHasBeenSet = false;

    Aws::String m_snapshotJobId;
    bool m_snapshotJobIdHasBeenSet = false;

    SnapshotUserConfiguration m_userConfiguration;
    bool m_userConfigurationHasBeenSet = false;

    SnapshotConfiguration m_snapshotConfiguration;
    bool m_snapshotConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
