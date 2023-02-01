/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/MemoryDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

  /**
   */
  class DescribeSnapshotsRequest : public MemoryDBRequest
  {
  public:
    AWS_MEMORYDB_API DescribeSnapshotsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSnapshots"; }

    AWS_MEMORYDB_API Aws::String SerializePayload() const override;

    AWS_MEMORYDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A user-supplied cluster identifier. If this parameter is specified, only
     * snapshots associated with that specific cluster are described.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>A user-supplied cluster identifier. If this parameter is specified, only
     * snapshots associated with that specific cluster are described.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>A user-supplied cluster identifier. If this parameter is specified, only
     * snapshots associated with that specific cluster are described.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>A user-supplied cluster identifier. If this parameter is specified, only
     * snapshots associated with that specific cluster are described.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>A user-supplied cluster identifier. If this parameter is specified, only
     * snapshots associated with that specific cluster are described.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>A user-supplied cluster identifier. If this parameter is specified, only
     * snapshots associated with that specific cluster are described.</p>
     */
    inline DescribeSnapshotsRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>A user-supplied cluster identifier. If this parameter is specified, only
     * snapshots associated with that specific cluster are described.</p>
     */
    inline DescribeSnapshotsRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>A user-supplied cluster identifier. If this parameter is specified, only
     * snapshots associated with that specific cluster are described.</p>
     */
    inline DescribeSnapshotsRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>A user-supplied name of the snapshot. If this parameter is specified, only
     * this named snapshot is described.</p>
     */
    inline const Aws::String& GetSnapshotName() const{ return m_snapshotName; }

    /**
     * <p>A user-supplied name of the snapshot. If this parameter is specified, only
     * this named snapshot is described.</p>
     */
    inline bool SnapshotNameHasBeenSet() const { return m_snapshotNameHasBeenSet; }

    /**
     * <p>A user-supplied name of the snapshot. If this parameter is specified, only
     * this named snapshot is described.</p>
     */
    inline void SetSnapshotName(const Aws::String& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = value; }

    /**
     * <p>A user-supplied name of the snapshot. If this parameter is specified, only
     * this named snapshot is described.</p>
     */
    inline void SetSnapshotName(Aws::String&& value) { m_snapshotNameHasBeenSet = true; m_snapshotName = std::move(value); }

    /**
     * <p>A user-supplied name of the snapshot. If this parameter is specified, only
     * this named snapshot is described.</p>
     */
    inline void SetSnapshotName(const char* value) { m_snapshotNameHasBeenSet = true; m_snapshotName.assign(value); }

    /**
     * <p>A user-supplied name of the snapshot. If this parameter is specified, only
     * this named snapshot is described.</p>
     */
    inline DescribeSnapshotsRequest& WithSnapshotName(const Aws::String& value) { SetSnapshotName(value); return *this;}

    /**
     * <p>A user-supplied name of the snapshot. If this parameter is specified, only
     * this named snapshot is described.</p>
     */
    inline DescribeSnapshotsRequest& WithSnapshotName(Aws::String&& value) { SetSnapshotName(std::move(value)); return *this;}

    /**
     * <p>A user-supplied name of the snapshot. If this parameter is specified, only
     * this named snapshot is described.</p>
     */
    inline DescribeSnapshotsRequest& WithSnapshotName(const char* value) { SetSnapshotName(value); return *this;}


    /**
     * <p>If set to system, the output shows snapshots that were automatically created
     * by MemoryDB. If set to user the output shows snapshots that were manually
     * created. If omitted, the output shows both automatically and manually created
     * snapshots.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>If set to system, the output shows snapshots that were automatically created
     * by MemoryDB. If set to user the output shows snapshots that were manually
     * created. If omitted, the output shows both automatically and manually created
     * snapshots.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>If set to system, the output shows snapshots that were automatically created
     * by MemoryDB. If set to user the output shows snapshots that were manually
     * created. If omitted, the output shows both automatically and manually created
     * snapshots.</p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>If set to system, the output shows snapshots that were automatically created
     * by MemoryDB. If set to user the output shows snapshots that were manually
     * created. If omitted, the output shows both automatically and manually created
     * snapshots.</p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>If set to system, the output shows snapshots that were automatically created
     * by MemoryDB. If set to user the output shows snapshots that were manually
     * created. If omitted, the output shows both automatically and manually created
     * snapshots.</p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>If set to system, the output shows snapshots that were automatically created
     * by MemoryDB. If set to user the output shows snapshots that were manually
     * created. If omitted, the output shows both automatically and manually created
     * snapshots.</p>
     */
    inline DescribeSnapshotsRequest& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>If set to system, the output shows snapshots that were automatically created
     * by MemoryDB. If set to user the output shows snapshots that were manually
     * created. If omitted, the output shows both automatically and manually created
     * snapshots.</p>
     */
    inline DescribeSnapshotsRequest& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>If set to system, the output shows snapshots that were automatically created
     * by MemoryDB. If set to user the output shows snapshots that were manually
     * created. If omitted, the output shows both automatically and manually created
     * snapshots.</p>
     */
    inline DescribeSnapshotsRequest& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline DescribeSnapshotsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline DescribeSnapshotsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An optional argument to pass in case the total number of records exceeds the
     * value of MaxResults. If nextToken is returned, there are more results available.
     * The value of nextToken is a unique pagination token for each page. Make the call
     * again using the returned token to retrieve the next page. Keep all other
     * arguments unchanged. </p>
     */
    inline DescribeSnapshotsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified MaxResults value, a token is included in the response
     * so that the remaining results can be retrieved.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified MaxResults value, a token is included in the response
     * so that the remaining results can be retrieved.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified MaxResults value, a token is included in the response
     * so that the remaining results can be retrieved.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified MaxResults value, a token is included in the response
     * so that the remaining results can be retrieved.</p>
     */
    inline DescribeSnapshotsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A Boolean value which if true, the shard configuration is included in the
     * snapshot description.</p>
     */
    inline bool GetShowDetail() const{ return m_showDetail; }

    /**
     * <p>A Boolean value which if true, the shard configuration is included in the
     * snapshot description.</p>
     */
    inline bool ShowDetailHasBeenSet() const { return m_showDetailHasBeenSet; }

    /**
     * <p>A Boolean value which if true, the shard configuration is included in the
     * snapshot description.</p>
     */
    inline void SetShowDetail(bool value) { m_showDetailHasBeenSet = true; m_showDetail = value; }

    /**
     * <p>A Boolean value which if true, the shard configuration is included in the
     * snapshot description.</p>
     */
    inline DescribeSnapshotsRequest& WithShowDetail(bool value) { SetShowDetail(value); return *this;}

  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_snapshotName;
    bool m_snapshotNameHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    bool m_showDetail;
    bool m_showDetailHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
