/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/TaxEstimation.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace AgreementService {
namespace Model {

/**
 * <p>Configuration controls for tax estimation in the agreement
 * request.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/TaxConfiguration">AWS
 * API Reference</a></p>
 */
class TaxConfiguration {
 public:
  AWS_AGREEMENTSERVICE_API TaxConfiguration() = default;
  AWS_AGREEMENTSERVICE_API TaxConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API TaxConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Toggle to estimate tax as part of the response. Values include
   * <code>ENABLED</code> and <code>DISABLED</code>. Default is
   * <code>DISABLED</code>.</p>
   */
  inline TaxEstimation GetTaxEstimation() const { return m_taxEstimation; }
  inline bool TaxEstimationHasBeenSet() const { return m_taxEstimationHasBeenSet; }
  inline void SetTaxEstimation(TaxEstimation value) {
    m_taxEstimationHasBeenSet = true;
    m_taxEstimation = value;
  }
  inline TaxConfiguration& WithTaxEstimation(TaxEstimation value) {
    SetTaxEstimation(value);
    return *this;
  }
  ///@}
 private:
  TaxEstimation m_taxEstimation{TaxEstimation::NOT_SET};
  bool m_taxEstimationHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
