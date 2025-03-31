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
  class ListAccessPointsForDirectoryBucketsRequest : public S3ControlRequest
  {
  public:
    AWS_S3CONTROL_API ListAccessPointsForDirectoryBucketsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAccessPointsForDirectoryBuckets"; }

    AWS_S3CONTROL_API Aws::String SerializePayload() const override;

    AWS_S3CONTROL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_S3CONTROL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3CONTROL_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The Amazon Web Services account ID that owns the access points.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    ListAccessPointsForDirectoryBucketsRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the directory bucket associated with the access points you want
     * to list.</p>
     */
    inline const Aws::String& GetDirectoryBucket() const { return m_directoryBucket; }
    inline bool DirectoryBucketHasBeenSet() const { return m_directoryBucketHasBeenSet; }
    template<typename DirectoryBucketT = Aws::String>
    void SetDirectoryBucket(DirectoryBucketT&& value) { m_directoryBucketHasBeenSet = true; m_directoryBucket = std::forward<DirectoryBucketT>(value); }
    template<typename DirectoryBucketT = Aws::String>
    ListAccessPointsForDirectoryBucketsRequest& WithDirectoryBucket(DirectoryBucketT&& value) { SetDirectoryBucket(std::forward<DirectoryBucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> If <code>NextToken</code> is returned, there are more access points
     * available than requested in the <code>maxResults</code> value. The value of
     * <code>NextToken</code> is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAccessPointsForDirectoryBucketsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of access points that you would like returned in the
     * <code>ListAccessPointsForDirectoryBuckets</code> response. If the directory
     * bucket is associated with more than this number of access points, the results
     * include the pagination token <code>NextToken</code>. Make another call using the
     * <code>NextToken</code> to retrieve more results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAccessPointsForDirectoryBucketsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_directoryBucket;
    bool m_directoryBucketHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
