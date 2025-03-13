/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ProductViewDetail.h>
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
  class SearchProductsAsAdminResult
  {
  public:
    AWS_SERVICECATALOG_API SearchProductsAsAdminResult() = default;
    AWS_SERVICECATALOG_API SearchProductsAsAdminResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API SearchProductsAsAdminResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the product views.</p>
     */
    inline const Aws::Vector<ProductViewDetail>& GetProductViewDetails() const { return m_productViewDetails; }
    template<typename ProductViewDetailsT = Aws::Vector<ProductViewDetail>>
    void SetProductViewDetails(ProductViewDetailsT&& value) { m_productViewDetailsHasBeenSet = true; m_productViewDetails = std::forward<ProductViewDetailsT>(value); }
    template<typename ProductViewDetailsT = Aws::Vector<ProductViewDetail>>
    SearchProductsAsAdminResult& WithProductViewDetails(ProductViewDetailsT&& value) { SetProductViewDetails(std::forward<ProductViewDetailsT>(value)); return *this;}
    template<typename ProductViewDetailsT = ProductViewDetail>
    SearchProductsAsAdminResult& AddProductViewDetails(ProductViewDetailsT&& value) { m_productViewDetailsHasBeenSet = true; m_productViewDetails.emplace_back(std::forward<ProductViewDetailsT>(value)); return *this; }
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
    SearchProductsAsAdminResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchProductsAsAdminResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ProductViewDetail> m_productViewDetails;
    bool m_productViewDetailsHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
