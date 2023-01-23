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
   * <p>The CheckDomainAvailability request contains the following
   * elements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/CheckDomainAvailabilityRequest">AWS
   * API Reference</a></p>
   */
  class CheckDomainAvailabilityRequest : public Route53DomainsRequest
  {
  public:
    AWS_ROUTE53DOMAINS_API CheckDomainAvailabilityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CheckDomainAvailability"; }

    AWS_ROUTE53DOMAINS_API Aws::String SerializePayload() const override;

    AWS_ROUTE53DOMAINS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the domain that you want to get availability for. The top-level
     * domain (TLD), such as .com, must be a TLD that Route 53 supports. For a list of
     * supported TLDs, see <a
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
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the domain that you want to get availability for. The top-level
     * domain (TLD), such as .com, must be a TLD that Route 53 supports. For a list of
     * supported TLDs, see <a
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
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The name of the domain that you want to get availability for. The top-level
     * domain (TLD), such as .com, must be a TLD that Route 53 supports. For a list of
     * supported TLDs, see <a
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
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the domain that you want to get availability for. The top-level
     * domain (TLD), such as .com, must be a TLD that Route 53 supports. For a list of
     * supported TLDs, see <a
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
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The name of the domain that you want to get availability for. The top-level
     * domain (TLD), such as .com, must be a TLD that Route 53 supports. For a list of
     * supported TLDs, see <a
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
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of the domain that you want to get availability for. The top-level
     * domain (TLD), such as .com, must be a TLD that Route 53 supports. For a list of
     * supported TLDs, see <a
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
    inline CheckDomainAvailabilityRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the domain that you want to get availability for. The top-level
     * domain (TLD), such as .com, must be a TLD that Route 53 supports. For a list of
     * supported TLDs, see <a
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
    inline CheckDomainAvailabilityRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain that you want to get availability for. The top-level
     * domain (TLD), such as .com, must be a TLD that Route 53 supports. For a list of
     * supported TLDs, see <a
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
    inline CheckDomainAvailabilityRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


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
    inline CheckDomainAvailabilityRequest& WithIdnLangCode(const Aws::String& value) { SetIdnLangCode(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline CheckDomainAvailabilityRequest& WithIdnLangCode(Aws::String&& value) { SetIdnLangCode(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline CheckDomainAvailabilityRequest& WithIdnLangCode(const char* value) { SetIdnLangCode(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_idnLangCode;
    bool m_idnLangCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
