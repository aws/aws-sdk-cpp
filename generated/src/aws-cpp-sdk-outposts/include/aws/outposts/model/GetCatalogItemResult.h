/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/model/CatalogItem.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Outposts
{
namespace Model
{
  class GetCatalogItemResult
  {
  public:
    AWS_OUTPOSTS_API GetCatalogItemResult();
    AWS_OUTPOSTS_API GetCatalogItemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OUTPOSTS_API GetCatalogItemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about this catalog item.</p>
     */
    inline const CatalogItem& GetCatalogItem() const{ return m_catalogItem; }

    /**
     * <p>Information about this catalog item.</p>
     */
    inline void SetCatalogItem(const CatalogItem& value) { m_catalogItem = value; }

    /**
     * <p>Information about this catalog item.</p>
     */
    inline void SetCatalogItem(CatalogItem&& value) { m_catalogItem = std::move(value); }

    /**
     * <p>Information about this catalog item.</p>
     */
    inline GetCatalogItemResult& WithCatalogItem(const CatalogItem& value) { SetCatalogItem(value); return *this;}

    /**
     * <p>Information about this catalog item.</p>
     */
    inline GetCatalogItemResult& WithCatalogItem(CatalogItem&& value) { SetCatalogItem(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetCatalogItemResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetCatalogItemResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetCatalogItemResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    CatalogItem m_catalogItem;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
