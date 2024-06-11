/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ScheduleStatus.h>
#include <aws/sagemaker/model/MonitoringType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/MonitoringScheduleConfig.h>
#include <aws/sagemaker/model/MonitoringExecutionSummary.h>
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
namespace SageMaker
{
namespace Model
{
  class DescribeMonitoringScheduleResult
  {
  public:
    AWS_SAGEMAKER_API DescribeMonitoringScheduleResult();
    AWS_SAGEMAKER_API DescribeMonitoringScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeMonitoringScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring schedule.</p>
     */
    inline const Aws::String& GetMonitoringScheduleArn() const{ return m_monitoringScheduleArn; }
    inline void SetMonitoringScheduleArn(const Aws::String& value) { m_monitoringScheduleArn = value; }
    inline void SetMonitoringScheduleArn(Aws::String&& value) { m_monitoringScheduleArn = std::move(value); }
    inline void SetMonitoringScheduleArn(const char* value) { m_monitoringScheduleArn.assign(value); }
    inline DescribeMonitoringScheduleResult& WithMonitoringScheduleArn(const Aws::String& value) { SetMonitoringScheduleArn(value); return *this;}
    inline DescribeMonitoringScheduleResult& WithMonitoringScheduleArn(Aws::String&& value) { SetMonitoringScheduleArn(std::move(value)); return *this;}
    inline DescribeMonitoringScheduleResult& WithMonitoringScheduleArn(const char* value) { SetMonitoringScheduleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the monitoring schedule.</p>
     */
    inline const Aws::String& GetMonitoringScheduleName() const{ return m_monitoringScheduleName; }
    inline void SetMonitoringScheduleName(const Aws::String& value) { m_monitoringScheduleName = value; }
    inline void SetMonitoringScheduleName(Aws::String&& value) { m_monitoringScheduleName = std::move(value); }
    inline void SetMonitoringScheduleName(const char* value) { m_monitoringScheduleName.assign(value); }
    inline DescribeMonitoringScheduleResult& WithMonitoringScheduleName(const Aws::String& value) { SetMonitoringScheduleName(value); return *this;}
    inline DescribeMonitoringScheduleResult& WithMonitoringScheduleName(Aws::String&& value) { SetMonitoringScheduleName(std::move(value)); return *this;}
    inline DescribeMonitoringScheduleResult& WithMonitoringScheduleName(const char* value) { SetMonitoringScheduleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of an monitoring job.</p>
     */
    inline const ScheduleStatus& GetMonitoringScheduleStatus() const{ return m_monitoringScheduleStatus; }
    inline void SetMonitoringScheduleStatus(const ScheduleStatus& value) { m_monitoringScheduleStatus = value; }
    inline void SetMonitoringScheduleStatus(ScheduleStatus&& value) { m_monitoringScheduleStatus = std::move(value); }
    inline DescribeMonitoringScheduleResult& WithMonitoringScheduleStatus(const ScheduleStatus& value) { SetMonitoringScheduleStatus(value); return *this;}
    inline DescribeMonitoringScheduleResult& WithMonitoringScheduleStatus(ScheduleStatus&& value) { SetMonitoringScheduleStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the monitoring job that this schedule runs. This is one of the
     * following values.</p> <ul> <li> <p> <code>DATA_QUALITY</code> - The schedule is
     * for a data quality monitoring job.</p> </li> <li> <p> <code>MODEL_QUALITY</code>
     * - The schedule is for a model quality monitoring job.</p> </li> <li> <p>
     * <code>MODEL_BIAS</code> - The schedule is for a bias monitoring job.</p> </li>
     * <li> <p> <code>MODEL_EXPLAINABILITY</code> - The schedule is for an
     * explainability monitoring job.</p> </li> </ul>
     */
    inline const MonitoringType& GetMonitoringType() const{ return m_monitoringType; }
    inline void SetMonitoringType(const MonitoringType& value) { m_monitoringType = value; }
    inline void SetMonitoringType(MonitoringType&& value) { m_monitoringType = std::move(value); }
    inline DescribeMonitoringScheduleResult& WithMonitoringType(const MonitoringType& value) { SetMonitoringType(value); return *this;}
    inline DescribeMonitoringScheduleResult& WithMonitoringType(MonitoringType&& value) { SetMonitoringType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string, up to one KB in size, that contains the reason a monitoring job
     * failed, if it failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }
    inline DescribeMonitoringScheduleResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline DescribeMonitoringScheduleResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline DescribeMonitoringScheduleResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the monitoring job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeMonitoringScheduleResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeMonitoringScheduleResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the monitoring job was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline DescribeMonitoringScheduleResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DescribeMonitoringScheduleResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration object that specifies the monitoring schedule and defines
     * the monitoring job.</p>
     */
    inline const MonitoringScheduleConfig& GetMonitoringScheduleConfig() const{ return m_monitoringScheduleConfig; }
    inline void SetMonitoringScheduleConfig(const MonitoringScheduleConfig& value) { m_monitoringScheduleConfig = value; }
    inline void SetMonitoringScheduleConfig(MonitoringScheduleConfig&& value) { m_monitoringScheduleConfig = std::move(value); }
    inline DescribeMonitoringScheduleResult& WithMonitoringScheduleConfig(const MonitoringScheduleConfig& value) { SetMonitoringScheduleConfig(value); return *this;}
    inline DescribeMonitoringScheduleResult& WithMonitoringScheduleConfig(MonitoringScheduleConfig&& value) { SetMonitoringScheduleConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the endpoint for the monitoring job.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }
    inline void SetEndpointName(const Aws::String& value) { m_endpointName = value; }
    inline void SetEndpointName(Aws::String&& value) { m_endpointName = std::move(value); }
    inline void SetEndpointName(const char* value) { m_endpointName.assign(value); }
    inline DescribeMonitoringScheduleResult& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}
    inline DescribeMonitoringScheduleResult& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}
    inline DescribeMonitoringScheduleResult& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes metadata on the last execution to run, if there was one.</p>
     */
    inline const MonitoringExecutionSummary& GetLastMonitoringExecutionSummary() const{ return m_lastMonitoringExecutionSummary; }
    inline void SetLastMonitoringExecutionSummary(const MonitoringExecutionSummary& value) { m_lastMonitoringExecutionSummary = value; }
    inline void SetLastMonitoringExecutionSummary(MonitoringExecutionSummary&& value) { m_lastMonitoringExecutionSummary = std::move(value); }
    inline DescribeMonitoringScheduleResult& WithLastMonitoringExecutionSummary(const MonitoringExecutionSummary& value) { SetLastMonitoringExecutionSummary(value); return *this;}
    inline DescribeMonitoringScheduleResult& WithLastMonitoringExecutionSummary(MonitoringExecutionSummary&& value) { SetLastMonitoringExecutionSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeMonitoringScheduleResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeMonitoringScheduleResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeMonitoringScheduleResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_monitoringScheduleArn;

    Aws::String m_monitoringScheduleName;

    ScheduleStatus m_monitoringScheduleStatus;

    MonitoringType m_monitoringType;

    Aws::String m_failureReason;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    MonitoringScheduleConfig m_monitoringScheduleConfig;

    Aws::String m_endpointName;

    MonitoringExecutionSummary m_lastMonitoringExecutionSummary;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
