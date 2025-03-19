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
    AWS_SAGEMAKER_API DescribeMonitoringScheduleResult() = default;
    AWS_SAGEMAKER_API DescribeMonitoringScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeMonitoringScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring schedule.</p>
     */
    inline const Aws::String& GetMonitoringScheduleArn() const { return m_monitoringScheduleArn; }
    template<typename MonitoringScheduleArnT = Aws::String>
    void SetMonitoringScheduleArn(MonitoringScheduleArnT&& value) { m_monitoringScheduleArnHasBeenSet = true; m_monitoringScheduleArn = std::forward<MonitoringScheduleArnT>(value); }
    template<typename MonitoringScheduleArnT = Aws::String>
    DescribeMonitoringScheduleResult& WithMonitoringScheduleArn(MonitoringScheduleArnT&& value) { SetMonitoringScheduleArn(std::forward<MonitoringScheduleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the monitoring schedule.</p>
     */
    inline const Aws::String& GetMonitoringScheduleName() const { return m_monitoringScheduleName; }
    template<typename MonitoringScheduleNameT = Aws::String>
    void SetMonitoringScheduleName(MonitoringScheduleNameT&& value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName = std::forward<MonitoringScheduleNameT>(value); }
    template<typename MonitoringScheduleNameT = Aws::String>
    DescribeMonitoringScheduleResult& WithMonitoringScheduleName(MonitoringScheduleNameT&& value) { SetMonitoringScheduleName(std::forward<MonitoringScheduleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of an monitoring job.</p>
     */
    inline ScheduleStatus GetMonitoringScheduleStatus() const { return m_monitoringScheduleStatus; }
    inline void SetMonitoringScheduleStatus(ScheduleStatus value) { m_monitoringScheduleStatusHasBeenSet = true; m_monitoringScheduleStatus = value; }
    inline DescribeMonitoringScheduleResult& WithMonitoringScheduleStatus(ScheduleStatus value) { SetMonitoringScheduleStatus(value); return *this;}
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
    inline MonitoringType GetMonitoringType() const { return m_monitoringType; }
    inline void SetMonitoringType(MonitoringType value) { m_monitoringTypeHasBeenSet = true; m_monitoringType = value; }
    inline DescribeMonitoringScheduleResult& WithMonitoringType(MonitoringType value) { SetMonitoringType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string, up to one KB in size, that contains the reason a monitoring job
     * failed, if it failed.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    DescribeMonitoringScheduleResult& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the monitoring job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeMonitoringScheduleResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the monitoring job was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DescribeMonitoringScheduleResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration object that specifies the monitoring schedule and defines
     * the monitoring job.</p>
     */
    inline const MonitoringScheduleConfig& GetMonitoringScheduleConfig() const { return m_monitoringScheduleConfig; }
    template<typename MonitoringScheduleConfigT = MonitoringScheduleConfig>
    void SetMonitoringScheduleConfig(MonitoringScheduleConfigT&& value) { m_monitoringScheduleConfigHasBeenSet = true; m_monitoringScheduleConfig = std::forward<MonitoringScheduleConfigT>(value); }
    template<typename MonitoringScheduleConfigT = MonitoringScheduleConfig>
    DescribeMonitoringScheduleResult& WithMonitoringScheduleConfig(MonitoringScheduleConfigT&& value) { SetMonitoringScheduleConfig(std::forward<MonitoringScheduleConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the endpoint for the monitoring job.</p>
     */
    inline const Aws::String& GetEndpointName() const { return m_endpointName; }
    template<typename EndpointNameT = Aws::String>
    void SetEndpointName(EndpointNameT&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::forward<EndpointNameT>(value); }
    template<typename EndpointNameT = Aws::String>
    DescribeMonitoringScheduleResult& WithEndpointName(EndpointNameT&& value) { SetEndpointName(std::forward<EndpointNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes metadata on the last execution to run, if there was one.</p>
     */
    inline const MonitoringExecutionSummary& GetLastMonitoringExecutionSummary() const { return m_lastMonitoringExecutionSummary; }
    template<typename LastMonitoringExecutionSummaryT = MonitoringExecutionSummary>
    void SetLastMonitoringExecutionSummary(LastMonitoringExecutionSummaryT&& value) { m_lastMonitoringExecutionSummaryHasBeenSet = true; m_lastMonitoringExecutionSummary = std::forward<LastMonitoringExecutionSummaryT>(value); }
    template<typename LastMonitoringExecutionSummaryT = MonitoringExecutionSummary>
    DescribeMonitoringScheduleResult& WithLastMonitoringExecutionSummary(LastMonitoringExecutionSummaryT&& value) { SetLastMonitoringExecutionSummary(std::forward<LastMonitoringExecutionSummaryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeMonitoringScheduleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_monitoringScheduleArn;
    bool m_monitoringScheduleArnHasBeenSet = false;

    Aws::String m_monitoringScheduleName;
    bool m_monitoringScheduleNameHasBeenSet = false;

    ScheduleStatus m_monitoringScheduleStatus{ScheduleStatus::NOT_SET};
    bool m_monitoringScheduleStatusHasBeenSet = false;

    MonitoringType m_monitoringType{MonitoringType::NOT_SET};
    bool m_monitoringTypeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    MonitoringScheduleConfig m_monitoringScheduleConfig;
    bool m_monitoringScheduleConfigHasBeenSet = false;

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    MonitoringExecutionSummary m_lastMonitoringExecutionSummary;
    bool m_lastMonitoringExecutionSummaryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
