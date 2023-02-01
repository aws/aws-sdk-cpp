/**
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


    /**
     * <p>The name of the domain that you want to update contact information for.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the domain that you want to update contact information for.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The name of the domain that you want to update contact information for.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the domain that you want to update contact information for.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The name of the domain that you want to update contact information for.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of the domain that you want to update contact information for.</p>
     */
    inline UpdateDomainContactRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the domain that you want to update contact information for.</p>
     */
    inline UpdateDomainContactRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain that you want to update contact information for.</p>
     */
    inline UpdateDomainContactRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>Provides detailed contact information.</p>
     */
    inline const ContactDetail& GetAdminContact() const{ return m_adminContact; }

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline bool AdminContactHasBeenSet() const { return m_adminContactHasBeenSet; }

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline void SetAdminContact(const ContactDetail& value) { m_adminContactHasBeenSet = true; m_adminContact = value; }

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline void SetAdminContact(ContactDetail&& value) { m_adminContactHasBeenSet = true; m_adminContact = std::move(value); }

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline UpdateDomainContactRequest& WithAdminContact(const ContactDetail& value) { SetAdminContact(value); return *this;}

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline UpdateDomainContactRequest& WithAdminContact(ContactDetail&& value) { SetAdminContact(std::move(value)); return *this;}


    /**
     * <p>Provides detailed contact information.</p>
     */
    inline const ContactDetail& GetRegistrantContact() const{ return m_registrantContact; }

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline bool RegistrantContactHasBeenSet() const { return m_registrantContactHasBeenSet; }

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline void SetRegistrantContact(const ContactDetail& value) { m_registrantContactHasBeenSet = true; m_registrantContact = value; }

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline void SetRegistrantContact(ContactDetail&& value) { m_registrantContactHasBeenSet = true; m_registrantContact = std::move(value); }

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline UpdateDomainContactRequest& WithRegistrantContact(const ContactDetail& value) { SetRegistrantContact(value); return *this;}

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline UpdateDomainContactRequest& WithRegistrantContact(ContactDetail&& value) { SetRegistrantContact(std::move(value)); return *this;}


    /**
     * <p>Provides detailed contact information.</p>
     */
    inline const ContactDetail& GetTechContact() const{ return m_techContact; }

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline bool TechContactHasBeenSet() const { return m_techContactHasBeenSet; }

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline void SetTechContact(const ContactDetail& value) { m_techContactHasBeenSet = true; m_techContact = value; }

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline void SetTechContact(ContactDetail&& value) { m_techContactHasBeenSet = true; m_techContact = std::move(value); }

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline UpdateDomainContactRequest& WithTechContact(const ContactDetail& value) { SetTechContact(value); return *this;}

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline UpdateDomainContactRequest& WithTechContact(ContactDetail&& value) { SetTechContact(std::move(value)); return *this;}


    /**
     * <p> Customer's consent for the owner change request. </p>
     */
    inline const Consent& GetConsent() const{ return m_consent; }

    /**
     * <p> Customer's consent for the owner change request. </p>
     */
    inline bool ConsentHasBeenSet() const { return m_consentHasBeenSet; }

    /**
     * <p> Customer's consent for the owner change request. </p>
     */
    inline void SetConsent(const Consent& value) { m_consentHasBeenSet = true; m_consent = value; }

    /**
     * <p> Customer's consent for the owner change request. </p>
     */
    inline void SetConsent(Consent&& value) { m_consentHasBeenSet = true; m_consent = std::move(value); }

    /**
     * <p> Customer's consent for the owner change request. </p>
     */
    inline UpdateDomainContactRequest& WithConsent(const Consent& value) { SetConsent(value); return *this;}

    /**
     * <p> Customer's consent for the owner change request. </p>
     */
    inline UpdateDomainContactRequest& WithConsent(Consent&& value) { SetConsent(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
