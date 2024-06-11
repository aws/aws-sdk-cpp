﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/IPAddressVersion.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>The set of IP addresses that are currently blocked for a
   * <a>RateBasedStatement</a>. This is only available for rate-based rules that
   * aggregate on just the IP address, with the <code>AggregateKeyType</code> set to
   * <code>IP</code> or <code>FORWARDED_IP</code>.</p> <p>A rate-based rule applies
   * its rule action to requests from IP addresses that are in the rule's managed
   * keys list and that match the rule's scope-down statement. When a rule has no
   * scope-down statement, it applies the action to all requests from the IP
   * addresses that are in the list. The rule applies its rule action to rate limit
   * the matching requests. The action is usually Block but it can be any valid rule
   * action except for Allow. </p> <p>The maximum number of IP addresses that can be
   * rate limited by a single rate-based rule instance is 10,000. If more than 10,000
   * addresses exceed the rate limit, WAF limits those with the highest rates.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/RateBasedStatementManagedKeysIPSet">AWS
   * API Reference</a></p>
   */
  class RateBasedStatementManagedKeysIPSet
  {
  public:
    AWS_WAFV2_API RateBasedStatementManagedKeysIPSet();
    AWS_WAFV2_API RateBasedStatementManagedKeysIPSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API RateBasedStatementManagedKeysIPSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version of the IP addresses, either <code>IPV4</code> or
     * <code>IPV6</code>. </p>
     */
    inline const IPAddressVersion& GetIPAddressVersion() const{ return m_iPAddressVersion; }
    inline bool IPAddressVersionHasBeenSet() const { return m_iPAddressVersionHasBeenSet; }
    inline void SetIPAddressVersion(const IPAddressVersion& value) { m_iPAddressVersionHasBeenSet = true; m_iPAddressVersion = value; }
    inline void SetIPAddressVersion(IPAddressVersion&& value) { m_iPAddressVersionHasBeenSet = true; m_iPAddressVersion = std::move(value); }
    inline RateBasedStatementManagedKeysIPSet& WithIPAddressVersion(const IPAddressVersion& value) { SetIPAddressVersion(value); return *this;}
    inline RateBasedStatementManagedKeysIPSet& WithIPAddressVersion(IPAddressVersion&& value) { SetIPAddressVersion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP addresses that are currently blocked.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddresses() const{ return m_addresses; }
    inline bool AddressesHasBeenSet() const { return m_addressesHasBeenSet; }
    inline void SetAddresses(const Aws::Vector<Aws::String>& value) { m_addressesHasBeenSet = true; m_addresses = value; }
    inline void SetAddresses(Aws::Vector<Aws::String>&& value) { m_addressesHasBeenSet = true; m_addresses = std::move(value); }
    inline RateBasedStatementManagedKeysIPSet& WithAddresses(const Aws::Vector<Aws::String>& value) { SetAddresses(value); return *this;}
    inline RateBasedStatementManagedKeysIPSet& WithAddresses(Aws::Vector<Aws::String>&& value) { SetAddresses(std::move(value)); return *this;}
    inline RateBasedStatementManagedKeysIPSet& AddAddresses(const Aws::String& value) { m_addressesHasBeenSet = true; m_addresses.push_back(value); return *this; }
    inline RateBasedStatementManagedKeysIPSet& AddAddresses(Aws::String&& value) { m_addressesHasBeenSet = true; m_addresses.push_back(std::move(value)); return *this; }
    inline RateBasedStatementManagedKeysIPSet& AddAddresses(const char* value) { m_addressesHasBeenSet = true; m_addresses.push_back(value); return *this; }
    ///@}
  private:

    IPAddressVersion m_iPAddressVersion;
    bool m_iPAddressVersionHasBeenSet = false;

    Aws::Vector<Aws::String> m_addresses;
    bool m_addressesHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
