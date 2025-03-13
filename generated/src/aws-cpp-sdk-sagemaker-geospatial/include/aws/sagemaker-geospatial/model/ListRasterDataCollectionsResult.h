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
    AWS_SAGEMAKERGEOSPATIAL_API ListRasterDataCollectionsResult() = default;
    AWS_SAGEMAKERGEOSPATIAL_API ListRasterDataCollectionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKERGEOSPATIAL_API ListRasterDataCollectionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRasterDataCollectionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains summary information about the raster data collection.</p>
     */
    inline const Aws::Vector<RasterDataCollectionMetadata>& GetRasterDataCollectionSummaries() const { return m_rasterDataCollectionSummaries; }
    template<typename RasterDataCollectionSummariesT = Aws::Vector<RasterDataCollectionMetadata>>
    void SetRasterDataCollectionSummaries(RasterDataCollectionSummariesT&& value) { m_rasterDataCollectionSummariesHasBeenSet = true; m_rasterDataCollectionSummaries = std::forward<RasterDataCollectionSummariesT>(value); }
    template<typename RasterDataCollectionSummariesT = Aws::Vector<RasterDataCollectionMetadata>>
    ListRasterDataCollectionsResult& WithRasterDataCollectionSummaries(RasterDataCollectionSummariesT&& value) { SetRasterDataCollectionSummaries(std::forward<RasterDataCollectionSummariesT>(value)); return *this;}
    template<typename RasterDataCollectionSummariesT = RasterDataCollectionMetadata>
    ListRasterDataCollectionsResult& AddRasterDataCollectionSummaries(RasterDataCollectionSummariesT&& value) { m_rasterDataCollectionSummariesHasBeenSet = true; m_rasterDataCollectionSummaries.emplace_back(std::forward<RasterDataCollectionSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRasterDataCollectionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<RasterDataCollectionMetadata> m_rasterDataCollectionSummaries;
    bool m_rasterDataCollectionSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
