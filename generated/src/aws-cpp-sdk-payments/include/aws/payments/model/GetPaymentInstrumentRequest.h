/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payments/PaymentsRequest.h>
#include <aws/payments/Payments_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Payments {
namespace Model {

/**
 */
class GetPaymentInstrumentRequest : public PaymentsRequest {
 public:
  AWS_PAYMENTS_API GetPaymentInstrumentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetPaymentInstrument"; }

  AWS_PAYMENTS_API Aws::String SerializePayload() const override;

  AWS_PAYMENTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The instrument to retrieve. Specify one of the following:</p> <ul> <li>
   * <p>The Amazon Resource Name (ARN) of the instrument, as
   * <code>ListPaymentInstruments</code> returns in <code>arn</code>. The ARN must be
   * for an instrument on your account.</p> </li> <li> <p>The ID of the instrument,
   * as <code>ListPaymentInstruments</code> returns in <code>id</code>.</p> </li>
   * </ul>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  GetPaymentInstrumentRequest& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_identifier;
  bool m_identifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace Payments
}  // namespace Aws
