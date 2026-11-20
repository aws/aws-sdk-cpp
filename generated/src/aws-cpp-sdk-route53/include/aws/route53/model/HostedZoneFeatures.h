/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/AcceleratedRecoveryStatus.h>
#include <aws/route53/model/ChangeGuardrail.h>
#include <aws/route53/model/ChangeHistoryFeature.h>
#include <aws/route53/model/FeatureStatus.h>
#include <aws/route53/model/HostedZoneFailureReasons.h>

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
 * <p>Represents the features configuration for a hosted zone, including the status
 * of various features and any associated failure reasons.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/HostedZoneFeatures">AWS
 * API Reference</a></p>
 */
class HostedZoneFeatures {
 public:
  AWS_ROUTE53_API HostedZoneFeatures() = default;
  AWS_ROUTE53_API HostedZoneFeatures(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_ROUTE53_API HostedZoneFeatures& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>The current status of accelerated recovery for the hosted zone.</p>
   */
  inline AcceleratedRecoveryStatus GetAcceleratedRecoveryStatus() const { return m_acceleratedRecoveryStatus; }
  inline bool AcceleratedRecoveryStatusHasBeenSet() const { return m_acceleratedRecoveryStatusHasBeenSet; }
  inline void SetAcceleratedRecoveryStatus(AcceleratedRecoveryStatus value) {
    m_acceleratedRecoveryStatusHasBeenSet = true;
    m_acceleratedRecoveryStatus = value;
  }
  inline HostedZoneFeatures& WithAcceleratedRecoveryStatus(AcceleratedRecoveryStatus value) {
    SetAcceleratedRecoveryStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of public DNS fallback for the hosted zone. Valid
   * values:</p> <ul> <li> <p> <code>ENABLED</code>: Public DNS fallback is
   * enabled.</p> </li> <li> <p> <code>DISABLED</code>: Public DNS fallback is
   * disabled.</p> </li> <li> <p> <code>ENABLING</code>: A request to enable public
   * DNS fallback is still propagating.</p> </li> <li> <p> <code>DISABLING</code>: A
   * request to disable public DNS fallback is still propagating.</p> </li> </ul>
   */
  inline FeatureStatus GetPublicDNSFallbackStatus() const { return m_publicDNSFallbackStatus; }
  inline bool PublicDNSFallbackStatusHasBeenSet() const { return m_publicDNSFallbackStatusHasBeenSet; }
  inline void SetPublicDNSFallbackStatus(FeatureStatus value) {
    m_publicDNSFallbackStatusHasBeenSet = true;
    m_publicDNSFallbackStatus = value;
  }
  inline HostedZoneFeatures& WithPublicDNSFallbackStatus(FeatureStatus value) {
    SetPublicDNSFallbackStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of Change History for the hosted zone, and the earliest time from
   * which you can read its change history.</p>
   */
  inline const ChangeHistoryFeature& GetChangeHistory() const { return m_changeHistory; }
  inline bool ChangeHistoryHasBeenSet() const { return m_changeHistoryHasBeenSet; }
  template <typename ChangeHistoryT = ChangeHistoryFeature>
  void SetChangeHistory(ChangeHistoryT&& value) {
    m_changeHistoryHasBeenSet = true;
    m_changeHistory = std::forward<ChangeHistoryT>(value);
  }
  template <typename ChangeHistoryT = ChangeHistoryFeature>
  HostedZoneFeatures& WithChangeHistory(ChangeHistoryT&& value) {
    SetChangeHistory(std::forward<ChangeHistoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Information about any failures that occurred when attempting to enable or
   * configure features for the hosted zone.</p>
   */
  inline const HostedZoneFailureReasons& GetFailureReasons() const { return m_failureReasons; }
  inline bool FailureReasonsHasBeenSet() const { return m_failureReasonsHasBeenSet; }
  template <typename FailureReasonsT = HostedZoneFailureReasons>
  void SetFailureReasons(FailureReasonsT&& value) {
    m_failureReasonsHasBeenSet = true;
    m_failureReasons = std::forward<FailureReasonsT>(value);
  }
  template <typename FailureReasonsT = HostedZoneFailureReasons>
  HostedZoneFeatures& WithFailureReasons(FailureReasonsT&& value) {
    SetFailureReasons(std::forward<FailureReasonsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name and status of each Change Guardrail for the hosted zone. For the
   * guardrail names and statuses, see <code>ChangeGuardrail</code>.</p>
   */
  inline const Aws::Vector<ChangeGuardrail>& GetChangeGuardrails() const { return m_changeGuardrails; }
  inline bool ChangeGuardrailsHasBeenSet() const { return m_changeGuardrailsHasBeenSet; }
  template <typename ChangeGuardrailsT = Aws::Vector<ChangeGuardrail>>
  void SetChangeGuardrails(ChangeGuardrailsT&& value) {
    m_changeGuardrailsHasBeenSet = true;
    m_changeGuardrails = std::forward<ChangeGuardrailsT>(value);
  }
  template <typename ChangeGuardrailsT = Aws::Vector<ChangeGuardrail>>
  HostedZoneFeatures& WithChangeGuardrails(ChangeGuardrailsT&& value) {
    SetChangeGuardrails(std::forward<ChangeGuardrailsT>(value));
    return *this;
  }
  template <typename ChangeGuardrailsT = ChangeGuardrail>
  HostedZoneFeatures& AddChangeGuardrails(ChangeGuardrailsT&& value) {
    m_changeGuardrailsHasBeenSet = true;
    m_changeGuardrails.emplace_back(std::forward<ChangeGuardrailsT>(value));
    return *this;
  }
  ///@}
 private:
  AcceleratedRecoveryStatus m_acceleratedRecoveryStatus{AcceleratedRecoveryStatus::NOT_SET};

  FeatureStatus m_publicDNSFallbackStatus{FeatureStatus::NOT_SET};

  ChangeHistoryFeature m_changeHistory;

  HostedZoneFailureReasons m_failureReasons;

  Aws::Vector<ChangeGuardrail> m_changeGuardrails;
  bool m_acceleratedRecoveryStatusHasBeenSet = false;
  bool m_publicDNSFallbackStatusHasBeenSet = false;
  bool m_changeHistoryHasBeenSet = false;
  bool m_failureReasonsHasBeenSet = false;
  bool m_changeGuardrailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
