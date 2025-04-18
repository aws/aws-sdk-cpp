﻿/**
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
   * <p>The CheckDomainTransferability request contains the following
   * elements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/CheckDomainTransferabilityRequest">AWS
   * API Reference</a></p>
   */
  class CheckDomainTransferabilityRequest : public Route53DomainsRequest
  {
  public:
    AWS_ROUTE53DOMAINS_API CheckDomainTransferabilityRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CheckDomainTransferability"; }

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
    CheckDomainTransferabilityRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the registrar for the top-level domain (TLD) requires an authorization
     * code to transfer the domain, the code that you got from the current registrar
     * for the domain.</p>
     */
    inline const Aws::String& GetAuthCode() const { return m_authCode; }
    inline bool AuthCodeHasBeenSet() const { return m_authCodeHasBeenSet; }
    template<typename AuthCodeT = Aws::String>
    void SetAuthCode(AuthCodeT&& value) { m_authCodeHasBeenSet = true; m_authCode = std::forward<AuthCodeT>(value); }
    template<typename AuthCodeT = Aws::String>
    CheckDomainTransferabilityRequest& WithAuthCode(AuthCodeT&& value) { SetAuthCode(std::forward<AuthCodeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_authCode;
    bool m_authCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
