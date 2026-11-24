/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-discovery/MarketplaceDiscoveryRequest.h>
#include <aws/marketplace-discovery/MarketplaceDiscovery_EXPORTS.h>
#include <aws/marketplace-discovery/model/ListingAttributeType.h>

#include <utility>

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

/**
 * <p>Contains the listing and attribute types to retrieve.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-discovery-2026-02-05/ListListingAttributesInput">AWS
 * API Reference</a></p>
 */
class ListListingAttributesRequest : public MarketplaceDiscoveryRequest {
 public:
  AWS_MARKETPLACEDISCOVERY_API ListListingAttributesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListListingAttributes"; }

  AWS_MARKETPLACEDISCOVERY_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The preferred locale for response content, as a Best Current Practice 47 (BCP
   * 47) language tag or a comma-separated priority list of language tags. See
   * <code>Locale</code> for supported values, constraints, fallback behavior, and
   * the default locale. If you omit this field, the service returns content in the
   * default locale.</p>
   */
  inline const Aws::String& GetLocale() const { return m_locale; }
  inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }
  template <typename LocaleT = Aws::String>
  void SetLocale(LocaleT&& value) {
    m_localeHasBeenSet = true;
    m_locale = std::forward<LocaleT>(value);
  }
  template <typename LocaleT = Aws::String>
  ListListingAttributesRequest& WithLocale(LocaleT&& value) {
    SetLocale(std::forward<LocaleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the listing whose attributes are requested.</p>
   */
  inline const Aws::String& GetListingId() const { return m_listingId; }
  inline bool ListingIdHasBeenSet() const { return m_listingIdHasBeenSet; }
  template <typename ListingIdT = Aws::String>
  void SetListingId(ListingIdT&& value) {
    m_listingIdHasBeenSet = true;
    m_listingId = std::forward<ListingIdT>(value);
  }
  template <typename ListingIdT = Aws::String>
  ListListingAttributesRequest& WithListingId(ListingIdT&& value) {
    SetListingId(std::forward<ListingIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The attribute types to retrieve. Specify one or more of the following
   * values:</p> <dl> <dt>CASE_STUDY</dt> <dd> <p>Case studies associated with the
   * listing.</p> </dd> <dt>SPECIALIZATION_DETAIL</dt> <dd> <p>Specializations earned
   * for the listing.</p> </dd> <dt>TRUST_CENTER_CERTIFICATION</dt> <dd> <p>Trust
   * center certifications associated with the listing.</p> </dd>
   * <dt>TRUST_CENTER_CONTROL</dt> <dd> <p>Trust center controls associated with the
   * listing.</p> </dd> <dt>TRUST_CENTER_DOCUMENT</dt> <dd> <p>Trust center documents
   * associated with the listing.</p> </dd> <dt>TRUST_CENTER_FAQ</dt> <dd> <p>The
   * trust center FAQ associated with the listing.</p> </dd>
   * <dt>TRUST_CENTER_SOURCE</dt> <dd> <p>Trust center sources associated with the
   * listing.</p> </dd> <dt>TRUST_CENTER_UPDATE</dt> <dd> <p>Trust center updates
   * associated with the listing.</p> </dd> </dl>
   */
  inline const Aws::Vector<ListingAttributeType>& GetAttributeTypes() const { return m_attributeTypes; }
  inline bool AttributeTypesHasBeenSet() const { return m_attributeTypesHasBeenSet; }
  template <typename AttributeTypesT = Aws::Vector<ListingAttributeType>>
  void SetAttributeTypes(AttributeTypesT&& value) {
    m_attributeTypesHasBeenSet = true;
    m_attributeTypes = std::forward<AttributeTypesT>(value);
  }
  template <typename AttributeTypesT = Aws::Vector<ListingAttributeType>>
  ListListingAttributesRequest& WithAttributeTypes(AttributeTypesT&& value) {
    SetAttributeTypes(std::forward<AttributeTypesT>(value));
    return *this;
  }
  inline ListListingAttributesRequest& AddAttributeTypes(ListingAttributeType value) {
    m_attributeTypesHasBeenSet = true;
    m_attributeTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of attributes to return in each call. If you omit this
   * field, the default is 25. Use <code>nextToken</code> to retrieve the next
   * page.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListListingAttributesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the service returns <code>nextToken</code>, more results are available.
   * The value of <code>nextToken</code> is a unique pagination token for each page.
   * Make the call again with the returned token to retrieve the next page. Keep all
   * other arguments unchanged. Each pagination token expires after 24 hours. An
   * expired pagination token returns a <code>ValidationException</code>.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListListingAttributesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_locale;

  Aws::String m_listingId;

  Aws::Vector<ListingAttributeType> m_attributeTypes;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_localeHasBeenSet = false;
  bool m_listingIdHasBeenSet = false;
  bool m_attributeTypesHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
