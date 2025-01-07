/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkflowmonitor/model/MonitorStatus.h>
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
   * <p>A summary of information about a monitor, includ the ARN, the name, and the
   * status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/MonitorSummary">AWS
   * API Reference</a></p>
   */
  class MonitorSummary
  {
  public:
    AWS_NETWORKFLOWMONITOR_API MonitorSummary();
    AWS_NETWORKFLOWMONITOR_API MonitorSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API MonitorSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the monitor.</p>
     */
    inline const Aws::String& GetMonitorArn() const{ return m_monitorArn; }
    inline bool MonitorArnHasBeenSet() const { return m_monitorArnHasBeenSet; }
    inline void SetMonitorArn(const Aws::String& value) { m_monitorArnHasBeenSet = true; m_monitorArn = value; }
    inline void SetMonitorArn(Aws::String&& value) { m_monitorArnHasBeenSet = true; m_monitorArn = std::move(value); }
    inline void SetMonitorArn(const char* value) { m_monitorArnHasBeenSet = true; m_monitorArn.assign(value); }
    inline MonitorSummary& WithMonitorArn(const Aws::String& value) { SetMonitorArn(value); return *this;}
    inline MonitorSummary& WithMonitorArn(Aws::String&& value) { SetMonitorArn(std::move(value)); return *this;}
    inline MonitorSummary& WithMonitorArn(const char* value) { SetMonitorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the monitor.</p>
     */
    inline const Aws::String& GetMonitorName() const{ return m_monitorName; }
    inline bool MonitorNameHasBeenSet() const { return m_monitorNameHasBeenSet; }
    inline void SetMonitorName(const Aws::String& value) { m_monitorNameHasBeenSet = true; m_monitorName = value; }
    inline void SetMonitorName(Aws::String&& value) { m_monitorNameHasBeenSet = true; m_monitorName = std::move(value); }
    inline void SetMonitorName(const char* value) { m_monitorNameHasBeenSet = true; m_monitorName.assign(value); }
    inline MonitorSummary& WithMonitorName(const Aws::String& value) { SetMonitorName(value); return *this;}
    inline MonitorSummary& WithMonitorName(Aws::String&& value) { SetMonitorName(std::move(value)); return *this;}
    inline MonitorSummary& WithMonitorName(const char* value) { SetMonitorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a monitor. The status can be one of the following</p> <ul> <li>
     * <p> <code>PENDING</code>: The monitor is in the process of being created.</p>
     * </li> <li> <p> <code>ACTIVE</code>: The monitor is active.</p> </li> <li> <p>
     * <code>INACTIVE</code>: The monitor is inactive.</p> </li> <li> <p>
     * <code>ERROR</code>: Monitor creation failed due to an error.</p> </li> <li> <p>
     * <code>DELETING</code>: The monitor is in the process of being deleted.</p> </li>
     * </ul>
     */
    inline const MonitorStatus& GetMonitorStatus() const{ return m_monitorStatus; }
    inline bool MonitorStatusHasBeenSet() const { return m_monitorStatusHasBeenSet; }
    inline void SetMonitorStatus(const MonitorStatus& value) { m_monitorStatusHasBeenSet = true; m_monitorStatus = value; }
    inline void SetMonitorStatus(MonitorStatus&& value) { m_monitorStatusHasBeenSet = true; m_monitorStatus = std::move(value); }
    inline MonitorSummary& WithMonitorStatus(const MonitorStatus& value) { SetMonitorStatus(value); return *this;}
    inline MonitorSummary& WithMonitorStatus(MonitorStatus&& value) { SetMonitorStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_monitorArn;
    bool m_monitorArnHasBeenSet = false;

    Aws::String m_monitorName;
    bool m_monitorNameHasBeenSet = false;

    MonitorStatus m_monitorStatus;
    bool m_monitorStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
