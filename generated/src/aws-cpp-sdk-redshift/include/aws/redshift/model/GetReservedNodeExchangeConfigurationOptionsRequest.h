/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/redshift/model/ReservedNodeExchangeActionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class GetReservedNodeExchangeConfigurationOptionsRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API GetReservedNodeExchangeConfigurationOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetReservedNodeExchangeConfigurationOptions"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The action type of the reserved-node configuration. The action type can be an
     * exchange initiated from either a snapshot or a resize.</p>
     */
    inline const ReservedNodeExchangeActionType& GetActionType() const{ return m_actionType; }

    /**
     * <p>The action type of the reserved-node configuration. The action type can be an
     * exchange initiated from either a snapshot or a resize.</p>
     */
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }

    /**
     * <p>The action type of the reserved-node configuration. The action type can be an
     * exchange initiated from either a snapshot or a resize.</p>
     */
    inline void SetActionType(const ReservedNodeExchangeActionType& value) { m_actionTypeHasBeenSet = true; m_actionType = value; }

    /**
     * <p>The action type of the reserved-node configuration. The action type can be an
     * exchange initiated from either a snapshot or a resize.</p>
     */
    inline void SetActionType(ReservedNodeExchangeActionType&& value) { m_actionTypeHasBeenSet = true; m_actionType = std::move(value); }

    /**
     * <p>The action type of the reserved-node configuration. The action type can be an
     * exchange initiated from either a snapshot or a resize.</p>
     */
    inline GetReservedNodeExchangeConfigurationOptionsRequest& WithActionType(const ReservedNodeExchangeActionType& value) { SetActionType(value); return *this;}

    /**
     * <p>The action type of the reserved-node configuration. The action type can be an
     * exchange initiated from either a snapshot or a resize.</p>
     */
    inline GetReservedNodeExchangeConfigurationOptionsRequest& WithActionType(ReservedNodeExchangeActionType&& value) { SetActionType(std::move(value)); return *this;}


    /**
     * <p>The identifier for the cluster that is the source for a reserved-node
     * exchange.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The identifier for the cluster that is the source for a reserved-node
     * exchange.</p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>The identifier for the cluster that is the source for a reserved-node
     * exchange.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The identifier for the cluster that is the source for a reserved-node
     * exchange.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>The identifier for the cluster that is the source for a reserved-node
     * exchange.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The identifier for the cluster that is the source for a reserved-node
     * exchange.</p>
     */
    inline GetReservedNodeExchangeConfigurationOptionsRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The identifier for the cluster that is the source for a reserved-node
     * exchange.</p>
     */
    inline GetReservedNodeExchangeConfigurationOptionsRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier for the cluster that is the source for a reserved-node
     * exchange.</p>
     */
    inline GetReservedNodeExchangeConfigurationOptionsRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>The identifier for the snapshot that is the source for the reserved-node
     * exchange.</p>
     */
    inline const Aws::String& GetSnapshotIdentifier() const{ return m_snapshotIdentifier; }

    /**
     * <p>The identifier for the snapshot that is the source for the reserved-node
     * exchange.</p>
     */
    inline bool SnapshotIdentifierHasBeenSet() const { return m_snapshotIdentifierHasBeenSet; }

    /**
     * <p>The identifier for the snapshot that is the source for the reserved-node
     * exchange.</p>
     */
    inline void SetSnapshotIdentifier(const Aws::String& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = value; }

    /**
     * <p>The identifier for the snapshot that is the source for the reserved-node
     * exchange.</p>
     */
    inline void SetSnapshotIdentifier(Aws::String&& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = std::move(value); }

    /**
     * <p>The identifier for the snapshot that is the source for the reserved-node
     * exchange.</p>
     */
    inline void SetSnapshotIdentifier(const char* value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier.assign(value); }

    /**
     * <p>The identifier for the snapshot that is the source for the reserved-node
     * exchange.</p>
     */
    inline GetReservedNodeExchangeConfigurationOptionsRequest& WithSnapshotIdentifier(const Aws::String& value) { SetSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier for the snapshot that is the source for the reserved-node
     * exchange.</p>
     */
    inline GetReservedNodeExchangeConfigurationOptionsRequest& WithSnapshotIdentifier(Aws::String&& value) { SetSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier for the snapshot that is the source for the reserved-node
     * exchange.</p>
     */
    inline GetReservedNodeExchangeConfigurationOptionsRequest& WithSnapshotIdentifier(const char* value) { SetSnapshotIdentifier(value); return *this;}


    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>Marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * marker value.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>Marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * marker value.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>Marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * marker value.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>Marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * marker value.</p>
     */
    inline GetReservedNodeExchangeConfigurationOptionsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>An optional pagination token provided by a previous
     * <code>GetReservedNodeExchangeConfigurationOptions</code> request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by the <code>MaxRecords</code> parameter. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>GetReservedNodeExchangeConfigurationOptions</code> request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by the <code>MaxRecords</code> parameter. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>GetReservedNodeExchangeConfigurationOptions</code> request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by the <code>MaxRecords</code> parameter. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>GetReservedNodeExchangeConfigurationOptions</code> request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by the <code>MaxRecords</code> parameter. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>GetReservedNodeExchangeConfigurationOptions</code> request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by the <code>MaxRecords</code> parameter. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>GetReservedNodeExchangeConfigurationOptions</code> request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by the <code>MaxRecords</code> parameter. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request.</p>
     */
    inline GetReservedNodeExchangeConfigurationOptionsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>GetReservedNodeExchangeConfigurationOptions</code> request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by the <code>MaxRecords</code> parameter. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request.</p>
     */
    inline GetReservedNodeExchangeConfigurationOptionsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>GetReservedNodeExchangeConfigurationOptions</code> request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by the <code>MaxRecords</code> parameter. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request.</p>
     */
    inline GetReservedNodeExchangeConfigurationOptionsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    ReservedNodeExchangeActionType m_actionType;
    bool m_actionTypeHasBeenSet = false;

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_snapshotIdentifier;
    bool m_snapshotIdentifierHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
