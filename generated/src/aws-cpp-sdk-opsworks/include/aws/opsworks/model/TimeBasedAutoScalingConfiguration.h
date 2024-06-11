/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/WeeklyAutoScalingSchedule.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes an instance's time-based auto scaling configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/TimeBasedAutoScalingConfiguration">AWS
   * API Reference</a></p>
   */
  class TimeBasedAutoScalingConfiguration
  {
  public:
    AWS_OPSWORKS_API TimeBasedAutoScalingConfiguration();
    AWS_OPSWORKS_API TimeBasedAutoScalingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API TimeBasedAutoScalingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The instance ID.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline TimeBasedAutoScalingConfiguration& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline TimeBasedAutoScalingConfiguration& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline TimeBasedAutoScalingConfiguration& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>WeeklyAutoScalingSchedule</code> object with the instance
     * schedule.</p>
     */
    inline const WeeklyAutoScalingSchedule& GetAutoScalingSchedule() const{ return m_autoScalingSchedule; }
    inline bool AutoScalingScheduleHasBeenSet() const { return m_autoScalingScheduleHasBeenSet; }
    inline void SetAutoScalingSchedule(const WeeklyAutoScalingSchedule& value) { m_autoScalingScheduleHasBeenSet = true; m_autoScalingSchedule = value; }
    inline void SetAutoScalingSchedule(WeeklyAutoScalingSchedule&& value) { m_autoScalingScheduleHasBeenSet = true; m_autoScalingSchedule = std::move(value); }
    inline TimeBasedAutoScalingConfiguration& WithAutoScalingSchedule(const WeeklyAutoScalingSchedule& value) { SetAutoScalingSchedule(value); return *this;}
    inline TimeBasedAutoScalingConfiguration& WithAutoScalingSchedule(WeeklyAutoScalingSchedule&& value) { SetAutoScalingSchedule(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    WeeklyAutoScalingSchedule m_autoScalingSchedule;
    bool m_autoScalingScheduleHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
