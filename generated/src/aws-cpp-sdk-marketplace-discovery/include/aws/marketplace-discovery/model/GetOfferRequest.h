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
class GetOfferRequest : public MarketplaceDiscoveryRequest {
 public:
  AWS_MARKETPLACEDISCOVERY_API GetOfferRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetOffer"; }

  AWS_MARKETPLACEDISCOVERY_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the offer to retrieve.</p>
   */
  inline const Aws::String& GetOfferId() const { return m_offerId; }
  inline bool OfferIdHasBeenSet() const { return m_offerIdHasBeenSet; }
  template <typename OfferIdT = Aws::String>
  void SetOfferId(OfferIdT&& value) {
    m_offerIdHasBeenSet = true;
    m_offerId = std::forward<OfferIdT>(value);
  }
  template <typename OfferIdT = Aws::String>
  GetOfferRequest& WithOfferId(OfferIdT&& value) {
    SetOfferId(std::forward<OfferIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_offerId;
  bool m_offerIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
