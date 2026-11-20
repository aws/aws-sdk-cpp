/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/FeatureEnablement.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace Route53 {
namespace Model {

/**
 * <p>The status of Change History for the hosted zone.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ChangeHistoryFeature">AWS
 * API Reference</a></p>
 */
class ChangeHistoryFeature {
 public:
  AWS_ROUTE53_API ChangeHistoryFeature() = default;
  AWS_ROUTE53_API ChangeHistoryFeature(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_ROUTE53_API ChangeHistoryFeature& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>Indicates whether Change History is turned on for the hosted zone. Valid
   * values are the following:</p> <ul> <li> <p> <code>ENABLED</code>: Change History
   * is turned on for the hosted zone.</p> </li> <li> <p> <code>DISABLED</code>:
   * Change History is turned off for the hosted zone.</p> </li> </ul> <p>Route 53
   * turns Change History on or off when the hosted zone moves to or from a tier that
   * includes it.</p>
   */
  inline FeatureEnablement GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(FeatureEnablement value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ChangeHistoryFeature& WithStatus(FeatureEnablement value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The earliest date and time from which you can read the change history of the
   * hosted zone. Route 53 returns this value only when <code>Status</code> is
   * <code>ENABLED</code>.</p>
   */
  inline const Aws::Utils::DateTime& GetRetentionStartsAt() const { return m_retentionStartsAt; }
  inline bool RetentionStartsAtHasBeenSet() const { return m_retentionStartsAtHasBeenSet; }
  template <typename RetentionStartsAtT = Aws::Utils::DateTime>
  void SetRetentionStartsAt(RetentionStartsAtT&& value) {
    m_retentionStartsAtHasBeenSet = true;
    m_retentionStartsAt = std::forward<RetentionStartsAtT>(value);
  }
  template <typename RetentionStartsAtT = Aws::Utils::DateTime>
  ChangeHistoryFeature& WithRetentionStartsAt(RetentionStartsAtT&& value) {
    SetRetentionStartsAt(std::forward<RetentionStartsAtT>(value));
    return *this;
  }
  ///@}
 private:
  FeatureEnablement m_status{FeatureEnablement::NOT_SET};

  Aws::Utils::DateTime m_retentionStartsAt{};
  bool m_statusHasBeenSet = false;
  bool m_retentionStartsAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
