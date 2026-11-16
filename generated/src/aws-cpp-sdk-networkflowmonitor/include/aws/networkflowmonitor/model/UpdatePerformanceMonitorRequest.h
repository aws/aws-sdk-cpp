/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkflowmonitor/NetworkFlowMonitorRequest.h>
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/networkflowmonitor/model/PerformanceMonitorTarget.h>

#include <utility>

namespace Aws {
namespace NetworkFlowMonitor {
namespace Model {

/**
 */
class UpdatePerformanceMonitorRequest : public NetworkFlowMonitorRequest {
 public:
  AWS_NETWORKFLOWMONITOR_API UpdatePerformanceMonitorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdatePerformanceMonitor"; }

  AWS_NETWORKFLOWMONITOR_API Aws::String SerializePayload() const override;

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
  UpdatePerformanceMonitorRequest& WithMonitorName(MonitorNameT&& value) {
    SetMonitorName(std::forward<MonitorNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resources to add to the performance monitor.</p>
   */
  inline const Aws::Vector<PerformanceMonitorTarget>& GetTargetsToAdd() const { return m_targetsToAdd; }
  inline bool TargetsToAddHasBeenSet() const { return m_targetsToAddHasBeenSet; }
  template <typename TargetsToAddT = Aws::Vector<PerformanceMonitorTarget>>
  void SetTargetsToAdd(TargetsToAddT&& value) {
    m_targetsToAddHasBeenSet = true;
    m_targetsToAdd = std::forward<TargetsToAddT>(value);
  }
  template <typename TargetsToAddT = Aws::Vector<PerformanceMonitorTarget>>
  UpdatePerformanceMonitorRequest& WithTargetsToAdd(TargetsToAddT&& value) {
    SetTargetsToAdd(std::forward<TargetsToAddT>(value));
    return *this;
  }
  template <typename TargetsToAddT = PerformanceMonitorTarget>
  UpdatePerformanceMonitorRequest& AddTargetsToAdd(TargetsToAddT&& value) {
    m_targetsToAddHasBeenSet = true;
    m_targetsToAdd.emplace_back(std::forward<TargetsToAddT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resources to remove from the performance monitor.</p>
   */
  inline const Aws::Vector<PerformanceMonitorTarget>& GetTargetsToRemove() const { return m_targetsToRemove; }
  inline bool TargetsToRemoveHasBeenSet() const { return m_targetsToRemoveHasBeenSet; }
  template <typename TargetsToRemoveT = Aws::Vector<PerformanceMonitorTarget>>
  void SetTargetsToRemove(TargetsToRemoveT&& value) {
    m_targetsToRemoveHasBeenSet = true;
    m_targetsToRemove = std::forward<TargetsToRemoveT>(value);
  }
  template <typename TargetsToRemoveT = Aws::Vector<PerformanceMonitorTarget>>
  UpdatePerformanceMonitorRequest& WithTargetsToRemove(TargetsToRemoveT&& value) {
    SetTargetsToRemove(std::forward<TargetsToRemoveT>(value));
    return *this;
  }
  template <typename TargetsToRemoveT = PerformanceMonitorTarget>
  UpdatePerformanceMonitorRequest& AddTargetsToRemove(TargetsToRemoveT&& value) {
    m_targetsToRemoveHasBeenSet = true;
    m_targetsToRemove.emplace_back(std::forward<TargetsToRemoveT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive string of up to 64 ASCII characters that you specify
   * to make an idempotent API request. If the token matches a previous request, the
   * service ignores the request without returning an error. Don't reuse the same
   * client token for other API requests.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  UpdatePerformanceMonitorRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_monitorName;

  Aws::Vector<PerformanceMonitorTarget> m_targetsToAdd;

  Aws::Vector<PerformanceMonitorTarget> m_targetsToRemove;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_monitorNameHasBeenSet = false;
  bool m_targetsToAddHasBeenSet = false;
  bool m_targetsToRemoveHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace NetworkFlowMonitor
}  // namespace Aws
