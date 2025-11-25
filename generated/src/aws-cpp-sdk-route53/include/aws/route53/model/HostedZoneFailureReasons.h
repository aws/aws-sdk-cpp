/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/Route53_EXPORTS.h>

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
 * <p>Contains information about why certain features failed to be enabled or
 * configured for the hosted zone.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/HostedZoneFailureReasons">AWS
 * API Reference</a></p>
 */
class HostedZoneFailureReasons {
 public:
  AWS_ROUTE53_API HostedZoneFailureReasons() = default;
  AWS_ROUTE53_API HostedZoneFailureReasons(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_ROUTE53_API HostedZoneFailureReasons& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>The reason why accelerated recovery failed to be enabled or disabled for the
   * hosted zone, if applicable.</p>
   */
  inline const Aws::String& GetAcceleratedRecovery() const { return m_acceleratedRecovery; }
  inline bool AcceleratedRecoveryHasBeenSet() const { return m_acceleratedRecoveryHasBeenSet; }
  template <typename AcceleratedRecoveryT = Aws::String>
  void SetAcceleratedRecovery(AcceleratedRecoveryT&& value) {
    m_acceleratedRecoveryHasBeenSet = true;
    m_acceleratedRecovery = std::forward<AcceleratedRecoveryT>(value);
  }
  template <typename AcceleratedRecoveryT = Aws::String>
  HostedZoneFailureReasons& WithAcceleratedRecovery(AcceleratedRecoveryT&& value) {
    SetAcceleratedRecovery(std::forward<AcceleratedRecoveryT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_acceleratedRecovery;
  bool m_acceleratedRecoveryHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53
}  // namespace Aws
