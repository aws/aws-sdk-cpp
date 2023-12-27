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
  class DeleteProbeRequest : public NetworkMonitorRequest
  {
  public:
    AWS_NETWORKMONITOR_API DeleteProbeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteProbe"; }

    AWS_NETWORKMONITOR_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the monitor to delete. For a list of the available monitors, use
     * the <code>ListMonitors</code> action.</p>
     */
    inline const Aws::String& GetMonitorName() const{ return m_monitorName; }

    /**
     * <p>The name of the monitor to delete. For a list of the available monitors, use
     * the <code>ListMonitors</code> action.</p>
     */
    inline bool MonitorNameHasBeenSet() const { return m_monitorNameHasBeenSet; }

    /**
     * <p>The name of the monitor to delete. For a list of the available monitors, use
     * the <code>ListMonitors</code> action.</p>
     */
    inline void SetMonitorName(const Aws::String& value) { m_monitorNameHasBeenSet = true; m_monitorName = value; }

    /**
     * <p>The name of the monitor to delete. For a list of the available monitors, use
     * the <code>ListMonitors</code> action.</p>
     */
    inline void SetMonitorName(Aws::String&& value) { m_monitorNameHasBeenSet = true; m_monitorName = std::move(value); }

    /**
     * <p>The name of the monitor to delete. For a list of the available monitors, use
     * the <code>ListMonitors</code> action.</p>
     */
    inline void SetMonitorName(const char* value) { m_monitorNameHasBeenSet = true; m_monitorName.assign(value); }

    /**
     * <p>The name of the monitor to delete. For a list of the available monitors, use
     * the <code>ListMonitors</code> action.</p>
     */
    inline DeleteProbeRequest& WithMonitorName(const Aws::String& value) { SetMonitorName(value); return *this;}

    /**
     * <p>The name of the monitor to delete. For a list of the available monitors, use
     * the <code>ListMonitors</code> action.</p>
     */
    inline DeleteProbeRequest& WithMonitorName(Aws::String&& value) { SetMonitorName(std::move(value)); return *this;}

    /**
     * <p>The name of the monitor to delete. For a list of the available monitors, use
     * the <code>ListMonitors</code> action.</p>
     */
    inline DeleteProbeRequest& WithMonitorName(const char* value) { SetMonitorName(value); return *this;}


    /**
     * <p>The ID of the probe to delete. Run <code>GetMonitor</code> to get a lst of
     * all probes and probe IDs associated with the monitor.</p>
     */
    inline const Aws::String& GetProbeId() const{ return m_probeId; }

    /**
     * <p>The ID of the probe to delete. Run <code>GetMonitor</code> to get a lst of
     * all probes and probe IDs associated with the monitor.</p>
     */
    inline bool ProbeIdHasBeenSet() const { return m_probeIdHasBeenSet; }

    /**
     * <p>The ID of the probe to delete. Run <code>GetMonitor</code> to get a lst of
     * all probes and probe IDs associated with the monitor.</p>
     */
    inline void SetProbeId(const Aws::String& value) { m_probeIdHasBeenSet = true; m_probeId = value; }

    /**
     * <p>The ID of the probe to delete. Run <code>GetMonitor</code> to get a lst of
     * all probes and probe IDs associated with the monitor.</p>
     */
    inline void SetProbeId(Aws::String&& value) { m_probeIdHasBeenSet = true; m_probeId = std::move(value); }

    /**
     * <p>The ID of the probe to delete. Run <code>GetMonitor</code> to get a lst of
     * all probes and probe IDs associated with the monitor.</p>
     */
    inline void SetProbeId(const char* value) { m_probeIdHasBeenSet = true; m_probeId.assign(value); }

    /**
     * <p>The ID of the probe to delete. Run <code>GetMonitor</code> to get a lst of
     * all probes and probe IDs associated with the monitor.</p>
     */
    inline DeleteProbeRequest& WithProbeId(const Aws::String& value) { SetProbeId(value); return *this;}

    /**
     * <p>The ID of the probe to delete. Run <code>GetMonitor</code> to get a lst of
     * all probes and probe IDs associated with the monitor.</p>
     */
    inline DeleteProbeRequest& WithProbeId(Aws::String&& value) { SetProbeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the probe to delete. Run <code>GetMonitor</code> to get a lst of
     * all probes and probe IDs associated with the monitor.</p>
     */
    inline DeleteProbeRequest& WithProbeId(const char* value) { SetProbeId(value); return *this;}

  private:

    Aws::String m_monitorName;
    bool m_monitorNameHasBeenSet = false;

    Aws::String m_probeId;
    bool m_probeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkMonitor
} // namespace Aws
