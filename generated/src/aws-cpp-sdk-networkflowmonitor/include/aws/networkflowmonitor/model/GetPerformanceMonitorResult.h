/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/networkflowmonitor/model/MonitorStatus.h>
#include <aws/networkflowmonitor/model/PerformanceMonitorTarget.h>
#include <aws/networkflowmonitor/model/PerformanceMonitorType.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace NetworkFlowMonitor {
namespace Model {
class GetPerformanceMonitorResult {
 public:
  AWS_NETWORKFLOWMONITOR_API GetPerformanceMonitorResult() = default;
  AWS_NETWORKFLOWMONITOR_API GetPerformanceMonitorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_NETWORKFLOWMONITOR_API GetPerformanceMonitorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the performance monitor.</p>
   */
  inline const Aws::String& GetMonitorArn() const { return m_monitorArn; }
  template <typename MonitorArnT = Aws::String>
  void SetMonitorArn(MonitorArnT&& value) {
    m_monitorArnHasBeenSet = true;
    m_monitorArn = std::forward<MonitorArnT>(value);
  }
  template <typename MonitorArnT = Aws::String>
  GetPerformanceMonitorResult& WithMonitorArn(MonitorArnT&& value) {
    SetMonitorArn(std::forward<MonitorArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the performance monitor.</p>
   */
  inline const Aws::String& GetMonitorName() const { return m_monitorName; }
  template <typename MonitorNameT = Aws::String>
  void SetMonitorName(MonitorNameT&& value) {
    m_monitorNameHasBeenSet = true;
    m_monitorName = std::forward<MonitorNameT>(value);
  }
  template <typename MonitorNameT = Aws::String>
  GetPerformanceMonitorResult& WithMonitorName(MonitorNameT&& value) {
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
  inline void SetMonitorStatus(MonitorStatus value) {
    m_monitorStatusHasBeenSet = true;
    m_monitorStatus = value;
  }
  inline GetPerformanceMonitorResult& WithMonitorStatus(MonitorStatus value) {
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
  inline void SetMonitorType(PerformanceMonitorType value) {
    m_monitorTypeHasBeenSet = true;
    m_monitorType = value;
  }
  inline GetPerformanceMonitorResult& WithMonitorType(PerformanceMonitorType value) {
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
  template <typename TargetsT = Aws::Vector<PerformanceMonitorTarget>>
  void SetTargets(TargetsT&& value) {
    m_targetsHasBeenSet = true;
    m_targets = std::forward<TargetsT>(value);
  }
  template <typename TargetsT = Aws::Vector<PerformanceMonitorTarget>>
  GetPerformanceMonitorResult& WithTargets(TargetsT&& value) {
    SetTargets(std::forward<TargetsT>(value));
    return *this;
  }
  template <typename TargetsT = PerformanceMonitorTarget>
  GetPerformanceMonitorResult& AddTargets(TargetsT&& value) {
    m_targetsHasBeenSet = true;
    m_targets.emplace_back(std::forward<TargetsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the performance monitor was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetPerformanceMonitorResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the performance monitor was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
  template <typename ModifiedAtT = Aws::Utils::DateTime>
  void SetModifiedAt(ModifiedAtT&& value) {
    m_modifiedAtHasBeenSet = true;
    m_modifiedAt = std::forward<ModifiedAtT>(value);
  }
  template <typename ModifiedAtT = Aws::Utils::DateTime>
  GetPerformanceMonitorResult& WithModifiedAt(ModifiedAtT&& value) {
    SetModifiedAt(std::forward<ModifiedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags for a performance monitor.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  GetPerformanceMonitorResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  GetPerformanceMonitorResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetPerformanceMonitorResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_monitorArn;

  Aws::String m_monitorName;

  MonitorStatus m_monitorStatus{MonitorStatus::NOT_SET};

  PerformanceMonitorType m_monitorType{PerformanceMonitorType::NOT_SET};

  Aws::Vector<PerformanceMonitorTarget> m_targets;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_modifiedAt{};

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_monitorArnHasBeenSet = false;
  bool m_monitorNameHasBeenSet = false;
  bool m_monitorStatusHasBeenSet = false;
  bool m_monitorTypeHasBeenSet = false;
  bool m_targetsHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_modifiedAtHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NetworkFlowMonitor
}  // namespace Aws
