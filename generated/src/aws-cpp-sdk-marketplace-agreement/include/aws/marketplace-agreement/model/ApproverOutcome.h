/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/AwsOrganizationApproverOutcome.h>
#include <aws/marketplace-agreement/model/EmailApproverOutcome.h>
#include <aws/marketplace-agreement/model/ProcurementToolApproverOutcome.h>

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
 * <p>An approver in an agreement approval and the approver's
 * decision.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/ApproverOutcome">AWS
 * API Reference</a></p>
 */
class ApproverOutcome {
 public:
  AWS_AGREEMENTSERVICE_API ApproverOutcome() = default;
  AWS_AGREEMENTSERVICE_API ApproverOutcome(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API ApproverOutcome& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The decision of an approver who is identified by an email address.</p>
   */
  inline const EmailApproverOutcome& GetEmailApproverOutcome() const { return m_emailApproverOutcome; }
  inline bool EmailApproverOutcomeHasBeenSet() const { return m_emailApproverOutcomeHasBeenSet; }
  template <typename EmailApproverOutcomeT = EmailApproverOutcome>
  void SetEmailApproverOutcome(EmailApproverOutcomeT&& value) {
    m_emailApproverOutcomeHasBeenSet = true;
    m_emailApproverOutcome = std::forward<EmailApproverOutcomeT>(value);
  }
  template <typename EmailApproverOutcomeT = EmailApproverOutcome>
  ApproverOutcome& WithEmailApproverOutcome(EmailApproverOutcomeT&& value) {
    SetEmailApproverOutcome(std::forward<EmailApproverOutcomeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The decision of a procurement system.</p>
   */
  inline const ProcurementToolApproverOutcome& GetProcurementToolApproverOutcome() const { return m_procurementToolApproverOutcome; }
  inline bool ProcurementToolApproverOutcomeHasBeenSet() const { return m_procurementToolApproverOutcomeHasBeenSet; }
  template <typename ProcurementToolApproverOutcomeT = ProcurementToolApproverOutcome>
  void SetProcurementToolApproverOutcome(ProcurementToolApproverOutcomeT&& value) {
    m_procurementToolApproverOutcomeHasBeenSet = true;
    m_procurementToolApproverOutcome = std::forward<ProcurementToolApproverOutcomeT>(value);
  }
  template <typename ProcurementToolApproverOutcomeT = ProcurementToolApproverOutcome>
  ApproverOutcome& WithProcurementToolApproverOutcome(ProcurementToolApproverOutcomeT&& value) {
    SetProcurementToolApproverOutcome(std::forward<ProcurementToolApproverOutcomeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The decision of the administrators of the buyer's AWS organization.</p>
   */
  inline const AwsOrganizationApproverOutcome& GetAwsOrganizationApproverOutcome() const { return m_awsOrganizationApproverOutcome; }
  inline bool AwsOrganizationApproverOutcomeHasBeenSet() const { return m_awsOrganizationApproverOutcomeHasBeenSet; }
  template <typename AwsOrganizationApproverOutcomeT = AwsOrganizationApproverOutcome>
  void SetAwsOrganizationApproverOutcome(AwsOrganizationApproverOutcomeT&& value) {
    m_awsOrganizationApproverOutcomeHasBeenSet = true;
    m_awsOrganizationApproverOutcome = std::forward<AwsOrganizationApproverOutcomeT>(value);
  }
  template <typename AwsOrganizationApproverOutcomeT = AwsOrganizationApproverOutcome>
  ApproverOutcome& WithAwsOrganizationApproverOutcome(AwsOrganizationApproverOutcomeT&& value) {
    SetAwsOrganizationApproverOutcome(std::forward<AwsOrganizationApproverOutcomeT>(value));
    return *this;
  }
  ///@}
 private:
  EmailApproverOutcome m_emailApproverOutcome;

  ProcurementToolApproverOutcome m_procurementToolApproverOutcome;

  AwsOrganizationApproverOutcome m_awsOrganizationApproverOutcome;
  bool m_emailApproverOutcomeHasBeenSet = false;
  bool m_procurementToolApproverOutcomeHasBeenSet = false;
  bool m_awsOrganizationApproverOutcomeHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
