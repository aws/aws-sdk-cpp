/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/AcceleratedRecoveryStatus.h>
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
 private:
  AcceleratedRecoveryStatus m_acceleratedRecoveryStatus{AcceleratedRecoveryStatus::NOT_SET};

  HostedZoneFailureReasons m_failureReasons;
  bool m_acceleratedRecoveryStatusHasBeenSet = false;
  bool m_failureReasonsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
