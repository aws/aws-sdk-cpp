﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Information about one suggested domain name.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/DomainSuggestion">AWS
   * API Reference</a></p>
   */
  class DomainSuggestion
  {
  public:
    AWS_ROUTE53DOMAINS_API DomainSuggestion() = default;
    AWS_ROUTE53DOMAINS_API DomainSuggestion(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API DomainSuggestion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A suggested domain name.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    DomainSuggestion& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the domain name is available for registering.</p>  <p>You can
     * register only the domains that are designated as <code>AVAILABLE</code>.</p>
     *  <p>Valid values:</p> <dl> <dt>AVAILABLE</dt> <dd> <p>The domain name is
     * available.</p> </dd> <dt>AVAILABLE_RESERVED</dt> <dd> <p>The domain name is
     * reserved under specific conditions.</p> </dd> <dt>AVAILABLE_PREORDER</dt> <dd>
     * <p>The domain name is available and can be preordered.</p> </dd>
     * <dt>DONT_KNOW</dt> <dd> <p>The TLD registry didn't reply with a definitive
     * answer about whether the domain name is available. Route 53 can return this
     * response for a variety of reasons, for example, the registry is performing
     * maintenance. Try again later.</p> </dd> <dt>PENDING</dt> <dd> <p>The TLD
     * registry didn't return a response in the expected amount of time. When the
     * response is delayed, it usually takes just a few extra seconds. You can resubmit
     * the request immediately.</p> </dd> <dt>RESERVED</dt> <dd> <p>The domain name has
     * been reserved for another person or organization.</p> </dd> <dt>UNAVAILABLE</dt>
     * <dd> <p>The domain name is not available.</p> </dd> <dt>UNAVAILABLE_PREMIUM</dt>
     * <dd> <p>The domain name is not available.</p> </dd>
     * <dt>UNAVAILABLE_RESTRICTED</dt> <dd> <p>The domain name is forbidden.</p> </dd>
     * </dl>
     */
    inline const Aws::String& GetAvailability() const { return m_availability; }
    inline bool AvailabilityHasBeenSet() const { return m_availabilityHasBeenSet; }
    template<typename AvailabilityT = Aws::String>
    void SetAvailability(AvailabilityT&& value) { m_availabilityHasBeenSet = true; m_availability = std::forward<AvailabilityT>(value); }
    template<typename AvailabilityT = Aws::String>
    DomainSuggestion& WithAvailability(AvailabilityT&& value) { SetAvailability(std::forward<AvailabilityT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_availability;
    bool m_availabilityHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
