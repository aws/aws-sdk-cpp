﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/FirewallDomainImportOperation.h>
#include <utility>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

  /**
   */
  class ImportFirewallDomainsRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API ImportFirewallDomainsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportFirewallDomains"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the domain list that you want to modify with the import
     * operation.</p>
     */
    inline const Aws::String& GetFirewallDomainListId() const { return m_firewallDomainListId; }
    inline bool FirewallDomainListIdHasBeenSet() const { return m_firewallDomainListIdHasBeenSet; }
    template<typename FirewallDomainListIdT = Aws::String>
    void SetFirewallDomainListId(FirewallDomainListIdT&& value) { m_firewallDomainListIdHasBeenSet = true; m_firewallDomainListId = std::forward<FirewallDomainListIdT>(value); }
    template<typename FirewallDomainListIdT = Aws::String>
    ImportFirewallDomainsRequest& WithFirewallDomainListId(FirewallDomainListIdT&& value) { SetFirewallDomainListId(std::forward<FirewallDomainListIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>What you want DNS Firewall to do with the domains that are listed in the
     * file. This must be set to <code>REPLACE</code>, which updates the domain list to
     * exactly match the list in the file. </p>
     */
    inline FirewallDomainImportOperation GetOperation() const { return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    inline void SetOperation(FirewallDomainImportOperation value) { m_operationHasBeenSet = true; m_operation = value; }
    inline ImportFirewallDomainsRequest& WithOperation(FirewallDomainImportOperation value) { SetOperation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified URL or URI of the file stored in Amazon Simple Storage
     * Service (Amazon S3) that contains the list of domains to import.</p> <p>The file
     * must be in an S3 bucket that's in the same Region as your DNS Firewall. The file
     * must be a text file and must contain a single domain per line.</p>
     */
    inline const Aws::String& GetDomainFileUrl() const { return m_domainFileUrl; }
    inline bool DomainFileUrlHasBeenSet() const { return m_domainFileUrlHasBeenSet; }
    template<typename DomainFileUrlT = Aws::String>
    void SetDomainFileUrl(DomainFileUrlT&& value) { m_domainFileUrlHasBeenSet = true; m_domainFileUrl = std::forward<DomainFileUrlT>(value); }
    template<typename DomainFileUrlT = Aws::String>
    ImportFirewallDomainsRequest& WithDomainFileUrl(DomainFileUrlT&& value) { SetDomainFileUrl(std::forward<DomainFileUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_firewallDomainListId;
    bool m_firewallDomainListIdHasBeenSet = false;

    FirewallDomainImportOperation m_operation{FirewallDomainImportOperation::NOT_SET};
    bool m_operationHasBeenSet = false;

    Aws::String m_domainFileUrl;
    bool m_domainFileUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
