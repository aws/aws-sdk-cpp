/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace S3Control
{
namespace Model
{

  /**
   */
  class ListRegionalBucketsRequest : public S3ControlRequest
  {
  public:
    AWS_S3CONTROL_API ListRegionalBucketsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRegionalBuckets"; }

    AWS_S3CONTROL_API Aws::String SerializePayload() const override;

    AWS_S3CONTROL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_S3CONTROL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3CONTROL_API EndpointParameters GetEndpointContextParams() const override;

    /**
     * <p>The Amazon Web Services account ID of the Outposts bucket.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account ID of the Outposts bucket.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the Outposts bucket.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account ID of the Outposts bucket.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the Outposts bucket.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the Outposts bucket.</p>
     */
    inline ListRegionalBucketsRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the Outposts bucket.</p>
     */
    inline ListRegionalBucketsRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the Outposts bucket.</p>
     */
    inline ListRegionalBucketsRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p/>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p/>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p/>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p/>
     */
    inline ListRegionalBucketsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p/>
     */
    inline ListRegionalBucketsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline ListRegionalBucketsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p/>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p/>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p/>
     */
    inline ListRegionalBucketsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The ID of the Outposts resource.</p>  <p>This ID is required by Amazon
     * S3 on Outposts buckets.</p> 
     */
    inline const Aws::String& GetOutpostId() const{ return m_outpostId; }

    /**
     * <p>The ID of the Outposts resource.</p>  <p>This ID is required by Amazon
     * S3 on Outposts buckets.</p> 
     */
    inline bool OutpostIdHasBeenSet() const { return m_outpostIdHasBeenSet; }

    /**
     * <p>The ID of the Outposts resource.</p>  <p>This ID is required by Amazon
     * S3 on Outposts buckets.</p> 
     */
    inline void SetOutpostId(const Aws::String& value) { m_outpostIdHasBeenSet = true; m_outpostId = value; }

    /**
     * <p>The ID of the Outposts resource.</p>  <p>This ID is required by Amazon
     * S3 on Outposts buckets.</p> 
     */
    inline void SetOutpostId(Aws::String&& value) { m_outpostIdHasBeenSet = true; m_outpostId = std::move(value); }

    /**
     * <p>The ID of the Outposts resource.</p>  <p>This ID is required by Amazon
     * S3 on Outposts buckets.</p> 
     */
    inline void SetOutpostId(const char* value) { m_outpostIdHasBeenSet = true; m_outpostId.assign(value); }

    /**
     * <p>The ID of the Outposts resource.</p>  <p>This ID is required by Amazon
     * S3 on Outposts buckets.</p> 
     */
    inline ListRegionalBucketsRequest& WithOutpostId(const Aws::String& value) { SetOutpostId(value); return *this;}

    /**
     * <p>The ID of the Outposts resource.</p>  <p>This ID is required by Amazon
     * S3 on Outposts buckets.</p> 
     */
    inline ListRegionalBucketsRequest& WithOutpostId(Aws::String&& value) { SetOutpostId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Outposts resource.</p>  <p>This ID is required by Amazon
     * S3 on Outposts buckets.</p> 
     */
    inline ListRegionalBucketsRequest& WithOutpostId(const char* value) { SetOutpostId(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_outpostId;
    bool m_outpostIdHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
