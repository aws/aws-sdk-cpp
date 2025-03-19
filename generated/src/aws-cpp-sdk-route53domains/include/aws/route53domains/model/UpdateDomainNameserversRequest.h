/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/Route53DomainsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53domains/model/Nameserver.h>
#include <utility>

namespace Aws
{
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>Replaces the current set of name servers for the domain with the specified
   * set of name servers. If you use Amazon Route 53 as your DNS service, specify the
   * four name servers in the delegation set for the hosted zone for the domain.</p>
   * <p>If successful, this operation returns an operation ID that you can use to
   * track the progress and completion of the action. If the request is not completed
   * successfully, the domain registrant will be notified by email. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/UpdateDomainNameserversRequest">AWS
   * API Reference</a></p>
   */
  class UpdateDomainNameserversRequest : public Route53DomainsRequest
  {
  public:
    AWS_ROUTE53DOMAINS_API UpdateDomainNameserversRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDomainNameservers"; }

    AWS_ROUTE53DOMAINS_API Aws::String SerializePayload() const override;

    AWS_ROUTE53DOMAINS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the domain that you want to change name servers for.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    UpdateDomainNameserversRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of new name servers for the domain.</p>
     */
    inline const Aws::Vector<Nameserver>& GetNameservers() const { return m_nameservers; }
    inline bool NameserversHasBeenSet() const { return m_nameserversHasBeenSet; }
    template<typename NameserversT = Aws::Vector<Nameserver>>
    void SetNameservers(NameserversT&& value) { m_nameserversHasBeenSet = true; m_nameservers = std::forward<NameserversT>(value); }
    template<typename NameserversT = Aws::Vector<Nameserver>>
    UpdateDomainNameserversRequest& WithNameservers(NameserversT&& value) { SetNameservers(std::forward<NameserversT>(value)); return *this;}
    template<typename NameserversT = Nameserver>
    UpdateDomainNameserversRequest& AddNameservers(NameserversT&& value) { m_nameserversHasBeenSet = true; m_nameservers.emplace_back(std::forward<NameserversT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::Vector<Nameserver> m_nameservers;
    bool m_nameserversHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
