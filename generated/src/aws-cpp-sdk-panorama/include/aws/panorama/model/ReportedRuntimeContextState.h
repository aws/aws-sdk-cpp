/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/panorama/model/DesiredState.h>
#include <aws/panorama/model/DeviceReportedStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace Panorama
{
namespace Model
{

  /**
   * <p>An application instance's state.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ReportedRuntimeContextState">AWS
   * API Reference</a></p>
   */
  class ReportedRuntimeContextState
  {
  public:
    AWS_PANORAMA_API ReportedRuntimeContextState() = default;
    AWS_PANORAMA_API ReportedRuntimeContextState(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API ReportedRuntimeContextState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The application's desired state.</p>
     */
    inline DesiredState GetDesiredState() const { return m_desiredState; }
    inline bool DesiredStateHasBeenSet() const { return m_desiredStateHasBeenSet; }
    inline void SetDesiredState(DesiredState value) { m_desiredStateHasBeenSet = true; m_desiredState = value; }
    inline ReportedRuntimeContextState& WithDesiredState(DesiredState value) { SetDesiredState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application's reported status.</p>
     */
    inline DeviceReportedStatus GetDeviceReportedStatus() const { return m_deviceReportedStatus; }
    inline bool DeviceReportedStatusHasBeenSet() const { return m_deviceReportedStatusHasBeenSet; }
    inline void SetDeviceReportedStatus(DeviceReportedStatus value) { m_deviceReportedStatusHasBeenSet = true; m_deviceReportedStatus = value; }
    inline ReportedRuntimeContextState& WithDeviceReportedStatus(DeviceReportedStatus value) { SetDeviceReportedStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the device reported the application's state.</p>
     */
    inline const Aws::Utils::DateTime& GetDeviceReportedTime() const { return m_deviceReportedTime; }
    inline bool DeviceReportedTimeHasBeenSet() const { return m_deviceReportedTimeHasBeenSet; }
    template<typename DeviceReportedTimeT = Aws::Utils::DateTime>
    void SetDeviceReportedTime(DeviceReportedTimeT&& value) { m_deviceReportedTimeHasBeenSet = true; m_deviceReportedTime = std::forward<DeviceReportedTimeT>(value); }
    template<typename DeviceReportedTimeT = Aws::Utils::DateTime>
    ReportedRuntimeContextState& WithDeviceReportedTime(DeviceReportedTimeT&& value) { SetDeviceReportedTime(std::forward<DeviceReportedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device's name.</p>
     */
    inline const Aws::String& GetRuntimeContextName() const { return m_runtimeContextName; }
    inline bool RuntimeContextNameHasBeenSet() const { return m_runtimeContextNameHasBeenSet; }
    template<typename RuntimeContextNameT = Aws::String>
    void SetRuntimeContextName(RuntimeContextNameT&& value) { m_runtimeContextNameHasBeenSet = true; m_runtimeContextName = std::forward<RuntimeContextNameT>(value); }
    template<typename RuntimeContextNameT = Aws::String>
    ReportedRuntimeContextState& WithRuntimeContextName(RuntimeContextNameT&& value) { SetRuntimeContextName(std::forward<RuntimeContextNameT>(value)); return *this;}
    ///@}
  private:

    DesiredState m_desiredState{DesiredState::NOT_SET};
    bool m_desiredStateHasBeenSet = false;

    DeviceReportedStatus m_deviceReportedStatus{DeviceReportedStatus::NOT_SET};
    bool m_deviceReportedStatusHasBeenSet = false;

    Aws::Utils::DateTime m_deviceReportedTime{};
    bool m_deviceReportedTimeHasBeenSet = false;

    Aws::String m_runtimeContextName;
    bool m_runtimeContextNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
