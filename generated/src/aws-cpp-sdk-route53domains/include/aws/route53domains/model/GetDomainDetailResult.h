/**
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
    AWS_ROUTE53DOMAINS_API GetDomainDetailResult() = default;
    AWS_ROUTE53DOMAINS_API GetDomainDetailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53DOMAINS_API GetDomainDetailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of a domain.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    GetDomainDetailResult& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name servers of the domain.</p>
     */
    inline const Aws::Vector<Nameserver>& GetNameservers() const { return m_nameservers; }
    template<typename NameserversT = Aws::Vector<Nameserver>>
    void SetNameservers(NameserversT&& value) { m_nameserversHasBeenSet = true; m_nameservers = std::forward<NameserversT>(value); }
    template<typename NameserversT = Aws::Vector<Nameserver>>
    GetDomainDetailResult& WithNameservers(NameserversT&& value) { SetNameservers(std::forward<NameserversT>(value)); return *this;}
    template<typename NameserversT = Nameserver>
    GetDomainDetailResult& AddNameservers(NameserversT&& value) { m_nameserversHasBeenSet = true; m_nameservers.emplace_back(std::forward<NameserversT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether the domain registration is set to renew automatically.</p>
     */
    inline bool GetAutoRenew() const { return m_autoRenew; }
    inline void SetAutoRenew(bool value) { m_autoRenewHasBeenSet = true; m_autoRenew = value; }
    inline GetDomainDetailResult& WithAutoRenew(bool value) { SetAutoRenew(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides details about the domain administrative contact.</p>
     */
    inline const ContactDetail& GetAdminContact() const { return m_adminContact; }
    template<typename AdminContactT = ContactDetail>
    void SetAdminContact(AdminContactT&& value) { m_adminContactHasBeenSet = true; m_adminContact = std::forward<AdminContactT>(value); }
    template<typename AdminContactT = ContactDetail>
    GetDomainDetailResult& WithAdminContact(AdminContactT&& value) { SetAdminContact(std::forward<AdminContactT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides details about the domain registrant.</p>
     */
    inline const ContactDetail& GetRegistrantContact() const { return m_registrantContact; }
    template<typename RegistrantContactT = ContactDetail>
    void SetRegistrantContact(RegistrantContactT&& value) { m_registrantContactHasBeenSet = true; m_registrantContact = std::forward<RegistrantContactT>(value); }
    template<typename RegistrantContactT = ContactDetail>
    GetDomainDetailResult& WithRegistrantContact(RegistrantContactT&& value) { SetRegistrantContact(std::forward<RegistrantContactT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides details about the domain technical contact.</p>
     */
    inline const ContactDetail& GetTechContact() const { return m_techContact; }
    template<typename TechContactT = ContactDetail>
    void SetTechContact(TechContactT&& value) { m_techContactHasBeenSet = true; m_techContact = std::forward<TechContactT>(value); }
    template<typename TechContactT = ContactDetail>
    GetDomainDetailResult& WithTechContact(TechContactT&& value) { SetTechContact(std::forward<TechContactT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether contact information is concealed from WHOIS queries. If the
     * value is <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar or for our registrar associate, Gandi. If the value
     * is <code>false</code>, WHOIS queries return the information that you entered for
     * the admin contact.</p>
     */
    inline bool GetAdminPrivacy() const { return m_adminPrivacy; }
    inline void SetAdminPrivacy(bool value) { m_adminPrivacyHasBeenSet = true; m_adminPrivacy = value; }
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
    inline bool GetRegistrantPrivacy() const { return m_registrantPrivacy; }
    inline void SetRegistrantPrivacy(bool value) { m_registrantPrivacyHasBeenSet = true; m_registrantPrivacy = value; }
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
    inline bool GetTechPrivacy() const { return m_techPrivacy; }
    inline void SetTechPrivacy(bool value) { m_techPrivacyHasBeenSet = true; m_techPrivacy = value; }
    inline GetDomainDetailResult& WithTechPrivacy(bool value) { SetTechPrivacy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the registrar of the domain as identified in the registry. </p>
     */
    inline const Aws::String& GetRegistrarName() const { return m_registrarName; }
    template<typename RegistrarNameT = Aws::String>
    void SetRegistrarName(RegistrarNameT&& value) { m_registrarNameHasBeenSet = true; m_registrarName = std::forward<RegistrarNameT>(value); }
    template<typename RegistrarNameT = Aws::String>
    GetDomainDetailResult& WithRegistrarName(RegistrarNameT&& value) { SetRegistrarName(std::forward<RegistrarNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified name of the WHOIS server that can answer the WHOIS query
     * for the domain.</p>
     */
    inline const Aws::String& GetWhoIsServer() const { return m_whoIsServer; }
    template<typename WhoIsServerT = Aws::String>
    void SetWhoIsServer(WhoIsServerT&& value) { m_whoIsServerHasBeenSet = true; m_whoIsServer = std::forward<WhoIsServerT>(value); }
    template<typename WhoIsServerT = Aws::String>
    GetDomainDetailResult& WithWhoIsServer(WhoIsServerT&& value) { SetWhoIsServer(std::forward<WhoIsServerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Web address of the registrar.</p>
     */
    inline const Aws::String& GetRegistrarUrl() const { return m_registrarUrl; }
    template<typename RegistrarUrlT = Aws::String>
    void SetRegistrarUrl(RegistrarUrlT&& value) { m_registrarUrlHasBeenSet = true; m_registrarUrl = std::forward<RegistrarUrlT>(value); }
    template<typename RegistrarUrlT = Aws::String>
    GetDomainDetailResult& WithRegistrarUrl(RegistrarUrlT&& value) { SetRegistrarUrl(std::forward<RegistrarUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Email address to contact to report incorrect contact information for a
     * domain, to report that the domain is being used to send spam, to report that
     * someone is cybersquatting on a domain name, or report some other type of
     * abuse.</p>
     */
    inline const Aws::String& GetAbuseContactEmail() const { return m_abuseContactEmail; }
    template<typename AbuseContactEmailT = Aws::String>
    void SetAbuseContactEmail(AbuseContactEmailT&& value) { m_abuseContactEmailHasBeenSet = true; m_abuseContactEmail = std::forward<AbuseContactEmailT>(value); }
    template<typename AbuseContactEmailT = Aws::String>
    GetDomainDetailResult& WithAbuseContactEmail(AbuseContactEmailT&& value) { SetAbuseContactEmail(std::forward<AbuseContactEmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Phone number for reporting abuse.</p>
     */
    inline const Aws::String& GetAbuseContactPhone() const { return m_abuseContactPhone; }
    template<typename AbuseContactPhoneT = Aws::String>
    void SetAbuseContactPhone(AbuseContactPhoneT&& value) { m_abuseContactPhoneHasBeenSet = true; m_abuseContactPhone = std::forward<AbuseContactPhoneT>(value); }
    template<typename AbuseContactPhoneT = Aws::String>
    GetDomainDetailResult& WithAbuseContactPhone(AbuseContactPhoneT&& value) { SetAbuseContactPhone(std::forward<AbuseContactPhoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetRegistryDomainId() const { return m_registryDomainId; }
    template<typename RegistryDomainIdT = Aws::String>
    void SetRegistryDomainId(RegistryDomainIdT&& value) { m_registryDomainIdHasBeenSet = true; m_registryDomainId = std::forward<RegistryDomainIdT>(value); }
    template<typename RegistryDomainIdT = Aws::String>
    GetDomainDetailResult& WithRegistryDomainId(RegistryDomainIdT&& value) { SetRegistryDomainId(std::forward<RegistryDomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the domain was created as found in the response to a WHOIS
     * query. The date and time is in Unix time format and Coordinated Universal time
     * (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    GetDomainDetailResult& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last updated date of the domain as found in the response to a WHOIS
     * query. The date and time is in Unix time format and Coordinated Universal time
     * (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedDate() const { return m_updatedDate; }
    template<typename UpdatedDateT = Aws::Utils::DateTime>
    void SetUpdatedDate(UpdatedDateT&& value) { m_updatedDateHasBeenSet = true; m_updatedDate = std::forward<UpdatedDateT>(value); }
    template<typename UpdatedDateT = Aws::Utils::DateTime>
    GetDomainDetailResult& WithUpdatedDate(UpdatedDateT&& value) { SetUpdatedDate(std::forward<UpdatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the registration for the domain is set to expire. The date and
     * time is in Unix time format and Coordinated Universal time (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationDate() const { return m_expirationDate; }
    template<typename ExpirationDateT = Aws::Utils::DateTime>
    void SetExpirationDate(ExpirationDateT&& value) { m_expirationDateHasBeenSet = true; m_expirationDate = std::forward<ExpirationDateT>(value); }
    template<typename ExpirationDateT = Aws::Utils::DateTime>
    GetDomainDetailResult& WithExpirationDate(ExpirationDateT&& value) { SetExpirationDate(std::forward<ExpirationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reseller of the domain. Domains registered or transferred using Route 53
     * domains will have <code>"Amazon"</code> as the reseller. </p>
     */
    inline const Aws::String& GetReseller() const { return m_reseller; }
    template<typename ResellerT = Aws::String>
    void SetReseller(ResellerT&& value) { m_resellerHasBeenSet = true; m_reseller = std::forward<ResellerT>(value); }
    template<typename ResellerT = Aws::String>
    GetDomainDetailResult& WithReseller(ResellerT&& value) { SetReseller(std::forward<ResellerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Deprecated.</p>
     */
    inline const Aws::String& GetDnsSec() const { return m_dnsSec; }
    template<typename DnsSecT = Aws::String>
    void SetDnsSec(DnsSecT&& value) { m_dnsSecHasBeenSet = true; m_dnsSec = std::forward<DnsSecT>(value); }
    template<typename DnsSecT = Aws::String>
    GetDomainDetailResult& WithDnsSec(DnsSecT&& value) { SetDnsSec(std::forward<DnsSecT>(value)); return *this;}
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
    inline const Aws::Vector<Aws::String>& GetStatusList() const { return m_statusList; }
    template<typename StatusListT = Aws::Vector<Aws::String>>
    void SetStatusList(StatusListT&& value) { m_statusListHasBeenSet = true; m_statusList = std::forward<StatusListT>(value); }
    template<typename StatusListT = Aws::Vector<Aws::String>>
    GetDomainDetailResult& WithStatusList(StatusListT&& value) { SetStatusList(std::forward<StatusListT>(value)); return *this;}
    template<typename StatusListT = Aws::String>
    GetDomainDetailResult& AddStatusList(StatusListT&& value) { m_statusListHasBeenSet = true; m_statusList.emplace_back(std::forward<StatusListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A complex type that contains information about the DNSSEC configuration.</p>
     */
    inline const Aws::Vector<DnssecKey>& GetDnssecKeys() const { return m_dnssecKeys; }
    template<typename DnssecKeysT = Aws::Vector<DnssecKey>>
    void SetDnssecKeys(DnssecKeysT&& value) { m_dnssecKeysHasBeenSet = true; m_dnssecKeys = std::forward<DnssecKeysT>(value); }
    template<typename DnssecKeysT = Aws::Vector<DnssecKey>>
    GetDomainDetailResult& WithDnssecKeys(DnssecKeysT&& value) { SetDnssecKeys(std::forward<DnssecKeysT>(value)); return *this;}
    template<typename DnssecKeysT = DnssecKey>
    GetDomainDetailResult& AddDnssecKeys(DnssecKeysT&& value) { m_dnssecKeysHasBeenSet = true; m_dnssecKeys.emplace_back(std::forward<DnssecKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides details about the domain billing contact.</p>
     */
    inline const ContactDetail& GetBillingContact() const { return m_billingContact; }
    template<typename BillingContactT = ContactDetail>
    void SetBillingContact(BillingContactT&& value) { m_billingContactHasBeenSet = true; m_billingContact = std::forward<BillingContactT>(value); }
    template<typename BillingContactT = ContactDetail>
    GetDomainDetailResult& WithBillingContact(BillingContactT&& value) { SetBillingContact(std::forward<BillingContactT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether contact information is concealed from WHOIS queries. If the
     * value is <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar or for our registrar associate, Gandi. If the value
     * is <code>false</code>, WHOIS queries return the information that you entered for
     * the billing contact.</p>
     */
    inline bool GetBillingPrivacy() const { return m_billingPrivacy; }
    inline void SetBillingPrivacy(bool value) { m_billingPrivacyHasBeenSet = true; m_billingPrivacy = value; }
    inline GetDomainDetailResult& WithBillingPrivacy(bool value) { SetBillingPrivacy(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDomainDetailResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::Vector<Nameserver> m_nameservers;
    bool m_nameserversHasBeenSet = false;

    bool m_autoRenew{false};
    bool m_autoRenewHasBeenSet = false;

    ContactDetail m_adminContact;
    bool m_adminContactHasBeenSet = false;

    ContactDetail m_registrantContact;
    bool m_registrantContactHasBeenSet = false;

    ContactDetail m_techContact;
    bool m_techContactHasBeenSet = false;

    bool m_adminPrivacy{false};
    bool m_adminPrivacyHasBeenSet = false;

    bool m_registrantPrivacy{false};
    bool m_registrantPrivacyHasBeenSet = false;

    bool m_techPrivacy{false};
    bool m_techPrivacyHasBeenSet = false;

    Aws::String m_registrarName;
    bool m_registrarNameHasBeenSet = false;

    Aws::String m_whoIsServer;
    bool m_whoIsServerHasBeenSet = false;

    Aws::String m_registrarUrl;
    bool m_registrarUrlHasBeenSet = false;

    Aws::String m_abuseContactEmail;
    bool m_abuseContactEmailHasBeenSet = false;

    Aws::String m_abuseContactPhone;
    bool m_abuseContactPhoneHasBeenSet = false;

    Aws::String m_registryDomainId;
    bool m_registryDomainIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_updatedDate{};
    bool m_updatedDateHasBeenSet = false;

    Aws::Utils::DateTime m_expirationDate{};
    bool m_expirationDateHasBeenSet = false;

    Aws::String m_reseller;
    bool m_resellerHasBeenSet = false;

    Aws::String m_dnsSec;
    bool m_dnsSecHasBeenSet = false;

    Aws::Vector<Aws::String> m_statusList;
    bool m_statusListHasBeenSet = false;

    Aws::Vector<DnssecKey> m_dnssecKeys;
    bool m_dnssecKeysHasBeenSet = false;

    ContactDetail m_billingContact;
    bool m_billingContactHasBeenSet = false;

    bool m_billingPrivacy{false};
    bool m_billingPrivacyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
