﻿/**
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
    AWS_SERVICECATALOG_API ScanProvisionedProductsResult();
    AWS_SERVICECATALOG_API ScanProvisionedProductsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API ScanProvisionedProductsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the provisioned products.</p>
     */
    inline const Aws::Vector<ProvisionedProductDetail>& GetProvisionedProducts() const{ return m_provisionedProducts; }
    inline void SetProvisionedProducts(const Aws::Vector<ProvisionedProductDetail>& value) { m_provisionedProducts = value; }
    inline void SetProvisionedProducts(Aws::Vector<ProvisionedProductDetail>&& value) { m_provisionedProducts = std::move(value); }
    inline ScanProvisionedProductsResult& WithProvisionedProducts(const Aws::Vector<ProvisionedProductDetail>& value) { SetProvisionedProducts(value); return *this;}
    inline ScanProvisionedProductsResult& WithProvisionedProducts(Aws::Vector<ProvisionedProductDetail>&& value) { SetProvisionedProducts(std::move(value)); return *this;}
    inline ScanProvisionedProductsResult& AddProvisionedProducts(const ProvisionedProductDetail& value) { m_provisionedProducts.push_back(value); return *this; }
    inline ScanProvisionedProductsResult& AddProvisionedProducts(ProvisionedProductDetail&& value) { m_provisionedProducts.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }
    inline ScanProvisionedProductsResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}
    inline ScanProvisionedProductsResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}
    inline ScanProvisionedProductsResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ScanProvisionedProductsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ScanProvisionedProductsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ScanProvisionedProductsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ProvisionedProductDetail> m_provisionedProducts;

    Aws::String m_nextPageToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
