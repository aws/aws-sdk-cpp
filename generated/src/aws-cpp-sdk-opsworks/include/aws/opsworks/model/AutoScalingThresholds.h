﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes a load-based auto scaling upscaling or downscaling threshold
   * configuration, which specifies when OpsWorks Stacks starts or stops load-based
   * instances.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/AutoScalingThresholds">AWS
   * API Reference</a></p>
   */
  class AutoScalingThresholds
  {
  public:
    AWS_OPSWORKS_API AutoScalingThresholds() = default;
    AWS_OPSWORKS_API AutoScalingThresholds(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API AutoScalingThresholds& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of instances to add or remove when the load exceeds a
     * threshold.</p>
     */
    inline int GetInstanceCount() const { return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline AutoScalingThresholds& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time, in minutes, that the load must exceed a threshold before
     * more instances are added or removed.</p>
     */
    inline int GetThresholdsWaitTime() const { return m_thresholdsWaitTime; }
    inline bool ThresholdsWaitTimeHasBeenSet() const { return m_thresholdsWaitTimeHasBeenSet; }
    inline void SetThresholdsWaitTime(int value) { m_thresholdsWaitTimeHasBeenSet = true; m_thresholdsWaitTime = value; }
    inline AutoScalingThresholds& WithThresholdsWaitTime(int value) { SetThresholdsWaitTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time (in minutes) after a scaling event occurs that OpsWorks
     * Stacks should ignore metrics and suppress additional scaling events. For
     * example, OpsWorks Stacks adds new instances following an upscaling event but the
     * instances won't start reducing the load until they have been booted and
     * configured. There is no point in raising additional scaling events during that
     * operation, which typically takes several minutes. <code>IgnoreMetricsTime</code>
     * allows you to direct OpsWorks Stacks to suppress scaling events long enough to
     * get the new instances online.</p>
     */
    inline int GetIgnoreMetricsTime() const { return m_ignoreMetricsTime; }
    inline bool IgnoreMetricsTimeHasBeenSet() const { return m_ignoreMetricsTimeHasBeenSet; }
    inline void SetIgnoreMetricsTime(int value) { m_ignoreMetricsTimeHasBeenSet = true; m_ignoreMetricsTime = value; }
    inline AutoScalingThresholds& WithIgnoreMetricsTime(int value) { SetIgnoreMetricsTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CPU utilization threshold, as a percent of the available CPU. A value of
     * -1 disables the threshold.</p>
     */
    inline double GetCpuThreshold() const { return m_cpuThreshold; }
    inline bool CpuThresholdHasBeenSet() const { return m_cpuThresholdHasBeenSet; }
    inline void SetCpuThreshold(double value) { m_cpuThresholdHasBeenSet = true; m_cpuThreshold = value; }
    inline AutoScalingThresholds& WithCpuThreshold(double value) { SetCpuThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The memory utilization threshold, as a percent of the available memory. A
     * value of -1 disables the threshold.</p>
     */
    inline double GetMemoryThreshold() const { return m_memoryThreshold; }
    inline bool MemoryThresholdHasBeenSet() const { return m_memoryThresholdHasBeenSet; }
    inline void SetMemoryThreshold(double value) { m_memoryThresholdHasBeenSet = true; m_memoryThreshold = value; }
    inline AutoScalingThresholds& WithMemoryThreshold(double value) { SetMemoryThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The load threshold. A value of -1 disables the threshold. For more
     * information about how load is computed, see <a
     * href="http://en.wikipedia.org/wiki/Load_%28computing%29">Load
     * (computing)</a>.</p>
     */
    inline double GetLoadThreshold() const { return m_loadThreshold; }
    inline bool LoadThresholdHasBeenSet() const { return m_loadThresholdHasBeenSet; }
    inline void SetLoadThreshold(double value) { m_loadThresholdHasBeenSet = true; m_loadThreshold = value; }
    inline AutoScalingThresholds& WithLoadThreshold(double value) { SetLoadThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Custom CloudWatch auto scaling alarms, to be used as thresholds. This
     * parameter takes a list of up to five alarm names, which are case sensitive and
     * must be in the same region as the stack.</p>  <p>To use custom alarms, you
     * must update your service role to allow <code>cloudwatch:DescribeAlarms</code>.
     * You can either have OpsWorks Stacks update the role for you when you first use
     * this feature or you can edit the role manually. For more information, see <a
     * href="https://docs.aws.amazon.com/opsworks/latest/userguide/opsworks-security-servicerole.html">Allowing
     * OpsWorks Stacks to Act on Your Behalf</a>.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetAlarms() const { return m_alarms; }
    inline bool AlarmsHasBeenSet() const { return m_alarmsHasBeenSet; }
    template<typename AlarmsT = Aws::Vector<Aws::String>>
    void SetAlarms(AlarmsT&& value) { m_alarmsHasBeenSet = true; m_alarms = std::forward<AlarmsT>(value); }
    template<typename AlarmsT = Aws::Vector<Aws::String>>
    AutoScalingThresholds& WithAlarms(AlarmsT&& value) { SetAlarms(std::forward<AlarmsT>(value)); return *this;}
    template<typename AlarmsT = Aws::String>
    AutoScalingThresholds& AddAlarms(AlarmsT&& value) { m_alarmsHasBeenSet = true; m_alarms.emplace_back(std::forward<AlarmsT>(value)); return *this; }
    ///@}
  private:

    int m_instanceCount{0};
    bool m_instanceCountHasBeenSet = false;

    int m_thresholdsWaitTime{0};
    bool m_thresholdsWaitTimeHasBeenSet = false;

    int m_ignoreMetricsTime{0};
    bool m_ignoreMetricsTimeHasBeenSet = false;

    double m_cpuThreshold{0.0};
    bool m_cpuThresholdHasBeenSet = false;

    double m_memoryThreshold{0.0};
    bool m_memoryThresholdHasBeenSet = false;

    double m_loadThreshold{0.0};
    bool m_loadThresholdHasBeenSet = false;

    Aws::Vector<Aws::String> m_alarms;
    bool m_alarmsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
