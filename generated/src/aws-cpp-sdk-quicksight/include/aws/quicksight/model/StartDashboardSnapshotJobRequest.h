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
    AWS_QUICKSIGHT_API StartDashboardSnapshotJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartDashboardSnapshotJob"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that the dashboard snapshot job is
     * executed in.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    StartDashboardSnapshotJobRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the dashboard that you want to start a snapshot job for. </p>
     */
    inline const Aws::String& GetDashboardId() const { return m_dashboardId; }
    inline bool DashboardIdHasBeenSet() const { return m_dashboardIdHasBeenSet; }
    template<typename DashboardIdT = Aws::String>
    void SetDashboardId(DashboardIdT&& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = std::forward<DashboardIdT>(value); }
    template<typename DashboardIdT = Aws::String>
    StartDashboardSnapshotJobRequest& WithDashboardId(DashboardIdT&& value) { SetDashboardId(std::forward<DashboardIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ID for the dashboard snapshot job. This ID is unique to the dashboard
     * while the job is running. This ID can be used to poll the status of a job with a
     * <code>DescribeDashboardSnapshotJob</code> while the job runs. You can reuse this
     * ID for another job 24 hours after the current job is completed.</p>
     */
    inline const Aws::String& GetSnapshotJobId() const { return m_snapshotJobId; }
    inline bool SnapshotJobIdHasBeenSet() const { return m_snapshotJobIdHasBeenSet; }
    template<typename SnapshotJobIdT = Aws::String>
    void SetSnapshotJobId(SnapshotJobIdT&& value) { m_snapshotJobIdHasBeenSet = true; m_snapshotJobId = std::forward<SnapshotJobIdT>(value); }
    template<typename SnapshotJobIdT = Aws::String>
    StartDashboardSnapshotJobRequest& WithSnapshotJobId(SnapshotJobIdT&& value) { SetSnapshotJobId(std::forward<SnapshotJobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A structure that contains information about the anonymous users that the
     * generated snapshot is for. This API will not return information about registered
     * QuickSight.</p>
     */
    inline const SnapshotUserConfiguration& GetUserConfiguration() const { return m_userConfiguration; }
    inline bool UserConfigurationHasBeenSet() const { return m_userConfigurationHasBeenSet; }
    template<typename UserConfigurationT = SnapshotUserConfiguration>
    void SetUserConfiguration(UserConfigurationT&& value) { m_userConfigurationHasBeenSet = true; m_userConfiguration = std::forward<UserConfigurationT>(value); }
    template<typename UserConfigurationT = SnapshotUserConfiguration>
    StartDashboardSnapshotJobRequest& WithUserConfiguration(UserConfigurationT&& value) { SetUserConfiguration(std::forward<UserConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure that describes the configuration of the dashboard snapshot.</p>
     */
    inline const SnapshotConfiguration& GetSnapshotConfiguration() const { return m_snapshotConfiguration; }
    inline bool SnapshotConfigurationHasBeenSet() const { return m_snapshotConfigurationHasBeenSet; }
    template<typename SnapshotConfigurationT = SnapshotConfiguration>
    void SetSnapshotConfiguration(SnapshotConfigurationT&& value) { m_snapshotConfigurationHasBeenSet = true; m_snapshotConfiguration = std::forward<SnapshotConfigurationT>(value); }
    template<typename SnapshotConfigurationT = SnapshotConfiguration>
    StartDashboardSnapshotJobRequest& WithSnapshotConfiguration(SnapshotConfigurationT&& value) { SetSnapshotConfiguration(std::forward<SnapshotConfigurationT>(value)); return *this;}
    ///@}
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
