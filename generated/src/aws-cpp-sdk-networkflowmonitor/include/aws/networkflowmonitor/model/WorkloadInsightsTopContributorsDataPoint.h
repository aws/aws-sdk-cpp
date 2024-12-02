/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace NetworkFlowMonitor
{
namespace Model
{

  /**
   * <p>A data point for a top contributor network flow in a scope. Network Flow
   * Monitor returns information about the network flows with the top values for each
   * metric type, which are called top contributors.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/WorkloadInsightsTopContributorsDataPoint">AWS
   * API Reference</a></p>
   */
  class WorkloadInsightsTopContributorsDataPoint
  {
  public:
    AWS_NETWORKFLOWMONITOR_API WorkloadInsightsTopContributorsDataPoint();
    AWS_NETWORKFLOWMONITOR_API WorkloadInsightsTopContributorsDataPoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API WorkloadInsightsTopContributorsDataPoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of the timestamps for the data point.</p>
     */
    inline const Aws::Vector<Aws::Utils::DateTime>& GetTimestamps() const{ return m_timestamps; }
    inline bool TimestampsHasBeenSet() const { return m_timestampsHasBeenSet; }
    inline void SetTimestamps(const Aws::Vector<Aws::Utils::DateTime>& value) { m_timestampsHasBeenSet = true; m_timestamps = value; }
    inline void SetTimestamps(Aws::Vector<Aws::Utils::DateTime>&& value) { m_timestampsHasBeenSet = true; m_timestamps = std::move(value); }
    inline WorkloadInsightsTopContributorsDataPoint& WithTimestamps(const Aws::Vector<Aws::Utils::DateTime>& value) { SetTimestamps(value); return *this;}
    inline WorkloadInsightsTopContributorsDataPoint& WithTimestamps(Aws::Vector<Aws::Utils::DateTime>&& value) { SetTimestamps(std::move(value)); return *this;}
    inline WorkloadInsightsTopContributorsDataPoint& AddTimestamps(const Aws::Utils::DateTime& value) { m_timestampsHasBeenSet = true; m_timestamps.push_back(value); return *this; }
    inline WorkloadInsightsTopContributorsDataPoint& AddTimestamps(Aws::Utils::DateTime&& value) { m_timestampsHasBeenSet = true; m_timestamps.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The values for the data point.</p>
     */
    inline const Aws::Vector<double>& GetValues() const{ return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    inline void SetValues(const Aws::Vector<double>& value) { m_valuesHasBeenSet = true; m_values = value; }
    inline void SetValues(Aws::Vector<double>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }
    inline WorkloadInsightsTopContributorsDataPoint& WithValues(const Aws::Vector<double>& value) { SetValues(value); return *this;}
    inline WorkloadInsightsTopContributorsDataPoint& WithValues(Aws::Vector<double>&& value) { SetValues(std::move(value)); return *this;}
    inline WorkloadInsightsTopContributorsDataPoint& AddValues(double value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The label identifying the data point.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }
    inline WorkloadInsightsTopContributorsDataPoint& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}
    inline WorkloadInsightsTopContributorsDataPoint& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}
    inline WorkloadInsightsTopContributorsDataPoint& WithLabel(const char* value) { SetLabel(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::Utils::DateTime> m_timestamps;
    bool m_timestampsHasBeenSet = false;

    Aws::Vector<double> m_values;
    bool m_valuesHasBeenSet = false;

    Aws::String m_label;
    bool m_labelHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
