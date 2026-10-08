/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>

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
 * <p>Defines the dimensions that the acceptor has purchased from the overall set
 * of dimensions presented in the rate card.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/Dimension">AWS
 * API Reference</a></p>
 */
class Dimension {
 public:
  AWS_AGREEMENTSERVICE_API Dimension() = default;
  AWS_AGREEMENTSERVICE_API Dimension(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API Dimension& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The name of key value of the dimension.</p>
   */
  inline const Aws::String& GetDimensionKey() const { return m_dimensionKey; }
  inline bool DimensionKeyHasBeenSet() const { return m_dimensionKeyHasBeenSet; }
  template <typename DimensionKeyT = Aws::String>
  void SetDimensionKey(DimensionKeyT&& value) {
    m_dimensionKeyHasBeenSet = true;
    m_dimensionKey = std::forward<DimensionKeyT>(value);
  }
  template <typename DimensionKeyT = Aws::String>
  Dimension& WithDimensionKey(DimensionKeyT&& value) {
    SetDimensionKey(std::forward<DimensionKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of units of the dimension the acceptor has purchased.</p>
   * <p>For Agreements with <code>ConfigurableUpfrontPricingTerm</code>, the
   * <code>RateCard</code> section will define the prices and dimensions defined by
   * the seller (proposer), whereas the <code>Configuration</code> section will
   * define the actual dimensions, prices, and units the buyer has chosen to
   * accept.</p>
   */
  inline int64_t GetDimensionValue() const { return m_dimensionValue; }
  inline bool DimensionValueHasBeenSet() const { return m_dimensionValueHasBeenSet; }
  inline void SetDimensionValue(int64_t value) {
    m_dimensionValueHasBeenSet = true;
    m_dimensionValue = value;
  }
  inline Dimension& WithDimensionValue(int64_t value) {
    SetDimensionValue(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_dimensionKey;

  int64_t m_dimensionValue{0};
  bool m_dimensionKeyHasBeenSet = false;
  bool m_dimensionValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
