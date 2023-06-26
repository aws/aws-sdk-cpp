/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/ProductViewDetail.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/Tag.h>
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
  class UpdateProductResult
  {
  public:
    AWS_SERVICECATALOG_API UpdateProductResult();
    AWS_SERVICECATALOG_API UpdateProductResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API UpdateProductResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the product view.</p>
     */
    inline const ProductViewDetail& GetProductViewDetail() const{ return m_productViewDetail; }

    /**
     * <p>Information about the product view.</p>
     */
    inline void SetProductViewDetail(const ProductViewDetail& value) { m_productViewDetail = value; }

    /**
     * <p>Information about the product view.</p>
     */
    inline void SetProductViewDetail(ProductViewDetail&& value) { m_productViewDetail = std::move(value); }

    /**
     * <p>Information about the product view.</p>
     */
    inline UpdateProductResult& WithProductViewDetail(const ProductViewDetail& value) { SetProductViewDetail(value); return *this;}

    /**
     * <p>Information about the product view.</p>
     */
    inline UpdateProductResult& WithProductViewDetail(ProductViewDetail&& value) { SetProductViewDetail(std::move(value)); return *this;}


    /**
     * <p>Information about the tags associated with the product.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Information about the tags associated with the product.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>Information about the tags associated with the product.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>Information about the tags associated with the product.</p>
     */
    inline UpdateProductResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Information about the tags associated with the product.</p>
     */
    inline UpdateProductResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Information about the tags associated with the product.</p>
     */
    inline UpdateProductResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>Information about the tags associated with the product.</p>
     */
    inline UpdateProductResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateProductResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateProductResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateProductResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ProductViewDetail m_productViewDetail;

    Aws::Vector<Tag> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
