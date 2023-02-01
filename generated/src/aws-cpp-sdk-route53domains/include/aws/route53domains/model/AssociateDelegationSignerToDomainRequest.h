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
    AWS_ROUTE53DOMAINS_API AssociateDelegationSignerToDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateDelegationSignerToDomain"; }

    AWS_ROUTE53DOMAINS_API Aws::String SerializePayload() const override;

    AWS_ROUTE53DOMAINS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the domain.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of the domain.</p>
     */
    inline AssociateDelegationSignerToDomainRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the domain.</p>
     */
    inline AssociateDelegationSignerToDomainRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain.</p>
     */
    inline AssociateDelegationSignerToDomainRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The information about a key, including the algorithm, public key-value, and
     * flags.</p>
     */
    inline const DnssecSigningAttributes& GetSigningAttributes() const{ return m_signingAttributes; }

    /**
     * <p>The information about a key, including the algorithm, public key-value, and
     * flags.</p>
     */
    inline bool SigningAttributesHasBeenSet() const { return m_signingAttributesHasBeenSet; }

    /**
     * <p>The information about a key, including the algorithm, public key-value, and
     * flags.</p>
     */
    inline void SetSigningAttributes(const DnssecSigningAttributes& value) { m_signingAttributesHasBeenSet = true; m_signingAttributes = value; }

    /**
     * <p>The information about a key, including the algorithm, public key-value, and
     * flags.</p>
     */
    inline void SetSigningAttributes(DnssecSigningAttributes&& value) { m_signingAttributesHasBeenSet = true; m_signingAttributes = std::move(value); }

    /**
     * <p>The information about a key, including the algorithm, public key-value, and
     * flags.</p>
     */
    inline AssociateDelegationSignerToDomainRequest& WithSigningAttributes(const DnssecSigningAttributes& value) { SetSigningAttributes(value); return *this;}

    /**
     * <p>The information about a key, including the algorithm, public key-value, and
     * flags.</p>
     */
    inline AssociateDelegationSignerToDomainRequest& WithSigningAttributes(DnssecSigningAttributes&& value) { SetSigningAttributes(std::move(value)); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    DnssecSigningAttributes m_signingAttributes;
    bool m_signingAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
