/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmonitor/NetworkMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmonitor/model/MonitorState.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace NetworkMonitor
{
namespace Model
{

  /**
   * <p>Displays summary information about a monitor.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmonitor-2023-08-01/MonitorSummary">AWS
   * API Reference</a></p>
   */
  class MonitorSummary
  {
  public:
    AWS_NETWORKMONITOR_API MonitorSummary() = default;
    AWS_NETWORKMONITOR_API MonitorSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMONITOR_API MonitorSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the monitor.</p>
     */
    inline const Aws::String& GetMonitorArn() const { return m_monitorArn; }
    inline bool MonitorArnHasBeenSet() const { return m_monitorArnHasBeenSet; }
    template<typename MonitorArnT = Aws::String>
    void SetMonitorArn(MonitorArnT&& value) { m_monitorArnHasBeenSet = true; m_monitorArn = std::forward<MonitorArnT>(value); }
    template<typename MonitorArnT = Aws::String>
    MonitorSummary& WithMonitorArn(MonitorArnT&& value) { SetMonitorArn(std::forward<MonitorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the monitor.</p>
     */
    inline const Aws::String& GetMonitorName() const { return m_monitorName; }
    inline bool MonitorNameHasBeenSet() const { return m_monitorNameHasBeenSet; }
    template<typename MonitorNameT = Aws::String>
    void SetMonitorName(MonitorNameT&& value) { m_monitorNameHasBeenSet = true; m_monitorName = std::forward<MonitorNameT>(value); }
    template<typename MonitorNameT = Aws::String>
    MonitorSummary& WithMonitorName(MonitorNameT&& value) { SetMonitorName(std::forward<MonitorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the monitor.</p>
     */
    inline MonitorState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(MonitorState value) { m_stateHasBeenSet = true; m_state = value; }
    inline MonitorSummary& WithState(MonitorState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time, in seconds, that metrics are collected and sent to Amazon
     * CloudWatch. Valid values are either <code>30</code> or <code>60</code>.</p>
     */
    inline long long GetAggregationPeriod() const { return m_aggregationPeriod; }
    inline bool AggregationPeriodHasBeenSet() const { return m_aggregationPeriodHasBeenSet; }
    inline void SetAggregationPeriod(long long value) { m_aggregationPeriodHasBeenSet = true; m_aggregationPeriod = value; }
    inline MonitorSummary& WithAggregationPeriod(long long value) { SetAggregationPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of key-value pairs assigned to the monitor.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    MonitorSummary& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    MonitorSummary& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_monitorArn;
    bool m_monitorArnHasBeenSet = false;

    Aws::String m_monitorName;
    bool m_monitorNameHasBeenSet = false;

    MonitorState m_state{MonitorState::NOT_SET};
    bool m_stateHasBeenSet = false;

    long long m_aggregationPeriod{0};
    bool m_aggregationPeriodHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkMonitor
} // namespace Aws
