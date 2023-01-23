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
   * <p>The TransferDomainToAnotherAwsAccount request includes the following
   * elements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/TransferDomainToAnotherAwsAccountRequest">AWS
   * API Reference</a></p>
   */
  class TransferDomainToAnotherAwsAccountRequest : public Route53DomainsRequest
  {
  public:
    AWS_ROUTE53DOMAINS_API TransferDomainToAnotherAwsAccountRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TransferDomainToAnotherAwsAccount"; }

    AWS_ROUTE53DOMAINS_API Aws::String SerializePayload() const override;

    AWS_ROUTE53DOMAINS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the domain that you want to transfer from the current Amazon Web
     * Services account to another account.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the domain that you want to transfer from the current Amazon Web
     * Services account to another account.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The name of the domain that you want to transfer from the current Amazon Web
     * Services account to another account.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the domain that you want to transfer from the current Amazon Web
     * Services account to another account.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The name of the domain that you want to transfer from the current Amazon Web
     * Services account to another account.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of the domain that you want to transfer from the current Amazon Web
     * Services account to another account.</p>
     */
    inline TransferDomainToAnotherAwsAccountRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the domain that you want to transfer from the current Amazon Web
     * Services account to another account.</p>
     */
    inline TransferDomainToAnotherAwsAccountRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain that you want to transfer from the current Amazon Web
     * Services account to another account.</p>
     */
    inline TransferDomainToAnotherAwsAccountRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The account ID of the Amazon Web Services account that you want to transfer
     * the domain to, for example, <code>111122223333</code>.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The account ID of the Amazon Web Services account that you want to transfer
     * the domain to, for example, <code>111122223333</code>.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The account ID of the Amazon Web Services account that you want to transfer
     * the domain to, for example, <code>111122223333</code>.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The account ID of the Amazon Web Services account that you want to transfer
     * the domain to, for example, <code>111122223333</code>.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The account ID of the Amazon Web Services account that you want to transfer
     * the domain to, for example, <code>111122223333</code>.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The account ID of the Amazon Web Services account that you want to transfer
     * the domain to, for example, <code>111122223333</code>.</p>
     */
    inline TransferDomainToAnotherAwsAccountRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The account ID of the Amazon Web Services account that you want to transfer
     * the domain to, for example, <code>111122223333</code>.</p>
     */
    inline TransferDomainToAnotherAwsAccountRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The account ID of the Amazon Web Services account that you want to transfer
     * the domain to, for example, <code>111122223333</code>.</p>
     */
    inline TransferDomainToAnotherAwsAccountRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
