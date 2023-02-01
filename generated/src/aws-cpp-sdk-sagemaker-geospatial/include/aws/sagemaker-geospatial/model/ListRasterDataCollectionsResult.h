/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-geospatial/model/RasterDataCollectionMetadata.h>
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
  class ListRasterDataCollectionsResult
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API ListRasterDataCollectionsResult();
    AWS_SAGEMAKERGEOSPATIAL_API ListRasterDataCollectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKERGEOSPATIAL_API ListRasterDataCollectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline ListRasterDataCollectionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline ListRasterDataCollectionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline ListRasterDataCollectionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Contains summary information about the raster data collection.</p>
     */
    inline const Aws::Vector<RasterDataCollectionMetadata>& GetRasterDataCollectionSummaries() const{ return m_rasterDataCollectionSummaries; }

    /**
     * <p>Contains summary information about the raster data collection.</p>
     */
    inline void SetRasterDataCollectionSummaries(const Aws::Vector<RasterDataCollectionMetadata>& value) { m_rasterDataCollectionSummaries = value; }

    /**
     * <p>Contains summary information about the raster data collection.</p>
     */
    inline void SetRasterDataCollectionSummaries(Aws::Vector<RasterDataCollectionMetadata>&& value) { m_rasterDataCollectionSummaries = std::move(value); }

    /**
     * <p>Contains summary information about the raster data collection.</p>
     */
    inline ListRasterDataCollectionsResult& WithRasterDataCollectionSummaries(const Aws::Vector<RasterDataCollectionMetadata>& value) { SetRasterDataCollectionSummaries(value); return *this;}

    /**
     * <p>Contains summary information about the raster data collection.</p>
     */
    inline ListRasterDataCollectionsResult& WithRasterDataCollectionSummaries(Aws::Vector<RasterDataCollectionMetadata>&& value) { SetRasterDataCollectionSummaries(std::move(value)); return *this;}

    /**
     * <p>Contains summary information about the raster data collection.</p>
     */
    inline ListRasterDataCollectionsResult& AddRasterDataCollectionSummaries(const RasterDataCollectionMetadata& value) { m_rasterDataCollectionSummaries.push_back(value); return *this; }

    /**
     * <p>Contains summary information about the raster data collection.</p>
     */
    inline ListRasterDataCollectionsResult& AddRasterDataCollectionSummaries(RasterDataCollectionMetadata&& value) { m_rasterDataCollectionSummaries.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<RasterDataCollectionMetadata> m_rasterDataCollectionSummaries;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
