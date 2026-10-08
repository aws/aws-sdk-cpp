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
 * <p>A breakdown of individual charges or line items within a billing or pricing
 * context.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/ItemizedCharge">AWS
 * API Reference</a></p>
 */
class ItemizedCharge {
 public:
  AWS_AGREEMENTSERVICE_API ItemizedCharge() = default;
  AWS_AGREEMENTSERVICE_API ItemizedCharge(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API ItemizedCharge& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The dimension key as specified in the accepted term.</p>
   */
  inline const Aws::String& GetDimensionKey() const { return m_dimensionKey; }
  inline bool DimensionKeyHasBeenSet() const { return m_dimensionKeyHasBeenSet; }
  template <typename DimensionKeyT = Aws::String>
  void SetDimensionKey(DimensionKeyT&& value) {
    m_dimensionKeyHasBeenSet = true;
    m_dimensionKey = std::forward<DimensionKeyT>(value);
  }
  template <typename DimensionKeyT = Aws::String>
  ItemizedCharge& WithDimensionKey(DimensionKeyT&& value) {
    SetDimensionKey(std::forward<DimensionKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The requested quantity for this dimension.</p>
   */
  inline int64_t GetNewQuantity() const { return m_newQuantity; }
  inline bool NewQuantityHasBeenSet() const { return m_newQuantityHasBeenSet; }
  inline void SetNewQuantity(int64_t value) {
    m_newQuantityHasBeenSet = true;
    m_newQuantity = value;
  }
  inline ItemizedCharge& WithNewQuantity(int64_t value) {
    SetNewQuantity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The existing quantity for this dimension from the source agreement. This
   * value is <code>0</code> for NEW intent.</p>
   */
  inline int64_t GetOldQuantity() const { return m_oldQuantity; }
  inline bool OldQuantityHasBeenSet() const { return m_oldQuantityHasBeenSet; }
  inline void SetOldQuantity(int64_t value) {
    m_oldQuantityHasBeenSet = true;
    m_oldQuantity = value;
  }
  inline ItemizedCharge& WithOldQuantity(int64_t value) {
    SetOldQuantity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the expected charge that this itemized charge contributes
   * to.</p>
   */
  inline const Aws::String& GetChargeReference() const { return m_chargeReference; }
  inline bool ChargeReferenceHasBeenSet() const { return m_chargeReferenceHasBeenSet; }
  template <typename ChargeReferenceT = Aws::String>
  void SetChargeReference(ChargeReferenceT&& value) {
    m_chargeReferenceHasBeenSet = true;
    m_chargeReference = std::forward<ChargeReferenceT>(value);
  }
  template <typename ChargeReferenceT = Aws::String>
  ItemizedCharge& WithChargeReference(ChargeReferenceT&& value) {
    SetChargeReference(std::forward<ChargeReferenceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total incremental charge amount for this dimension.</p>
   */
  inline const Aws::String& GetIncrementalChargeAmount() const { return m_incrementalChargeAmount; }
  inline bool IncrementalChargeAmountHasBeenSet() const { return m_incrementalChargeAmountHasBeenSet; }
  template <typename IncrementalChargeAmountT = Aws::String>
  void SetIncrementalChargeAmount(IncrementalChargeAmountT&& value) {
    m_incrementalChargeAmountHasBeenSet = true;
    m_incrementalChargeAmount = std::forward<IncrementalChargeAmountT>(value);
  }
  template <typename IncrementalChargeAmountT = Aws::String>
  ItemizedCharge& WithIncrementalChargeAmount(IncrementalChargeAmountT&& value) {
    SetIncrementalChargeAmount(std::forward<IncrementalChargeAmountT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_dimensionKey;

  int64_t m_newQuantity{0};

  int64_t m_oldQuantity{0};

  Aws::String m_chargeReference;

  Aws::String m_incrementalChargeAmount;
  bool m_dimensionKeyHasBeenSet = false;
  bool m_newQuantityHasBeenSet = false;
  bool m_oldQuantityHasBeenSet = false;
  bool m_chargeReferenceHasBeenSet = false;
  bool m_incrementalChargeAmountHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
