/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/SellerEngagementContentType.h>
#include <aws/marketplace-discovery/model/SellerEngagementType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceDiscovery {
namespace Model {

/**
 * <p>A way you can engage with the seller of a product, such as requesting a
 * private offer or a demo.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/SellerEngagement">AWS
 * API Reference</a></p>
 */
class SellerEngagement {
 public:
  AWS_MARKETPLACEDISCOVERY_API SellerEngagement() = default;
  AWS_MARKETPLACEDISCOVERY_API SellerEngagement(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API SellerEngagement& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of engagement. This field has one of the following values:</p> <dl>
   * <dt>BUY_NOW</dt> <dd> <p>The product is available for immediate purchase.</p>
   * </dd> <dt>EXPRESS_PRIVATE_OFFER</dt> <dd> <p>You can request an express private
   * offer and accept it immediately.</p> </dd> <dt>REQUEST_FOR_DEMO</dt> <dd> <p>You
   * can request a demo from the seller.</p> </dd> <dt>REQUEST_FOR_PRIVATE_OFFER</dt>
   * <dd> <p>You can request a private offer from the seller.</p> </dd>
   * <dt>TRY_FOR_FREE</dt> <dd> <p>The product offers a free trial.</p> </dd> </dl>
   */
  inline SellerEngagementType GetEngagementType() const { return m_engagementType; }
  inline bool EngagementTypeHasBeenSet() const { return m_engagementTypeHasBeenSet; }
  inline void SetEngagementType(SellerEngagementType value) {
    m_engagementTypeHasBeenSet = true;
    m_engagementType = value;
  }
  inline SellerEngagement& WithEngagementType(SellerEngagementType value) {
    SetEngagementType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The format of the engagement value, such as a URL.</p>
   */
  inline SellerEngagementContentType GetContentType() const { return m_contentType; }
  inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
  inline void SetContentType(SellerEngagementContentType value) {
    m_contentTypeHasBeenSet = true;
    m_contentType = value;
  }
  inline SellerEngagement& WithContentType(SellerEngagementContentType value) {
    SetContentType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The engagement value, such as a URL to the engagement form.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  SellerEngagement& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  SellerEngagementType m_engagementType{SellerEngagementType::NOT_SET};

  SellerEngagementContentType m_contentType{SellerEngagementContentType::NOT_SET};

  Aws::String m_value;
  bool m_engagementTypeHasBeenSet = false;
  bool m_contentTypeHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
