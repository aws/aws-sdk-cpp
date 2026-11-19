/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/AccountCustomer.h>
#include <aws/partnercentral-selling/model/PreferredContactWindow.h>
#include <aws/partnercentral-selling/model/SenderContact.h>

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
 * <p>The content of an account-planning invitation. It carries what the invited
 * party needs to identify which account the plan concerns, because the receiver
 * can't read the account resource directly. The account can be named by its
 * identifier, by a customer identity snapshot, or both.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/AccountPlanningInvitationPayload">AWS
 * API Reference</a></p>
 */
class AccountPlanningInvitationPayload {
 public:
  AWS_PARTNERCENTRALSELLING_API AccountPlanningInvitationPayload() = default;
  AWS_PARTNERCENTRALSELLING_API AccountPlanningInvitationPayload(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API AccountPlanningInvitationPayload& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the customer account that the plan concerns, as an Amazon
   * Resource Name (ARN) or a customer account identifier.</p>
   */
  inline const Aws::String& GetAccountIdentifier() const { return m_accountIdentifier; }
  inline bool AccountIdentifierHasBeenSet() const { return m_accountIdentifierHasBeenSet; }
  template <typename AccountIdentifierT = Aws::String>
  void SetAccountIdentifier(AccountIdentifierT&& value) {
    m_accountIdentifierHasBeenSet = true;
    m_accountIdentifier = std::forward<AccountIdentifierT>(value);
  }
  template <typename AccountIdentifierT = Aws::String>
  AccountPlanningInvitationPayload& WithAccountIdentifier(AccountIdentifierT&& value) {
    SetAccountIdentifier(std::forward<AccountIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A caller-supplied snapshot of the customer company's identity, so that the
   * receiver can tell which account the plan concerns even when the account isn't
   * yet mapped to an AWS account.</p>
   */
  inline const AccountCustomer& GetCustomer() const { return m_customer; }
  inline bool CustomerHasBeenSet() const { return m_customerHasBeenSet; }
  template <typename CustomerT = AccountCustomer>
  void SetCustomer(CustomerT&& value) {
    m_customerHasBeenSet = true;
    m_customer = std::forward<CustomerT>(value);
  }
  template <typename CustomerT = AccountCustomer>
  AccountPlanningInvitationPayload& WithCustomer(CustomerT&& value) {
    SetCustomer(std::forward<CustomerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sender's contact information for this account plan.</p>
   */
  inline const Aws::Vector<SenderContact>& GetSenderContacts() const { return m_senderContacts; }
  inline bool SenderContactsHasBeenSet() const { return m_senderContactsHasBeenSet; }
  template <typename SenderContactsT = Aws::Vector<SenderContact>>
  void SetSenderContacts(SenderContactsT&& value) {
    m_senderContactsHasBeenSet = true;
    m_senderContacts = std::forward<SenderContactsT>(value);
  }
  template <typename SenderContactsT = Aws::Vector<SenderContact>>
  AccountPlanningInvitationPayload& WithSenderContacts(SenderContactsT&& value) {
    SetSenderContacts(std::forward<SenderContactsT>(value));
    return *this;
  }
  template <typename SenderContactsT = SenderContact>
  AccountPlanningInvitationPayload& AddSenderContacts(SenderContactsT&& value) {
    m_senderContactsHasBeenSet = true;
    m_senderContacts.emplace_back(std::forward<SenderContactsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the sender prefers to be contacted about this account plan. This
   * information is advisory.</p>
   */
  inline const PreferredContactWindow& GetPreferredContact() const { return m_preferredContact; }
  inline bool PreferredContactHasBeenSet() const { return m_preferredContactHasBeenSet; }
  template <typename PreferredContactT = PreferredContactWindow>
  void SetPreferredContact(PreferredContactT&& value) {
    m_preferredContactHasBeenSet = true;
    m_preferredContact = std::forward<PreferredContactT>(value);
  }
  template <typename PreferredContactT = PreferredContactWindow>
  AccountPlanningInvitationPayload& WithPreferredContact(PreferredContactT&& value) {
    SetPreferredContact(std::forward<PreferredContactT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountIdentifier;

  AccountCustomer m_customer;

  Aws::Vector<SenderContact> m_senderContacts;

  PreferredContactWindow m_preferredContact;
  bool m_accountIdentifierHasBeenSet = false;
  bool m_customerHasBeenSet = false;
  bool m_senderContactsHasBeenSet = false;
  bool m_preferredContactHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
