﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53domains/model/ContactDetail.h>
#include <aws/core/utils/DateTime.h>
#include <aws/route53domains/model/Nameserver.h>
#include <aws/route53domains/model/DnssecKey.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Route53Domains
{
namespace Model
{
  /**
   * <p>The GetDomainDetail response includes the following elements.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/GetDomainDetailResponse">AWS
   * API Reference</a></p>
   */
  class GetDomainDetailResult
  {
  public:
    AWS_ROUTE53DOMAINS_API GetDomainDetailResult();
    AWS_ROUTE53DOMAINS_API GetDomainDetailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53DOMAINS_API GetDomainDetailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of a domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline void SetDomainName(const Aws::String& value) { m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainName.assign(value); }
    inline GetDomainDetailResult& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline GetDomainDetailResult& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline GetDomainDetailResult& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name servers of the domain.</p>
     */
    inline const Aws::Vector<Nameserver>& GetNameservers() const{ return m_nameservers; }
    inline void SetNameservers(const Aws::Vector<Nameserver>& value) { m_nameservers = value; }
    inline void SetNameservers(Aws::Vector<Nameserver>&& value) { m_nameservers = std::move(value); }
    inline GetDomainDetailResult& WithNameservers(const Aws::Vector<Nameserver>& value) { SetNameservers(value); return *this;}
    inline GetDomainDetailResult& WithNameservers(Aws::Vector<Nameserver>&& value) { SetNameservers(std::move(value)); return *this;}
    inline GetDomainDetailResult& AddNameservers(const Nameserver& value) { m_nameservers.push_back(value); return *this; }
    inline GetDomainDetailResult& AddNameservers(Nameserver&& value) { m_nameservers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the domain registration is set to renew automatically.</p>
     */
    inline bool GetAutoRenew() const{ return m_autoRenew; }
    inline void SetAutoRenew(bool value) { m_autoRenew = value; }
    inline GetDomainDetailResult& WithAutoRenew(bool value) { SetAutoRenew(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides details about the domain administrative contact.</p>
     */
    inline const ContactDetail& GetAdminContact() const{ return m_adminContact; }
    inline void SetAdminContact(const ContactDetail& value) { m_adminContact = value; }
    inline void SetAdminContact(ContactDetail&& value) { m_adminContact = std::move(value); }
    inline GetDomainDetailResult& WithAdminContact(const ContactDetail& value) { SetAdminContact(value); return *this;}
    inline GetDomainDetailResult& WithAdminContact(ContactDetail&& value) { SetAdminContact(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides details about the domain registrant.</p>
     */
    inline const ContactDetail& GetRegistrantContact() const{ return m_registrantContact; }
    inline void SetRegistrantContact(const ContactDetail& value) { m_registrantContact = value; }
    inline void SetRegistrantContact(ContactDetail&& value) { m_registrantContact = std::move(value); }
    inline GetDomainDetailResult& WithRegistrantContact(const ContactDetail& value) { SetRegistrantContact(value); return *this;}
    inline GetDomainDetailResult& WithRegistrantContact(ContactDetail&& value) { SetRegistrantContact(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides details about the domain technical contact.</p>
     */
    inline const ContactDetail& GetTechContact() const{ return m_techContact; }
    inline void SetTechContact(const ContactDetail& value) { m_techContact = value; }
    inline void SetTechContact(ContactDetail&& value) { m_techContact = std::move(value); }
    inline GetDomainDetailResult& WithTechContact(const ContactDetail& value) { SetTechContact(value); return *this;}
    inline GetDomainDetailResult& WithTechContact(ContactDetail&& value) { SetTechContact(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether contact information is concealed from WHOIS queries. If the
     * value is <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar or for our registrar associate, Gandi. If the value
     * is <code>false</code>, WHOIS queries return the information that you entered for
     * the admin contact.</p>
     */
    inline bool GetAdminPrivacy() const{ return m_adminPrivacy; }
    inline void SetAdminPrivacy(bool value) { m_adminPrivacy = value; }
    inline GetDomainDetailResult& WithAdminPrivacy(bool value) { SetAdminPrivacy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether contact information is concealed from WHOIS queries. If the
     * value is <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar or for our registrar associate, Gandi. If the value
     * is <code>false</code>, WHOIS queries return the information that you entered for
     * the registrant contact (domain owner).</p>
     */
    inline bool GetRegistrantPrivacy() const{ return m_registrantPrivacy; }
    inline void SetRegistrantPrivacy(bool value) { m_registrantPrivacy = value; }
    inline GetDomainDetailResult& WithRegistrantPrivacy(bool value) { SetRegistrantPrivacy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether contact information is concealed from WHOIS queries. If the
     * value is <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar or for our registrar associate, Gandi. If the value
     * is <code>false</code>, WHOIS queries return the information that you entered for
     * the technical contact.</p>
     */
    inline bool GetTechPrivacy() const{ return m_techPrivacy; }
    inline void SetTechPrivacy(bool value) { m_techPrivacy = value; }
    inline GetDomainDetailResult& WithTechPrivacy(bool value) { SetTechPrivacy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the registrar of the domain as identified in the registry. </p>
     */
    inline const Aws::String& GetRegistrarName() const{ return m_registrarName; }
    inline void SetRegistrarName(const Aws::String& value) { m_registrarName = value; }
    inline void SetRegistrarName(Aws::String&& value) { m_registrarName = std::move(value); }
    inline void SetRegistrarName(const char* value) { m_registrarName.assign(value); }
    inline GetDomainDetailResult& WithRegistrarName(const Aws::String& value) { SetRegistrarName(value); return *this;}
    inline GetDomainDetailResult& WithRegistrarName(Aws::String&& value) { SetRegistrarName(std::move(value)); return *this;}
    inline GetDomainDetailResult& WithRegistrarName(const char* value) { SetRegistrarName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified name of the WHOIS server that can answer the WHOIS query
     * for the domain.</p>
     */
    inline const Aws::String& GetWhoIsServer() const{ return m_whoIsServer; }
    inline void SetWhoIsServer(const Aws::String& value) { m_whoIsServer = value; }
    inline void SetWhoIsServer(Aws::String&& value) { m_whoIsServer = std::move(value); }
    inline void SetWhoIsServer(const char* value) { m_whoIsServer.assign(value); }
    inline GetDomainDetailResult& WithWhoIsServer(const Aws::String& value) { SetWhoIsServer(value); return *this;}
    inline GetDomainDetailResult& WithWhoIsServer(Aws::String&& value) { SetWhoIsServer(std::move(value)); return *this;}
    inline GetDomainDetailResult& WithWhoIsServer(const char* value) { SetWhoIsServer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Web address of the registrar.</p>
     */
    inline const Aws::String& GetRegistrarUrl() const{ return m_registrarUrl; }
    inline void SetRegistrarUrl(const Aws::String& value) { m_registrarUrl = value; }
    inline void SetRegistrarUrl(Aws::String&& value) { m_registrarUrl = std::move(value); }
    inline void SetRegistrarUrl(const char* value) { m_registrarUrl.assign(value); }
    inline GetDomainDetailResult& WithRegistrarUrl(const Aws::String& value) { SetRegistrarUrl(value); return *this;}
    inline GetDomainDetailResult& WithRegistrarUrl(Aws::String&& value) { SetRegistrarUrl(std::move(value)); return *this;}
    inline GetDomainDetailResult& WithRegistrarUrl(const char* value) { SetRegistrarUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Email address to contact to report incorrect contact information for a
     * domain, to report that the domain is being used to send spam, to report that
     * someone is cybersquatting on a domain name, or report some other type of
     * abuse.</p>
     */
    inline const Aws::String& GetAbuseContactEmail() const{ return m_abuseContactEmail; }
    inline void SetAbuseContactEmail(const Aws::String& value) { m_abuseContactEmail = value; }
    inline void SetAbuseContactEmail(Aws::String&& value) { m_abuseContactEmail = std::move(value); }
    inline void SetAbuseContactEmail(const char* value) { m_abuseContactEmail.assign(value); }
    inline GetDomainDetailResult& WithAbuseContactEmail(const Aws::String& value) { SetAbuseContactEmail(value); return *this;}
    inline GetDomainDetailResult& WithAbuseContactEmail(Aws::String&& value) { SetAbuseContactEmail(std::move(value)); return *this;}
    inline GetDomainDetailResult& WithAbuseContactEmail(const char* value) { SetAbuseContactEmail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Phone number for reporting abuse.</p>
     */
    inline const Aws::String& GetAbuseContactPhone() const{ return m_abuseContactPhone; }
    inline void SetAbuseContactPhone(const Aws::String& value) { m_abuseContactPhone = value; }
    inline void SetAbuseContactPhone(Aws::String&& value) { m_abuseContactPhone = std::move(value); }
    inline void SetAbuseContactPhone(const char* value) { m_abuseContactPhone.assign(value); }
    inline GetDomainDetailResult& WithAbuseContactPhone(const Aws::String& value) { SetAbuseContactPhone(value); return *this;}
    inline GetDomainDetailResult& WithAbuseContactPhone(Aws::String&& value) { SetAbuseContactPhone(std::move(value)); return *this;}
    inline GetDomainDetailResult& WithAbuseContactPhone(const char* value) { SetAbuseContactPhone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetRegistryDomainId() const{ return m_registryDomainId; }
    inline void SetRegistryDomainId(const Aws::String& value) { m_registryDomainId = value; }
    inline void SetRegistryDomainId(Aws::String&& value) { m_registryDomainId = std::move(value); }
    inline void SetRegistryDomainId(const char* value) { m_registryDomainId.assign(value); }
    inline GetDomainDetailResult& WithRegistryDomainId(const Aws::String& value) { SetRegistryDomainId(value); return *this;}
    inline GetDomainDetailResult& WithRegistryDomainId(Aws::String&& value) { SetRegistryDomainId(std::move(value)); return *this;}
    inline GetDomainDetailResult& WithRegistryDomainId(const char* value) { SetRegistryDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the domain was created as found in the response to a WHOIS
     * query. The date and time is in Unix time format and Coordinated Universal time
     * (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }
    inline GetDomainDetailResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline GetDomainDetailResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last updated date of the domain as found in the response to a WHOIS
     * query. The date and time is in Unix time format and Coordinated Universal time
     * (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedDate() const{ return m_updatedDate; }
    inline void SetUpdatedDate(const Aws::Utils::DateTime& value) { m_updatedDate = value; }
    inline void SetUpdatedDate(Aws::Utils::DateTime&& value) { m_updatedDate = std::move(value); }
    inline GetDomainDetailResult& WithUpdatedDate(const Aws::Utils::DateTime& value) { SetUpdatedDate(value); return *this;}
    inline GetDomainDetailResult& WithUpdatedDate(Aws::Utils::DateTime&& value) { SetUpdatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the registration for the domain is set to expire. The date and
     * time is in Unix time format and Coordinated Universal time (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationDate() const{ return m_expirationDate; }
    inline void SetExpirationDate(const Aws::Utils::DateTime& value) { m_expirationDate = value; }
    inline void SetExpirationDate(Aws::Utils::DateTime&& value) { m_expirationDate = std::move(value); }
    inline GetDomainDetailResult& WithExpirationDate(const Aws::Utils::DateTime& value) { SetExpirationDate(value); return *this;}
    inline GetDomainDetailResult& WithExpirationDate(Aws::Utils::DateTime&& value) { SetExpirationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reseller of the domain. Domains registered or transferred using Route 53
     * domains will have <code>"Amazon"</code> as the reseller. </p>
     */
    inline const Aws::String& GetReseller() const{ return m_reseller; }
    inline void SetReseller(const Aws::String& value) { m_reseller = value; }
    inline void SetReseller(Aws::String&& value) { m_reseller = std::move(value); }
    inline void SetReseller(const char* value) { m_reseller.assign(value); }
    inline GetDomainDetailResult& WithReseller(const Aws::String& value) { SetReseller(value); return *this;}
    inline GetDomainDetailResult& WithReseller(Aws::String&& value) { SetReseller(std::move(value)); return *this;}
    inline GetDomainDetailResult& WithReseller(const char* value) { SetReseller(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Deprecated.</p>
     */
    inline const Aws::String& GetDnsSec() const{ return m_dnsSec; }
    inline void SetDnsSec(const Aws::String& value) { m_dnsSec = value; }
    inline void SetDnsSec(Aws::String&& value) { m_dnsSec = std::move(value); }
    inline void SetDnsSec(const char* value) { m_dnsSec.assign(value); }
    inline GetDomainDetailResult& WithDnsSec(const Aws::String& value) { SetDnsSec(value); return *this;}
    inline GetDomainDetailResult& WithDnsSec(Aws::String&& value) { SetDnsSec(std::move(value)); return *this;}
    inline GetDomainDetailResult& WithDnsSec(const char* value) { SetDnsSec(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of domain name status codes, also known as Extensible Provisioning
     * Protocol (EPP) status codes.</p> <p>ICANN, the organization that maintains a
     * central database of domain names, has developed a set of domain name status
     * codes that tell you the status of a variety of operations on a domain name, for
     * example, registering a domain name, transferring a domain name to another
     * registrar, renewing the registration for a domain name, and so on. All
     * registrars use this same set of status codes.</p> <p>For a current list of
     * domain name status codes and an explanation of what each code means, go to the
     * <a href="https://www.icann.org/">ICANN website</a> and search for <code>epp
     * status codes</code>. (Search on the ICANN website; web searches sometimes return
     * an old version of the document.)</p>
     */
    inline const Aws::Vector<Aws::String>& GetStatusList() const{ return m_statusList; }
    inline void SetStatusList(const Aws::Vector<Aws::String>& value) { m_statusList = value; }
    inline void SetStatusList(Aws::Vector<Aws::String>&& value) { m_statusList = std::move(value); }
    inline GetDomainDetailResult& WithStatusList(const Aws::Vector<Aws::String>& value) { SetStatusList(value); return *this;}
    inline GetDomainDetailResult& WithStatusList(Aws::Vector<Aws::String>&& value) { SetStatusList(std::move(value)); return *this;}
    inline GetDomainDetailResult& AddStatusList(const Aws::String& value) { m_statusList.push_back(value); return *this; }
    inline GetDomainDetailResult& AddStatusList(Aws::String&& value) { m_statusList.push_back(std::move(value)); return *this; }
    inline GetDomainDetailResult& AddStatusList(const char* value) { m_statusList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A complex type that contains information about the DNSSEC configuration.</p>
     */
    inline const Aws::Vector<DnssecKey>& GetDnssecKeys() const{ return m_dnssecKeys; }
    inline void SetDnssecKeys(const Aws::Vector<DnssecKey>& value) { m_dnssecKeys = value; }
    inline void SetDnssecKeys(Aws::Vector<DnssecKey>&& value) { m_dnssecKeys = std::move(value); }
    inline GetDomainDetailResult& WithDnssecKeys(const Aws::Vector<DnssecKey>& value) { SetDnssecKeys(value); return *this;}
    inline GetDomainDetailResult& WithDnssecKeys(Aws::Vector<DnssecKey>&& value) { SetDnssecKeys(std::move(value)); return *this;}
    inline GetDomainDetailResult& AddDnssecKeys(const DnssecKey& value) { m_dnssecKeys.push_back(value); return *this; }
    inline GetDomainDetailResult& AddDnssecKeys(DnssecKey&& value) { m_dnssecKeys.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides details about the domain billing contact.</p>
     */
    inline const ContactDetail& GetBillingContact() const{ return m_billingContact; }
    inline void SetBillingContact(const ContactDetail& value) { m_billingContact = value; }
    inline void SetBillingContact(ContactDetail&& value) { m_billingContact = std::move(value); }
    inline GetDomainDetailResult& WithBillingContact(const ContactDetail& value) { SetBillingContact(value); return *this;}
    inline GetDomainDetailResult& WithBillingContact(ContactDetail&& value) { SetBillingContact(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether contact information is concealed from WHOIS queries. If the
     * value is <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar or for our registrar associate, Gandi. If the value
     * is <code>false</code>, WHOIS queries return the information that you entered for
     * the billing contact.</p>
     */
    inline bool GetBillingPrivacy() const{ return m_billingPrivacy; }
    inline void SetBillingPrivacy(bool value) { m_billingPrivacy = value; }
    inline GetDomainDetailResult& WithBillingPrivacy(bool value) { SetBillingPrivacy(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDomainDetailResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDomainDetailResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDomainDetailResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;

    Aws::Vector<Nameserver> m_nameservers;

    bool m_autoRenew;

    ContactDetail m_adminContact;

    ContactDetail m_registrantContact;

    ContactDetail m_techContact;

    bool m_adminPrivacy;

    bool m_registrantPrivacy;

    bool m_techPrivacy;

    Aws::String m_registrarName;

    Aws::String m_whoIsServer;

    Aws::String m_registrarUrl;

    Aws::String m_abuseContactEmail;

    Aws::String m_abuseContactPhone;

    Aws::String m_registryDomainId;

    Aws::Utils::DateTime m_creationDate;

    Aws::Utils::DateTime m_updatedDate;

    Aws::Utils::DateTime m_expirationDate;

    Aws::String m_reseller;

    Aws::String m_dnsSec;

    Aws::Vector<Aws::String> m_statusList;

    Aws::Vector<DnssecKey> m_dnssecKeys;

    ContactDetail m_billingContact;

    bool m_billingPrivacy;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
