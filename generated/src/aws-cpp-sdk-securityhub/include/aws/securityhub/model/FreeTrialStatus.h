/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/FreeTrialStatusValue.h>
#include <aws/securityhub/model/FreeTrialType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {

/**
 * <p>The free trial period for a Security Hub feature, and whether the trial is
 * currently active.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/FreeTrialStatus">AWS
 * API Reference</a></p>
 */
class FreeTrialStatus {
 public:
  AWS_SECURITYHUB_API FreeTrialStatus() = default;
  AWS_SECURITYHUB_API FreeTrialStatus(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API FreeTrialStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The feature that the free trial period applies to. Valid values:</p> <ul>
   * <li> <p> <code>SECURITY_HUB_V2</code> specifies Security Hub.</p> </li> <li> <p>
   * <code>SECURITY_HUB_V2_MULTI_CLOUD_AZURE</code> specifies Security Hub coverage
   * for Microsoft Azure resources.</p> </li> </ul>
   */
  inline FreeTrialType GetFeatureType() const { return m_featureType; }
  inline bool FeatureTypeHasBeenSet() const { return m_featureTypeHasBeenSet; }
  inline void SetFeatureType(FreeTrialType value) {
    m_featureTypeHasBeenSet = true;
    m_featureType = value;
  }
  inline FreeTrialStatus& WithFeatureType(FreeTrialType value) {
    SetFeatureType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the free trial period is currently active. Valid values:</p> <ul>
   * <li> <p> <code>ACTIVE</code> specifies that the free trial period is
   * ongoing.</p> </li> <li> <p> <code>INACTIVE</code> specifies that the free trial
   * period has ended, or that it never started.</p> </li> </ul> <p>To determine
   * whether a trial has expired, compare <code>ExpiresAt</code> to the current
   * time.</p>
   */
  inline FreeTrialStatusValue GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(FreeTrialStatusValue value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline FreeTrialStatus& WithStatus(FreeTrialStatusValue value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time at which the free trial period began.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  FreeTrialStatus& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time at which the free trial period ends.</p>
   */
  inline const Aws::Utils::DateTime& GetExpiresAt() const { return m_expiresAt; }
  inline bool ExpiresAtHasBeenSet() const { return m_expiresAtHasBeenSet; }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  void SetExpiresAt(ExpiresAtT&& value) {
    m_expiresAtHasBeenSet = true;
    m_expiresAt = std::forward<ExpiresAtT>(value);
  }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  FreeTrialStatus& WithExpiresAt(ExpiresAtT&& value) {
    SetExpiresAt(std::forward<ExpiresAtT>(value));
    return *this;
  }
  ///@}
 private:
  FreeTrialType m_featureType{FreeTrialType::NOT_SET};

  FreeTrialStatusValue m_status{FreeTrialStatusValue::NOT_SET};

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_expiresAt{};
  bool m_featureTypeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_expiresAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
