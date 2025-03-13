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
    AWS_ROUTE53DOMAINS_API TransferDomainRequest() = default;

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
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    TransferDomainRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
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
    TransferDomainRequest& WithIdnLangCode(IdnLangCodeT&& value) { SetIdnLangCode(std::forward<IdnLangCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of years that you want to register the domain for. Domains are
     * registered for a minimum of one year. The maximum period depends on the
     * top-level domain.</p> <p>Default: 1</p>
     */
    inline int GetDurationInYears() const { return m_durationInYears; }
    inline bool DurationInYearsHasBeenSet() const { return m_durationInYearsHasBeenSet; }
    inline void SetDurationInYears(int value) { m_durationInYearsHasBeenSet = true; m_durationInYears = value; }
    inline TransferDomainRequest& WithDurationInYears(int value) { SetDurationInYears(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details for the host and glue IP addresses.</p>
     */
    inline const Aws::Vector<Nameserver>& GetNameservers() const { return m_nameservers; }
    inline bool NameserversHasBeenSet() const { return m_nameserversHasBeenSet; }
    template<typename NameserversT = Aws::Vector<Nameserver>>
    void SetNameservers(NameserversT&& value) { m_nameserversHasBeenSet = true; m_nameservers = std::forward<NameserversT>(value); }
    template<typename NameserversT = Aws::Vector<Nameserver>>
    TransferDomainRequest& WithNameservers(NameserversT&& value) { SetNameservers(std::forward<NameserversT>(value)); return *this;}
    template<typename NameserversT = Nameserver>
    TransferDomainRequest& AddNameservers(NameserversT&& value) { m_nameserversHasBeenSet = true; m_nameservers.emplace_back(std::forward<NameserversT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The authorization code for the domain. You get this value from the current
     * registrar.</p>
     */
    inline const Aws::String& GetAuthCode() const { return m_authCode; }
    inline bool AuthCodeHasBeenSet() const { return m_authCodeHasBeenSet; }
    template<typename AuthCodeT = Aws::String>
    void SetAuthCode(AuthCodeT&& value) { m_authCodeHasBeenSet = true; m_authCode = std::forward<AuthCodeT>(value); }
    template<typename AuthCodeT = Aws::String>
    TransferDomainRequest& WithAuthCode(AuthCodeT&& value) { SetAuthCode(std::forward<AuthCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the domain will be automatically renewed (true) or not
     * (false). Auto renewal only takes effect after the account is charged.</p>
     * <p>Default: true</p>
     */
    inline bool GetAutoRenew() const { return m_autoRenew; }
    inline bool AutoRenewHasBeenSet() const { return m_autoRenewHasBeenSet; }
    inline void SetAutoRenew(bool value) { m_autoRenewHasBeenSet = true; m_autoRenew = value; }
    inline TransferDomainRequest& WithAutoRenew(bool value) { SetAutoRenew(value); return *this;}
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
    TransferDomainRequest& WithAdminContact(AdminContactT&& value) { SetAdminContact(std::forward<AdminContactT>(value)); return *this;}
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
    TransferDomainRequest& WithRegistrantContact(RegistrantContactT&& value) { SetRegistrantContact(std::forward<RegistrantContactT>(value)); return *this;}
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
    TransferDomainRequest& WithTechContact(TechContactT&& value) { SetTechContact(std::forward<TechContactT>(value)); return *this;}
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
    inline bool GetPrivacyProtectAdminContact() const { return m_privacyProtectAdminContact; }
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
    inline bool GetPrivacyProtectRegistrantContact() const { return m_privacyProtectRegistrantContact; }
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
    inline bool GetPrivacyProtectTechContact() const { return m_privacyProtectTechContact; }
    inline bool PrivacyProtectTechContactHasBeenSet() const { return m_privacyProtectTechContactHasBeenSet; }
    inline void SetPrivacyProtectTechContact(bool value) { m_privacyProtectTechContactHasBeenSet = true; m_privacyProtectTechContact = value; }
    inline TransferDomainRequest& WithPrivacyProtectTechContact(bool value) { SetPrivacyProtectTechContact(value); return *this;}
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
    TransferDomainRequest& WithBillingContact(BillingContactT&& value) { SetBillingContact(std::forward<BillingContactT>(value)); return *this;}
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
    inline bool GetPrivacyProtectBillingContact() const { return m_privacyProtectBillingContact; }
    inline bool PrivacyProtectBillingContactHasBeenSet() const { return m_privacyProtectBillingContactHasBeenSet; }
    inline void SetPrivacyProtectBillingContact(bool value) { m_privacyProtectBillingContactHasBeenSet = true; m_privacyProtectBillingContact = value; }
    inline TransferDomainRequest& WithPrivacyProtectBillingContact(bool value) { SetPrivacyProtectBillingContact(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_idnLangCode;
    bool m_idnLangCodeHasBeenSet = false;

    int m_durationInYears{0};
    bool m_durationInYearsHasBeenSet = false;

    Aws::Vector<Nameserver> m_nameservers;
    bool m_nameserversHasBeenSet = false;

    Aws::String m_authCode;
    bool m_authCodeHasBeenSet = false;

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
