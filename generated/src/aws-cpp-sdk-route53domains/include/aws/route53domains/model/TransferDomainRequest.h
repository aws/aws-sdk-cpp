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
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

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
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

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
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

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
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

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
    inline TransferDomainRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

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
    inline TransferDomainRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

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
    inline TransferDomainRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetIdnLangCode() const{ return m_idnLangCode; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool IdnLangCodeHasBeenSet() const { return m_idnLangCodeHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetIdnLangCode(const Aws::String& value) { m_idnLangCodeHasBeenSet = true; m_idnLangCode = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetIdnLangCode(Aws::String&& value) { m_idnLangCodeHasBeenSet = true; m_idnLangCode = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetIdnLangCode(const char* value) { m_idnLangCodeHasBeenSet = true; m_idnLangCode.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline TransferDomainRequest& WithIdnLangCode(const Aws::String& value) { SetIdnLangCode(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline TransferDomainRequest& WithIdnLangCode(Aws::String&& value) { SetIdnLangCode(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline TransferDomainRequest& WithIdnLangCode(const char* value) { SetIdnLangCode(value); return *this;}


    /**
     * <p>The number of years that you want to register the domain for. Domains are
     * registered for a minimum of one year. The maximum period depends on the
     * top-level domain.</p> <p>Default: 1</p>
     */
    inline int GetDurationInYears() const{ return m_durationInYears; }

    /**
     * <p>The number of years that you want to register the domain for. Domains are
     * registered for a minimum of one year. The maximum period depends on the
     * top-level domain.</p> <p>Default: 1</p>
     */
    inline bool DurationInYearsHasBeenSet() const { return m_durationInYearsHasBeenSet; }

    /**
     * <p>The number of years that you want to register the domain for. Domains are
     * registered for a minimum of one year. The maximum period depends on the
     * top-level domain.</p> <p>Default: 1</p>
     */
    inline void SetDurationInYears(int value) { m_durationInYearsHasBeenSet = true; m_durationInYears = value; }

    /**
     * <p>The number of years that you want to register the domain for. Domains are
     * registered for a minimum of one year. The maximum period depends on the
     * top-level domain.</p> <p>Default: 1</p>
     */
    inline TransferDomainRequest& WithDurationInYears(int value) { SetDurationInYears(value); return *this;}


    /**
     * <p>Contains details for the host and glue IP addresses.</p>
     */
    inline const Aws::Vector<Nameserver>& GetNameservers() const{ return m_nameservers; }

    /**
     * <p>Contains details for the host and glue IP addresses.</p>
     */
    inline bool NameserversHasBeenSet() const { return m_nameserversHasBeenSet; }

    /**
     * <p>Contains details for the host and glue IP addresses.</p>
     */
    inline void SetNameservers(const Aws::Vector<Nameserver>& value) { m_nameserversHasBeenSet = true; m_nameservers = value; }

    /**
     * <p>Contains details for the host and glue IP addresses.</p>
     */
    inline void SetNameservers(Aws::Vector<Nameserver>&& value) { m_nameserversHasBeenSet = true; m_nameservers = std::move(value); }

    /**
     * <p>Contains details for the host and glue IP addresses.</p>
     */
    inline TransferDomainRequest& WithNameservers(const Aws::Vector<Nameserver>& value) { SetNameservers(value); return *this;}

    /**
     * <p>Contains details for the host and glue IP addresses.</p>
     */
    inline TransferDomainRequest& WithNameservers(Aws::Vector<Nameserver>&& value) { SetNameservers(std::move(value)); return *this;}

    /**
     * <p>Contains details for the host and glue IP addresses.</p>
     */
    inline TransferDomainRequest& AddNameservers(const Nameserver& value) { m_nameserversHasBeenSet = true; m_nameservers.push_back(value); return *this; }

    /**
     * <p>Contains details for the host and glue IP addresses.</p>
     */
    inline TransferDomainRequest& AddNameservers(Nameserver&& value) { m_nameserversHasBeenSet = true; m_nameservers.push_back(std::move(value)); return *this; }


    /**
     * <p>The authorization code for the domain. You get this value from the current
     * registrar.</p>
     */
    inline const Aws::String& GetAuthCode() const{ return m_authCode; }

    /**
     * <p>The authorization code for the domain. You get this value from the current
     * registrar.</p>
     */
    inline bool AuthCodeHasBeenSet() const { return m_authCodeHasBeenSet; }

    /**
     * <p>The authorization code for the domain. You get this value from the current
     * registrar.</p>
     */
    inline void SetAuthCode(const Aws::String& value) { m_authCodeHasBeenSet = true; m_authCode = value; }

    /**
     * <p>The authorization code for the domain. You get this value from the current
     * registrar.</p>
     */
    inline void SetAuthCode(Aws::String&& value) { m_authCodeHasBeenSet = true; m_authCode = std::move(value); }

    /**
     * <p>The authorization code for the domain. You get this value from the current
     * registrar.</p>
     */
    inline void SetAuthCode(const char* value) { m_authCodeHasBeenSet = true; m_authCode.assign(value); }

    /**
     * <p>The authorization code for the domain. You get this value from the current
     * registrar.</p>
     */
    inline TransferDomainRequest& WithAuthCode(const Aws::String& value) { SetAuthCode(value); return *this;}

    /**
     * <p>The authorization code for the domain. You get this value from the current
     * registrar.</p>
     */
    inline TransferDomainRequest& WithAuthCode(Aws::String&& value) { SetAuthCode(std::move(value)); return *this;}

    /**
     * <p>The authorization code for the domain. You get this value from the current
     * registrar.</p>
     */
    inline TransferDomainRequest& WithAuthCode(const char* value) { SetAuthCode(value); return *this;}


    /**
     * <p>Indicates whether the domain will be automatically renewed (true) or not
     * (false). Auto renewal only takes effect after the account is charged.</p>
     * <p>Default: true</p>
     */
    inline bool GetAutoRenew() const{ return m_autoRenew; }

    /**
     * <p>Indicates whether the domain will be automatically renewed (true) or not
     * (false). Auto renewal only takes effect after the account is charged.</p>
     * <p>Default: true</p>
     */
    inline bool AutoRenewHasBeenSet() const { return m_autoRenewHasBeenSet; }

    /**
     * <p>Indicates whether the domain will be automatically renewed (true) or not
     * (false). Auto renewal only takes effect after the account is charged.</p>
     * <p>Default: true</p>
     */
    inline void SetAutoRenew(bool value) { m_autoRenewHasBeenSet = true; m_autoRenew = value; }

    /**
     * <p>Indicates whether the domain will be automatically renewed (true) or not
     * (false). Auto renewal only takes effect after the account is charged.</p>
     * <p>Default: true</p>
     */
    inline TransferDomainRequest& WithAutoRenew(bool value) { SetAutoRenew(value); return *this;}


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
    inline TransferDomainRequest& WithAdminContact(const ContactDetail& value) { SetAdminContact(value); return *this;}

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline TransferDomainRequest& WithAdminContact(ContactDetail&& value) { SetAdminContact(std::move(value)); return *this;}


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
    inline TransferDomainRequest& WithRegistrantContact(const ContactDetail& value) { SetRegistrantContact(value); return *this;}

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline TransferDomainRequest& WithRegistrantContact(ContactDetail&& value) { SetRegistrantContact(std::move(value)); return *this;}


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
    inline TransferDomainRequest& WithTechContact(const ContactDetail& value) { SetTechContact(value); return *this;}

    /**
     * <p>Provides detailed contact information.</p>
     */
    inline TransferDomainRequest& WithTechContact(ContactDetail&& value) { SetTechContact(std::move(value)); return *this;}


    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If you specify
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the admin contact.</p>  <p>You must specify the same privacy setting for
     * the administrative, registrant, and technical contacts.</p>  <p>Default:
     * <code>true</code> </p>
     */
    inline bool GetPrivacyProtectAdminContact() const{ return m_privacyProtectAdminContact; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If you specify
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the admin contact.</p>  <p>You must specify the same privacy setting for
     * the administrative, registrant, and technical contacts.</p>  <p>Default:
     * <code>true</code> </p>
     */
    inline bool PrivacyProtectAdminContactHasBeenSet() const { return m_privacyProtectAdminContactHasBeenSet; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If you specify
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the admin contact.</p>  <p>You must specify the same privacy setting for
     * the administrative, registrant, and technical contacts.</p>  <p>Default:
     * <code>true</code> </p>
     */
    inline void SetPrivacyProtectAdminContact(bool value) { m_privacyProtectAdminContactHasBeenSet = true; m_privacyProtectAdminContact = value; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If you specify
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the admin contact.</p>  <p>You must specify the same privacy setting for
     * the administrative, registrant, and technical contacts.</p>  <p>Default:
     * <code>true</code> </p>
     */
    inline TransferDomainRequest& WithPrivacyProtectAdminContact(bool value) { SetPrivacyProtectAdminContact(value); return *this;}


    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If you specify
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the registrant contact (domain owner).</p>  <p>You must specify the same
     * privacy setting for the administrative, registrant, and technical contacts.</p>
     *  <p>Default: <code>true</code> </p>
     */
    inline bool GetPrivacyProtectRegistrantContact() const{ return m_privacyProtectRegistrantContact; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If you specify
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the registrant contact (domain owner).</p>  <p>You must specify the same
     * privacy setting for the administrative, registrant, and technical contacts.</p>
     *  <p>Default: <code>true</code> </p>
     */
    inline bool PrivacyProtectRegistrantContactHasBeenSet() const { return m_privacyProtectRegistrantContactHasBeenSet; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If you specify
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the registrant contact (domain owner).</p>  <p>You must specify the same
     * privacy setting for the administrative, registrant, and technical contacts.</p>
     *  <p>Default: <code>true</code> </p>
     */
    inline void SetPrivacyProtectRegistrantContact(bool value) { m_privacyProtectRegistrantContactHasBeenSet = true; m_privacyProtectRegistrantContact = value; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If you specify
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the registrant contact (domain owner).</p>  <p>You must specify the same
     * privacy setting for the administrative, registrant, and technical contacts.</p>
     *  <p>Default: <code>true</code> </p>
     */
    inline TransferDomainRequest& WithPrivacyProtectRegistrantContact(bool value) { SetPrivacyProtectRegistrantContact(value); return *this;}


    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If you specify
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the technical contact.</p>  <p>You must specify the same privacy setting
     * for the administrative, registrant, and technical contacts.</p> 
     * <p>Default: <code>true</code> </p>
     */
    inline bool GetPrivacyProtectTechContact() const{ return m_privacyProtectTechContact; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If you specify
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the technical contact.</p>  <p>You must specify the same privacy setting
     * for the administrative, registrant, and technical contacts.</p> 
     * <p>Default: <code>true</code> </p>
     */
    inline bool PrivacyProtectTechContactHasBeenSet() const { return m_privacyProtectTechContactHasBeenSet; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If you specify
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the technical contact.</p>  <p>You must specify the same privacy setting
     * for the administrative, registrant, and technical contacts.</p> 
     * <p>Default: <code>true</code> </p>
     */
    inline void SetPrivacyProtectTechContact(bool value) { m_privacyProtectTechContactHasBeenSet = true; m_privacyProtectTechContact = value; }

    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar (for .com, .net, and .org domains) or for our
     * registrar associate, Gandi (for all other TLDs). If you specify
     * <code>false</code>, WHOIS queries return the information that you entered for
     * the technical contact.</p>  <p>You must specify the same privacy setting
     * for the administrative, registrant, and technical contacts.</p> 
     * <p>Default: <code>true</code> </p>
     */
    inline TransferDomainRequest& WithPrivacyProtectTechContact(bool value) { SetPrivacyProtectTechContact(value); return *this;}

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
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
