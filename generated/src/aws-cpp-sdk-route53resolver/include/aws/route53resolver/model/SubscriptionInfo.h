/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Route53Resolver {
namespace Model {

/**
 * <p>Identifies the AWS Marketplace product that backs a partner-managed rule
 * type. Returned as part of <a>FirewallRuleTypeDefinition</a> when the rule type
 * variant requires an active customer subscription to the named
 * product.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/SubscriptionInfo">AWS
 * API Reference</a></p>
 */
class SubscriptionInfo {
 public:
  AWS_ROUTE53RESOLVER_API SubscriptionInfo() = default;
  AWS_ROUTE53RESOLVER_API SubscriptionInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53RESOLVER_API SubscriptionInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the AWS Marketplace seller (vendor) that publishes the partner
   * threat-protection product (for example, <code>Palo Alto Networks</code>).</p>
   */
  inline const Aws::String& GetVendorName() const { return m_vendorName; }
  inline bool VendorNameHasBeenSet() const { return m_vendorNameHasBeenSet; }
  template <typename VendorNameT = Aws::String>
  void SetVendorName(VendorNameT&& value) {
    m_vendorNameHasBeenSet = true;
    m_vendorName = std::forward<VendorNameT>(value);
  }
  template <typename VendorNameT = Aws::String>
  SubscriptionInfo& WithVendorName(VendorNameT&& value) {
    SetVendorName(std::forward<VendorNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Marketplace product identifier of the partner threat-protection
   * product. Use this value to verify or manage the calling account's subscription
   * in AWS Marketplace.</p>
   */
  inline const Aws::String& GetProductId() const { return m_productId; }
  inline bool ProductIdHasBeenSet() const { return m_productIdHasBeenSet; }
  template <typename ProductIdT = Aws::String>
  void SetProductId(ProductIdT&& value) {
    m_productIdHasBeenSet = true;
    m_productId = std::forward<ProductIdT>(value);
  }
  template <typename ProductIdT = Aws::String>
  SubscriptionInfo& WithProductId(ProductIdT&& value) {
    SetProductId(std::forward<ProductIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_vendorName;

  Aws::String m_productId;
  bool m_vendorNameHasBeenSet = false;
  bool m_productIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Route53Resolver
}  // namespace Aws
