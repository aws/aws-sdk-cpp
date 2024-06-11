/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/Route53DomainsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53domains/model/ContactDetail.h>
#include <aws/route53domains/model/Nameserver.h>
#include <utility>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>The TransferDomain request includes the following elements.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/TransferDomainRequest">AWS
   * API Reference</a></p>
   */
  class TransferDomainRequest : public Route53DomainsRequest
  {
  public:
    AWS_ROUTE53DOMAINS_API TransferDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TransferDomain"; }

    AWS_ROUTE53DOMAINS_API Aws::String SerializePayload() const override;

    AWS_ROUTE53DOMAINS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the domain that you want to transfer to Route 53. The top-level
     * domain (TLD), such as .com, must be a TLD that Route 53 supports. For a list of
     * supported TLDs, see <a
     * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/registrar-tld-list.html">Domains
     * that You Can Register with Amazon Route 53</a> in the <i>Amazon Route 53
     * Developer Guide</i>.</p> <p>The domain name can contain only the following
     * characters:</p> <ul> <li> <p>Letters a through z. Domain names are not case
     * sensitive.</p> </li> <li> <p>Numbers 0 through 9.</p> </li> <li> <p>Hyphen (-).
     * You can't specify a hyphen at the beginning or end of a label. </p> </li> <li>
     * <p>Period (.) to separate the labels in the name, such as the <code>.</code> in
     * <code>example.com</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline TransferDomainRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline TransferDomainRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline TransferDomainRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetIdnLangCode() const{ return m_idnLangCode; }
    inline bool IdnLangCodeHasBeenSet() const { return m_idnLangCodeHasBeenSet; }
    inline void SetIdnLangCode(const Aws::String& value) { m_idnLangCodeHasBeenSet = true; m_idnLangCode = value; }
    inline void SetIdnLangCode(Aws::String&& value) { m_idnLangCodeHasBeenSet = true; m_idnLangCode = std::move(value); }
    inline void SetIdnLangCode(const char* value) { m_idnLangCodeHasBeenSet = true; m_idnLangCode.assign(value); }
    inline TransferDomainRequest& WithIdnLangCode(const Aws::String& value) { SetIdnLangCode(value); return *this;}
    inline TransferDomainRequest& WithIdnLangCode(Aws::String&& value) { SetIdnLangCode(std::move(value)); return *this;}
    inline TransferDomainRequest& WithIdnLangCode(const char* value) { SetIdnLangCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of years that you want to register the domain for. Domains are
     * registered for a minimum of one year. The maximum period depends on the
     * top-level domain.</p> <p>Default: 1</p>
     */
    inline int GetDurationInYears() const{ return m_durationInYears; }
    inline bool DurationInYearsHasBeenSet() const { return m_durationInYearsHasBeenSet; }
    inline void SetDurationInYears(int value) { m_durationInYearsHasBeenSet = true; m_durationInYears = value; }
    inline TransferDomainRequest& WithDurationInYears(int value) { SetDurationInYears(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details for the host and glue IP addresses.</p>
     */
    inline const Aws::Vector<Nameserver>& GetNameservers() const{ return m_nameservers; }
    inline bool NameserversHasBeenSet() const { return m_nameserversHasBeenSet; }
    inline void SetNameservers(const Aws::Vector<Nameserver>& value) { m_nameserversHasBeenSet = true; m_nameservers = value; }
    inline void SetNameservers(Aws::Vector<Nameserver>&& value) { m_nameserversHasBeenSet = true; m_nameservers = std::move(value); }
    inline TransferDomainRequest& WithNameservers(const Aws::Vector<Nameserver>& value) { SetNameservers(value); return *this;}
    inline TransferDomainRequest& WithNameservers(Aws::Vector<Nameserver>&& value) { SetNameservers(std::move(value)); return *this;}
    inline TransferDomainRequest& AddNameservers(const Nameserver& value) { m_nameserversHasBeenSet = true; m_nameservers.push_back(value); return *this; }
    inline TransferDomainRequest& AddNameservers(Nameserver&& value) { m_nameserversHasBeenSet = true; m_nameservers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The authorization code for the domain. You get this value from the current
     * registrar.</p>
     */
    inline const Aws::String& GetAuthCode() const{ return m_authCode; }
    inline bool AuthCodeHasBeenSet() const { return m_authCodeHasBeenSet; }
    inline void SetAuthCode(const Aws::String& value) { m_authCodeHasBeenSet = true; m_authCode = value; }
    inline void SetAuthCode(Aws::String&& value) { m_authCodeHasBeenSet = true; m_authCode = std::move(value); }
    inline void SetAuthCode(const char* value) { m_authCodeHasBeenSet = true; m_authCode.assign(value); }
    inline TransferDomainRequest& WithAuthCode(const Aws::String& value) { SetAuthCode(value); return *this;}
    inline TransferDomainRequest& WithAuthCode(Aws::String&& value) { SetAuthCode(std::move(value)); return *this;}
    inline TransferDomainRequest& WithAuthCode(const char* value) { SetAuthCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the domain will be automatically renewed (true) or not
     * (false). Auto renewal only takes effect after the account is charged.</p>
     * <p>Default: true</p>
     */
    inline bool GetAutoRenew() const{ return m_autoRenew; }
    inline bool AutoRenewHasBeenSet() const { return m_autoRenewHasBeenSet; }
    inline void SetAutoRenew(bool value) { m_autoRenewHasBeenSet = true; m_autoRenew = value; }
    inline TransferDomainRequest& WithAutoRenew(bool value) { SetAutoRenew(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides detailed contact information.</p>
     */
    inline const ContactDetail& GetAdminContact() const{ return m_adminContact; }
    inline bool AdminContactHasBeenSet() const { return m_adminContactHasBeenSet; }
    inline void SetAdminContact(const ContactDetail& value) { m_adminContactHasBeenSet = true; m_adminContact = value; }
    inline void SetAdminContact(ContactDetail&& value) { m_adminContactHasBeenSet = true; m_adminContact = std::move(value); }
    inline TransferDomainRequest& WithAdminContact(const ContactDetail& value) { SetAdminContact(value); return *this;}
    inline TransferDomainRequest& WithAdminContact(ContactDetail&& value) { SetAdminContact(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides detailed contact information.</p>
     */
    inline const ContactDetail& GetRegistrantContact() const{ return m_registrantContact; }
    inline bool RegistrantContactHasBeenSet() const { return m_registrantContactHasBeenSet; }
    inline void SetRegistrantContact(const ContactDetail& value) { m_registrantContactHasBeenSet = true; m_registrantContact = value; }
    inline void SetRegistrantContact(ContactDetail&& value) { m_registrantContactHasBeenSet = true; m_registrantContact = std::move(value); }
    inline TransferDomainRequest& WithRegistrantContact(const ContactDetail& value) { SetRegistrantContact(value); return *this;}
    inline TransferDomainRequest& WithRegistrantContact(ContactDetail&& value) { SetRegistrantContact(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides detailed contact information.</p>
     */
    inline const ContactDetail& GetTechContact() const{ return m_techContact; }
    inline bool TechContactHasBeenSet() const { return m_techContactHasBeenSet; }
    inline void SetTechContact(const ContactDetail& value) { m_techContactHasBeenSet = true; m_techContact = value; }
    inline void SetTechContact(ContactDetail&& value) { m_techContactHasBeenSet = true; m_techContact = std::move(value); }
    inline TransferDomainRequest& WithTechContact(const ContactDetail& value) { SetTechContact(value); return *this;}
    inline TransferDomainRequest& WithTechContact(ContactDetail&& value) { SetTechContact(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * for the registrar, the phrase "REDACTED FOR PRIVACY", or "On behalf of
     * &lt;domain name&gt; owner.".</p>  <p>While some domains may allow
     * different privacy settings per contact, we recommend specifying the same privacy
     * setting for all contacts.</p>  <p>Default: <code>true</code> </p>
     */
    inline bool GetPrivacyProtectAdminContact() const{ return m_privacyProtectAdminContact; }
    inline bool PrivacyProtectAdminContactHasBeenSet() const { return m_privacyProtectAdminContactHasBeenSet; }
    inline void SetPrivacyProtectAdminContact(bool value) { m_privacyProtectAdminContactHasBeenSet = true; m_privacyProtectAdminContact = value; }
    inline TransferDomainRequest& WithPrivacyProtectAdminContact(bool value) { SetPrivacyProtectAdminContact(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar or for our registrar associate, Gandi. If you
     * specify <code>false</code>, WHOIS queries return the information that you
     * entered for the registrant contact (domain owner).</p>  <p>You must
     * specify the same privacy setting for the administrative, billing, registrant,
     * and technical contacts.</p>  <p>Default: <code>true</code> </p>
     */
    inline bool GetPrivacyProtectRegistrantContact() const{ return m_privacyProtectRegistrantContact; }
    inline bool PrivacyProtectRegistrantContactHasBeenSet() const { return m_privacyProtectRegistrantContactHasBeenSet; }
    inline void SetPrivacyProtectRegistrantContact(bool value) { m_privacyProtectRegistrantContactHasBeenSet = true; m_privacyProtectRegistrantContact = value; }
    inline TransferDomainRequest& WithPrivacyProtectRegistrantContact(bool value) { SetPrivacyProtectRegistrantContact(value); return *this;}
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
    inline bool GetPrivacyProtectTechContact() const{ return m_privacyProtectTechContact; }
    inline bool PrivacyProtectTechContactHasBeenSet() const { return m_privacyProtectTechContactHasBeenSet; }
    inline void SetPrivacyProtectTechContact(bool value) { m_privacyProtectTechContactHasBeenSet = true; m_privacyProtectTechContact = value; }
    inline TransferDomainRequest& WithPrivacyProtectTechContact(bool value) { SetPrivacyProtectTechContact(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides detailed contact information.</p>
     */
    inline const ContactDetail& GetBillingContact() const{ return m_billingContact; }
    inline bool BillingContactHasBeenSet() const { return m_billingContactHasBeenSet; }
    inline void SetBillingContact(const ContactDetail& value) { m_billingContactHasBeenSet = true; m_billingContact = value; }
    inline void SetBillingContact(ContactDetail&& value) { m_billingContactHasBeenSet = true; m_billingContact = std::move(value); }
    inline TransferDomainRequest& WithBillingContact(const ContactDetail& value) { SetBillingContact(value); return *this;}
    inline TransferDomainRequest& WithBillingContact(ContactDetail&& value) { SetBillingContact(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar or for our registrar associate, Gandi. If you
     * specify <code>false</code>, WHOIS queries return the information that you
     * entered for the billing contact. </p>  <p>You must specify the same
     * privacy setting for the administrative, billing, registrant, and technical
     * contacts.</p> 
     */
    inline bool GetPrivacyProtectBillingContact() const{ return m_privacyProtectBillingContact; }
    inline bool PrivacyProtectBillingContactHasBeenSet() const { return m_privacyProtectBillingContactHasBeenSet; }
    inline void SetPrivacyProtectBillingContact(bool value) { m_privacyProtectBillingContactHasBeenSet = true; m_privacyProtectBillingContact = value; }
    inline TransferDomainRequest& WithPrivacyProtectBillingContact(bool value) { SetPrivacyProtectBillingContact(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_idnLangCode;
    bool m_idnLangCodeHasBeenSet = false;

    int m_durationInYears;
    bool m_durationInYearsHasBeenSet = false;

    Aws::Vector<Nameserver> m_nameservers;
    bool m_nameserversHasBeenSet = false;

    Aws::String m_authCode;
    bool m_authCodeHasBeenSet = false;

    bool m_autoRenew;
    bool m_autoRenewHasBeenSet = false;

    ContactDetail m_adminContact;
    bool m_adminContactHasBeenSet = false;

    ContactDetail m_registrantContact;
    bool m_registrantContactHasBeenSet = false;

    ContactDetail m_techContact;
    bool m_techContactHasBeenSet = false;

    bool m_privacyProtectAdminContact;
    bool m_privacyProtectAdminContactHasBeenSet = false;

    bool m_privacyProtectRegistrantContact;
    bool m_privacyProtectRegistrantContactHasBeenSet = false;

    bool m_privacyProtectTechContact;
    bool m_privacyProtectTechContactHasBeenSet = false;

    ContactDetail m_billingContact;
    bool m_billingContactHasBeenSet = false;

    bool m_privacyProtectBillingContact;
    bool m_privacyProtectBillingContactHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
