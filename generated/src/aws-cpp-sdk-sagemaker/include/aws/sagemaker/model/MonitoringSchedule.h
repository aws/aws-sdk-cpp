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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A schedule for a model monitoring job. For information about model monitor,
   * see <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/model-monitor.html">Amazon
   * SageMaker Model Monitor</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MonitoringSchedule">AWS
   * API Reference</a></p>
   */
  class MonitoringSchedule
  {
  public:
    AWS_SAGEMAKER_API MonitoringSchedule() = default;
    AWS_SAGEMAKER_API MonitoringSchedule(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MonitoringSchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the monitoring schedule.</p>
     */
    inline const Aws::String& GetMonitoringScheduleArn() const { return m_monitoringScheduleArn; }
    inline bool MonitoringScheduleArnHasBeenSet() const { return m_monitoringScheduleArnHasBeenSet; }
    template<typename MonitoringScheduleArnT = Aws::String>
    void SetMonitoringScheduleArn(MonitoringScheduleArnT&& value) { m_monitoringScheduleArnHasBeenSet = true; m_monitoringScheduleArn = std::forward<MonitoringScheduleArnT>(value); }
    template<typename MonitoringScheduleArnT = Aws::String>
    MonitoringSchedule& WithMonitoringScheduleArn(MonitoringScheduleArnT&& value) { SetMonitoringScheduleArn(std::forward<MonitoringScheduleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the monitoring schedule.</p>
     */
    inline const Aws::String& GetMonitoringScheduleName() const { return m_monitoringScheduleName; }
    inline bool MonitoringScheduleNameHasBeenSet() const { return m_monitoringScheduleNameHasBeenSet; }
    template<typename MonitoringScheduleNameT = Aws::String>
    void SetMonitoringScheduleName(MonitoringScheduleNameT&& value) { m_monitoringScheduleNameHasBeenSet = true; m_monitoringScheduleName = std::forward<MonitoringScheduleNameT>(value); }
    template<typename MonitoringScheduleNameT = Aws::String>
    MonitoringSchedule& WithMonitoringScheduleName(MonitoringScheduleNameT&& value) { SetMonitoringScheduleName(std::forward<MonitoringScheduleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the monitoring schedule. This can be one of the following
     * values.</p> <ul> <li> <p> <code>PENDING</code> - The schedule is pending being
     * created.</p> </li> <li> <p> <code>FAILED</code> - The schedule failed.</p> </li>
     * <li> <p> <code>SCHEDULED</code> - The schedule was successfully created.</p>
     * </li> <li> <p> <code>STOPPED</code> - The schedule was stopped.</p> </li> </ul>
     */
    inline ScheduleStatus GetMonitoringScheduleStatus() const { return m_monitoringScheduleStatus; }
    inline bool MonitoringScheduleStatusHasBeenSet() const { return m_monitoringScheduleStatusHasBeenSet; }
    inline void SetMonitoringScheduleStatus(ScheduleStatus value) { m_monitoringScheduleStatusHasBeenSet = true; m_monitoringScheduleStatus = value; }
    inline MonitoringSchedule& WithMonitoringScheduleStatus(ScheduleStatus value) { SetMonitoringScheduleStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the monitoring job definition to schedule.</p>
     */
    inline MonitoringType GetMonitoringType() const { return m_monitoringType; }
    inline bool MonitoringTypeHasBeenSet() const { return m_monitoringTypeHasBeenSet; }
    inline void SetMonitoringType(MonitoringType value) { m_monitoringTypeHasBeenSet = true; m_monitoringType = value; }
    inline MonitoringSchedule& WithMonitoringType(MonitoringType value) { SetMonitoringType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the monitoring schedule failed, the reason it failed.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    MonitoringSchedule& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the monitoring schedule was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    MonitoringSchedule& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the monitoring schedule was changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    MonitoringSchedule& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MonitoringScheduleConfig& GetMonitoringScheduleConfig() const { return m_monitoringScheduleConfig; }
    inline bool MonitoringScheduleConfigHasBeenSet() const { return m_monitoringScheduleConfigHasBeenSet; }
    template<typename MonitoringScheduleConfigT = MonitoringScheduleConfig>
    void SetMonitoringScheduleConfig(MonitoringScheduleConfigT&& value) { m_monitoringScheduleConfigHasBeenSet = true; m_monitoringScheduleConfig = std::forward<MonitoringScheduleConfigT>(value); }
    template<typename MonitoringScheduleConfigT = MonitoringScheduleConfig>
    MonitoringSchedule& WithMonitoringScheduleConfig(MonitoringScheduleConfigT&& value) { SetMonitoringScheduleConfig(std::forward<MonitoringScheduleConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The endpoint that hosts the model being monitored.</p>
     */
    inline const Aws::String& GetEndpointName() const { return m_endpointName; }
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }
    template<typename EndpointNameT = Aws::String>
    void SetEndpointName(EndpointNameT&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::forward<EndpointNameT>(value); }
    template<typename EndpointNameT = Aws::String>
    MonitoringSchedule& WithEndpointName(EndpointNameT&& value) { SetEndpointName(std::forward<EndpointNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MonitoringExecutionSummary& GetLastMonitoringExecutionSummary() const { return m_lastMonitoringExecutionSummary; }
    inline bool LastMonitoringExecutionSummaryHasBeenSet() const { return m_lastMonitoringExecutionSummaryHasBeenSet; }
    template<typename LastMonitoringExecutionSummaryT = MonitoringExecutionSummary>
    void SetLastMonitoringExecutionSummary(LastMonitoringExecutionSummaryT&& value) { m_lastMonitoringExecutionSummaryHasBeenSet = true; m_lastMonitoringExecutionSummary = std::forward<LastMonitoringExecutionSummaryT>(value); }
    template<typename LastMonitoringExecutionSummaryT = MonitoringExecutionSummary>
    MonitoringSchedule& WithLastMonitoringExecutionSummary(LastMonitoringExecutionSummaryT&& value) { SetLastMonitoringExecutionSummary(std::forward<LastMonitoringExecutionSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the tags associated with the monitoring schedlue. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services resources</a> in the <i>Amazon Web Services General
     * Reference Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    MonitoringSchedule& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    MonitoringSchedule& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
