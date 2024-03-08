/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
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
  class ListRecommendationsRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API ListRecommendationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRecommendations"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The unique identifier of the Amazon Redshift cluster for which the list of
     * Advisor recommendations is returned. If the neither the cluster identifier and
     * the cluster namespace ARN parameters are specified, then recommendations for all
     * clusters in the account are returned.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The unique identifier of the Amazon Redshift cluster for which the list of
     * Advisor recommendations is returned. If the neither the cluster identifier and
     * the cluster namespace ARN parameters are specified, then recommendations for all
     * clusters in the account are returned.</p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>The unique identifier of the Amazon Redshift cluster for which the list of
     * Advisor recommendations is returned. If the neither the cluster identifier and
     * the cluster namespace ARN parameters are specified, then recommendations for all
     * clusters in the account are returned.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The unique identifier of the Amazon Redshift cluster for which the list of
     * Advisor recommendations is returned. If the neither the cluster identifier and
     * the cluster namespace ARN parameters are specified, then recommendations for all
     * clusters in the account are returned.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>The unique identifier of the Amazon Redshift cluster for which the list of
     * Advisor recommendations is returned. If the neither the cluster identifier and
     * the cluster namespace ARN parameters are specified, then recommendations for all
     * clusters in the account are returned.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The unique identifier of the Amazon Redshift cluster for which the list of
     * Advisor recommendations is returned. If the neither the cluster identifier and
     * the cluster namespace ARN parameters are specified, then recommendations for all
     * clusters in the account are returned.</p>
     */
    inline ListRecommendationsRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the Amazon Redshift cluster for which the list of
     * Advisor recommendations is returned. If the neither the cluster identifier and
     * the cluster namespace ARN parameters are specified, then recommendations for all
     * clusters in the account are returned.</p>
     */
    inline ListRecommendationsRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the Amazon Redshift cluster for which the list of
     * Advisor recommendations is returned. If the neither the cluster identifier and
     * the cluster namespace ARN parameters are specified, then recommendations for all
     * clusters in the account are returned.</p>
     */
    inline ListRecommendationsRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>The Amazon Redshift cluster namespace Amazon Resource Name (ARN) for which
     * the list of Advisor recommendations is returned. If the neither the cluster
     * identifier and the cluster namespace ARN parameters are specified, then
     * recommendations for all clusters in the account are returned.</p>
     */
    inline const Aws::String& GetNamespaceArn() const{ return m_namespaceArn; }

    /**
     * <p>The Amazon Redshift cluster namespace Amazon Resource Name (ARN) for which
     * the list of Advisor recommendations is returned. If the neither the cluster
     * identifier and the cluster namespace ARN parameters are specified, then
     * recommendations for all clusters in the account are returned.</p>
     */
    inline bool NamespaceArnHasBeenSet() const { return m_namespaceArnHasBeenSet; }

    /**
     * <p>The Amazon Redshift cluster namespace Amazon Resource Name (ARN) for which
     * the list of Advisor recommendations is returned. If the neither the cluster
     * identifier and the cluster namespace ARN parameters are specified, then
     * recommendations for all clusters in the account are returned.</p>
     */
    inline void SetNamespaceArn(const Aws::String& value) { m_namespaceArnHasBeenSet = true; m_namespaceArn = value; }

    /**
     * <p>The Amazon Redshift cluster namespace Amazon Resource Name (ARN) for which
     * the list of Advisor recommendations is returned. If the neither the cluster
     * identifier and the cluster namespace ARN parameters are specified, then
     * recommendations for all clusters in the account are returned.</p>
     */
    inline void SetNamespaceArn(Aws::String&& value) { m_namespaceArnHasBeenSet = true; m_namespaceArn = std::move(value); }

    /**
     * <p>The Amazon Redshift cluster namespace Amazon Resource Name (ARN) for which
     * the list of Advisor recommendations is returned. If the neither the cluster
     * identifier and the cluster namespace ARN parameters are specified, then
     * recommendations for all clusters in the account are returned.</p>
     */
    inline void SetNamespaceArn(const char* value) { m_namespaceArnHasBeenSet = true; m_namespaceArn.assign(value); }

    /**
     * <p>The Amazon Redshift cluster namespace Amazon Resource Name (ARN) for which
     * the list of Advisor recommendations is returned. If the neither the cluster
     * identifier and the cluster namespace ARN parameters are specified, then
     * recommendations for all clusters in the account are returned.</p>
     */
    inline ListRecommendationsRequest& WithNamespaceArn(const Aws::String& value) { SetNamespaceArn(value); return *this;}

    /**
     * <p>The Amazon Redshift cluster namespace Amazon Resource Name (ARN) for which
     * the list of Advisor recommendations is returned. If the neither the cluster
     * identifier and the cluster namespace ARN parameters are specified, then
     * recommendations for all clusters in the account are returned.</p>
     */
    inline ListRecommendationsRequest& WithNamespaceArn(Aws::String&& value) { SetNamespaceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Redshift cluster namespace Amazon Resource Name (ARN) for which
     * the list of Advisor recommendations is returned. If the neither the cluster
     * identifier and the cluster namespace ARN parameters are specified, then
     * recommendations for all clusters in the account are returned.</p>
     */
    inline ListRecommendationsRequest& WithNamespaceArn(const char* value) { SetNamespaceArn(value); return *this;}


    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified MaxRecords value, a value is
     * returned in a marker field of the response. You can retrieve the next set of
     * records by retrying the command with the returned marker value.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified MaxRecords value, a value is
     * returned in a marker field of the response. You can retrieve the next set of
     * records by retrying the command with the returned marker value.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified MaxRecords value, a value is
     * returned in a marker field of the response. You can retrieve the next set of
     * records by retrying the command with the returned marker value.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified MaxRecords value, a value is
     * returned in a marker field of the response. You can retrieve the next set of
     * records by retrying the command with the returned marker value.</p>
     */
    inline ListRecommendationsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * Marker parameter and retrying the command. If the Marker field is empty, all
     * response records have been retrieved for the request. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * Marker parameter and retrying the command. If the Marker field is empty, all
     * response records have been retrieved for the request. </p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * Marker parameter and retrying the command. If the Marker field is empty, all
     * response records have been retrieved for the request. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * Marker parameter and retrying the command. If the Marker field is empty, all
     * response records have been retrieved for the request. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * Marker parameter and retrying the command. If the Marker field is empty, all
     * response records have been retrieved for the request. </p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * Marker parameter and retrying the command. If the Marker field is empty, all
     * response records have been retrieved for the request. </p>
     */
    inline ListRecommendationsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * Marker parameter and retrying the command. If the Marker field is empty, all
     * response records have been retrieved for the request. </p>
     */
    inline ListRecommendationsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * Marker parameter and retrying the command. If the Marker field is empty, all
     * response records have been retrieved for the request. </p>
     */
    inline ListRecommendationsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_namespaceArn;
    bool m_namespaceArnHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
