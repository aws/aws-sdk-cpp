/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/SellerInformation.h>

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
 * <p>Summary information about an offer, including the offer identifier, name, and
 * seller of record.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/OfferInformation">AWS
 * API Reference</a></p>
 */
class OfferInformation {
 public:
  AWS_MARKETPLACEDISCOVERY_API OfferInformation() = default;
  AWS_MARKETPLACEDISCOVERY_API OfferInformation(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API OfferInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the offer.</p>
   */
  inline const Aws::String& GetOfferId() const { return m_offerId; }
  inline bool OfferIdHasBeenSet() const { return m_offerIdHasBeenSet; }
  template <typename OfferIdT = Aws::String>
  void SetOfferId(OfferIdT&& value) {
    m_offerIdHasBeenSet = true;
    m_offerId = std::forward<OfferIdT>(value);
  }
  template <typename OfferIdT = Aws::String>
  OfferInformation& WithOfferId(OfferIdT&& value) {
    SetOfferId(std::forward<OfferIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the offer.</p>
   */
  inline const Aws::String& GetOfferName() const { return m_offerName; }
  inline bool OfferNameHasBeenSet() const { return m_offerNameHasBeenSet; }
  template <typename OfferNameT = Aws::String>
  void SetOfferName(OfferNameT&& value) {
    m_offerNameHasBeenSet = true;
    m_offerName = std::forward<OfferNameT>(value);
  }
  template <typename OfferNameT = Aws::String>
  OfferInformation& WithOfferName(OfferNameT&& value) {
    SetOfferName(std::forward<OfferNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity responsible for selling the product under this offer.</p>
   */
  inline const SellerInformation& GetSellerOfRecord() const { return m_sellerOfRecord; }
  inline bool SellerOfRecordHasBeenSet() const { return m_sellerOfRecordHasBeenSet; }
  template <typename SellerOfRecordT = SellerInformation>
  void SetSellerOfRecord(SellerOfRecordT&& value) {
    m_sellerOfRecordHasBeenSet = true;
    m_sellerOfRecord = std::forward<SellerOfRecordT>(value);
  }
  template <typename SellerOfRecordT = SellerInformation>
  OfferInformation& WithSellerOfRecord(SellerOfRecordT&& value) {
    SetSellerOfRecord(std::forward<SellerOfRecordT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_offerId;

  Aws::String m_offerName;

  SellerInformation m_sellerOfRecord;
  bool m_offerIdHasBeenSet = false;
  bool m_offerNameHasBeenSet = false;
  bool m_sellerOfRecordHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
