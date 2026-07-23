/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/workspaces-instances/model/BillingMode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace WorkspacesInstances {
namespace Model {

/**
 * <p>Defines billing configuration settings for WorkSpace Instances, containing
 * the billing mode selection.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/BillingConfiguration">AWS
 * API Reference</a></p>
 */
class BillingConfiguration {
 public:
  AWS_WORKSPACESINSTANCES_API BillingConfiguration() = default;
  AWS_WORKSPACESINSTANCES_API BillingConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_WORKSPACESINSTANCES_API BillingConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_WORKSPACESINSTANCES_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Specifies the billing mode for WorkSpace Instances. MONTHLY provides fixed
   * monthly rates for predictable budgeting, while HOURLY enables pay-per-second
   * billing for actual usage.</p>
   */
  inline BillingMode GetBillingMode() const { return m_billingMode; }
  inline bool BillingModeHasBeenSet() const { return m_billingModeHasBeenSet; }
  inline void SetBillingMode(BillingMode value) {
    m_billingModeHasBeenSet = true;
    m_billingMode = value;
  }
  inline BillingConfiguration& WithBillingMode(BillingMode value) {
    SetBillingMode(value);
    return *this;
  }
  ///@}
 private:
  BillingMode m_billingMode{BillingMode::NOT_SET};
  bool m_billingModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace WorkspacesInstances
}  // namespace Aws
