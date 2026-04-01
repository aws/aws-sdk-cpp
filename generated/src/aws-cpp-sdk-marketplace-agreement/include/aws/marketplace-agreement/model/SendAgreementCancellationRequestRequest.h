/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/AgreementServiceRequest.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/AgreementCancellationRequestReasonCode.h>

#include <utility>

namespace Aws {
namespace AgreementService {
namespace Model {

/**
 */
class SendAgreementCancellationRequestRequest : public AgreementServiceRequest {
 public:
  AWS_AGREEMENTSERVICE_API SendAgreementCancellationRequestRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SendAgreementCancellationRequest"; }

  AWS_AGREEMENTSERVICE_API Aws::String SerializePayload() const override;

  AWS_AGREEMENTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the agreement for which the cancellation request is
   * being submitted.</p>
   */
  inline const Aws::String& GetAgreementId() const { return m_agreementId; }
  inline bool AgreementIdHasBeenSet() const { return m_agreementIdHasBeenSet; }
  template <typename AgreementIdT = Aws::String>
  void SetAgreementId(AgreementIdT&& value) {
    m_agreementIdHasBeenSet = true;
    m_agreementId = std::forward<AgreementIdT>(value);
  }
  template <typename AgreementIdT = Aws::String>
  SendAgreementCancellationRequestRequest& WithAgreementId(AgreementIdT&& value) {
    SetAgreementId(std::forward<AgreementIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason code for the cancellation request. Valid values include
   * <code>INCORRECT_TERMS_ACCEPTED</code>, <code>REPLACING_AGREEMENT</code>,
   * <code>TEST_AGREEMENT</code>, <code>ALTERNATIVE_PROCUREMENT_CHANNEL</code>,
   * <code>PRODUCT_DISCONTINUED</code>, <code>UNINTENDED_RENEWAL</code>,
   * <code>BUYER_DISSATISFACTION</code>, and <code>OTHER</code>.</p>
   */
  inline AgreementCancellationRequestReasonCode GetReasonCode() const { return m_reasonCode; }
  inline bool ReasonCodeHasBeenSet() const { return m_reasonCodeHasBeenSet; }
  inline void SetReasonCode(AgreementCancellationRequestReasonCode value) {
    m_reasonCodeHasBeenSet = true;
    m_reasonCode = value;
  }
  inline SendAgreementCancellationRequestRequest& WithReasonCode(AgreementCancellationRequestReasonCode value) {
    SetReasonCode(value);
    return *this;
  }
  ///@}

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
  SendAgreementCancellationRequestRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional detailed description of the cancellation reason (1-2000
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
  SendAgreementCancellationRequestRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agreementId;

  AgreementCancellationRequestReasonCode m_reasonCode{AgreementCancellationRequestReasonCode::NOT_SET};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_description;
  bool m_agreementIdHasBeenSet = false;
  bool m_reasonCodeHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
