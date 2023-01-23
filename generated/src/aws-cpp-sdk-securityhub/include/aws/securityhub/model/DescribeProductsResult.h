/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/Product.h>
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
namespace SecurityHub
{
namespace Model
{
  class DescribeProductsResult
  {
  public:
    AWS_SECURITYHUB_API DescribeProductsResult();
    AWS_SECURITYHUB_API DescribeProductsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API DescribeProductsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of products, including details for each product.</p>
     */
    inline const Aws::Vector<Product>& GetProducts() const{ return m_products; }

    /**
     * <p>A list of products, including details for each product.</p>
     */
    inline void SetProducts(const Aws::Vector<Product>& value) { m_products = value; }

    /**
     * <p>A list of products, including details for each product.</p>
     */
    inline void SetProducts(Aws::Vector<Product>&& value) { m_products = std::move(value); }

    /**
     * <p>A list of products, including details for each product.</p>
     */
    inline DescribeProductsResult& WithProducts(const Aws::Vector<Product>& value) { SetProducts(value); return *this;}

    /**
     * <p>A list of products, including details for each product.</p>
     */
    inline DescribeProductsResult& WithProducts(Aws::Vector<Product>&& value) { SetProducts(std::move(value)); return *this;}

    /**
     * <p>A list of products, including details for each product.</p>
     */
    inline DescribeProductsResult& AddProducts(const Product& value) { m_products.push_back(value); return *this; }

    /**
     * <p>A list of products, including details for each product.</p>
     */
    inline DescribeProductsResult& AddProducts(Product&& value) { m_products.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline DescribeProductsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline DescribeProductsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use to request the next page of results.</p>
     */
    inline DescribeProductsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Product> m_products;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
