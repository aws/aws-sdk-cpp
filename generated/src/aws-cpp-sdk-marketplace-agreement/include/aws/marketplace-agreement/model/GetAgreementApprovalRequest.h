/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/AgreementServiceRequest.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>

#include <utility>

namespace Aws {
namespace AgreementService {
namespace Model {

/**
 */
class GetAgreementApprovalRequest : public AgreementServiceRequest {
 public:
  AWS_AGREEMENTSERVICE_API GetAgreementApprovalRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetAgreementApproval"; }

  AWS_AGREEMENTSERVICE_API Aws::String SerializePayload() const override;

  AWS_AGREEMENTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The unique identifier of the agreement approval to retrieve.</p>
   */
  inline const Aws::String& GetAgreementApprovalId() const { return m_agreementApprovalId; }
  inline bool AgreementApprovalIdHasBeenSet() const { return m_agreementApprovalIdHasBeenSet; }
  template <typename AgreementApprovalIdT = Aws::String>
  void SetAgreementApprovalId(AgreementApprovalIdT&& value) {
    m_agreementApprovalIdHasBeenSet = true;
    m_agreementApprovalId = std::forward<AgreementApprovalIdT>(value);
  }
  template <typename AgreementApprovalIdT = Aws::String>
  GetAgreementApprovalRequest& WithAgreementApprovalId(AgreementApprovalIdT&& value) {
    SetAgreementApprovalId(std::forward<AgreementApprovalIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agreementApprovalId;
  bool m_agreementApprovalIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
