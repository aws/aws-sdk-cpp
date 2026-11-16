/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
class CreatePerformanceMonitorRequest : public NetworkFlowMonitorRequest {
 public:
  AWS_NETWORKFLOWMONITOR_API CreatePerformanceMonitorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreatePerformanceMonitor"; }

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
  CreatePerformanceMonitorRequest& WithMonitorName(MonitorNameT&& value) {
    SetMonitorName(std::forward<MonitorNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the scope for the performance monitor.</p>
   */
  inline const Aws::String& GetScopeArn() const { return m_scopeArn; }
  inline bool ScopeArnHasBeenSet() const { return m_scopeArnHasBeenSet; }
  template <typename ScopeArnT = Aws::String>
  void SetScopeArn(ScopeArnT&& value) {
    m_scopeArnHasBeenSet = true;
    m_scopeArn = std::forward<ScopeArnT>(value);
  }
  template <typename ScopeArnT = Aws::String>
  CreatePerformanceMonitorRequest& WithScopeArn(ScopeArnT&& value) {
    SetScopeArn(std::forward<ScopeArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resources to monitor. Each target identifies a resource, currently a VPC,
   * for which you can track network performance. For a VPC, specify the VPC ARN.</p>
   */
  inline const Aws::Vector<PerformanceMonitorTarget>& GetTargets() const { return m_targets; }
  inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
  template <typename TargetsT = Aws::Vector<PerformanceMonitorTarget>>
  void SetTargets(TargetsT&& value) {
    m_targetsHasBeenSet = true;
    m_targets = std::forward<TargetsT>(value);
  }
  template <typename TargetsT = Aws::Vector<PerformanceMonitorTarget>>
  CreatePerformanceMonitorRequest& WithTargets(TargetsT&& value) {
    SetTargets(std::forward<TargetsT>(value));
    return *this;
  }
  template <typename TargetsT = PerformanceMonitorTarget>
  CreatePerformanceMonitorRequest& AddTargets(TargetsT&& value) {
    m_targetsHasBeenSet = true;
    m_targets.emplace_back(std::forward<TargetsT>(value));
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
  CreatePerformanceMonitorRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags for a performance monitor. You can add a maximum of 200 tags.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreatePerformanceMonitorRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreatePerformanceMonitorRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_monitorName;

  Aws::String m_scopeArn;

  Aws::Vector<PerformanceMonitorTarget> m_targets;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_monitorNameHasBeenSet = false;
  bool m_scopeArnHasBeenSet = false;
  bool m_targetsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFlowMonitor
}  // namespace Aws
