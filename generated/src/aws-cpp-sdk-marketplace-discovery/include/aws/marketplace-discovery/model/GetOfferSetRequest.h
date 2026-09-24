/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscoveryRequest.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>

#include <utility>

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

/**
 */
class GetOfferSetRequest : public MarketplaceDiscoveryRequest {
 public:
  AWS_MARKETPLACEDISCOVERY_API GetOfferSetRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetOfferSet"; }

  AWS_MARKETPLACEDISCOVERY_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A BCP 47 language tag or comma-separated priority list specifying the
   * preferred locale for response content. See <code>Locale</code> for supported
   * values, constraints, fallback behavior, and the default locale. If omitted, the
   * service returns content in the default locale.</p>
   */
  inline const Aws::String& GetLocale() const { return m_locale; }
  inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
  template <typename LocaleT = Aws::String>
  void SetLocale(LocaleT&& value) {
    m_localeHasBeenSet = true;
    m_locale = std::forward<LocaleT>(value);
  }
  template <typename LocaleT = Aws::String>
  GetOfferSetRequest& WithLocale(LocaleT&& value) {
    SetLocale(std::forward<LocaleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the offer set to retrieve.</p>
   */
  inline const Aws::String& GetOfferSetId() const { return m_offerSetId; }
  inline bool OfferSetIdHasBeenSet() const { return m_offerSetIdHasBeenSet; }
  template <typename OfferSetIdT = Aws::String>
  void SetOfferSetId(OfferSetIdT&& value) {
    m_offerSetIdHasBeenSet = true;
    m_offerSetId = std::forward<OfferSetIdT>(value);
  }
  template <typename OfferSetIdT = Aws::String>
  GetOfferSetRequest& WithOfferSetId(OfferSetIdT&& value) {
    SetOfferSetId(std::forward<OfferSetIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_locale;

  Aws::String m_offerSetId;
  bool m_localeHasBeenSet = false;
  bool m_offerSetIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
