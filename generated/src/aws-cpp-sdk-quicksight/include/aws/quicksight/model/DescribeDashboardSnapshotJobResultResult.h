/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/SnapshotJobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/quicksight/model/SnapshotJobResult.h>
#include <aws/quicksight/model/SnapshotJobErrorInfo.h>
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
  class DescribeDashboardSnapshotJobResultResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeDashboardSnapshotJobResultResult();
    AWS_QUICKSIGHT_API DescribeDashboardSnapshotJobResultResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeDashboardSnapshotJobResultResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline DescribeDashboardSnapshotJobResultResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the snapshot job. The job ARN is generated
     * when you start a new job with a <code>StartDashboardSnapshotJob</code> API
     * call.</p>
     */
    inline DescribeDashboardSnapshotJobResultResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the snapshot job. The job ARN is generated
     * when you start a new job with a <code>StartDashboardSnapshotJob</code> API
     * call.</p>
     */
    inline DescribeDashboardSnapshotJobResultResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Indicates the status of a job after it has reached a terminal state. A
     * finished snapshot job will retuen a <code>COMPLETED</code> or
     * <code>FAILED</code> status.</p>
     */
    inline const SnapshotJobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>Indicates the status of a job after it has reached a terminal state. A
     * finished snapshot job will retuen a <code>COMPLETED</code> or
     * <code>FAILED</code> status.</p>
     */
    inline void SetJobStatus(const SnapshotJobStatus& value) { m_jobStatus = value; }

    /**
     * <p>Indicates the status of a job after it has reached a terminal state. A
     * finished snapshot job will retuen a <code>COMPLETED</code> or
     * <code>FAILED</code> status.</p>
     */
    inline void SetJobStatus(SnapshotJobStatus&& value) { m_jobStatus = std::move(value); }

    /**
     * <p>Indicates the status of a job after it has reached a terminal state. A
     * finished snapshot job will retuen a <code>COMPLETED</code> or
     * <code>FAILED</code> status.</p>
     */
    inline DescribeDashboardSnapshotJobResultResult& WithJobStatus(const SnapshotJobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>Indicates the status of a job after it has reached a terminal state. A
     * finished snapshot job will retuen a <code>COMPLETED</code> or
     * <code>FAILED</code> status.</p>
     */
    inline DescribeDashboardSnapshotJobResultResult& WithJobStatus(SnapshotJobStatus&& value) { SetJobStatus(std::move(value)); return *this;}


    /**
     * <p>The time that a snapshot job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The time that a snapshot job was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTime = value; }

    /**
     * <p>The time that a snapshot job was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTime = std::move(value); }

    /**
     * <p>The time that a snapshot job was created.</p>
     */
    inline DescribeDashboardSnapshotJobResultResult& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The time that a snapshot job was created.</p>
     */
    inline DescribeDashboardSnapshotJobResultResult& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The time that a snapshot job status was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The time that a snapshot job status was last updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTime = value; }

    /**
     * <p>The time that a snapshot job status was last updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The time that a snapshot job status was last updated.</p>
     */
    inline DescribeDashboardSnapshotJobResultResult& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The time that a snapshot job status was last updated.</p>
     */
    inline DescribeDashboardSnapshotJobResultResult& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The result of the snapshot job. Jobs that have successfully completed will
     * return the S3Uri where they are located. Jobs that have failedwill return
     * information on the error that caused the job to fail.</p>
     */
    inline const SnapshotJobResult& GetResult() const{ return m_result; }

    /**
     * <p>The result of the snapshot job. Jobs that have successfully completed will
     * return the S3Uri where they are located. Jobs that have failedwill return
     * information on the error that caused the job to fail.</p>
     */
    inline void SetResult(const SnapshotJobResult& value) { m_result = value; }

    /**
     * <p>The result of the snapshot job. Jobs that have successfully completed will
     * return the S3Uri where they are located. Jobs that have failedwill return
     * information on the error that caused the job to fail.</p>
     */
    inline void SetResult(SnapshotJobResult&& value) { m_result = std::move(value); }

    /**
     * <p>The result of the snapshot job. Jobs that have successfully completed will
     * return the S3Uri where they are located. Jobs that have failedwill return
     * information on the error that caused the job to fail.</p>
     */
    inline DescribeDashboardSnapshotJobResultResult& WithResult(const SnapshotJobResult& value) { SetResult(value); return *this;}

    /**
     * <p>The result of the snapshot job. Jobs that have successfully completed will
     * return the S3Uri where they are located. Jobs that have failedwill return
     * information on the error that caused the job to fail.</p>
     */
    inline DescribeDashboardSnapshotJobResultResult& WithResult(SnapshotJobResult&& value) { SetResult(std::move(value)); return *this;}


    /**
     * <p>Displays information for the error that caused a job to fail.</p>
     */
    inline const SnapshotJobErrorInfo& GetErrorInfo() const{ return m_errorInfo; }

    /**
     * <p>Displays information for the error that caused a job to fail.</p>
     */
    inline void SetErrorInfo(const SnapshotJobErrorInfo& value) { m_errorInfo = value; }

    /**
     * <p>Displays information for the error that caused a job to fail.</p>
     */
    inline void SetErrorInfo(SnapshotJobErrorInfo&& value) { m_errorInfo = std::move(value); }

    /**
     * <p>Displays information for the error that caused a job to fail.</p>
     */
    inline DescribeDashboardSnapshotJobResultResult& WithErrorInfo(const SnapshotJobErrorInfo& value) { SetErrorInfo(value); return *this;}

    /**
     * <p>Displays information for the error that caused a job to fail.</p>
     */
    inline DescribeDashboardSnapshotJobResultResult& WithErrorInfo(SnapshotJobErrorInfo&& value) { SetErrorInfo(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeDashboardSnapshotJobResultResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeDashboardSnapshotJobResultResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeDashboardSnapshotJobResultResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


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
    inline DescribeDashboardSnapshotJobResultResult& WithStatus(int value) { SetStatus(value); return *this;}

  private:

    Aws::String m_arn;

    SnapshotJobStatus m_jobStatus;

    Aws::Utils::DateTime m_createdTime;

    Aws::Utils::DateTime m_lastUpdatedTime;

    SnapshotJobResult m_result;

    SnapshotJobErrorInfo m_errorInfo;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
