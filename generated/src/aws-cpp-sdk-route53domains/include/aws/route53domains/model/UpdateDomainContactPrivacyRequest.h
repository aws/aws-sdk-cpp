/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/Route53DomainsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>The UpdateDomainContactPrivacy request includes the following
   * elements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/UpdateDomainContactPrivacyRequest">AWS
   * API Reference</a></p>
   */
  class UpdateDomainContactPrivacyRequest : public Route53DomainsRequest
  {
  public:
    AWS_ROUTE53DOMAINS_API UpdateDomainContactPrivacyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDomainContactPrivacy"; }

    AWS_ROUTE53DOMAINS_API Aws::String SerializePayload() const override;

    AWS_ROUTE53DOMAINS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the domain that you want to update the privacy setting for.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    UpdateDomainContactPrivacyRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar or for our registrar associate, Gandi. If you
     * specify <code>false</code>, WHOIS queries return the information that you
     * entered for the admin contact.</p>  <p>You must specify the same privacy
     * setting for the administrative, billing, registrant, and technical contacts.</p>
     * 
     */
    inline bool GetAdminPrivacy() const { return m_adminPrivacy; }
    inline bool AdminPrivacyHasBeenSet() const { return m_adminPrivacyHasBeenSet; }
    inline void SetAdminPrivacy(bool value) { m_adminPrivacyHasBeenSet = true; m_adminPrivacy = value; }
    inline UpdateDomainContactPrivacyRequest& WithAdminPrivacy(bool value) { SetAdminPrivacy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar or for our registrar associate, Gandi. If you
     * specify <code>false</code>, WHOIS queries return the information that you
     * entered for the registrant contact (domain owner).</p>  <p>You must
     * specify the same privacy setting for the administrative, billing, registrant,
     * and technical contacts.</p> 
     */
    inline bool GetRegistrantPrivacy() const { return m_registrantPrivacy; }
    inline bool RegistrantPrivacyHasBeenSet() const { return m_registrantPrivacyHasBeenSet; }
    inline void SetRegistrantPrivacy(bool value) { m_registrantPrivacyHasBeenSet = true; m_registrantPrivacy = value; }
    inline UpdateDomainContactPrivacyRequest& WithRegistrantPrivacy(bool value) { SetRegistrantPrivacy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether you want to conceal contact information from WHOIS queries. If you
     * specify <code>true</code>, WHOIS ("who is") queries return contact information
     * either for Amazon Registrar or for our registrar associate, Gandi. If you
     * specify <code>false</code>, WHOIS queries return the information that you
     * entered for the technical contact.</p>  <p>You must specify the same
     * privacy setting for the administrative, billing, registrant, and technical
     * contacts.</p> 
     */
    inline bool GetTechPrivacy() const { return m_techPrivacy; }
    inline bool TechPrivacyHasBeenSet() const { return m_techPrivacyHasBeenSet; }
    inline void SetTechPrivacy(bool value) { m_techPrivacyHasBeenSet = true; m_techPrivacy = value; }
    inline UpdateDomainContactPrivacyRequest& WithTechPrivacy(bool value) { SetTechPrivacy(value); return *this;}
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
    inline bool GetBillingPrivacy() const { return m_billingPrivacy; }
    inline bool BillingPrivacyHasBeenSet() const { return m_billingPrivacyHasBeenSet; }
    inline void SetBillingPrivacy(bool value) { m_billingPrivacyHasBeenSet = true; m_billingPrivacy = value; }
    inline UpdateDomainContactPrivacyRequest& WithBillingPrivacy(bool value) { SetBillingPrivacy(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    bool m_adminPrivacy{false};
    bool m_adminPrivacyHasBeenSet = false;

    bool m_registrantPrivacy{false};
    bool m_registrantPrivacyHasBeenSet = false;

    bool m_techPrivacy{false};
    bool m_techPrivacyHasBeenSet = false;

    bool m_billingPrivacy{false};
    bool m_billingPrivacyHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
