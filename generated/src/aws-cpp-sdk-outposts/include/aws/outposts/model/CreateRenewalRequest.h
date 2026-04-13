/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/OutpostsRequest.h>
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/model/PaymentOption.h>
#include <aws/outposts/model/PaymentTerm.h>

#include <utility>

namespace Aws {
namespace Outposts {
namespace Model {

/**
 */
class CreateRenewalRequest : public OutpostsRequest {
 public:
  AWS_OUTPOSTS_API CreateRenewalRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateRenewal"; }

  AWS_OUTPOSTS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The payment option.</p>
   */
  inline PaymentOption GetPaymentOption() const { return m_paymentOption; }
  inline bool PaymentOptionHasBeenSet() const { return m_paymentOptionHasBeenSet; }
  inline void SetPaymentOption(PaymentOption value) {
    m_paymentOptionHasBeenSet = true;
    m_paymentOption = value;
  }
  inline CreateRenewalRequest& WithPaymentOption(PaymentOption value) {
    SetPaymentOption(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The payment term.</p>
   */
  inline PaymentTerm GetPaymentTerm() const { return m_paymentTerm; }
  inline bool PaymentTermHasBeenSet() const { return m_paymentTermHasBeenSet; }
  inline void SetPaymentTerm(PaymentTerm value) {
    m_paymentTermHasBeenSet = true;
    m_paymentTerm = value;
  }
  inline CreateRenewalRequest& WithPaymentTerm(PaymentTerm value) {
    SetPaymentTerm(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID or ARN of the Outpost.</p>
   */
  inline const Aws::String& GetOutpostIdentifier() const { return m_outpostIdentifier; }
  inline bool OutpostIdentifierHasBeenSet() const { return m_outpostIdentifierHasBeenSet; }
  template <typename OutpostIdentifierT = Aws::String>
  void SetOutpostIdentifier(OutpostIdentifierT&& value) {
    m_outpostIdentifierHasBeenSet = true;
    m_outpostIdentifier = std::forward<OutpostIdentifierT>(value);
  }
  template <typename OutpostIdentifierT = Aws::String>
  CreateRenewalRequest& WithOutpostIdentifier(OutpostIdentifierT&& value) {
    SetOutpostIdentifier(std::forward<OutpostIdentifierT>(value));
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
  CreateRenewalRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  PaymentOption m_paymentOption{PaymentOption::NOT_SET};

  PaymentTerm m_paymentTerm{PaymentTerm::NOT_SET};

  Aws::String m_outpostIdentifier;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_paymentOptionHasBeenSet = false;
  bool m_paymentTermHasBeenSet = false;
  bool m_outpostIdentifierHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
