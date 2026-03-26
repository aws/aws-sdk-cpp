/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/AgreementServiceRequest.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>

#include <utility>

namespace Aws {
namespace AgreementService {
namespace Model {

/**
 */
class SendAgreementPaymentRequestRequest : public AgreementServiceRequest {
 public:
  AWS_AGREEMENTSERVICE_API SendAgreementPaymentRequestRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SendAgreementPaymentRequest"; }

  AWS_AGREEMENTSERVICE_API Aws::String SerializePayload() const override;

  AWS_AGREEMENTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  SendAgreementPaymentRequestRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the agreement for which the payment request is being
   * submitted. Use <code>GetAgreementTerms</code> to retrieve agreement term
   * details.</p>
   */
  inline const Aws::String& GetAgreementId() const { return m_agreementId; }
  inline bool AgreementIdHasBeenSet() const { return m_agreementIdHasBeenSet; }
  template <typename AgreementIdT = Aws::String>
  void SetAgreementId(AgreementIdT&& value) {
    m_agreementIdHasBeenSet = true;
    m_agreementId = std::forward<AgreementIdT>(value);
  }
  template <typename AgreementIdT = Aws::String>
  SendAgreementPaymentRequestRequest& WithAgreementId(AgreementIdT&& value) {
    SetAgreementId(std::forward<AgreementIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the <code>VariablePaymentTerm</code> for the
   * agreement that the payment request is being sent for.</p>
   */
  inline const Aws::String& GetTermId() const { return m_termId; }
  inline bool TermIdHasBeenSet() const { return m_termIdHasBeenSet; }
  template <typename TermIdT = Aws::String>
  void SetTermId(TermIdT&& value) {
    m_termIdHasBeenSet = true;
    m_termId = std::forward<TermIdT>(value);
  }
  template <typename TermIdT = Aws::String>
  SendAgreementPaymentRequestRequest& WithTermId(TermIdT&& value) {
    SetTermId(std::forward<TermIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A descriptive name for the payment request (5-64 characters).</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  SendAgreementPaymentRequestRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount requested to be charged to the buyer, positive decimal value in
   * the currency of the accepted term.</p>  <p>A
   * <code>ValidationException</code> is returned if the <code>chargeAmount</code>
   * exceeds the available balance, if the agreement doesn't have an active
   * <code>VariablePaymentTerm</code>, or if the <code>termId</code> is invalid.</p>
   *
   */
  inline const Aws::String& GetChargeAmount() const { return m_chargeAmount; }
  inline bool ChargeAmountHasBeenSet() const { return m_chargeAmountHasBeenSet; }
  template <typename ChargeAmountT = Aws::String>
  void SetChargeAmount(ChargeAmountT&& value) {
    m_chargeAmountHasBeenSet = true;
    m_chargeAmount = std::forward<ChargeAmountT>(value);
  }
  template <typename ChargeAmountT = Aws::String>
  SendAgreementPaymentRequestRequest& WithChargeAmount(ChargeAmountT&& value) {
    SetChargeAmount(std::forward<ChargeAmountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional detailed description of the payment request (1-2000
   * characters).</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  SendAgreementPaymentRequestRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_agreementId;

  Aws::String m_termId;

  Aws::String m_name;

  Aws::String m_chargeAmount;

  Aws::String m_description;
  bool m_clientTokenHasBeenSet = true;
  bool m_agreementIdHasBeenSet = false;
  bool m_termIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_chargeAmountHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
