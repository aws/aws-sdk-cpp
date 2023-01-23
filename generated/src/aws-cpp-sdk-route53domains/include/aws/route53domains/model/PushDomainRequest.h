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
  class PushDomainRequest : public Route53DomainsRequest
  {
  public:
    AWS_ROUTE53DOMAINS_API PushDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PushDomain"; }

    AWS_ROUTE53DOMAINS_API Aws::String SerializePayload() const override;

    AWS_ROUTE53DOMAINS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> Name of the domain. </p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p> Name of the domain. </p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p> Name of the domain. </p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p> Name of the domain. </p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p> Name of the domain. </p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p> Name of the domain. </p>
     */
    inline PushDomainRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p> Name of the domain. </p>
     */
    inline PushDomainRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p> Name of the domain. </p>
     */
    inline PushDomainRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p> New IPS tag for the domain. </p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }

    /**
     * <p> New IPS tag for the domain. </p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p> New IPS tag for the domain. </p>
     */
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p> New IPS tag for the domain. </p>
     */
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p> New IPS tag for the domain. </p>
     */
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }

    /**
     * <p> New IPS tag for the domain. </p>
     */
    inline PushDomainRequest& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}

    /**
     * <p> New IPS tag for the domain. </p>
     */
    inline PushDomainRequest& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}

    /**
     * <p> New IPS tag for the domain. </p>
     */
    inline PushDomainRequest& WithTarget(const char* value) { SetTarget(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
