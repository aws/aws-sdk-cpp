/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/SnapshotSortingEntity.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeClusterSnapshotsMessage">AWS
   * API Reference</a></p>
   */
  class DescribeClusterSnapshotsRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API DescribeClusterSnapshotsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeClusterSnapshots"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier of the cluster which generated the requested snapshots.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    template<typename ClusterIdentifierT = Aws::String>
    void SetClusterIdentifier(ClusterIdentifierT&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::forward<ClusterIdentifierT>(value); }
    template<typename ClusterIdentifierT = Aws::String>
    DescribeClusterSnapshotsRequest& WithClusterIdentifier(ClusterIdentifierT&& value) { SetClusterIdentifier(std::forward<ClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The snapshot identifier of the snapshot about which to return
     * information.</p>
     */
    inline const Aws::String& GetSnapshotIdentifier() const { return m_snapshotIdentifier; }
    inline bool SnapshotIdentifierHasBeenSet() const { return m_snapshotIdentifierHasBeenSet; }
    template<typename SnapshotIdentifierT = Aws::String>
    void SetSnapshotIdentifier(SnapshotIdentifierT&& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = std::forward<SnapshotIdentifierT>(value); }
    template<typename SnapshotIdentifierT = Aws::String>
    DescribeClusterSnapshotsRequest& WithSnapshotIdentifier(SnapshotIdentifierT&& value) { SetSnapshotIdentifier(std::forward<SnapshotIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot associated with the message to
     * describe cluster snapshots.</p>
     */
    inline const Aws::String& GetSnapshotArn() const { return m_snapshotArn; }
    inline bool SnapshotArnHasBeenSet() const { return m_snapshotArnHasBeenSet; }
    template<typename SnapshotArnT = Aws::String>
    void SetSnapshotArn(SnapshotArnT&& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = std::forward<SnapshotArnT>(value); }
    template<typename SnapshotArnT = Aws::String>
    DescribeClusterSnapshotsRequest& WithSnapshotArn(SnapshotArnT&& value) { SetSnapshotArn(std::forward<SnapshotArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of snapshots for which you are requesting information. By default,
     * snapshots of all types are returned.</p> <p>Valid Values: <code>automated</code>
     * | <code>manual</code> </p>
     */
    inline const Aws::String& GetSnapshotType() const { return m_snapshotType; }
    inline bool SnapshotTypeHasBeenSet() const { return m_snapshotTypeHasBeenSet; }
    template<typename SnapshotTypeT = Aws::String>
    void SetSnapshotType(SnapshotTypeT&& value) { m_snapshotTypeHasBeenSet = true; m_snapshotType = std::forward<SnapshotTypeT>(value); }
    template<typename SnapshotTypeT = Aws::String>
    DescribeClusterSnapshotsRequest& WithSnapshotType(SnapshotTypeT&& value) { SetSnapshotType(std::forward<SnapshotTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that requests only snapshots created at or after the specified time.
     * The time value is specified in ISO 8601 format. For more information about ISO
     * 8601, go to the <a href="http://en.wikipedia.org/wiki/ISO_8601">ISO8601
     * Wikipedia page.</a> </p> <p>Example: <code>2012-07-16T18:00:00Z</code> </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    DescribeClusterSnapshotsRequest& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A time value that requests only snapshots created at or before the specified
     * time. The time value is specified in ISO 8601 format. For more information about
     * ISO 8601, go to the <a href="http://en.wikipedia.org/wiki/ISO_8601">ISO8601
     * Wikipedia page.</a> </p> <p>Example: <code>2012-07-16T18:00:00Z</code> </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    DescribeClusterSnapshotsRequest& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * marker value. </p> <p>Default: <code>100</code> </p> <p>Constraints: minimum 20,
     * maximum 100.</p>
     */
    inline int GetMaxRecords() const { return m_maxRecords; }
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }
    inline DescribeClusterSnapshotsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeClusterSnapshots</a> request
     * exceed the value specified in <code>MaxRecords</code>, Amazon Web Services
     * returns a value in the <code>Marker</code> field of the response. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeClusterSnapshotsRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account used to create or copy the snapshot. Use this
     * field to filter the results to snapshots owned by a particular account. To
     * describe snapshots you own, either specify your Amazon Web Services account, or
     * do not specify the parameter.</p>
     */
    inline const Aws::String& GetOwnerAccount() const { return m_ownerAccount; }
    inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }
    template<typename OwnerAccountT = Aws::String>
    void SetOwnerAccount(OwnerAccountT&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::forward<OwnerAccountT>(value); }
    template<typename OwnerAccountT = Aws::String>
    DescribeClusterSnapshotsRequest& WithOwnerAccount(OwnerAccountT&& value) { SetOwnerAccount(std::forward<OwnerAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A tag key or keys for which you want to return all matching cluster snapshots
     * that are associated with the specified key or keys. For example, suppose that
     * you have snapshots that are tagged with keys called <code>owner</code> and
     * <code>environment</code>. If you specify both of these tag keys in the request,
     * Amazon Redshift returns a response with the snapshots that have either or both
     * of these tag keys associated with them.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const { return m_tagKeys; }
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }
    template<typename TagKeysT = Aws::Vector<Aws::String>>
    void SetTagKeys(TagKeysT&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::forward<TagKeysT>(value); }
    template<typename TagKeysT = Aws::Vector<Aws::String>>
    DescribeClusterSnapshotsRequest& WithTagKeys(TagKeysT&& value) { SetTagKeys(std::forward<TagKeysT>(value)); return *this;}
    template<typename TagKeysT = Aws::String>
    DescribeClusterSnapshotsRequest& AddTagKeys(TagKeysT&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.emplace_back(std::forward<TagKeysT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A tag value or values for which you want to return all matching cluster
     * snapshots that are associated with the specified tag value or values. For
     * example, suppose that you have snapshots that are tagged with values called
     * <code>admin</code> and <code>test</code>. If you specify both of these tag
     * values in the request, Amazon Redshift returns a response with the snapshots
     * that have either or both of these tag values associated with them.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagValues() const { return m_tagValues; }
    inline bool TagValuesHasBeenSet() const { return m_tagValuesHasBeenSet; }
    template<typename TagValuesT = Aws::Vector<Aws::String>>
    void SetTagValues(TagValuesT&& value) { m_tagValuesHasBeenSet = true; m_tagValues = std::forward<TagValuesT>(value); }
    template<typename TagValuesT = Aws::Vector<Aws::String>>
    DescribeClusterSnapshotsRequest& WithTagValues(TagValuesT&& value) { SetTagValues(std::forward<TagValuesT>(value)); return *this;}
    template<typename TagValuesT = Aws::String>
    DescribeClusterSnapshotsRequest& AddTagValues(TagValuesT&& value) { m_tagValuesHasBeenSet = true; m_tagValues.emplace_back(std::forward<TagValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A value that indicates whether to return snapshots only for an existing
     * cluster. You can perform table-level restore only by using a snapshot of an
     * existing cluster, that is, a cluster that has not been deleted. Values for this
     * parameter work as follows: </p> <ul> <li> <p>If <code>ClusterExists</code> is
     * set to <code>true</code>, <code>ClusterIdentifier</code> is required.</p> </li>
     * <li> <p>If <code>ClusterExists</code> is set to <code>false</code> and
     * <code>ClusterIdentifier</code> isn't specified, all snapshots associated with
     * deleted clusters (orphaned snapshots) are returned. </p> </li> <li> <p>If
     * <code>ClusterExists</code> is set to <code>false</code> and
     * <code>ClusterIdentifier</code> is specified for a deleted cluster, snapshots
     * associated with that cluster are returned.</p> </li> <li> <p>If
     * <code>ClusterExists</code> is set to <code>false</code> and
     * <code>ClusterIdentifier</code> is specified for an existing cluster, no
     * snapshots are returned. </p> </li> </ul>
     */
    inline bool GetClusterExists() const { return m_clusterExists; }
    inline bool ClusterExistsHasBeenSet() const { return m_clusterExistsHasBeenSet; }
    inline void SetClusterExists(bool value) { m_clusterExistsHasBeenSet = true; m_clusterExists = value; }
    inline DescribeClusterSnapshotsRequest& WithClusterExists(bool value) { SetClusterExists(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::Vector<SnapshotSortingEntity>& GetSortingEntities() const { return m_sortingEntities; }
    inline bool SortingEntitiesHasBeenSet() const { return m_sortingEntitiesHasBeenSet; }
    template<typename SortingEntitiesT = Aws::Vector<SnapshotSortingEntity>>
    void SetSortingEntities(SortingEntitiesT&& value) { m_sortingEntitiesHasBeenSet = true; m_sortingEntities = std::forward<SortingEntitiesT>(value); }
    template<typename SortingEntitiesT = Aws::Vector<SnapshotSortingEntity>>
    DescribeClusterSnapshotsRequest& WithSortingEntities(SortingEntitiesT&& value) { SetSortingEntities(std::forward<SortingEntitiesT>(value)); return *this;}
    template<typename SortingEntitiesT = SnapshotSortingEntity>
    DescribeClusterSnapshotsRequest& AddSortingEntities(SortingEntitiesT&& value) { m_sortingEntitiesHasBeenSet = true; m_sortingEntities.emplace_back(std::forward<SortingEntitiesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_snapshotIdentifier;
    bool m_snapshotIdentifierHasBeenSet = false;

    Aws::String m_snapshotArn;
    bool m_snapshotArnHasBeenSet = false;

    Aws::String m_snapshotType;
    bool m_snapshotTypeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    int m_maxRecords{0};
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagValues;
    bool m_tagValuesHasBeenSet = false;

    bool m_clusterExists{false};
    bool m_clusterExistsHasBeenSet = false;

    Aws::Vector<SnapshotSortingEntity> m_sortingEntities;
    bool m_sortingEntitiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
