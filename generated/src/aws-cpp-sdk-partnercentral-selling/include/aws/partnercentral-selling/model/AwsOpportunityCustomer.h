/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
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
   * <p>Represents the customer associated with the AWS opportunity. This field
   * captures key details about the customer that are necessary for managing the
   * opportunity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/AwsOpportunityCustomer">AWS
   * API Reference</a></p>
   */
  class AwsOpportunityCustomer
  {
  public:
    AWS_PARTNERCENTRALSELLING_API AwsOpportunityCustomer() = default;
    AWS_PARTNERCENTRALSELLING_API AwsOpportunityCustomer(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API AwsOpportunityCustomer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides a list of customer contacts involved in the opportunity. These
     * contacts may include decision makers, influencers, and other stakeholders within
     * the customer's organization.</p>
     */
    inline const Aws::Vector<Contact>& GetContacts() const { return m_contacts; }
    inline bool ContactsHasBeenSet() const { return m_contactsHasBeenSet; }
    template<typename ContactsT = Aws::Vector<Contact>>
    void SetContacts(ContactsT&& value) { m_contactsHasBeenSet = true; m_contacts = std::forward<ContactsT>(value); }
    template<typename ContactsT = Aws::Vector<Contact>>
    AwsOpportunityCustomer& WithContacts(ContactsT&& value) { SetContacts(std::forward<ContactsT>(value)); return *this;}
    template<typename ContactsT = Contact>
    AwsOpportunityCustomer& AddContacts(ContactsT&& value) { m_contactsHasBeenSet = true; m_contacts.emplace_back(std::forward<ContactsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Contact> m_contacts;
    bool m_contactsHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
