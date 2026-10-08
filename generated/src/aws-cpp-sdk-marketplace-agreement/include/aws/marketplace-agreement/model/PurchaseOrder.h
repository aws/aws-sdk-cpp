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
 * <p>Contains information about a purchase order association to a charge within an
 * agreement.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/PurchaseOrder">AWS
 * API Reference</a></p>
 */
class PurchaseOrder {
 public:
  AWS_AGREEMENTSERVICE_API PurchaseOrder() = default;
  AWS_AGREEMENTSERVICE_API PurchaseOrder(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API PurchaseOrder& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The unique identifier of the charge to associate the purchase order with.</p>
   */
  inline const Aws::String& GetChargeId() const { return m_chargeId; }
  inline bool ChargeIdHasBeenSet() const { return m_chargeIdHasBeenSet; }
  template <typename ChargeIdT = Aws::String>
  void SetChargeId(ChargeIdT&& value) {
    m_chargeIdHasBeenSet = true;
    m_chargeId = std::forward<ChargeIdT>(value);
  }
  template <typename ChargeIdT = Aws::String>
  PurchaseOrder& WithChargeId(ChargeIdT&& value) {
    SetChargeId(std::forward<ChargeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The revision of the charge.</p>
   */
  inline long long GetChargeRevision() const { return m_chargeRevision; }
  inline bool ChargeRevisionHasBeenSet() const { return m_chargeRevisionHasBeenSet; }
  inline void SetChargeRevision(long long value) {
    m_chargeRevisionHasBeenSet = true;
    m_chargeRevision = value;
  }
  inline PurchaseOrder& WithChargeRevision(long long value) {
    SetChargeRevision(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the agreement associated with this charge.</p>
   */
  inline const Aws::String& GetAgreementId() const { return m_agreementId; }
  inline bool AgreementIdHasBeenSet() const { return m_agreementIdHasBeenSet; }
  template <typename AgreementIdT = Aws::String>
  void SetAgreementId(AgreementIdT&& value) {
    m_agreementIdHasBeenSet = true;
    m_agreementId = std::forward<AgreementIdT>(value);
  }
  template <typename AgreementIdT = Aws::String>
  PurchaseOrder& WithAgreementId(AgreementIdT&& value) {
    SetAgreementId(std::forward<AgreementIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The purchase order reference to associate with the charge.</p>
   */
  inline const Aws::String& GetPurchaseOrderReference() const { return m_purchaseOrderReference; }
  inline bool PurchaseOrderReferenceHasBeenSet() const { return m_purchaseOrderReferenceHasBeenSet; }
  template <typename PurchaseOrderReferenceT = Aws::String>
  void SetPurchaseOrderReference(PurchaseOrderReferenceT&& value) {
    m_purchaseOrderReferenceHasBeenSet = true;
    m_purchaseOrderReference = std::forward<PurchaseOrderReferenceT>(value);
  }
  template <typename PurchaseOrderReferenceT = Aws::String>
  PurchaseOrder& WithPurchaseOrderReference(PurchaseOrderReferenceT&& value) {
    SetPurchaseOrderReference(std::forward<PurchaseOrderReferenceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_chargeId;

  long long m_chargeRevision{0};

  Aws::String m_agreementId;

  Aws::String m_purchaseOrderReference;
  bool m_chargeIdHasBeenSet = false;
  bool m_chargeRevisionHasBeenSet = false;
  bool m_agreementIdHasBeenSet = false;
  bool m_purchaseOrderReferenceHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
