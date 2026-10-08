/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace AgreementService {
namespace Model {

/**
 * <p>Additional parameters specified by the acceptor while accepting the
 * term.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/RenewalTermConfiguration">AWS
 * API Reference</a></p>
 */
class RenewalTermConfiguration {
 public:
  AWS_AGREEMENTSERVICE_API RenewalTermConfiguration() = default;
  AWS_AGREEMENTSERVICE_API RenewalTermConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API RenewalTermConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Defines whether the acceptor has chosen to auto-renew the agreement when it
   * reaches its end date. Can be set to <code>True</code> or <code>False</code>. The
   * acceptor can change this value within the limits set by
   * <code>LockoutPeriod</code> and <code>MaxRenewals</code>.</p>
   */
  inline bool GetEnableAutoRenew() const { return m_enableAutoRenew; }
  inline bool EnableAutoRenewHasBeenSet() const { return m_enableAutoRenewHasBeenSet; }
  inline void SetEnableAutoRenew(bool value) {
    m_enableAutoRenewHasBeenSet = true;
    m_enableAutoRenew = value;
  }
  inline RenewalTermConfiguration& WithEnableAutoRenew(bool value) {
    SetEnableAutoRenew(value);
    return *this;
  }
  ///@}
 private:
  bool m_enableAutoRenew{false};
  bool m_enableAutoRenewHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
