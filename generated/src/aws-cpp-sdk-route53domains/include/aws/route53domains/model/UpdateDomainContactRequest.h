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
    AWS_ROUTE53DOMAINS_API UpdateDomainContactRequest() = default;

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
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    UpdateDomainContactRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides detailed contact information.</p>
     */
    inline const ContactDetail& GetAdminContact() const { return m_adminContact; }
    inline bool AdminContactHasBeenSet() const { return m_adminContactHasBeenSet; }
    template<typename AdminContactT = ContactDetail>
    void SetAdminContact(AdminContactT&& value) { m_adminContactHasBeenSet = true; m_adminContact = std::forward<AdminContactT>(value); }
    template<typename AdminContactT = ContactDetail>
    UpdateDomainContactRequest& WithAdminContact(AdminContactT&& value) { SetAdminContact(std::forward<AdminContactT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides detailed contact information.</p>
     */
    inline const ContactDetail& GetRegistrantContact() const { return m_registrantContact; }
    inline bool RegistrantContactHasBeenSet() const { return m_registrantContactHasBeenSet; }
    template<typename RegistrantContactT = ContactDetail>
    void SetRegistrantContact(RegistrantContactT&& value) { m_registrantContactHasBeenSet = true; m_registrantContact = std::forward<RegistrantContactT>(value); }
    template<typename RegistrantContactT = ContactDetail>
    UpdateDomainContactRequest& WithRegistrantContact(RegistrantContactT&& value) { SetRegistrantContact(std::forward<RegistrantContactT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides detailed contact information.</p>
     */
    inline const ContactDetail& GetTechContact() const { return m_techContact; }
    inline bool TechContactHasBeenSet() const { return m_techContactHasBeenSet; }
    template<typename TechContactT = ContactDetail>
    void SetTechContact(TechContactT&& value) { m_techContactHasBeenSet = true; m_techContact = std::forward<TechContactT>(value); }
    template<typename TechContactT = ContactDetail>
    UpdateDomainContactRequest& WithTechContact(TechContactT&& value) { SetTechContact(std::forward<TechContactT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Customer's consent for the owner change request. Required if the domain is
     * not free (consent price is more than $0.00).</p>
     */
    inline const Consent& GetConsent() const { return m_consent; }
    inline bool ConsentHasBeenSet() const { return m_consentHasBeenSet; }
    template<typename ConsentT = Consent>
    void SetConsent(ConsentT&& value) { m_consentHasBeenSet = true; m_consent = std::forward<ConsentT>(value); }
    template<typename ConsentT = Consent>
    UpdateDomainContactRequest& WithConsent(ConsentT&& value) { SetConsent(std::forward<ConsentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides detailed contact information.</p>
     */
    inline const ContactDetail& GetBillingContact() const { return m_billingContact; }
    inline bool BillingContactHasBeenSet() const { return m_billingContactHasBeenSet; }
    template<typename BillingContactT = ContactDetail>
    void SetBillingContact(BillingContactT&& value) { m_billingContactHasBeenSet = true; m_billingContact = std::forward<BillingContactT>(value); }
    template<typename BillingContactT = ContactDetail>
    UpdateDomainContactRequest& WithBillingContact(BillingContactT&& value) { SetBillingContact(std::forward<BillingContactT>(value)); return *this;}
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
