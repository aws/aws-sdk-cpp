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
   */
  class DisassociateDelegationSignerFromDomainRequest : public Route53DomainsRequest
  {
  public:
    AWS_ROUTE53DOMAINS_API DisassociateDelegationSignerFromDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateDelegationSignerFromDomain"; }

    AWS_ROUTE53DOMAINS_API Aws::String SerializePayload() const override;

    AWS_ROUTE53DOMAINS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>Name of the domain.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>Name of the domain.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>Name of the domain.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>Name of the domain.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>Name of the domain.</p>
     */
    inline DisassociateDelegationSignerFromDomainRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>Name of the domain.</p>
     */
    inline DisassociateDelegationSignerFromDomainRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>Name of the domain.</p>
     */
    inline DisassociateDelegationSignerFromDomainRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>An internal identification number assigned to each DS record after it’s
     * created. You can retrieve it as part of DNSSEC information returned by <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetDomainDetail.html">GetDomainDetail</a>.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>An internal identification number assigned to each DS record after it’s
     * created. You can retrieve it as part of DNSSEC information returned by <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetDomainDetail.html">GetDomainDetail</a>.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>An internal identification number assigned to each DS record after it’s
     * created. You can retrieve it as part of DNSSEC information returned by <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetDomainDetail.html">GetDomainDetail</a>.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>An internal identification number assigned to each DS record after it’s
     * created. You can retrieve it as part of DNSSEC information returned by <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetDomainDetail.html">GetDomainDetail</a>.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>An internal identification number assigned to each DS record after it’s
     * created. You can retrieve it as part of DNSSEC information returned by <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetDomainDetail.html">GetDomainDetail</a>.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>An internal identification number assigned to each DS record after it’s
     * created. You can retrieve it as part of DNSSEC information returned by <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetDomainDetail.html">GetDomainDetail</a>.</p>
     */
    inline DisassociateDelegationSignerFromDomainRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>An internal identification number assigned to each DS record after it’s
     * created. You can retrieve it as part of DNSSEC information returned by <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetDomainDetail.html">GetDomainDetail</a>.</p>
     */
    inline DisassociateDelegationSignerFromDomainRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>An internal identification number assigned to each DS record after it’s
     * created. You can retrieve it as part of DNSSEC information returned by <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_GetDomainDetail.html">GetDomainDetail</a>.</p>
     */
    inline DisassociateDelegationSignerFromDomainRequest& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
