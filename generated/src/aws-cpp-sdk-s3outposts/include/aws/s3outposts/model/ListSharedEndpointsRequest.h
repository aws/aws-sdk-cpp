/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3outposts/S3Outposts_EXPORTS.h>
#include <aws/s3outposts/S3OutpostsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace S3Outposts
{
namespace Model
{

  /**
   */
  class ListSharedEndpointsRequest : public S3OutpostsRequest
  {
  public:
    AWS_S3OUTPOSTS_API ListSharedEndpointsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSharedEndpoints"; }

    AWS_S3OUTPOSTS_API Aws::String SerializePayload() const override;

    AWS_S3OUTPOSTS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>If a previous response from this operation included a <code>NextToken</code>
     * value, you can provide that value here to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If a previous response from this operation included a <code>NextToken</code>
     * value, you can provide that value here to retrieve the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If a previous response from this operation included a <code>NextToken</code>
     * value, you can provide that value here to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If a previous response from this operation included a <code>NextToken</code>
     * value, you can provide that value here to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If a previous response from this operation included a <code>NextToken</code>
     * value, you can provide that value here to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If a previous response from this operation included a <code>NextToken</code>
     * value, you can provide that value here to retrieve the next page of results.</p>
     */
    inline ListSharedEndpointsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If a previous response from this operation included a <code>NextToken</code>
     * value, you can provide that value here to retrieve the next page of results.</p>
     */
    inline ListSharedEndpointsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If a previous response from this operation included a <code>NextToken</code>
     * value, you can provide that value here to retrieve the next page of results.</p>
     */
    inline ListSharedEndpointsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of endpoints that will be returned in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of endpoints that will be returned in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of endpoints that will be returned in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of endpoints that will be returned in the response.</p>
     */
    inline ListSharedEndpointsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The ID of the Amazon Web Services Outpost.</p>
     */
    inline const Aws::String& GetOutpostId() const{ return m_outpostId; }

    /**
     * <p>The ID of the Amazon Web Services Outpost.</p>
     */
    inline bool OutpostIdHasBeenSet() const { return m_outpostIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services Outpost.</p>
     */
    inline void SetOutpostId(const Aws::String& value) { m_outpostIdHasBeenSet = true; m_outpostId = value; }

    /**
     * <p>The ID of the Amazon Web Services Outpost.</p>
     */
    inline void SetOutpostId(Aws::String&& value) { m_outpostIdHasBeenSet = true; m_outpostId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services Outpost.</p>
     */
    inline void SetOutpostId(const char* value) { m_outpostIdHasBeenSet = true; m_outpostId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services Outpost.</p>
     */
    inline ListSharedEndpointsRequest& WithOutpostId(const Aws::String& value) { SetOutpostId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Outpost.</p>
     */
    inline ListSharedEndpointsRequest& WithOutpostId(Aws::String&& value) { SetOutpostId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Outpost.</p>
     */
    inline ListSharedEndpointsRequest& WithOutpostId(const char* value) { SetOutpostId(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_outpostId;
    bool m_outpostIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Outposts
} // namespace Aws
