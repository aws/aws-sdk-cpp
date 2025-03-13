/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ProvisionedProductDetail.h>
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
  class ScanProvisionedProductsResult
  {
  public:
    AWS_SERVICECATALOG_API ScanProvisionedProductsResult() = default;
    AWS_SERVICECATALOG_API ScanProvisionedProductsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API ScanProvisionedProductsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the provisioned products.</p>
     */
    inline const Aws::Vector<ProvisionedProductDetail>& GetProvisionedProducts() const { return m_provisionedProducts; }
    template<typename ProvisionedProductsT = Aws::Vector<ProvisionedProductDetail>>
    void SetProvisionedProducts(ProvisionedProductsT&& value) { m_provisionedProductsHasBeenSet = true; m_provisionedProducts = std::forward<ProvisionedProductsT>(value); }
    template<typename ProvisionedProductsT = Aws::Vector<ProvisionedProductDetail>>
    ScanProvisionedProductsResult& WithProvisionedProducts(ProvisionedProductsT&& value) { SetProvisionedProducts(std::forward<ProvisionedProductsT>(value)); return *this;}
    template<typename ProvisionedProductsT = ProvisionedProductDetail>
    ScanProvisionedProductsResult& AddProvisionedProducts(ProvisionedProductsT&& value) { m_provisionedProductsHasBeenSet = true; m_provisionedProducts.emplace_back(std::forward<ProvisionedProductsT>(value)); return *this; }
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
    ScanProvisionedProductsResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ScanProvisionedProductsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ProvisionedProductDetail> m_provisionedProducts;
    bool m_provisionedProductsHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
