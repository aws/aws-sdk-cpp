/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmonitor/NetworkMonitor_EXPORTS.h>
#include <aws/networkmonitor/NetworkMonitorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace NetworkMonitor
{
namespace Model
{

  /**
   */
  class UpdateMonitorRequest : public NetworkMonitorRequest
  {
  public:
    AWS_NETWORKMONITOR_API UpdateMonitorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMonitor"; }

    AWS_NETWORKMONITOR_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the monitor to update. Run <code>ListMonitors</code> to get a
     * list of monitor names.</p>
     */
    inline const Aws::String& GetMonitorName() const{ return m_monitorName; }

    /**
     * <p>The name of the monitor to update. Run <code>ListMonitors</code> to get a
     * list of monitor names.</p>
     */
    inline bool MonitorNameHasBeenSet() const { return m_monitorNameHasBeenSet; }

    /**
     * <p>The name of the monitor to update. Run <code>ListMonitors</code> to get a
     * list of monitor names.</p>
     */
    inline void SetMonitorName(const Aws::String& value) { m_monitorNameHasBeenSet = true; m_monitorName = value; }

    /**
     * <p>The name of the monitor to update. Run <code>ListMonitors</code> to get a
     * list of monitor names.</p>
     */
    inline void SetMonitorName(Aws::String&& value) { m_monitorNameHasBeenSet = true; m_monitorName = std::move(value); }

    /**
     * <p>The name of the monitor to update. Run <code>ListMonitors</code> to get a
     * list of monitor names.</p>
     */
    inline void SetMonitorName(const char* value) { m_monitorNameHasBeenSet = true; m_monitorName.assign(value); }

    /**
     * <p>The name of the monitor to update. Run <code>ListMonitors</code> to get a
     * list of monitor names.</p>
     */
    inline UpdateMonitorRequest& WithMonitorName(const Aws::String& value) { SetMonitorName(value); return *this;}

    /**
     * <p>The name of the monitor to update. Run <code>ListMonitors</code> to get a
     * list of monitor names.</p>
     */
    inline UpdateMonitorRequest& WithMonitorName(Aws::String&& value) { SetMonitorName(std::move(value)); return *this;}

    /**
     * <p>The name of the monitor to update. Run <code>ListMonitors</code> to get a
     * list of monitor names.</p>
     */
    inline UpdateMonitorRequest& WithMonitorName(const char* value) { SetMonitorName(value); return *this;}


    /**
     * <p>The aggregation time, in seconds, to change to. This must be either
     * <code>30</code> or <code>60</code>. </p>
     */
    inline long long GetAggregationPeriod() const{ return m_aggregationPeriod; }

    /**
     * <p>The aggregation time, in seconds, to change to. This must be either
     * <code>30</code> or <code>60</code>. </p>
     */
    inline bool AggregationPeriodHasBeenSet() const { return m_aggregationPeriodHasBeenSet; }

    /**
     * <p>The aggregation time, in seconds, to change to. This must be either
     * <code>30</code> or <code>60</code>. </p>
     */
    inline void SetAggregationPeriod(long long value) { m_aggregationPeriodHasBeenSet = true; m_aggregationPeriod = value; }

    /**
     * <p>The aggregation time, in seconds, to change to. This must be either
     * <code>30</code> or <code>60</code>. </p>
     */
    inline UpdateMonitorRequest& WithAggregationPeriod(long long value) { SetAggregationPeriod(value); return *this;}

  private:

    Aws::String m_monitorName;
    bool m_monitorNameHasBeenSet = false;

    long long m_aggregationPeriod;
    bool m_aggregationPeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkMonitor
} // namespace Aws
