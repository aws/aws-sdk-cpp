/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/Account.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/model/Contact.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   * <p>An object that contains the customer's <code>Account</code> and
   * <code>Contact</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/Customer">AWS
   * API Reference</a></p>
   */
  class Customer
  {
  public:
    AWS_PARTNERCENTRALSELLING_API Customer() = default;
    AWS_PARTNERCENTRALSELLING_API Customer(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Customer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that contains the customer's account details.</p>
     */
    inline const Account& GetAccount() const { return m_account; }
    inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }
    template<typename AccountT = Account>
    void SetAccount(AccountT&& value) { m_accountHasBeenSet = true; m_account = std::forward<AccountT>(value); }
    template<typename AccountT = Account>
    Customer& WithAccount(AccountT&& value) { SetAccount(std::forward<AccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the contact details for individuals associated with the customer
     * of the <code>Opportunity</code>. This field captures relevant contacts,
     * including decision-makers, influencers, and technical stakeholders within the
     * customer organization. These contacts are key to progressing the
     * opportunity.</p>
     */
    inline const Aws::Vector<Contact>& GetContacts() const { return m_contacts; }
    inline bool ContactsHasBeenSet() const { return m_contactsHasBeenSet; }
    template<typename ContactsT = Aws::Vector<Contact>>
    void SetContacts(ContactsT&& value) { m_contactsHasBeenSet = true; m_contacts = std::forward<ContactsT>(value); }
    template<typename ContactsT = Aws::Vector<Contact>>
    Customer& WithContacts(ContactsT&& value) { SetContacts(std::forward<ContactsT>(value)); return *this;}
    template<typename ContactsT = Contact>
    Customer& AddContacts(ContactsT&& value) { m_contactsHasBeenSet = true; m_contacts.emplace_back(std::forward<ContactsT>(value)); return *this; }
    ///@}
  private:

    Account m_account;
    bool m_accountHasBeenSet = false;

    Aws::Vector<Contact> m_contacts;
    bool m_contactsHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
