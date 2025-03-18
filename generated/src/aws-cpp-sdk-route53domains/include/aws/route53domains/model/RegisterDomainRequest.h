/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/Route53DomainsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53domains/model/ContactDetail.h>
#include <utility>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>The RegisterDomain request includes the following elements.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/RegisterDomainRequest">AWS
   * API Reference</a></p>
   */
  class RegisterDomainRequest : public Route53DomainsRequest
  {
  public:
    AWS_ROUTE53DOMAINS_API RegisterDomainRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterDomain"; }

    AWS_ROUTE53DOMAINS_API Aws::String SerializePayload() const override;

    AWS_ROUTE53DOMAINS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The domain name that you want to register. The top-level domain (TLD), such
     * as .com, must be a TLD that Route 53 supports. For a list of supported TLDs, see
     * <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/registrar-tld-list.html">Domains
     * that You Can Register with Amazon Route 53</a> in the <i>Amazon Route 53
     * Developer Guide</i>.</p> <p>The domain name can contain only the following
     * characters:</p> <ul> <li> <p>Letters a through z. Domain names are not case
     * sensitive.</p> </li> <li> <p>Numbers 0 through 9.</p> </li> <li> <p>Hyphen (-).
     * You can't specify a hyphen at the beginning or end of a label. </p> </li> <li>
     * <p>Period (.) to separate the labels in the name, such as the <code>.</code> in
     * <code>example.com</code>.</p> </li> </ul> <p>Internationalized domain names are
     * not supported for some top-level domains. To determine whether the TLD that you
     * want to use supports internationalized domain names, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/registrar-tld-list.html">Domains
     * that You Can Register with Amazon Route 53</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/DomainNameFormat.html#domain-name-format-idns">Formatting
     * Internationalized Domain Names</a>. </p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    RegisterDomainRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetIdnLangCode() const { return m_idnLangCode; }
    inline bool IdnLangCodeHasBeenSet() const { return m_idnLangCodeHasBeenSet; }
    template<typename IdnLangCodeT = Aws::String>
    void SetIdnLangCode(IdnLangCodeT&& value) { m_idnLangCodeHasBeenSet = true; m_idnLangCode = std::forward<IdnLangCodeT>(value); }
    template<typename IdnLangCodeT = Aws::String>
    RegisterDomainRequest& WithIdnLangCode(IdnLangCodeT&& value) { SetIdnLangCode(std::forward<IdnLangCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of years that you want to register the domain for. Domains are
     * registered for a minimum of one year. The maximum period depends on the
     * top-level domain. For the range of valid values for your domain, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/registrar-tld-list.html">Domains
     * that You Can Register with Amazon Route 53</a> in the <i>Amazon Route 53
     * Developer Guide</i>.</p> <p>Default: 1</p>
     */
    inline int GetDurationInYears() const { return m_durationInYears; }
    inline bool DurationInYearsHasBeenSet() const { return m_durationInYearsHasBeenSet; }
    inline void SetDurationInYears(int value) { m_durationInYearsHasBeenSet = true; m_durationInYears = value; }
    inline RegisterDomainRequest& WithDurationInYears(int value) { SetDurationInYears(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the domain will be automatically renewed
     * (<code>true</code>) or not (<code>false</code>). Auto renewal only takes effect
     * after the account is charged.</p> <p>Default: <code>true</code> </p>
     */
    inline bool GetAutoRenew() const { return m_autoRenew; }
    inline bool AutoRenewHasBeenSet() const { return m_autoRenewHasBeenSet; }
    inline void SetAutoRenew(bool value) { m_autoRenewHasBeenSet = true; m_autoRenew = value; }
    inline RegisterDomainRequest& WithAutoRenew(bool value) { SetAutoRenew(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides detailed contact information. For information about the values that
     * you specify for each element, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_ContactDetail.html">ContactDetail</a>.</p>
     */
    inline const ContactDetail& GetAdminContact() const { return m_adminContact; }
    inline bool AdminContactHasBeenSet() const { return m_adminContactHasBeenSet; }
    template<typename AdminContactT = ContactDetail>
    void SetAdminContact(AdminContactT&& value) { m_adminContactHasBeenSet = true; m_adminContact = std::forward<AdminContactT>(value); }
    template<typename AdminContactT = ContactDetail>
    RegisterDomainRequest& WithAdminContact(AdminContactT&& value) { SetAdminContact(std::forward<AdminContactT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides detailed contact information. For information about the values that
     * you specify for each element, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_ContactDetail.html">ContactDetail</a>.</p>
     */
    inline const ContactDetail& GetRegistrantContact() const { return m_registrantContact; }
    inline bool RegistrantContactHasBeenSet() const { return m_registrantContactHasBeenSet; }
    template<typename RegistrantContactT = ContactDetail>
    void SetRegistrantContact(RegistrantContactT&& value) { m_registrantContactHasBeenSet = true; m_registrantContact = std::forward<RegistrantContactT>(value); }
    template<typename RegistrantContactT = ContactDetail>
    RegisterDomainRequest& WithRegistrantContact(RegistrantContactT&& value) { SetRegistrantContact(std::forward<RegistrantContactT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides detailed contact information. For information about the values that
     * you specify for each element, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_ContactDetail.html">ContactDetail</a>.</p>
     */
    inline const ContactDetail& GetTechContact() const { return m_techContact; }
    inline bool TechContactHasBeenSet() const { return m_techContactHasBeenSet; }
    template<typename TechContactT = ContactDetail>
    void SetTechContact(TechContactT&& value) { m_techContactHasBeenSet = true; m_techContact = std::forward<TechContactT>(value); }
    template<typename TechContactT = ContactDetail>
    RegisterDomainRequest& WithTechContact(TechContactT&& value) { SetTechContact(std::forward<TechContactT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar or for our registrar associate, Gandi. If you
     * specify <code>false</code>, WHOIS queries return the information that you
     * entered for the admin contact.</p>  <p>You must specify the same privacy
     * setting for the administrative, billing, registrant, and technical contacts.</p>
     *  <p>Default: <code>true</code> </p>
     */
    inline bool GetPrivacyProtectAdminContact() const { return m_privacyProtectAdminContact; }
    inline bool PrivacyProtectAdminContactHasBeenSet() const { return m_privacyProtectAdminContactHasBeenSet; }
    inline void SetPrivacyProtectAdminContact(bool value) { m_privacyProtectAdminContactHasBeenSet = true; m_privacyProtectAdminContact = value; }
    inline RegisterDomainRequest& WithPrivacyProtectAdminContact(bool value) { SetPrivacyProtectAdminContact(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar or for our registrar associate, Gandi. If you
     * specify <code>false</code>, WHOIS queries return the information that you
     * entered for the registrant contact (the domain owner).</p>  <p>You must
     * specify the same privacy setting for the administrative, billing, registrant,
     * and technical contacts.</p>  <p>Default: <code>true</code> </p>
     */
    inline bool GetPrivacyProtectRegistrantContact() const { return m_privacyProtectRegistrantContact; }
    inline bool PrivacyProtectRegistrantContactHasBeenSet() const { return m_privacyProtectRegistrantContactHasBeenSet; }
    inline void SetPrivacyProtectRegistrantContact(bool value) { m_privacyProtectRegistrantContactHasBeenSet = true; m_privacyProtectRegistrantContact = value; }
    inline RegisterDomainRequest& WithPrivacyProtectRegistrantContact(bool value) { SetPrivacyProtectRegistrantContact(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar or for our registrar associate, Gandi. If you
     * specify <code>false</code>, WHOIS queries return the information that you
     * entered for the technical contact.</p>  <p>You must specify the same
     * privacy setting for the administrative, billing, registrant, and technical
     * contacts.</p>  <p>Default: <code>true</code> </p>
     */
    inline bool GetPrivacyProtectTechContact() const { return m_privacyProtectTechContact; }
    inline bool PrivacyProtectTechContactHasBeenSet() const { return m_privacyProtectTechContactHasBeenSet; }
    inline void SetPrivacyProtectTechContact(bool value) { m_privacyProtectTechContactHasBeenSet = true; m_privacyProtectTechContact = value; }
    inline RegisterDomainRequest& WithPrivacyProtectTechContact(bool value) { SetPrivacyProtectTechContact(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides detailed contact information. For information about the values that
     * you specify for each element, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_ContactDetail.html">ContactDetail</a>.</p>
     */
    inline const ContactDetail& GetBillingContact() const { return m_billingContact; }
    inline bool BillingContactHasBeenSet() const { return m_billingContactHasBeenSet; }
    template<typename BillingContactT = ContactDetail>
    void SetBillingContact(BillingContactT&& value) { m_billingContactHasBeenSet = true; m_billingContact = std::forward<BillingContactT>(value); }
    template<typename BillingContactT = ContactDetail>
    RegisterDomainRequest& WithBillingContact(BillingContactT&& value) { SetBillingContact(std::forward<BillingContactT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar or for our registrar associate, Gandi. If you
     * specify <code>false</code>, WHOIS queries return the information that you
     * entered for the billing contact.</p>  <p>You must specify the same privacy
     * setting for the administrative, billing, registrant, and technical contacts.</p>
     * 
     */
    inline bool GetPrivacyProtectBillingContact() const { return m_privacyProtectBillingContact; }
    inline bool PrivacyProtectBillingContactHasBeenSet() const { return m_privacyProtectBillingContactHasBeenSet; }
    inline void SetPrivacyProtectBillingContact(bool value) { m_privacyProtectBillingContactHasBeenSet = true; m_privacyProtectBillingContact = value; }
    inline RegisterDomainRequest& WithPrivacyProtectBillingContact(bool value) { SetPrivacyProtectBillingContact(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_idnLangCode;
    bool m_idnLangCodeHasBeenSet = false;

    int m_durationInYears{0};
    bool m_durationInYearsHasBeenSet = false;

    bool m_autoRenew{false};
    bool m_autoRenewHasBeenSet = false;

    ContactDetail m_adminContact;
    bool m_adminContactHasBeenSet = false;

    ContactDetail m_registrantContact;
    bool m_registrantContactHasBeenSet = false;

    ContactDetail m_techContact;
    bool m_techContactHasBeenSet = false;

    bool m_privacyProtectAdminContact{false};
    bool m_privacyProtectAdminContactHasBeenSet = false;

    bool m_privacyProtectRegistrantContact{false};
    bool m_privacyProtectRegistrantContactHasBeenSet = false;

    bool m_privacyProtectTechContact{false};
    bool m_privacyProtectTechContactHasBeenSet = false;

    ContactDetail m_billingContact;
    bool m_billingContactHasBeenSet = false;

    bool m_privacyProtectBillingContact{false};
    bool m_privacyProtectBillingContactHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
