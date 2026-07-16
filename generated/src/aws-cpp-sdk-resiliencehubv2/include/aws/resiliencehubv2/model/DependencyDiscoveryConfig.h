/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/DependencyDiscoveryStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>Configuration for dependency discovery on a service.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/DependencyDiscoveryConfig">AWS
 * API Reference</a></p>
 */
class DependencyDiscoveryConfig {
 public:
  AWS_RESILIENCEHUBV2_API DependencyDiscoveryConfig() = default;
  AWS_RESILIENCEHUBV2_API DependencyDiscoveryConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API DependencyDiscoveryConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The current status of dependency discovery.</p>
   */
  inline DependencyDiscoveryStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(DependencyDiscoveryStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DependencyDiscoveryConfig& WithStatus(DependencyDiscoveryStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when dependency discovery was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  DependencyDiscoveryConfig& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The count of resources eligible for dependency attribution.</p>
   */
  inline int GetEligibleResourceCount() const { return m_eligibleResourceCount; }
  inline bool EligibleResourceCountHasBeenSet() const { return m_eligibleResourceCountHasBeenSet; }
  inline void SetEligibleResourceCount(int value) {
    m_eligibleResourceCountHasBeenSet = true;
    m_eligibleResourceCount = value;
  }
  inline DependencyDiscoveryConfig& WithEligibleResourceCount(int value) {
    SetEligibleResourceCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A status message for dependency discovery, displayed during the
   * initialization state.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  DependencyDiscoveryConfig& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  DependencyDiscoveryStatus m_status{DependencyDiscoveryStatus::NOT_SET};

  Aws::Utils::DateTime m_updatedAt{};

  int m_eligibleResourceCount{0};

  Aws::String m_message;
  bool m_statusHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_eligibleResourceCountHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
