/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ProductViewSummary.h>
#include <aws/servicecatalog/model/ProductViewAggregationValue.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ServiceCatalog
{
namespace Model
{
  class SearchProductsResult
  {
  public:
    AWS_SERVICECATALOG_API SearchProductsResult() = default;
    AWS_SERVICECATALOG_API SearchProductsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API SearchProductsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the product views.</p>
     */
    inline const Aws::Vector<ProductViewSummary>& GetProductViewSummaries() const { return m_productViewSummaries; }
    template<typename ProductViewSummariesT = Aws::Vector<ProductViewSummary>>
    void SetProductViewSummaries(ProductViewSummariesT&& value) { m_productViewSummariesHasBeenSet = true; m_productViewSummaries = std::forward<ProductViewSummariesT>(value); }
    template<typename ProductViewSummariesT = Aws::Vector<ProductViewSummary>>
    SearchProductsResult& WithProductViewSummaries(ProductViewSummariesT&& value) { SetProductViewSummaries(std::forward<ProductViewSummariesT>(value)); return *this;}
    template<typename ProductViewSummariesT = ProductViewSummary>
    SearchProductsResult& AddProductViewSummaries(ProductViewSummariesT&& value) { m_productViewSummariesHasBeenSet = true; m_productViewSummaries.emplace_back(std::forward<ProductViewSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The product view aggregations.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<ProductViewAggregationValue>>& GetProductViewAggregations() const { return m_productViewAggregations; }
    template<typename ProductViewAggregationsT = Aws::Map<Aws::String, Aws::Vector<ProductViewAggregationValue>>>
    void SetProductViewAggregations(ProductViewAggregationsT&& value) { m_productViewAggregationsHasBeenSet = true; m_productViewAggregations = std::forward<ProductViewAggregationsT>(value); }
    template<typename ProductViewAggregationsT = Aws::Map<Aws::String, Aws::Vector<ProductViewAggregationValue>>>
    SearchProductsResult& WithProductViewAggregations(ProductViewAggregationsT&& value) { SetProductViewAggregations(std::forward<ProductViewAggregationsT>(value)); return *this;}
    template<typename ProductViewAggregationsKeyT = Aws::String, typename ProductViewAggregationsValueT = Aws::Vector<ProductViewAggregationValue>>
    SearchProductsResult& AddProductViewAggregations(ProductViewAggregationsKeyT&& key, ProductViewAggregationsValueT&& value) {
      m_productViewAggregationsHasBeenSet = true; m_productViewAggregations.emplace(std::forward<ProductViewAggregationsKeyT>(key), std::forward<ProductViewAggregationsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    SearchProductsResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchProductsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ProductViewSummary> m_productViewSummaries;
    bool m_productViewSummariesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<ProductViewAggregationValue>> m_productViewAggregations;
    bool m_productViewAggregationsHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
