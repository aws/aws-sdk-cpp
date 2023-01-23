/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-geospatial/model/ItemSource.h>
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
namespace SageMakerGeospatial
{
namespace Model
{
  class SearchRasterDataCollectionResult
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API SearchRasterDataCollectionResult();
    AWS_SAGEMAKERGEOSPATIAL_API SearchRasterDataCollectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKERGEOSPATIAL_API SearchRasterDataCollectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p/>
     */
    inline int GetApproximateResultCount() const{ return m_approximateResultCount; }

    /**
     * <p/>
     */
    inline void SetApproximateResultCount(int value) { m_approximateResultCount = value; }

    /**
     * <p/>
     */
    inline SearchRasterDataCollectionResult& WithApproximateResultCount(int value) { SetApproximateResultCount(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<ItemSource>& GetItems() const{ return m_items; }

    /**
     * <p/>
     */
    inline void SetItems(const Aws::Vector<ItemSource>& value) { m_items = value; }

    /**
     * <p/>
     */
    inline void SetItems(Aws::Vector<ItemSource>&& value) { m_items = std::move(value); }

    /**
     * <p/>
     */
    inline SearchRasterDataCollectionResult& WithItems(const Aws::Vector<ItemSource>& value) { SetItems(value); return *this;}

    /**
     * <p/>
     */
    inline SearchRasterDataCollectionResult& WithItems(Aws::Vector<ItemSource>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline SearchRasterDataCollectionResult& AddItems(const ItemSource& value) { m_items.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline SearchRasterDataCollectionResult& AddItems(ItemSource&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline SearchRasterDataCollectionResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline SearchRasterDataCollectionResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline SearchRasterDataCollectionResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    int m_approximateResultCount;

    Aws::Vector<ItemSource> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
