/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/PartnerCentralSellingRequest.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/AggregationRequest.h>
#include <aws/partnercentral-selling/model/Filter.h>

#include <utility>

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

/**
 * <p>Information about get customer account statistics request.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/GetCustomerAccountStatisticsRequest">AWS
 * API Reference</a></p>
 */
class GetCustomerAccountStatisticsRequest : public PartnerCentralSellingRequest {
 public:
  AWS_PARTNERCENTRALSELLING_API GetCustomerAccountStatisticsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetCustomerAccountStatistics"; }

  AWS_PARTNERCENTRALSELLING_API Aws::String SerializePayload() const override;

  AWS_PARTNERCENTRALSELLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>Specifies the catalog for the request. Valid values:</p> <ul> <li> <p>
   * <code>AWS</code>: Production.</p> </li> <li> <p> <code>Sandbox</code>: Testing
   * environments.</p> </li> </ul>
   */
  inline const Aws::String& GetCatalog() const { return m_catalog; }
  inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  GetCustomerAccountStatisticsRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies a filter tree that narrows the customer accounts. Each node either
   * combines child filters or compares a single field to a value. If you omit this
   * field, the statistics cover all of your customer accounts.</p>
   */
  inline const Filter& GetFilter() const { return m_filter; }
  inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
  template <typename FilterT = Filter>
  void SetFilter(FilterT&& value) {
    m_filterHasBeenSet = true;
    m_filter = std::forward<FilterT>(value);
  }
  template <typename FilterT = Filter>
  GetCustomerAccountStatisticsRequest& WithFilter(FilterT&& value) {
    SetFilter(std::forward<FilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies how to group the customer accounts. Each aggregation returns the
   * number of accounts for each value of a field.</p>
   */
  inline const Aws::Vector<AggregationRequest>& GetAggregations() const { return m_aggregations; }
  inline bool AggregationsHasBeenSet() const { return m_aggregationsHasBeenSet; }
  template <typename AggregationsT = Aws::Vector<AggregationRequest>>
  void SetAggregations(AggregationsT&& value) {
    m_aggregationsHasBeenSet = true;
    m_aggregations = std::forward<AggregationsT>(value);
  }
  template <typename AggregationsT = Aws::Vector<AggregationRequest>>
  GetCustomerAccountStatisticsRequest& WithAggregations(AggregationsT&& value) {
    SetAggregations(std::forward<AggregationsT>(value));
    return *this;
  }
  template <typename AggregationsT = AggregationRequest>
  GetCustomerAccountStatisticsRequest& AddAggregations(AggregationsT&& value) {
    m_aggregationsHasBeenSet = true;
    m_aggregations.emplace_back(std::forward<AggregationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to include a group for customer accounts that have no value
   * for the grouped field.</p>
   */
  inline bool GetIncludeMissing() const { return m_includeMissing; }
  inline bool IncludeMissingHasBeenSet() const { return m_includeMissingHasBeenSet; }
  inline void SetIncludeMissing(bool value) {
    m_includeMissingHasBeenSet = true;
    m_includeMissing = value;
  }
  inline GetCustomerAccountStatisticsRequest& WithIncludeMissing(bool value) {
    SetIncludeMissing(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;

  Filter m_filter;

  Aws::Vector<AggregationRequest> m_aggregations;

  bool m_includeMissing{false};
  bool m_catalogHasBeenSet = false;
  bool m_filterHasBeenSet = false;
  bool m_aggregationsHasBeenSet = false;
  bool m_includeMissingHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
