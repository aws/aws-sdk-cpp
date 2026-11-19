/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/RecommendationSeverity.h>
#include <aws/marketplace-catalog/model/RecommendedFeatureId.h>
#include <aws/marketplace-catalog/model/RecommendedFeatureStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceCatalog {
namespace Model {

/**
 * <p>A recommended AWS Marketplace feature for a listing.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-catalog-2018-09-17/FeatureRecommendation">AWS
 * API Reference</a></p>
 */
class FeatureRecommendation {
 public:
  AWS_MARKETPLACECATALOG_API FeatureRecommendation() = default;
  AWS_MARKETPLACECATALOG_API FeatureRecommendation(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API FeatureRecommendation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The feature that is recommended. Valid values are
   * <code>REQUEST_PRIVATE_OFFER</code>, <code>REQUEST_A_DEMO</code>,
   * <code>PROMOTIONAL_MEDIA</code>, <code>FREE_TRIAL</code>, and
   * <code>QUICK_LAUNCH</code>.</p>
   */
  inline RecommendedFeatureId GetFeatureId() const { return m_featureId; }
  inline bool FeatureIdHasBeenSet() const { return m_featureIdHasBeenSet; }
  inline void SetFeatureId(RecommendedFeatureId value) {
    m_featureIdHasBeenSet = true;
    m_featureId = value;
  }
  inline FeatureRecommendation& WithFeatureId(RecommendedFeatureId value) {
    SetFeatureId(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>What you should do. It might contain a link to the console.</p>
   */
  inline const Aws::String& GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  template <typename ActionT = Aws::String>
  void SetAction(ActionT&& value) {
    m_actionHasBeenSet = true;
    m_action = std::forward<ActionT>(value);
  }
  template <typename ActionT = Aws::String>
  FeatureRecommendation& WithAction(ActionT&& value) {
    SetAction(std::forward<ActionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Why the feature is recommended.</p>
   */
  inline const Aws::String& GetRationale() const { return m_rationale; }
  inline bool RationaleHasBeenSet() const { return m_rationaleHasBeenSet; }
  template <typename RationaleT = Aws::String>
  void SetRationale(RationaleT&& value) {
    m_rationaleHasBeenSet = true;
    m_rationale = std::forward<RationaleT>(value);
  }
  template <typename RationaleT = Aws::String>
  FeatureRecommendation& WithRationale(RationaleT&& value) {
    SetRationale(std::forward<RationaleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How much the recommendation blocks the listing. Valid values are
   * <code>BLOCKING</code> and <code>ADVISORY</code>.</p>
   */
  inline RecommendationSeverity GetSeverity() const { return m_severity; }
  inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
  inline void SetSeverity(RecommendationSeverity value) {
    m_severityHasBeenSet = true;
    m_severity = value;
  }
  inline FeatureRecommendation& WithSeverity(RecommendationSeverity value) {
    SetSeverity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the listing has the feature. Valid values are:</p> <ul> <li> <p>
   * <code>PASS</code> - The listing already has the feature.</p> </li> <li> <p>
   * <code>FAIL</code> - The feature is one to turn on.</p> </li> </ul>
   */
  inline RecommendedFeatureStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(RecommendedFeatureStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline FeatureRecommendation& WithStatus(RecommendedFeatureStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  RecommendedFeatureId m_featureId{RecommendedFeatureId::NOT_SET};

  Aws::String m_action;

  Aws::String m_rationale;

  RecommendationSeverity m_severity{RecommendationSeverity::NOT_SET};

  RecommendedFeatureStatus m_status{RecommendedFeatureStatus::NOT_SET};
  bool m_featureIdHasBeenSet = false;
  bool m_actionHasBeenSet = false;
  bool m_rationaleHasBeenSet = false;
  bool m_severityHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
