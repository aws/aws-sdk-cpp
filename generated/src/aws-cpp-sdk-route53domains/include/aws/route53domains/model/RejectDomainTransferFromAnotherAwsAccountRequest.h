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
   * <p>The RejectDomainTransferFromAnotherAwsAccount request includes the following
   * element.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/RejectDomainTransferFromAnotherAwsAccountRequest">AWS
   * API Reference</a></p>
   */
  class RejectDomainTransferFromAnotherAwsAccountRequest : public Route53DomainsRequest
  {
  public:
    AWS_ROUTE53DOMAINS_API RejectDomainTransferFromAnotherAwsAccountRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RejectDomainTransferFromAnotherAwsAccount"; }

    AWS_ROUTE53DOMAINS_API Aws::String SerializePayload() const override;

    AWS_ROUTE53DOMAINS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the domain that was specified when another Amazon Web Services
     * account submitted a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_TransferDomainToAnotherAwsAccount.html">TransferDomainToAnotherAwsAccount</a>
     * request. </p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the domain that was specified when another Amazon Web Services
     * account submitted a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_TransferDomainToAnotherAwsAccount.html">TransferDomainToAnotherAwsAccount</a>
     * request. </p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The name of the domain that was specified when another Amazon Web Services
     * account submitted a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_TransferDomainToAnotherAwsAccount.html">TransferDomainToAnotherAwsAccount</a>
     * request. </p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the domain that was specified when another Amazon Web Services
     * account submitted a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_TransferDomainToAnotherAwsAccount.html">TransferDomainToAnotherAwsAccount</a>
     * request. </p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The name of the domain that was specified when another Amazon Web Services
     * account submitted a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_TransferDomainToAnotherAwsAccount.html">TransferDomainToAnotherAwsAccount</a>
     * request. </p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of the domain that was specified when another Amazon Web Services
     * account submitted a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_TransferDomainToAnotherAwsAccount.html">TransferDomainToAnotherAwsAccount</a>
     * request. </p>
     */
    inline RejectDomainTransferFromAnotherAwsAccountRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the domain that was specified when another Amazon Web Services
     * account submitted a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_TransferDomainToAnotherAwsAccount.html">TransferDomainToAnotherAwsAccount</a>
     * request. </p>
     */
    inline RejectDomainTransferFromAnotherAwsAccountRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain that was specified when another Amazon Web Services
     * account submitted a <a
     * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_TransferDomainToAnotherAwsAccount.html">TransferDomainToAnotherAwsAccount</a>
     * request. </p>
     */
    inline RejectDomainTransferFromAnotherAwsAccountRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
