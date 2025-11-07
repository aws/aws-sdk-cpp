/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/VPCLatticeRequest.h>
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>

#include <utility>

namespace Aws {
namespace VPCLattice {
namespace Model {

/**
 */
class GetDomainVerificationRequest : public VPCLatticeRequest {
 public:
  AWS_VPCLATTICE_API GetDomainVerificationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetDomainVerification"; }

  AWS_VPCLATTICE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p> The ID or ARN of the domain verification to retrieve. </p>
   */
  inline const Aws::String& GetDomainVerificationIdentifier() const { return m_domainVerificationIdentifier; }
  inline bool DomainVerificationIdentifierHasBeenSet() const { return m_domainVerificationIdentifierHasBeenSet; }
  template <typename DomainVerificationIdentifierT = Aws::String>
  void SetDomainVerificationIdentifier(DomainVerificationIdentifierT&& value) {
    m_domainVerificationIdentifierHasBeenSet = true;
    m_domainVerificationIdentifier = std::forward<DomainVerificationIdentifierT>(value);
  }
  template <typename DomainVerificationIdentifierT = Aws::String>
  GetDomainVerificationRequest& WithDomainVerificationIdentifier(DomainVerificationIdentifierT&& value) {
    SetDomainVerificationIdentifier(std::forward<DomainVerificationIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainVerificationIdentifier;
  bool m_domainVerificationIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace VPCLattice
}  // namespace Aws
