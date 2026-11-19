/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/AccountCustomer.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>The customer account context for an account-planning engagement. It names the
 * account the plan concerns. The identifying details can be supplied by the caller
 * or derived by the service from the account identifier.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/CustomerAccountContext">AWS
 * API Reference</a></p>
 */
class CustomerAccountContext {
 public:
  AWS_PARTNERCENTRALSELLING_API CustomerAccountContext() = default;
  AWS_PARTNERCENTRALSELLING_API CustomerAccountContext(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API CustomerAccountContext& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the customer account that the engagement concerns, as an
   * Amazon Resource Name (ARN) or a customer account identifier.</p>
   */
  inline const Aws::String& GetAccountIdentifier() const { return m_accountIdentifier; }
  inline bool AccountIdentifierHasBeenSet() const { return m_accountIdentifierHasBeenSet; }
  template <typename AccountIdentifierT = Aws::String>
  void SetAccountIdentifier(AccountIdentifierT&& value) {
    m_accountIdentifierHasBeenSet = true;
    m_accountIdentifier = std::forward<AccountIdentifierT>(value);
  }
  template <typename AccountIdentifierT = Aws::String>
  CustomerAccountContext& WithAccountIdentifier(AccountIdentifierT&& value) {
    SetAccountIdentifier(std::forward<AccountIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A snapshot of the customer company's identity for the account. On read, the
   * service populates this from the account identifier.</p>
   */
  inline const AccountCustomer& GetCustomer() const { return m_customer; }
  inline bool CustomerHasBeenSet() const { return m_customerHasBeenSet; }
  template <typename CustomerT = AccountCustomer>
  void SetCustomer(CustomerT&& value) {
    m_customerHasBeenSet = true;
    m_customer = std::forward<CustomerT>(value);
  }
  template <typename CustomerT = AccountCustomer>
  CustomerAccountContext& WithCustomer(CustomerT&& value) {
    SetCustomer(std::forward<CustomerT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountIdentifier;

  AccountCustomer m_customer;
  bool m_accountIdentifierHasBeenSet = false;
  bool m_customerHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
