/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ScheduleConfig.h>
#include <aws/sagemaker/model/MonitoringJobDefinition.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/MonitoringType.h>
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
   * <p>Configures the monitoring schedule and defines the monitoring
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MonitoringScheduleConfig">AWS
   * API Reference</a></p>
   */
  class MonitoringScheduleConfig
  {
  public:
    AWS_SAGEMAKER_API MonitoringScheduleConfig() = default;
    AWS_SAGEMAKER_API MonitoringScheduleConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MonitoringScheduleConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configures the monitoring schedule.</p>
     */
    inline const ScheduleConfig& GetScheduleConfig() const { return m_scheduleConfig; }
    inline bool ScheduleConfigHasBeenSet() const { return m_scheduleConfigHasBeenSet; }
    template<typename ScheduleConfigT = ScheduleConfig>
    void SetScheduleConfig(ScheduleConfigT&& value) { m_scheduleConfigHasBeenSet = true; m_scheduleConfig = std::forward<ScheduleConfigT>(value); }
    template<typename ScheduleConfigT = ScheduleConfig>
    MonitoringScheduleConfig& WithScheduleConfig(ScheduleConfigT&& value) { SetScheduleConfig(std::forward<ScheduleConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the monitoring job.</p>
     */
    inline const MonitoringJobDefinition& GetMonitoringJobDefinition() const { return m_monitoringJobDefinition; }
    inline bool MonitoringJobDefinitionHasBeenSet() const { return m_monitoringJobDefinitionHasBeenSet; }
    template<typename MonitoringJobDefinitionT = MonitoringJobDefinition>
    void SetMonitoringJobDefinition(MonitoringJobDefinitionT&& value) { m_monitoringJobDefinitionHasBeenSet = true; m_monitoringJobDefinition = std::forward<MonitoringJobDefinitionT>(value); }
    template<typename MonitoringJobDefinitionT = MonitoringJobDefinition>
    MonitoringScheduleConfig& WithMonitoringJobDefinition(MonitoringJobDefinitionT&& value) { SetMonitoringJobDefinition(std::forward<MonitoringJobDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the monitoring job definition to schedule.</p>
     */
    inline const Aws::String& GetMonitoringJobDefinitionName() const { return m_monitoringJobDefinitionName; }
    inline bool MonitoringJobDefinitionNameHasBeenSet() const { return m_monitoringJobDefinitionNameHasBeenSet; }
    template<typename MonitoringJobDefinitionNameT = Aws::String>
    void SetMonitoringJobDefinitionName(MonitoringJobDefinitionNameT&& value) { m_monitoringJobDefinitionNameHasBeenSet = true; m_monitoringJobDefinitionName = std::forward<MonitoringJobDefinitionNameT>(value); }
    template<typename MonitoringJobDefinitionNameT = Aws::String>
    MonitoringScheduleConfig& WithMonitoringJobDefinitionName(MonitoringJobDefinitionNameT&& value) { SetMonitoringJobDefinitionName(std::forward<MonitoringJobDefinitionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the monitoring job definition to schedule.</p>
     */
    inline MonitoringType GetMonitoringType() const { return m_monitoringType; }
    inline bool MonitoringTypeHasBeenSet() const { return m_monitoringTypeHasBeenSet; }
    inline void SetMonitoringType(MonitoringType value) { m_monitoringTypeHasBeenSet = true; m_monitoringType = value; }
    inline MonitoringScheduleConfig& WithMonitoringType(MonitoringType value) { SetMonitoringType(value); return *this;}
    ///@}
  private:

    ScheduleConfig m_scheduleConfig;
    bool m_scheduleConfigHasBeenSet = false;

    MonitoringJobDefinition m_monitoringJobDefinition;
    bool m_monitoringJobDefinitionHasBeenSet = false;

    Aws::String m_monitoringJobDefinitionName;
    bool m_monitoringJobDefinitionNameHasBeenSet = false;

    MonitoringType m_monitoringType{MonitoringType::NOT_SET};
    bool m_monitoringTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
