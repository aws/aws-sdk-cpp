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
    AWS_QUICKSIGHT_API DescribeDashboardSnapshotJobResult();
    AWS_QUICKSIGHT_API DescribeDashboardSnapshotJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeDashboardSnapshotJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The ID of the Amazon Web Services account that the dashboard snapshot job is
     * executed in. </p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p> The ID of the Amazon Web Services account that the dashboard snapshot job is
     * executed in. </p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountId = value; }

    /**
     * <p> The ID of the Amazon Web Services account that the dashboard snapshot job is
     * executed in. </p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountId = std::move(value); }

    /**
     * <p> The ID of the Amazon Web Services account that the dashboard snapshot job is
     * executed in. </p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountId.assign(value); }

    /**
     * <p> The ID of the Amazon Web Services account that the dashboard snapshot job is
     * executed in. </p>
     */
    inline DescribeDashboardSnapshotJobResult& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p> The ID of the Amazon Web Services account that the dashboard snapshot job is
     * executed in. </p>
     */
    inline DescribeDashboardSnapshotJobResult& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p> The ID of the Amazon Web Services account that the dashboard snapshot job is
     * executed in. </p>
     */
    inline DescribeDashboardSnapshotJobResult& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The ID of the dashboard that you have started a snapshot job for.</p>
     */
    inline const Aws::String& GetDashboardId() const{ return m_dashboardId; }

    /**
     * <p>The ID of the dashboard that you have started a snapshot job for.</p>
     */
    inline void SetDashboardId(const Aws::String& value) { m_dashboardId = value; }

    /**
     * <p>The ID of the dashboard that you have started a snapshot job for.</p>
     */
    inline void SetDashboardId(Aws::String&& value) { m_dashboardId = std::move(value); }

    /**
     * <p>The ID of the dashboard that you have started a snapshot job for.</p>
     */
    inline void SetDashboardId(const char* value) { m_dashboardId.assign(value); }

    /**
     * <p>The ID of the dashboard that you have started a snapshot job for.</p>
     */
    inline DescribeDashboardSnapshotJobResult& WithDashboardId(const Aws::String& value) { SetDashboardId(value); return *this;}

    /**
     * <p>The ID of the dashboard that you have started a snapshot job for.</p>
     */
    inline DescribeDashboardSnapshotJobResult& WithDashboardId(Aws::String&& value) { SetDashboardId(std::move(value)); return *this;}

    /**
     * <p>The ID of the dashboard that you have started a snapshot job for.</p>
     */
    inline DescribeDashboardSnapshotJobResult& WithDashboardId(const char* value) { SetDashboardId(value); return *this;}


    /**
     * <p>The ID of the job to be described. The job ID is set when you start a new job
     * with a <code>StartDashboardSnapshotJob</code> API call.</p>
     */
    inline const Aws::String& GetSnapshotJobId() const{ return m_snapshotJobId; }

    /**
     * <p>The ID of the job to be described. The job ID is set when you start a new job
     * with a <code>StartDashboardSnapshotJob</code> API call.</p>
     */
    inline void SetSnapshotJobId(const Aws::String& value) { m_snapshotJobId = value; }

    /**
     * <p>The ID of the job to be described. The job ID is set when you start a new job
     * with a <code>StartDashboardSnapshotJob</code> API call.</p>
     */
    inline void SetSnapshotJobId(Aws::String&& value) { m_snapshotJobId = std::move(value); }

    /**
     * <p>The ID of the job to be described. The job ID is set when you start a new job
     * with a <code>StartDashboardSnapshotJob</code> API call.</p>
     */
    inline void SetSnapshotJobId(const char* value) { m_snapshotJobId.assign(value); }

    /**
     * <p>The ID of the job to be described. The job ID is set when you start a new job
     * with a <code>StartDashboardSnapshotJob</code> API call.</p>
     */
    inline DescribeDashboardSnapshotJobResult& WithSnapshotJobId(const Aws::String& value) { SetSnapshotJobId(value); return *this;}

    /**
     * <p>The ID of the job to be described. The job ID is set when you start a new job
     * with a <code>StartDashboardSnapshotJob</code> API call.</p>
     */
    inline DescribeDashboardSnapshotJobResult& WithSnapshotJobId(Aws::String&& value) { SetSnapshotJobId(std::move(value)); return *this;}

    /**
     * <p>The ID of the job to be described. The job ID is set when you start a new job
     * with a <code>StartDashboardSnapshotJob</code> API call.</p>
     */
    inline DescribeDashboardSnapshotJobResult& WithSnapshotJobId(const char* value) { SetSnapshotJobId(value); return *this;}


    /**
     * <p>The user configuration for the snapshot job. This information is provided
     * when you make a <code>StartDashboardSnapshotJob</code> API call.</p>
     */
    inline const SnapshotUserConfigurationRedacted& GetUserConfiguration() const{ return m_userConfiguration; }

    /**
     * <p>The user configuration for the snapshot job. This information is provided
     * when you make a <code>StartDashboardSnapshotJob</code> API call.</p>
     */
    inline void SetUserConfiguration(const SnapshotUserConfigurationRedacted& value) { m_userConfiguration = value; }

    /**
     * <p>The user configuration for the snapshot job. This information is provided
     * when you make a <code>StartDashboardSnapshotJob</code> API call.</p>
     */
    inline void SetUserConfiguration(SnapshotUserConfigurationRedacted&& value) { m_userConfiguration = std::move(value); }

    /**
     * <p>The user configuration for the snapshot job. This information is provided
     * when you make a <code>StartDashboardSnapshotJob</code> API call.</p>
     */
    inline DescribeDashboardSnapshotJobResult& WithUserConfiguration(const SnapshotUserConfigurationRedacted& value) { SetUserConfiguration(value); return *this;}

    /**
     * <p>The user configuration for the snapshot job. This information is provided
     * when you make a <code>StartDashboardSnapshotJob</code> API call.</p>
     */
    inline DescribeDashboardSnapshotJobResult& WithUserConfiguration(SnapshotUserConfigurationRedacted&& value) { SetUserConfiguration(std::move(value)); return *this;}


    /**
     * <p>The snapshot configuration of the job. This information is provided when you
     * make a <code>StartDashboardSnapshotJob</code> API call.</p>
     */
    inline const SnapshotConfiguration& GetSnapshotConfiguration() const{ return m_snapshotConfiguration; }

    /**
     * <p>The snapshot configuration of the job. This information is provided when you
     * make a <code>StartDashboardSnapshotJob</code> API call.</p>
     */
    inline void SetSnapshotConfiguration(const SnapshotConfiguration& value) { m_snapshotConfiguration = value; }

    /**
     * <p>The snapshot configuration of the job. This information is provided when you
     * make a <code>StartDashboardSnapshotJob</code> API call.</p>
     */
    inline void SetSnapshotConfiguration(SnapshotConfiguration&& value) { m_snapshotConfiguration = std::move(value); }

    /**
     * <p>The snapshot configuration of the job. This information is provided when you
     * make a <code>StartDashboardSnapshotJob</code> API call.</p>
     */
    inline DescribeDashboardSnapshotJobResult& WithSnapshotConfiguration(const SnapshotConfiguration& value) { SetSnapshotConfiguration(value); return *this;}

    /**
     * <p>The snapshot configuration of the job. This information is provided when you
     * make a <code>StartDashboardSnapshotJob</code> API call.</p>
     */
    inline DescribeDashboardSnapshotJobResult& WithSnapshotConfiguration(SnapshotConfiguration&& value) { SetSnapshotConfiguration(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for the snapshot job. The job ARN is generated
     * when you start a new job with a <code>StartDashboardSnapshotJob</code> API
     * call.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the snapshot job. The job ARN is generated
     * when you start a new job with a <code>StartDashboardSnapshotJob</code> API
     * call.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the snapshot job. The job ARN is generated
     * when you start a new job with a <code>StartDashboardSnapshotJob</code> API
     * call.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the snapshot job. The job ARN is generated
     * when you start a new job with a <code>StartDashboardSnapshotJob</code> API
     * call.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the snapshot job. The job ARN is generated
     * when you start a new job with a <code>StartDashboardSnapshotJob</code> API
     * call.</p>
     */
    inline DescribeDashboardSnapshotJobResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the snapshot job. The job ARN is generated
     * when you start a new job with a <code>StartDashboardSnapshotJob</code> API
     * call.</p>
     */
    inline DescribeDashboardSnapshotJobResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the snapshot job. The job ARN is generated
     * when you start a new job with a <code>StartDashboardSnapshotJob</code> API
     * call.</p>
     */
    inline DescribeDashboardSnapshotJobResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Indicates the status of a job. The status updates as the job executes. This
     * shows one of the following values.</p> <ul> <li> <p> <code>COMPLETED</code> -
     * The job was completed successfully.</p> </li> <li> <p> <code>FAILED</code> - The
     * job failed to execute.</p> </li> <li> <p> <code>QUEUED</code> - The job is
     * queued and hasn't started yet.</p> </li> <li> <p> <code>RUNNING</code> - The job
     * is still running.</p> </li> </ul>
     */
    inline const SnapshotJobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>Indicates the status of a job. The status updates as the job executes. This
     * shows one of the following values.</p> <ul> <li> <p> <code>COMPLETED</code> -
     * The job was completed successfully.</p> </li> <li> <p> <code>FAILED</code> - The
     * job failed to execute.</p> </li> <li> <p> <code>QUEUED</code> - The job is
     * queued and hasn't started yet.</p> </li> <li> <p> <code>RUNNING</code> - The job
     * is still running.</p> </li> </ul>
     */
    inline void SetJobStatus(const SnapshotJobStatus& value) { m_jobStatus = value; }

    /**
     * <p>Indicates the status of a job. The status updates as the job executes. This
     * shows one of the following values.</p> <ul> <li> <p> <code>COMPLETED</code> -
     * The job was completed successfully.</p> </li> <li> <p> <code>FAILED</code> - The
     * job failed to execute.</p> </li> <li> <p> <code>QUEUED</code> - The job is
     * queued and hasn't started yet.</p> </li> <li> <p> <code>RUNNING</code> - The job
     * is still running.</p> </li> </ul>
     */
    inline void SetJobStatus(SnapshotJobStatus&& value) { m_jobStatus = std::move(value); }

    /**
     * <p>Indicates the status of a job. The status updates as the job executes. This
     * shows one of the following values.</p> <ul> <li> <p> <code>COMPLETED</code> -
     * The job was completed successfully.</p> </li> <li> <p> <code>FAILED</code> - The
     * job failed to execute.</p> </li> <li> <p> <code>QUEUED</code> - The job is
     * queued and hasn't started yet.</p> </li> <li> <p> <code>RUNNING</code> - The job
     * is still running.</p> </li> </ul>
     */
    inline DescribeDashboardSnapshotJobResult& WithJobStatus(const SnapshotJobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>Indicates the status of a job. The status updates as the job executes. This
     * shows one of the following values.</p> <ul> <li> <p> <code>COMPLETED</code> -
     * The job was completed successfully.</p> </li> <li> <p> <code>FAILED</code> - The
     * job failed to execute.</p> </li> <li> <p> <code>QUEUED</code> - The job is
     * queued and hasn't started yet.</p> </li> <li> <p> <code>RUNNING</code> - The job
     * is still running.</p> </li> </ul>
     */
    inline DescribeDashboardSnapshotJobResult& WithJobStatus(SnapshotJobStatus&& value) { SetJobStatus(std::move(value)); return *this;}


    /**
     * <p> The time that the snapshot job was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p> The time that the snapshot job was created. </p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTime = value; }

    /**
     * <p> The time that the snapshot job was created. </p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTime = std::move(value); }

    /**
     * <p> The time that the snapshot job was created. </p>
     */
    inline DescribeDashboardSnapshotJobResult& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p> The time that the snapshot job was created. </p>
     */
    inline DescribeDashboardSnapshotJobResult& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p> The time that the snapshot job status was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p> The time that the snapshot job status was last updated. </p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTime = value; }

    /**
     * <p> The time that the snapshot job status was last updated. </p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTime = std::move(value); }

    /**
     * <p> The time that the snapshot job status was last updated. </p>
     */
    inline DescribeDashboardSnapshotJobResult& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p> The time that the snapshot job status was last updated. </p>
     */
    inline DescribeDashboardSnapshotJobResult& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeDashboardSnapshotJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeDashboardSnapshotJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeDashboardSnapshotJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The HTTP status of the request</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request</p>
     */
    inline DescribeDashboardSnapshotJobResult& WithStatus(int value) { SetStatus(value); return *this;}

  private:

    Aws::String m_awsAccountId;

    Aws::String m_dashboardId;

    Aws::String m_snapshotJobId;

    SnapshotUserConfigurationRedacted m_userConfiguration;

    SnapshotConfiguration m_snapshotConfiguration;

    Aws::String m_arn;

    SnapshotJobStatus m_jobStatus;

    Aws::Utils::DateTime m_createdTime;

    Aws::Utils::DateTime m_lastUpdatedTime;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
