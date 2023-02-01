/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/SageMakerGeospatialRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   */
  class ListRasterDataCollectionsRequest : public SageMakerGeospatialRequest
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API ListRasterDataCollectionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRasterDataCollections"; }

    AWS_SAGEMAKERGEOSPATIAL_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKERGEOSPATIAL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The total number of items to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The total number of items to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The total number of items to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The total number of items to return.</p>
     */
    inline ListRasterDataCollectionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline ListRasterDataCollectionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline ListRasterDataCollectionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous response was truncated, you receive this token. Use it in
     * your next request to receive the next set of results.</p>
     */
    inline ListRasterDataCollectionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
