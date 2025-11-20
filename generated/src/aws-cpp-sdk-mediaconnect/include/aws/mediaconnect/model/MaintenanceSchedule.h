/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/WindowMaintenanceSchedule.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConnect {
namespace Model {

/**
 * <p>The details of the maintenance schedule.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/MaintenanceSchedule">AWS
 * API Reference</a></p>
 */
class MaintenanceSchedule {
 public:
  AWS_MEDIACONNECT_API MaintenanceSchedule() = default;
  AWS_MEDIACONNECT_API MaintenanceSchedule(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API MaintenanceSchedule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const WindowMaintenanceSchedule& GetWindow() const { return m_window; }
  inline bool WindowHasBeenSet() const { return m_windowHasBeenSet; }
  template <typename WindowT = WindowMaintenanceSchedule>
  void SetWindow(WindowT&& value) {
    m_windowHasBeenSet = true;
    m_window = std::forward<WindowT>(value);
  }
  template <typename WindowT = WindowMaintenanceSchedule>
  MaintenanceSchedule& WithWindow(WindowT&& value) {
    SetWindow(std::forward<WindowT>(value));
    return *this;
  }
  ///@}
 private:
  WindowMaintenanceSchedule m_window;
  bool m_windowHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
