/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>Summary information about one domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/DomainSummary">AWS
   * API Reference</a></p>
   */
  class DomainSummary
  {
  public:
    AWS_ROUTE53DOMAINS_API DomainSummary() = default;
    AWS_ROUTE53DOMAINS_API DomainSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API DomainSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the domain that the summary information applies to.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    DomainSummary& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the domain is automatically renewed upon expiration.</p>
     */
    inline bool GetAutoRenew() const { return m_autoRenew; }
    inline bool AutoRenewHasBeenSet() const { return m_autoRenewHasBeenSet; }
    inline void SetAutoRenew(bool value) { m_autoRenewHasBeenSet = true; m_autoRenew = value; }
    inline DomainSummary& WithAutoRenew(bool value) { SetAutoRenew(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a domain is locked from unauthorized transfer to another
     * party.</p>
     */
    inline bool GetTransferLock() const { return m_transferLock; }
    inline bool TransferLockHasBeenSet() const { return m_transferLockHasBeenSet; }
    inline void SetTransferLock(bool value) { m_transferLockHasBeenSet = true; m_transferLock = value; }
    inline DomainSummary& WithTransferLock(bool value) { SetTransferLock(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Expiration date of the domain in Unix time format and Coordinated Universal
     * Time (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetExpiry() const { return m_expiry; }
    inline bool ExpiryHasBeenSet() const { return m_expiryHasBeenSet; }
    template<typename ExpiryT = Aws::Utils::DateTime>
    void SetExpiry(ExpiryT&& value) { m_expiryHasBeenSet = true; m_expiry = std::forward<ExpiryT>(value); }
    template<typename ExpiryT = Aws::Utils::DateTime>
    DomainSummary& WithExpiry(ExpiryT&& value) { SetExpiry(std::forward<ExpiryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    bool m_autoRenew{false};
    bool m_autoRenewHasBeenSet = false;

    bool m_transferLock{false};
    bool m_transferLockHasBeenSet = false;

    Aws::Utils::DateTime m_expiry{};
    bool m_expiryHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
