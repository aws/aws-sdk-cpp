/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/model/PayerResponsibilityPayer.h>
#include <aws/vpc-lattice/model/PayerResponsibilityScope.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace VPCLattice {
namespace Model {

/**
 * <p>Specifies which account pays for a category of charges on a VPC endpoint
 * association.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/PayerResponsibilityEntry">AWS
 * API Reference</a></p>
 */
class PayerResponsibilityEntry {
 public:
  AWS_VPCLATTICE_API PayerResponsibilityEntry() = default;
  AWS_VPCLATTICE_API PayerResponsibilityEntry(Aws::Utils::Json::JsonView jsonValue);
  AWS_VPCLATTICE_API PayerResponsibilityEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The category of charges that this entry applies to.
   * <code>ResourceGatewayCharges</code> covers the resource gateway's data
   * processing charge.</p>
   */
  inline PayerResponsibilityScope GetScope() const { return m_scope; }
  inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
  inline void SetScope(PayerResponsibilityScope value) {
    m_scopeHasBeenSet = true;
    m_scope = value;
  }
  inline PayerResponsibilityEntry& WithScope(PayerResponsibilityScope value) {
    SetScope(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The account that pays this category of charges.
   * <code>VpcEndpointAccount</code> owns the VPC endpoint.
   * <code>ResourceGatewayAccount</code> owns the resource gateway.</p>
   */
  inline PayerResponsibilityPayer GetPayerResponsibilityType() const { return m_payerResponsibilityType; }
  inline bool PayerResponsibilityTypeHasBeenSet() const { return m_payerResponsibilityTypeHasBeenSet; }
  inline void SetPayerResponsibilityType(PayerResponsibilityPayer value) {
    m_payerResponsibilityTypeHasBeenSet = true;
    m_payerResponsibilityType = value;
  }
  inline PayerResponsibilityEntry& WithPayerResponsibilityType(PayerResponsibilityPayer value) {
    SetPayerResponsibilityType(value);
    return *this;
  }
  ///@}
 private:
  PayerResponsibilityScope m_scope{PayerResponsibilityScope::NOT_SET};

  PayerResponsibilityPayer m_payerResponsibilityType{PayerResponsibilityPayer::NOT_SET};
  bool m_scopeHasBeenSet = false;
  bool m_payerResponsibilityTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace VPCLattice
}  // namespace Aws
