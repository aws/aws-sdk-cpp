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
 * <p>Details of the party proposing the agreement terms. This is commonly the
 * seller for <code>PurchaseAgreement</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/AgreementApprovalProposer">AWS
 * API Reference</a></p>
 */
class AgreementApprovalProposer {
 public:
  AWS_AGREEMENTSERVICE_API AgreementApprovalProposer() = default;
  AWS_AGREEMENTSERVICE_API AgreementApprovalProposer(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API AgreementApprovalProposer& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The AWS account ID of the proposer.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  AgreementApprovalProposer& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The legal name of the proposer.</p>
   */
  inline const Aws::String& GetLegalName() const { return m_legalName; }
  inline bool LegalNameHasBeenSet() const { return m_legalNameHasBeenSet; }
  template <typename LegalNameT = Aws::String>
  void SetLegalName(LegalNameT&& value) {
    m_legalNameHasBeenSet = true;
    m_legalName = std::forward<LegalNameT>(value);
  }
  template <typename LegalNameT = Aws::String>
  AgreementApprovalProposer& WithLegalName(LegalNameT&& value) {
    SetLegalName(std::forward<LegalNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  Aws::String m_legalName;
  bool m_accountIdHasBeenSet = false;
  bool m_legalNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
