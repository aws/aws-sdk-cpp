/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgreementService {
namespace Model {

/**
 * <p>The entity that issues the AWS invoice.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/InvoicingEntity">AWS
 * API Reference</a></p>
 */
class InvoicingEntity {
 public:
  AWS_AGREEMENTSERVICE_API InvoicingEntity() = default;
  AWS_AGREEMENTSERVICE_API InvoicingEntity(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API InvoicingEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The legal name of the invoicing entity.</p>
   */
  inline const Aws::String& GetLegalName() const { return m_legalName; }
  inline bool LegalNameHasBeenSet() const { return m_legalNameHasBeenSet; }
  template <typename LegalNameT = Aws::String>
  void SetLegalName(LegalNameT&& value) {
    m_legalNameHasBeenSet = true;
    m_legalName = std::forward<LegalNameT>(value);
  }
  template <typename LegalNameT = Aws::String>
  InvoicingEntity& WithLegalName(LegalNameT&& value) {
    SetLegalName(std::forward<LegalNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The branch name of the invoicing entity.</p>
   */
  inline const Aws::String& GetBranchName() const { return m_branchName; }
  inline bool BranchNameHasBeenSet() const { return m_branchNameHasBeenSet; }
  template <typename BranchNameT = Aws::String>
  void SetBranchName(BranchNameT&& value) {
    m_branchNameHasBeenSet = true;
    m_branchName = std::forward<BranchNameT>(value);
  }
  template <typename BranchNameT = Aws::String>
  InvoicingEntity& WithBranchName(BranchNameT&& value) {
    SetBranchName(std::forward<BranchNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_legalName;

  Aws::String m_branchName;
  bool m_legalNameHasBeenSet = false;
  bool m_branchNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
