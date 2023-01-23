/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class ListResourceDataSyncRequest : public SSMRequest
  {
  public:
    AWS_SSM_API ListResourceDataSyncRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListResourceDataSync"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>View a list of resource data syncs according to the sync type. Specify
     * <code>SyncToDestination</code> to view resource data syncs that synchronize data
     * to an Amazon S3 bucket. Specify <code>SyncFromSource</code> to view resource
     * data syncs from Organizations or from multiple Amazon Web Services Regions.</p>
     */
    inline const Aws::String& GetSyncType() const{ return m_syncType; }

    /**
     * <p>View a list of resource data syncs according to the sync type. Specify
     * <code>SyncToDestination</code> to view resource data syncs that synchronize data
     * to an Amazon S3 bucket. Specify <code>SyncFromSource</code> to view resource
     * data syncs from Organizations or from multiple Amazon Web Services Regions.</p>
     */
    inline bool SyncTypeHasBeenSet() const { return m_syncTypeHasBeenSet; }

    /**
     * <p>View a list of resource data syncs according to the sync type. Specify
     * <code>SyncToDestination</code> to view resource data syncs that synchronize data
     * to an Amazon S3 bucket. Specify <code>SyncFromSource</code> to view resource
     * data syncs from Organizations or from multiple Amazon Web Services Regions.</p>
     */
    inline void SetSyncType(const Aws::String& value) { m_syncTypeHasBeenSet = true; m_syncType = value; }

    /**
     * <p>View a list of resource data syncs according to the sync type. Specify
     * <code>SyncToDestination</code> to view resource data syncs that synchronize data
     * to an Amazon S3 bucket. Specify <code>SyncFromSource</code> to view resource
     * data syncs from Organizations or from multiple Amazon Web Services Regions.</p>
     */
    inline void SetSyncType(Aws::String&& value) { m_syncTypeHasBeenSet = true; m_syncType = std::move(value); }

    /**
     * <p>View a list of resource data syncs according to the sync type. Specify
     * <code>SyncToDestination</code> to view resource data syncs that synchronize data
     * to an Amazon S3 bucket. Specify <code>SyncFromSource</code> to view resource
     * data syncs from Organizations or from multiple Amazon Web Services Regions.</p>
     */
    inline void SetSyncType(const char* value) { m_syncTypeHasBeenSet = true; m_syncType.assign(value); }

    /**
     * <p>View a list of resource data syncs according to the sync type. Specify
     * <code>SyncToDestination</code> to view resource data syncs that synchronize data
     * to an Amazon S3 bucket. Specify <code>SyncFromSource</code> to view resource
     * data syncs from Organizations or from multiple Amazon Web Services Regions.</p>
     */
    inline ListResourceDataSyncRequest& WithSyncType(const Aws::String& value) { SetSyncType(value); return *this;}

    /**
     * <p>View a list of resource data syncs according to the sync type. Specify
     * <code>SyncToDestination</code> to view resource data syncs that synchronize data
     * to an Amazon S3 bucket. Specify <code>SyncFromSource</code> to view resource
     * data syncs from Organizations or from multiple Amazon Web Services Regions.</p>
     */
    inline ListResourceDataSyncRequest& WithSyncType(Aws::String&& value) { SetSyncType(std::move(value)); return *this;}

    /**
     * <p>View a list of resource data syncs according to the sync type. Specify
     * <code>SyncToDestination</code> to view resource data syncs that synchronize data
     * to an Amazon S3 bucket. Specify <code>SyncFromSource</code> to view resource
     * data syncs from Organizations or from multiple Amazon Web Services Regions.</p>
     */
    inline ListResourceDataSyncRequest& WithSyncType(const char* value) { SetSyncType(value); return *this;}


    /**
     * <p>A token to start the list. Use this token to get the next set of results.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.
     * </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.
     * </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.
     * </p>
     */
    inline ListResourceDataSyncRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to start the list. Use this token to get the next set of results.
     * </p>
     */
    inline ListResourceDataSyncRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to start the list. Use this token to get the next set of results.
     * </p>
     */
    inline ListResourceDataSyncRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline ListResourceDataSyncRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_syncType;
    bool m_syncTypeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
