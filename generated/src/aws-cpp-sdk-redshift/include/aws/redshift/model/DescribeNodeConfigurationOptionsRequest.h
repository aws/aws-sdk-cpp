/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/redshift/model/ActionType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/NodeConfigurationOptionsFilter.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class DescribeNodeConfigurationOptionsRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API DescribeNodeConfigurationOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeNodeConfigurationOptions"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The action type to evaluate for possible node configurations. Specify
     * "restore-cluster" to get configuration combinations based on an existing
     * snapshot. Specify "recommend-node-config" to get configuration recommendations
     * based on an existing cluster or snapshot. Specify "resize-cluster" to get
     * configuration combinations for elastic resize based on an existing cluster. </p>
     */
    inline const ActionType& GetActionType() const{ return m_actionType; }

    /**
     * <p>The action type to evaluate for possible node configurations. Specify
     * "restore-cluster" to get configuration combinations based on an existing
     * snapshot. Specify "recommend-node-config" to get configuration recommendations
     * based on an existing cluster or snapshot. Specify "resize-cluster" to get
     * configuration combinations for elastic resize based on an existing cluster. </p>
     */
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }

    /**
     * <p>The action type to evaluate for possible node configurations. Specify
     * "restore-cluster" to get configuration combinations based on an existing
     * snapshot. Specify "recommend-node-config" to get configuration recommendations
     * based on an existing cluster or snapshot. Specify "resize-cluster" to get
     * configuration combinations for elastic resize based on an existing cluster. </p>
     */
    inline void SetActionType(const ActionType& value) { m_actionTypeHasBeenSet = true; m_actionType = value; }

    /**
     * <p>The action type to evaluate for possible node configurations. Specify
     * "restore-cluster" to get configuration combinations based on an existing
     * snapshot. Specify "recommend-node-config" to get configuration recommendations
     * based on an existing cluster or snapshot. Specify "resize-cluster" to get
     * configuration combinations for elastic resize based on an existing cluster. </p>
     */
    inline void SetActionType(ActionType&& value) { m_actionTypeHasBeenSet = true; m_actionType = std::move(value); }

    /**
     * <p>The action type to evaluate for possible node configurations. Specify
     * "restore-cluster" to get configuration combinations based on an existing
     * snapshot. Specify "recommend-node-config" to get configuration recommendations
     * based on an existing cluster or snapshot. Specify "resize-cluster" to get
     * configuration combinations for elastic resize based on an existing cluster. </p>
     */
    inline DescribeNodeConfigurationOptionsRequest& WithActionType(const ActionType& value) { SetActionType(value); return *this;}

    /**
     * <p>The action type to evaluate for possible node configurations. Specify
     * "restore-cluster" to get configuration combinations based on an existing
     * snapshot. Specify "recommend-node-config" to get configuration recommendations
     * based on an existing cluster or snapshot. Specify "resize-cluster" to get
     * configuration combinations for elastic resize based on an existing cluster. </p>
     */
    inline DescribeNodeConfigurationOptionsRequest& WithActionType(ActionType&& value) { SetActionType(std::move(value)); return *this;}


    /**
     * <p>The identifier of the cluster to evaluate for possible node
     * configurations.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The identifier of the cluster to evaluate for possible node
     * configurations.</p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the cluster to evaluate for possible node
     * configurations.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The identifier of the cluster to evaluate for possible node
     * configurations.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>The identifier of the cluster to evaluate for possible node
     * configurations.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The identifier of the cluster to evaluate for possible node
     * configurations.</p>
     */
    inline DescribeNodeConfigurationOptionsRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The identifier of the cluster to evaluate for possible node
     * configurations.</p>
     */
    inline DescribeNodeConfigurationOptionsRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the cluster to evaluate for possible node
     * configurations.</p>
     */
    inline DescribeNodeConfigurationOptionsRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>The identifier of the snapshot to evaluate for possible node
     * configurations.</p>
     */
    inline const Aws::String& GetSnapshotIdentifier() const{ return m_snapshotIdentifier; }

    /**
     * <p>The identifier of the snapshot to evaluate for possible node
     * configurations.</p>
     */
    inline bool SnapshotIdentifierHasBeenSet() const { return m_snapshotIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the snapshot to evaluate for possible node
     * configurations.</p>
     */
    inline void SetSnapshotIdentifier(const Aws::String& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = value; }

    /**
     * <p>The identifier of the snapshot to evaluate for possible node
     * configurations.</p>
     */
    inline void SetSnapshotIdentifier(Aws::String&& value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier = std::move(value); }

    /**
     * <p>The identifier of the snapshot to evaluate for possible node
     * configurations.</p>
     */
    inline void SetSnapshotIdentifier(const char* value) { m_snapshotIdentifierHasBeenSet = true; m_snapshotIdentifier.assign(value); }

    /**
     * <p>The identifier of the snapshot to evaluate for possible node
     * configurations.</p>
     */
    inline DescribeNodeConfigurationOptionsRequest& WithSnapshotIdentifier(const Aws::String& value) { SetSnapshotIdentifier(value); return *this;}

    /**
     * <p>The identifier of the snapshot to evaluate for possible node
     * configurations.</p>
     */
    inline DescribeNodeConfigurationOptionsRequest& WithSnapshotIdentifier(Aws::String&& value) { SetSnapshotIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the snapshot to evaluate for possible node
     * configurations.</p>
     */
    inline DescribeNodeConfigurationOptionsRequest& WithSnapshotIdentifier(const char* value) { SetSnapshotIdentifier(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot associated with the message to
     * describe node configuration.</p>
     */
    inline const Aws::String& GetSnapshotArn() const{ return m_snapshotArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot associated with the message to
     * describe node configuration.</p>
     */
    inline bool SnapshotArnHasBeenSet() const { return m_snapshotArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot associated with the message to
     * describe node configuration.</p>
     */
    inline void SetSnapshotArn(const Aws::String& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot associated with the message to
     * describe node configuration.</p>
     */
    inline void SetSnapshotArn(Aws::String&& value) { m_snapshotArnHasBeenSet = true; m_snapshotArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot associated with the message to
     * describe node configuration.</p>
     */
    inline void SetSnapshotArn(const char* value) { m_snapshotArnHasBeenSet = true; m_snapshotArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot associated with the message to
     * describe node configuration.</p>
     */
    inline DescribeNodeConfigurationOptionsRequest& WithSnapshotArn(const Aws::String& value) { SetSnapshotArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot associated with the message to
     * describe node configuration.</p>
     */
    inline DescribeNodeConfigurationOptionsRequest& WithSnapshotArn(Aws::String&& value) { SetSnapshotArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the snapshot associated with the message to
     * describe node configuration.</p>
     */
    inline DescribeNodeConfigurationOptionsRequest& WithSnapshotArn(const char* value) { SetSnapshotArn(value); return *this;}


    /**
     * <p>The Amazon Web Services account used to create or copy the snapshot. Required
     * if you are restoring a snapshot you do not own, optional if you own the
     * snapshot.</p>
     */
    inline const Aws::String& GetOwnerAccount() const{ return m_ownerAccount; }

    /**
     * <p>The Amazon Web Services account used to create or copy the snapshot. Required
     * if you are restoring a snapshot you do not own, optional if you own the
     * snapshot.</p>
     */
    inline bool OwnerAccountHasBeenSet() const { return m_ownerAccountHasBeenSet; }

    /**
     * <p>The Amazon Web Services account used to create or copy the snapshot. Required
     * if you are restoring a snapshot you do not own, optional if you own the
     * snapshot.</p>
     */
    inline void SetOwnerAccount(const Aws::String& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = value; }

    /**
     * <p>The Amazon Web Services account used to create or copy the snapshot. Required
     * if you are restoring a snapshot you do not own, optional if you own the
     * snapshot.</p>
     */
    inline void SetOwnerAccount(Aws::String&& value) { m_ownerAccountHasBeenSet = true; m_ownerAccount = std::move(value); }

    /**
     * <p>The Amazon Web Services account used to create or copy the snapshot. Required
     * if you are restoring a snapshot you do not own, optional if you own the
     * snapshot.</p>
     */
    inline void SetOwnerAccount(const char* value) { m_ownerAccountHasBeenSet = true; m_ownerAccount.assign(value); }

    /**
     * <p>The Amazon Web Services account used to create or copy the snapshot. Required
     * if you are restoring a snapshot you do not own, optional if you own the
     * snapshot.</p>
     */
    inline DescribeNodeConfigurationOptionsRequest& WithOwnerAccount(const Aws::String& value) { SetOwnerAccount(value); return *this;}

    /**
     * <p>The Amazon Web Services account used to create or copy the snapshot. Required
     * if you are restoring a snapshot you do not own, optional if you own the
     * snapshot.</p>
     */
    inline DescribeNodeConfigurationOptionsRequest& WithOwnerAccount(Aws::String&& value) { SetOwnerAccount(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account used to create or copy the snapshot. Required
     * if you are restoring a snapshot you do not own, optional if you own the
     * snapshot.</p>
     */
    inline DescribeNodeConfigurationOptionsRequest& WithOwnerAccount(const char* value) { SetOwnerAccount(value); return *this;}


    /**
     * <p>A set of name, operator, and value items to filter the results.</p>
     */
    inline const Aws::Vector<NodeConfigurationOptionsFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>A set of name, operator, and value items to filter the results.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>A set of name, operator, and value items to filter the results.</p>
     */
    inline void SetFilters(const Aws::Vector<NodeConfigurationOptionsFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A set of name, operator, and value items to filter the results.</p>
     */
    inline void SetFilters(Aws::Vector<NodeConfigurationOptionsFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A set of name, operator, and value items to filter the results.</p>
     */
    inline DescribeNodeConfigurationOptionsRequest& WithFilters(const Aws::Vector<NodeConfigurationOptionsFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>A set of name, operator, and value items to filter the results.</p>
     */
    inline DescribeNodeConfigurationOptionsRequest& WithFilters(Aws::Vector<NodeConfigurationOptionsFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>A set of name, operator, and value items to filter the results.</p>
     */
    inline DescribeNodeConfigurationOptionsRequest& AddFilters(const NodeConfigurationOptionsFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>A set of name, operator, and value items to filter the results.</p>
     */
    inline DescribeNodeConfigurationOptionsRequest& AddFilters(NodeConfigurationOptionsFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeNodeConfigurationOptions</a>
     * request exceed the value specified in <code>MaxRecords</code>, Amazon Web
     * Services returns a value in the <code>Marker</code> field of the response. You
     * can retrieve the next set of response records by providing the returned marker
     * value in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeNodeConfigurationOptions</a>
     * request exceed the value specified in <code>MaxRecords</code>, Amazon Web
     * Services returns a value in the <code>Marker</code> field of the response. You
     * can retrieve the next set of response records by providing the returned marker
     * value in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeNodeConfigurationOptions</a>
     * request exceed the value specified in <code>MaxRecords</code>, Amazon Web
     * Services returns a value in the <code>Marker</code> field of the response. You
     * can retrieve the next set of response records by providing the returned marker
     * value in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeNodeConfigurationOptions</a>
     * request exceed the value specified in <code>MaxRecords</code>, Amazon Web
     * Services returns a value in the <code>Marker</code> field of the response. You
     * can retrieve the next set of response records by providing the returned marker
     * value in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeNodeConfigurationOptions</a>
     * request exceed the value specified in <code>MaxRecords</code>, Amazon Web
     * Services returns a value in the <code>Marker</code> field of the response. You
     * can retrieve the next set of response records by providing the returned marker
     * value in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeNodeConfigurationOptions</a>
     * request exceed the value specified in <code>MaxRecords</code>, Amazon Web
     * Services returns a value in the <code>Marker</code> field of the response. You
     * can retrieve the next set of response records by providing the returned marker
     * value in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline DescribeNodeConfigurationOptionsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeNodeConfigurationOptions</a>
     * request exceed the value specified in <code>MaxRecords</code>, Amazon Web
     * Services returns a value in the <code>Marker</code> field of the response. You
     * can retrieve the next set of response records by providing the returned marker
     * value in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline DescribeNodeConfigurationOptionsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeNodeConfigurationOptions</a>
     * request exceed the value specified in <code>MaxRecords</code>, Amazon Web
     * Services returns a value in the <code>Marker</code> field of the response. You
     * can retrieve the next set of response records by providing the returned marker
     * value in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline DescribeNodeConfigurationOptionsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * marker value. </p> <p>Default: <code>500</code> </p> <p>Constraints: minimum
     * 100, maximum 500.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * marker value. </p> <p>Default: <code>500</code> </p> <p>Constraints: minimum
     * 100, maximum 500.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * marker value. </p> <p>Default: <code>500</code> </p> <p>Constraints: minimum
     * 100, maximum 500.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * marker value. </p> <p>Default: <code>500</code> </p> <p>Constraints: minimum
     * 100, maximum 500.</p>
     */
    inline DescribeNodeConfigurationOptionsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}

  private:

    ActionType m_actionType;
    bool m_actionTypeHasBeenSet = false;

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_snapshotIdentifier;
    bool m_snapshotIdentifierHasBeenSet = false;

    Aws::String m_snapshotArn;
    bool m_snapshotArnHasBeenSet = false;

    Aws::String m_ownerAccount;
    bool m_ownerAccountHasBeenSet = false;

    Aws::Vector<NodeConfigurationOptionsFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
