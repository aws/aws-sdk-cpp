/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/FeatureStatus.h>

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
 * <p>Contains the status and metadata for an opt-in feature.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/FeatureDetail">AWS
 * API Reference</a></p>
 */
class FeatureDetail {
 public:
  AWS_SECURITYHUB_API FeatureDetail() = default;
  AWS_SECURITYHUB_API FeatureDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API FeatureDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The current enablement status of the feature. Valid values:
   * <code>ENABLED</code> | <code>DISABLED</code>.</p>
   */
  inline FeatureStatus GetFeatureStatus() const { return m_featureStatus; }
  inline bool FeatureStatusHasBeenSet() const { return m_featureStatusHasBeenSet; }
  inline void SetFeatureStatus(FeatureStatus value) {
    m_featureStatusHasBeenSet = true;
    m_featureStatus = value;
  }
  inline FeatureDetail& WithFeatureStatus(FeatureStatus value) {
    SetFeatureStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the feature status was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  FeatureDetail& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  FeatureStatus m_featureStatus{FeatureStatus::NOT_SET};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_featureStatusHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
