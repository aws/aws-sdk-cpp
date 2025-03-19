/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/SnapshotUserConfigurationRedacted.h>
#include <aws/quicksight/model/SnapshotConfiguration.h>
#include <aws/quicksight/model/SnapshotJobStatus.h>
#include <aws/core/utils/DateTime.h>
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
  class DescribeDashboardSnapshotJobResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeDashboardSnapshotJobResult() = default;
    AWS_QUICKSIGHT_API DescribeDashboardSnapshotJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeDashboardSnapshotJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The ID of the Amazon Web Services account that the dashboard snapshot job is
     * executed in. </p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    DescribeDashboardSnapshotJobResult& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the dashboard that you have started a snapshot job for.</p>
     */
    inline const Aws::String& GetDashboardId() const { return m_dashboardId; }
    template<typename DashboardIdT = Aws::String>
    void SetDashboardId(DashboardIdT&& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = std::forward<DashboardIdT>(value); }
    template<typename DashboardIdT = Aws::String>
    DescribeDashboardSnapshotJobResult& WithDashboardId(DashboardIdT&& value) { SetDashboardId(std::forward<DashboardIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the job to be described. The job ID is set when you start a new job
     * with a <code>StartDashboardSnapshotJob</code> API call.</p>
     */
    inline const Aws::String& GetSnapshotJobId() const { return m_snapshotJobId; }
    template<typename SnapshotJobIdT = Aws::String>
    void SetSnapshotJobId(SnapshotJobIdT&& value) { m_snapshotJobIdHasBeenSet = true; m_snapshotJobId = std::forward<SnapshotJobIdT>(value); }
    template<typename SnapshotJobIdT = Aws::String>
    DescribeDashboardSnapshotJobResult& WithSnapshotJobId(SnapshotJobIdT&& value) { SetSnapshotJobId(std::forward<SnapshotJobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user configuration for the snapshot job. This information is provided
     * when you make a <code>StartDashboardSnapshotJob</code> API call.</p>
     */
    inline const SnapshotUserConfigurationRedacted& GetUserConfiguration() const { return m_userConfiguration; }
    template<typename UserConfigurationT = SnapshotUserConfigurationRedacted>
    void SetUserConfiguration(UserConfigurationT&& value) { m_userConfigurationHasBeenSet = true; m_userConfiguration = std::forward<UserConfigurationT>(value); }
    template<typename UserConfigurationT = SnapshotUserConfigurationRedacted>
    DescribeDashboardSnapshotJobResult& WithUserConfiguration(UserConfigurationT&& value) { SetUserConfiguration(std::forward<UserConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The snapshot configuration of the job. This information is provided when you
     * make a <code>StartDashboardSnapshotJob</code> API call.</p>
     */
    inline const SnapshotConfiguration& GetSnapshotConfiguration() const { return m_snapshotConfiguration; }
    template<typename SnapshotConfigurationT = SnapshotConfiguration>
    void SetSnapshotConfiguration(SnapshotConfigurationT&& value) { m_snapshotConfigurationHasBeenSet = true; m_snapshotConfiguration = std::forward<SnapshotConfigurationT>(value); }
    template<typename SnapshotConfigurationT = SnapshotConfiguration>
    DescribeDashboardSnapshotJobResult& WithSnapshotConfiguration(SnapshotConfigurationT&& value) { SetSnapshotConfiguration(std::forward<SnapshotConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the snapshot job. The job ARN is generated
     * when you start a new job with a <code>StartDashboardSnapshotJob</code> API
     * call.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DescribeDashboardSnapshotJobResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the status of a job. The status updates as the job executes. This
     * shows one of the following values.</p> <ul> <li> <p> <code>COMPLETED</code> -
     * The job was completed successfully.</p> </li> <li> <p> <code>FAILED</code> - The
     * job failed to execute.</p> </li> <li> <p> <code>QUEUED</code> - The job is
     * queued and hasn't started yet.</p> </li> <li> <p> <code>RUNNING</code> - The job
     * is still running.</p> </li> </ul>
     */
    inline SnapshotJobStatus GetJobStatus() const { return m_jobStatus; }
    inline void SetJobStatus(SnapshotJobStatus value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline DescribeDashboardSnapshotJobResult& WithJobStatus(SnapshotJobStatus value) { SetJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time that the snapshot job was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    DescribeDashboardSnapshotJobResult& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time that the snapshot job status was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    DescribeDashboardSnapshotJobResult& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeDashboardSnapshotJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of the request</p>
     */
    inline int GetStatus() const { return m_status; }
    inline void SetStatus(int value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeDashboardSnapshotJobResult& WithStatus(int value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_dashboardId;
    bool m_dashboardIdHasBeenSet = false;

    Aws::String m_snapshotJobId;
    bool m_snapshotJobIdHasBeenSet = false;

    SnapshotUserConfigurationRedacted m_userConfiguration;
    bool m_userConfigurationHasBeenSet = false;

    SnapshotConfiguration m_snapshotConfiguration;
    bool m_snapshotConfigurationHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    SnapshotJobStatus m_jobStatus{SnapshotJobStatus::NOT_SET};
    bool m_jobStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    int m_status{0};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
