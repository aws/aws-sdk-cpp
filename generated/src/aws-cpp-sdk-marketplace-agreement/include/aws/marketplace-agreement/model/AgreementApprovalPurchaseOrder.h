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
 * <p>A purchase order reference for a charge on the agreement
 * request.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/AgreementApprovalPurchaseOrder">AWS
 * API Reference</a></p>
 */
class AgreementApprovalPurchaseOrder {
 public:
  AWS_AGREEMENTSERVICE_API AgreementApprovalPurchaseOrder() = default;
  AWS_AGREEMENTSERVICE_API AgreementApprovalPurchaseOrder(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API AgreementApprovalPurchaseOrder& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The unique identifier of the charge to associate the purchase order with. Use
   * <code>GetAgreementRequest</code> to retrieve the charges of the agreement
   * request.</p>
   */
  inline const Aws::String& GetChargeId() const { return m_chargeId; }
  inline bool ChargeIdHasBeenSet() const { return m_chargeIdHasBeenSet; }
  template <typename ChargeIdT = Aws::String>
  void SetChargeId(ChargeIdT&& value) {
    m_chargeIdHasBeenSet = true;
    m_chargeId = std::forward<ChargeIdT>(value);
  }
  template <typename ChargeIdT = Aws::String>
  AgreementApprovalPurchaseOrder& WithChargeId(ChargeIdT&& value) {
    SetChargeId(std::forward<ChargeIdT>(value));
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
  AgreementApprovalPurchaseOrder& WithPurchaseOrderReference(PurchaseOrderReferenceT&& value) {
    SetPurchaseOrderReference(std::forward<PurchaseOrderReferenceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_chargeId;

  Aws::String m_purchaseOrderReference;
  bool m_chargeIdHasBeenSet = false;
  bool m_purchaseOrderReferenceHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
