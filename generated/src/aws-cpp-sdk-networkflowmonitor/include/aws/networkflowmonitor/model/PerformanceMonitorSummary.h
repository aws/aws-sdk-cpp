/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/networkflowmonitor/model/MonitorStatus.h>
#include <aws/networkflowmonitor/model/PerformanceMonitorTarget.h>
#include <aws/networkflowmonitor/model/PerformanceMonitorType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NetworkFlowMonitor {
namespace Model {

/**
 * <p>A summary of information about a performance monitor, including the ARN, the
 * name, the status, and the resources that it tracks network performance
 * for.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/PerformanceMonitorSummary">AWS
 * API Reference</a></p>
 */
class PerformanceMonitorSummary {
 public:
  AWS_NETWORKFLOWMONITOR_API PerformanceMonitorSummary() = default;
  AWS_NETWORKFLOWMONITOR_API PerformanceMonitorSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFLOWMONITOR_API PerformanceMonitorSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NETWORKFLOWMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the performance monitor.</p>
   */
  inline const Aws::String& GetMonitorArn() const { return m_monitorArn; }
  inline bool MonitorArnHasBeenSet() const { return m_monitorArnHasBeenSet; }
  template <typename MonitorArnT = Aws::String>
  void SetMonitorArn(MonitorArnT&& value) {
    m_monitorArnHasBeenSet = true;
    m_monitorArn = std::forward<MonitorArnT>(value);
  }
  template <typename MonitorArnT = Aws::String>
  PerformanceMonitorSummary& WithMonitorArn(MonitorArnT&& value) {
    SetMonitorArn(std::forward<MonitorArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the performance monitor.</p>
   */
  inline const Aws::String& GetMonitorName() const { return m_monitorName; }
  inline bool MonitorNameHasBeenSet() const { return m_monitorNameHasBeenSet; }
  template <typename MonitorNameT = Aws::String>
  void SetMonitorName(MonitorNameT&& value) {
    m_monitorNameHasBeenSet = true;
    m_monitorName = std::forward<MonitorNameT>(value);
  }
  template <typename MonitorNameT = Aws::String>
  PerformanceMonitorSummary& WithMonitorName(MonitorNameT&& value) {
    SetMonitorName(std::forward<MonitorNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of a performance monitor. The status can be one of the
   * following</p> <ul> <li> <p> <code>PENDING</code>: The performance monitor is in
   * the process of being created.</p> </li> <li> <p> <code>ACTIVE</code>: The
   * performance monitor is active.</p> </li> <li> <p> <code>INACTIVE</code>: The
   * performance monitor is inactive.</p> </li> <li> <p> <code>ERROR</code>: The
   * performance monitor can't be created or updated.</p> </li> <li> <p>
   * <code>DELETING</code>: The performance monitor is in the process of being
   * deleted.</p> </li> </ul>
   */
  inline MonitorStatus GetMonitorStatus() const { return m_monitorStatus; }
  inline bool MonitorStatusHasBeenSet() const { return m_monitorStatusHasBeenSet; }
  inline void SetMonitorStatus(MonitorStatus value) {
    m_monitorStatusHasBeenSet = true;
    m_monitorStatus = value;
  }
  inline PerformanceMonitorSummary& WithMonitorStatus(MonitorStatus value) {
    SetMonitorStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of resource that you monitor determines the type of the performance
   * monitor.</p>
   */
  inline PerformanceMonitorType GetMonitorType() const { return m_monitorType; }
  inline bool MonitorTypeHasBeenSet() const { return m_monitorTypeHasBeenSet; }
  inline void SetMonitorType(PerformanceMonitorType value) {
    m_monitorTypeHasBeenSet = true;
    m_monitorType = value;
  }
  inline PerformanceMonitorSummary& WithMonitorType(PerformanceMonitorType value) {
    SetMonitorType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resources that the performance monitor tracks network performance
   * for.</p>
   */
  inline const Aws::Vector<PerformanceMonitorTarget>& GetTargets() const { return m_targets; }
  inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
  template <typename TargetsT = Aws::Vector<PerformanceMonitorTarget>>
  void SetTargets(TargetsT&& value) {
    m_targetsHasBeenSet = true;
    m_targets = std::forward<TargetsT>(value);
  }
  template <typename TargetsT = Aws::Vector<PerformanceMonitorTarget>>
  PerformanceMonitorSummary& WithTargets(TargetsT&& value) {
    SetTargets(std::forward<TargetsT>(value));
    return *this;
  }
  template <typename TargetsT = PerformanceMonitorTarget>
  PerformanceMonitorSummary& AddTargets(TargetsT&& value) {
    m_targetsHasBeenSet = true;
    m_targets.emplace_back(std::forward<TargetsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_monitorArn;

  Aws::String m_monitorName;

  MonitorStatus m_monitorStatus{MonitorStatus::NOT_SET};

  PerformanceMonitorType m_monitorType{PerformanceMonitorType::NOT_SET};

  Aws::Vector<PerformanceMonitorTarget> m_targets;
  bool m_monitorArnHasBeenSet = false;
  bool m_monitorNameHasBeenSet = false;
  bool m_monitorStatusHasBeenSet = false;
  bool m_monitorTypeHasBeenSet = false;
  bool m_targetsHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFlowMonitor
}  // namespace Aws
