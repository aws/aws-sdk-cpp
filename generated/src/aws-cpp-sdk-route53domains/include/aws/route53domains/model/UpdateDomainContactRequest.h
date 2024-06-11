﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/Route53DomainsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53domains/model/ContactDetail.h>
#include <aws/route53domains/model/Consent.h>
#include <utility>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>The UpdateDomainContact request includes the following
   * elements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/UpdateDomainContactRequest">AWS
   * API Reference</a></p>
   */
  class UpdateDomainContactRequest : public Route53DomainsRequest
  {
  public:
    AWS_ROUTE53DOMAINS_API UpdateDomainContactRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDomainContact"; }

    AWS_ROUTE53DOMAINS_API Aws::String SerializePayload() const override;

    AWS_ROUTE53DOMAINS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the domain that you want to update contact information for.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline UpdateDomainContactRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline UpdateDomainContactRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline UpdateDomainContactRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides detailed contact information.</p>
     */
    inline const ContactDetail& GetAdminContact() const{ return m_adminContact; }
    inline bool AdminContactHasBeenSet() const { return m_adminContactHasBeenSet; }
    inline void SetAdminContact(const ContactDetail& value) { m_adminContactHasBeenSet = true; m_adminContact = value; }
    inline void SetAdminContact(ContactDetail&& value) { m_adminContactHasBeenSet = true; m_adminContact = std::move(value); }
    inline UpdateDomainContactRequest& WithAdminContact(const ContactDetail& value) { SetAdminContact(value); return *this;}
    inline UpdateDomainContactRequest& WithAdminContact(ContactDetail&& value) { SetAdminContact(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides detailed contact information.</p>
     */
    inline const ContactDetail& GetRegistrantContact() const{ return m_registrantContact; }
    inline bool RegistrantContactHasBeenSet() const { return m_registrantContactHasBeenSet; }
    inline void SetRegistrantContact(const ContactDetail& value) { m_registrantContactHasBeenSet = true; m_registrantContact = value; }
    inline void SetRegistrantContact(ContactDetail&& value) { m_registrantContactHasBeenSet = true; m_registrantContact = std::move(value); }
    inline UpdateDomainContactRequest& WithRegistrantContact(const ContactDetail& value) { SetRegistrantContact(value); return *this;}
    inline UpdateDomainContactRequest& WithRegistrantContact(ContactDetail&& value) { SetRegistrantContact(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides detailed contact information.</p>
     */
    inline const ContactDetail& GetTechContact() const{ return m_techContact; }
    inline bool TechContactHasBeenSet() const { return m_techContactHasBeenSet; }
    inline void SetTechContact(const ContactDetail& value) { m_techContactHasBeenSet = true; m_techContact = value; }
    inline void SetTechContact(ContactDetail&& value) { m_techContactHasBeenSet = true; m_techContact = std::move(value); }
    inline UpdateDomainContactRequest& WithTechContact(const ContactDetail& value) { SetTechContact(value); return *this;}
    inline UpdateDomainContactRequest& WithTechContact(ContactDetail&& value) { SetTechContact(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Customer's consent for the owner change request. Required if the domain is
     * not free (consent price is more than $0.00).</p>
     */
    inline const Consent& GetConsent() const{ return m_consent; }
    inline bool ConsentHasBeenSet() const { return m_consentHasBeenSet; }
    inline void SetConsent(const Consent& value) { m_consentHasBeenSet = true; m_consent = value; }
    inline void SetConsent(Consent&& value) { m_consentHasBeenSet = true; m_consent = std::move(value); }
    inline UpdateDomainContactRequest& WithConsent(const Consent& value) { SetConsent(value); return *this;}
    inline UpdateDomainContactRequest& WithConsent(Consent&& value) { SetConsent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides detailed contact information.</p>
     */
    inline const ContactDetail& GetBillingContact() const{ return m_billingContact; }
    inline bool BillingContactHasBeenSet() const { return m_billingContactHasBeenSet; }
    inline void SetBillingContact(const ContactDetail& value) { m_billingContactHasBeenSet = true; m_billingContact = value; }
    inline void SetBillingContact(ContactDetail&& value) { m_billingContactHasBeenSet = true; m_billingContact = std::move(value); }
    inline UpdateDomainContactRequest& WithBillingContact(const ContactDetail& value) { SetBillingContact(value); return *this;}
    inline UpdateDomainContactRequest& WithBillingContact(ContactDetail&& value) { SetBillingContact(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    ContactDetail m_adminContact;
    bool m_adminContactHasBeenSet = false;

    ContactDetail m_registrantContact;
    bool m_registrantContactHasBeenSet = false;

    ContactDetail m_techContact;
    bool m_techContactHasBeenSet = false;

    Consent m_consent;
    bool m_consentHasBeenSet = false;

    ContactDetail m_billingContact;
    bool m_billingContactHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
