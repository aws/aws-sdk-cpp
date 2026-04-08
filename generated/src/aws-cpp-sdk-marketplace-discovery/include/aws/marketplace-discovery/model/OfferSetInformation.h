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
 * <p>Summary information about an offer set, including the identifier and seller
 * of record.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/OfferSetInformation">AWS
 * API Reference</a></p>
 */
class OfferSetInformation {
 public:
  AWS_MARKETPLACEDISCOVERY_API OfferSetInformation() = default;
  AWS_MARKETPLACEDISCOVERY_API OfferSetInformation(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API OfferSetInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MARKETPLACEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the offer set.</p>
   */
  inline const Aws::String& GetOfferSetId() const { return m_offerSetId; }
  inline bool OfferSetIdHasBeenSet() const { return m_offerSetIdHasBeenSet; }
  template <typename OfferSetIdT = Aws::String>
  void SetOfferSetId(OfferSetIdT&& value) {
    m_offerSetIdHasBeenSet = true;
    m_offerSetId = std::forward<OfferSetIdT>(value);
  }
  template <typename OfferSetIdT = Aws::String>
  OfferSetInformation& WithOfferSetId(OfferSetIdT&& value) {
    SetOfferSetId(std::forward<OfferSetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity responsible for selling the products under this offer set.</p>
   */
  inline const SellerInformation& GetSellerOfRecord() const { return m_sellerOfRecord; }
  inline bool SellerOfRecordHasBeenSet() const { return m_sellerOfRecordHasBeenSet; }
  template <typename SellerOfRecordT = SellerInformation>
  void SetSellerOfRecord(SellerOfRecordT&& value) {
    m_sellerOfRecordHasBeenSet = true;
    m_sellerOfRecord = std::forward<SellerOfRecordT>(value);
  }
  template <typename SellerOfRecordT = SellerInformation>
  OfferSetInformation& WithSellerOfRecord(SellerOfRecordT&& value) {
    SetSellerOfRecord(std::forward<SellerOfRecordT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_offerSetId;

  SellerInformation m_sellerOfRecord;
  bool m_offerSetIdHasBeenSet = false;
  bool m_sellerOfRecordHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
