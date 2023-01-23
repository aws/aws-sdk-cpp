/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/CatalogItem.h>
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
  class ListCatalogItemsResult
  {
  public:
    AWS_OUTPOSTS_API ListCatalogItemsResult();
    AWS_OUTPOSTS_API ListCatalogItemsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OUTPOSTS_API ListCatalogItemsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the catalog items.</p>
     */
    inline const Aws::Vector<CatalogItem>& GetCatalogItems() const{ return m_catalogItems; }

    /**
     * <p>Information about the catalog items.</p>
     */
    inline void SetCatalogItems(const Aws::Vector<CatalogItem>& value) { m_catalogItems = value; }

    /**
     * <p>Information about the catalog items.</p>
     */
    inline void SetCatalogItems(Aws::Vector<CatalogItem>&& value) { m_catalogItems = std::move(value); }

    /**
     * <p>Information about the catalog items.</p>
     */
    inline ListCatalogItemsResult& WithCatalogItems(const Aws::Vector<CatalogItem>& value) { SetCatalogItems(value); return *this;}

    /**
     * <p>Information about the catalog items.</p>
     */
    inline ListCatalogItemsResult& WithCatalogItems(Aws::Vector<CatalogItem>&& value) { SetCatalogItems(std::move(value)); return *this;}

    /**
     * <p>Information about the catalog items.</p>
     */
    inline ListCatalogItemsResult& AddCatalogItems(const CatalogItem& value) { m_catalogItems.push_back(value); return *this; }

    /**
     * <p>Information about the catalog items.</p>
     */
    inline ListCatalogItemsResult& AddCatalogItems(CatalogItem&& value) { m_catalogItems.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListCatalogItemsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListCatalogItemsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListCatalogItemsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CatalogItem> m_catalogItems;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
