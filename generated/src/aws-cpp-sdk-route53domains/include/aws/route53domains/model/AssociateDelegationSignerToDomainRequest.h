/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/Route53DomainsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53domains/model/DnssecSigningAttributes.h>
#include <utility>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

  /**
   */
  class AssociateDelegationSignerToDomainRequest : public Route53DomainsRequest
  {
  public:
    AWS_ROUTE53DOMAINS_API AssociateDelegationSignerToDomainRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateDelegationSignerToDomain"; }

    AWS_ROUTE53DOMAINS_API Aws::String SerializePayload() const override;

    AWS_ROUTE53DOMAINS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    AssociateDelegationSignerToDomainRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The information about a key, including the algorithm, public key-value, and
     * flags.</p>
     */
    inline const DnssecSigningAttributes& GetSigningAttributes() const { return m_signingAttributes; }
    inline bool SigningAttributesHasBeenSet() const { return m_signingAttributesHasBeenSet; }
    template<typename SigningAttributesT = DnssecSigningAttributes>
    void SetSigningAttributes(SigningAttributesT&& value) { m_signingAttributesHasBeenSet = true; m_signingAttributes = std::forward<SigningAttributesT>(value); }
    template<typename SigningAttributesT = DnssecSigningAttributes>
    AssociateDelegationSignerToDomainRequest& WithSigningAttributes(SigningAttributesT&& value) { SetSigningAttributes(std::forward<SigningAttributesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    DnssecSigningAttributes m_signingAttributes;
    bool m_signingAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
