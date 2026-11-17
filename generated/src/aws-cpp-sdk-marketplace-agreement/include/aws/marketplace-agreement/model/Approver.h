/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/AwsOrganizationAdminApprover.h>
#include <aws/marketplace-agreement/model/EmailApprover.h>
#include <aws/marketplace-agreement/model/ProcurementToolApprover.h>

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
 * <p>An approver in an approval plan.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/Approver">AWS
 * API Reference</a></p>
 */
class Approver {
 public:
  AWS_AGREEMENTSERVICE_API Approver() = default;
  AWS_AGREEMENTSERVICE_API Approver(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API Approver& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_AGREEMENTSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>An approver who is identified by an email address.</p>
   */
  inline const EmailApprover& GetEmailApprover() const { return m_emailApprover; }
  inline bool EmailApproverHasBeenSet() const { return m_emailApproverHasBeenSet; }
  template <typename EmailApproverT = EmailApprover>
  void SetEmailApprover(EmailApproverT&& value) {
    m_emailApproverHasBeenSet = true;
    m_emailApprover = std::forward<EmailApproverT>(value);
  }
  template <typename EmailApproverT = EmailApprover>
  Approver& WithEmailApprover(EmailApproverT&& value) {
    SetEmailApprover(std::forward<EmailApproverT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A procurement system that approves through the buyer's procurement
   * integration.</p>
   */
  inline const ProcurementToolApprover& GetProcurementToolApprover() const { return m_procurementToolApprover; }
  inline bool ProcurementToolApproverHasBeenSet() const { return m_procurementToolApproverHasBeenSet; }
  template <typename ProcurementToolApproverT = ProcurementToolApprover>
  void SetProcurementToolApprover(ProcurementToolApproverT&& value) {
    m_procurementToolApproverHasBeenSet = true;
    m_procurementToolApprover = std::forward<ProcurementToolApproverT>(value);
  }
  template <typename ProcurementToolApproverT = ProcurementToolApprover>
  Approver& WithProcurementToolApprover(ProcurementToolApproverT&& value) {
    SetProcurementToolApprover(std::forward<ProcurementToolApproverT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The administrators of the buyer's AWS organization.</p>
   */
  inline const AwsOrganizationAdminApprover& GetAwsOrganizationAdminApprover() const { return m_awsOrganizationAdminApprover; }
  inline bool AwsOrganizationAdminApproverHasBeenSet() const { return m_awsOrganizationAdminApproverHasBeenSet; }
  template <typename AwsOrganizationAdminApproverT = AwsOrganizationAdminApprover>
  void SetAwsOrganizationAdminApprover(AwsOrganizationAdminApproverT&& value) {
    m_awsOrganizationAdminApproverHasBeenSet = true;
    m_awsOrganizationAdminApprover = std::forward<AwsOrganizationAdminApproverT>(value);
  }
  template <typename AwsOrganizationAdminApproverT = AwsOrganizationAdminApprover>
  Approver& WithAwsOrganizationAdminApprover(AwsOrganizationAdminApproverT&& value) {
    SetAwsOrganizationAdminApprover(std::forward<AwsOrganizationAdminApproverT>(value));
    return *this;
  }
  ///@}
 private:
  EmailApprover m_emailApprover;

  ProcurementToolApprover m_procurementToolApprover;

  AwsOrganizationAdminApprover m_awsOrganizationAdminApprover;
  bool m_emailApproverHasBeenSet = false;
  bool m_procurementToolApproverHasBeenSet = false;
  bool m_awsOrganizationAdminApproverHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
