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
  class GetProbeRequest : public NetworkMonitorRequest
  {
  public:
    AWS_NETWORKMONITOR_API GetProbeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetProbe"; }

    AWS_NETWORKMONITOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the monitor associated with the probe. Run
     * <code>ListMonitors</code> to get a list of monitor names.</p>
     */
    inline const Aws::String& GetMonitorName() const { return m_monitorName; }
    inline bool MonitorNameHasBeenSet() const { return m_monitorNameHasBeenSet; }
    template<typename MonitorNameT = Aws::String>
    void SetMonitorName(MonitorNameT&& value) { m_monitorNameHasBeenSet = true; m_monitorName = std::forward<MonitorNameT>(value); }
    template<typename MonitorNameT = Aws::String>
    GetProbeRequest& WithMonitorName(MonitorNameT&& value) { SetMonitorName(std::forward<MonitorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the probe to get information about. Run <code>GetMonitor</code>
     * action to get a list of probes and probe IDs for the monitor.</p>
     */
    inline const Aws::String& GetProbeId() const { return m_probeId; }
    inline bool ProbeIdHasBeenSet() const { return m_probeIdHasBeenSet; }
    template<typename ProbeIdT = Aws::String>
    void SetProbeId(ProbeIdT&& value) { m_probeIdHasBeenSet = true; m_probeId = std::forward<ProbeIdT>(value); }
    template<typename ProbeIdT = Aws::String>
    GetProbeRequest& WithProbeId(ProbeIdT&& value) { SetProbeId(std::forward<ProbeIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_monitorName;
    bool m_monitorNameHasBeenSet = false;

    Aws::String m_probeId;
    bool m_probeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkMonitor
} // namespace Aws
