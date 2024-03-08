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
    AWS_NETWORKMONITOR_API MonitorSummary();
    AWS_NETWORKMONITOR_API MonitorSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMONITOR_API MonitorSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the monitor.</p>
     */
    inline const Aws::String& GetMonitorArn() const{ return m_monitorArn; }

    /**
     * <p>The ARN of the monitor.</p>
     */
    inline bool MonitorArnHasBeenSet() const { return m_monitorArnHasBeenSet; }

    /**
     * <p>The ARN of the monitor.</p>
     */
    inline void SetMonitorArn(const Aws::String& value) { m_monitorArnHasBeenSet = true; m_monitorArn = value; }

    /**
     * <p>The ARN of the monitor.</p>
     */
    inline void SetMonitorArn(Aws::String&& value) { m_monitorArnHasBeenSet = true; m_monitorArn = std::move(value); }

    /**
     * <p>The ARN of the monitor.</p>
     */
    inline void SetMonitorArn(const char* value) { m_monitorArnHasBeenSet = true; m_monitorArn.assign(value); }

    /**
     * <p>The ARN of the monitor.</p>
     */
    inline MonitorSummary& WithMonitorArn(const Aws::String& value) { SetMonitorArn(value); return *this;}

    /**
     * <p>The ARN of the monitor.</p>
     */
    inline MonitorSummary& WithMonitorArn(Aws::String&& value) { SetMonitorArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the monitor.</p>
     */
    inline MonitorSummary& WithMonitorArn(const char* value) { SetMonitorArn(value); return *this;}


    /**
     * <p>The name of the monitor.</p>
     */
    inline const Aws::String& GetMonitorName() const{ return m_monitorName; }

    /**
     * <p>The name of the monitor.</p>
     */
    inline bool MonitorNameHasBeenSet() const { return m_monitorNameHasBeenSet; }

    /**
     * <p>The name of the monitor.</p>
     */
    inline void SetMonitorName(const Aws::String& value) { m_monitorNameHasBeenSet = true; m_monitorName = value; }

    /**
     * <p>The name of the monitor.</p>
     */
    inline void SetMonitorName(Aws::String&& value) { m_monitorNameHasBeenSet = true; m_monitorName = std::move(value); }

    /**
     * <p>The name of the monitor.</p>
     */
    inline void SetMonitorName(const char* value) { m_monitorNameHasBeenSet = true; m_monitorName.assign(value); }

    /**
     * <p>The name of the monitor.</p>
     */
    inline MonitorSummary& WithMonitorName(const Aws::String& value) { SetMonitorName(value); return *this;}

    /**
     * <p>The name of the monitor.</p>
     */
    inline MonitorSummary& WithMonitorName(Aws::String&& value) { SetMonitorName(std::move(value)); return *this;}

    /**
     * <p>The name of the monitor.</p>
     */
    inline MonitorSummary& WithMonitorName(const char* value) { SetMonitorName(value); return *this;}


    /**
     * <p>The state of the monitor.</p>
     */
    inline const MonitorState& GetState() const{ return m_state; }

    /**
     * <p>The state of the monitor.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the monitor.</p>
     */
    inline void SetState(const MonitorState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the monitor.</p>
     */
    inline void SetState(MonitorState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the monitor.</p>
     */
    inline MonitorSummary& WithState(const MonitorState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the monitor.</p>
     */
    inline MonitorSummary& WithState(MonitorState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The time, in seconds, that metrics are collected and sent to Amazon
     * CloudWatch. Valid values are either <code>30</code> or <code>60</code>.</p>
     */
    inline long long GetAggregationPeriod() const{ return m_aggregationPeriod; }

    /**
     * <p>The time, in seconds, that metrics are collected and sent to Amazon
     * CloudWatch. Valid values are either <code>30</code> or <code>60</code>.</p>
     */
    inline bool AggregationPeriodHasBeenSet() const { return m_aggregationPeriodHasBeenSet; }

    /**
     * <p>The time, in seconds, that metrics are collected and sent to Amazon
     * CloudWatch. Valid values are either <code>30</code> or <code>60</code>.</p>
     */
    inline void SetAggregationPeriod(long long value) { m_aggregationPeriodHasBeenSet = true; m_aggregationPeriod = value; }

    /**
     * <p>The time, in seconds, that metrics are collected and sent to Amazon
     * CloudWatch. Valid values are either <code>30</code> or <code>60</code>.</p>
     */
    inline MonitorSummary& WithAggregationPeriod(long long value) { SetAggregationPeriod(value); return *this;}


    /**
     * <p>The list of key-value pairs assigned to the monitor.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of key-value pairs assigned to the monitor.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of key-value pairs assigned to the monitor.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of key-value pairs assigned to the monitor.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of key-value pairs assigned to the monitor.</p>
     */
    inline MonitorSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of key-value pairs assigned to the monitor.</p>
     */
    inline MonitorSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of key-value pairs assigned to the monitor.</p>
     */
    inline MonitorSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The list of key-value pairs assigned to the monitor.</p>
     */
    inline MonitorSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of key-value pairs assigned to the monitor.</p>
     */
    inline MonitorSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of key-value pairs assigned to the monitor.</p>
     */
    inline MonitorSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of key-value pairs assigned to the monitor.</p>
     */
    inline MonitorSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of key-value pairs assigned to the monitor.</p>
     */
    inline MonitorSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of key-value pairs assigned to the monitor.</p>
     */
    inline MonitorSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_monitorArn;
    bool m_monitorArnHasBeenSet = false;

    Aws::String m_monitorName;
    bool m_monitorNameHasBeenSet = false;

    MonitorState m_state;
    bool m_stateHasBeenSet = false;

    long long m_aggregationPeriod;
    bool m_aggregationPeriodHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkMonitor
} // namespace Aws
