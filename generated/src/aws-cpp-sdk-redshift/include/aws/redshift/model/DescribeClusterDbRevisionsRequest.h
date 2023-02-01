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
  class DescribeClusterDbRevisionsRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API DescribeClusterDbRevisionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeClusterDbRevisions"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A unique identifier for a cluster whose <code>ClusterDbRevisions</code> you
     * are requesting. This parameter is case sensitive. All clusters defined for an
     * account are returned by default.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>A unique identifier for a cluster whose <code>ClusterDbRevisions</code> you
     * are requesting. This parameter is case sensitive. All clusters defined for an
     * account are returned by default.</p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>A unique identifier for a cluster whose <code>ClusterDbRevisions</code> you
     * are requesting. This parameter is case sensitive. All clusters defined for an
     * account are returned by default.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>A unique identifier for a cluster whose <code>ClusterDbRevisions</code> you
     * are requesting. This parameter is case sensitive. All clusters defined for an
     * account are returned by default.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>A unique identifier for a cluster whose <code>ClusterDbRevisions</code> you
     * are requesting. This parameter is case sensitive. All clusters defined for an
     * account are returned by default.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>A unique identifier for a cluster whose <code>ClusterDbRevisions</code> you
     * are requesting. This parameter is case sensitive. All clusters defined for an
     * account are returned by default.</p>
     */
    inline DescribeClusterDbRevisionsRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>A unique identifier for a cluster whose <code>ClusterDbRevisions</code> you
     * are requesting. This parameter is case sensitive. All clusters defined for an
     * account are returned by default.</p>
     */
    inline DescribeClusterDbRevisionsRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a cluster whose <code>ClusterDbRevisions</code> you
     * are requesting. This parameter is case sensitive. All clusters defined for an
     * account are returned by default.</p>
     */
    inline DescribeClusterDbRevisionsRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified MaxRecords value, a value is
     * returned in the <code>marker</code> field of the response. You can retrieve the
     * next set of response records by providing the returned <code>marker</code> value
     * in the <code>marker</code> parameter and retrying the request. </p> <p>Default:
     * 100</p> <p>Constraints: minimum 20, maximum 100.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified MaxRecords value, a value is
     * returned in the <code>marker</code> field of the response. You can retrieve the
     * next set of response records by providing the returned <code>marker</code> value
     * in the <code>marker</code> parameter and retrying the request. </p> <p>Default:
     * 100</p> <p>Constraints: minimum 20, maximum 100.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified MaxRecords value, a value is
     * returned in the <code>marker</code> field of the response. You can retrieve the
     * next set of response records by providing the returned <code>marker</code> value
     * in the <code>marker</code> parameter and retrying the request. </p> <p>Default:
     * 100</p> <p>Constraints: minimum 20, maximum 100.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified MaxRecords value, a value is
     * returned in the <code>marker</code> field of the response. You can retrieve the
     * next set of response records by providing the returned <code>marker</code> value
     * in the <code>marker</code> parameter and retrying the request. </p> <p>Default:
     * 100</p> <p>Constraints: minimum 20, maximum 100.</p>
     */
    inline DescribeClusterDbRevisionsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>An optional parameter that specifies the starting point for returning a set
     * of response records. When the results of a
     * <code>DescribeClusterDbRevisions</code> request exceed the value specified in
     * <code>MaxRecords</code>, Amazon Redshift returns a value in the
     * <code>marker</code> field of the response. You can retrieve the next set of
     * response records by providing the returned <code>marker</code> value in the
     * <code>marker</code> parameter and retrying the request. </p> <p>Constraints: You
     * can specify either the <code>ClusterIdentifier</code> parameter, or the
     * <code>marker</code> parameter, but not both.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional parameter that specifies the starting point for returning a set
     * of response records. When the results of a
     * <code>DescribeClusterDbRevisions</code> request exceed the value specified in
     * <code>MaxRecords</code>, Amazon Redshift returns a value in the
     * <code>marker</code> field of the response. You can retrieve the next set of
     * response records by providing the returned <code>marker</code> value in the
     * <code>marker</code> parameter and retrying the request. </p> <p>Constraints: You
     * can specify either the <code>ClusterIdentifier</code> parameter, or the
     * <code>marker</code> parameter, but not both.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>An optional parameter that specifies the starting point for returning a set
     * of response records. When the results of a
     * <code>DescribeClusterDbRevisions</code> request exceed the value specified in
     * <code>MaxRecords</code>, Amazon Redshift returns a value in the
     * <code>marker</code> field of the response. You can retrieve the next set of
     * response records by providing the returned <code>marker</code> value in the
     * <code>marker</code> parameter and retrying the request. </p> <p>Constraints: You
     * can specify either the <code>ClusterIdentifier</code> parameter, or the
     * <code>marker</code> parameter, but not both.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional parameter that specifies the starting point for returning a set
     * of response records. When the results of a
     * <code>DescribeClusterDbRevisions</code> request exceed the value specified in
     * <code>MaxRecords</code>, Amazon Redshift returns a value in the
     * <code>marker</code> field of the response. You can retrieve the next set of
     * response records by providing the returned <code>marker</code> value in the
     * <code>marker</code> parameter and retrying the request. </p> <p>Constraints: You
     * can specify either the <code>ClusterIdentifier</code> parameter, or the
     * <code>marker</code> parameter, but not both.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>An optional parameter that specifies the starting point for returning a set
     * of response records. When the results of a
     * <code>DescribeClusterDbRevisions</code> request exceed the value specified in
     * <code>MaxRecords</code>, Amazon Redshift returns a value in the
     * <code>marker</code> field of the response. You can retrieve the next set of
     * response records by providing the returned <code>marker</code> value in the
     * <code>marker</code> parameter and retrying the request. </p> <p>Constraints: You
     * can specify either the <code>ClusterIdentifier</code> parameter, or the
     * <code>marker</code> parameter, but not both.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional parameter that specifies the starting point for returning a set
     * of response records. When the results of a
     * <code>DescribeClusterDbRevisions</code> request exceed the value specified in
     * <code>MaxRecords</code>, Amazon Redshift returns a value in the
     * <code>marker</code> field of the response. You can retrieve the next set of
     * response records by providing the returned <code>marker</code> value in the
     * <code>marker</code> parameter and retrying the request. </p> <p>Constraints: You
     * can specify either the <code>ClusterIdentifier</code> parameter, or the
     * <code>marker</code> parameter, but not both.</p>
     */
    inline DescribeClusterDbRevisionsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional parameter that specifies the starting point for returning a set
     * of response records. When the results of a
     * <code>DescribeClusterDbRevisions</code> request exceed the value specified in
     * <code>MaxRecords</code>, Amazon Redshift returns a value in the
     * <code>marker</code> field of the response. You can retrieve the next set of
     * response records by providing the returned <code>marker</code> value in the
     * <code>marker</code> parameter and retrying the request. </p> <p>Constraints: You
     * can specify either the <code>ClusterIdentifier</code> parameter, or the
     * <code>marker</code> parameter, but not both.</p>
     */
    inline DescribeClusterDbRevisionsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional parameter that specifies the starting point for returning a set
     * of response records. When the results of a
     * <code>DescribeClusterDbRevisions</code> request exceed the value specified in
     * <code>MaxRecords</code>, Amazon Redshift returns a value in the
     * <code>marker</code> field of the response. You can retrieve the next set of
     * response records by providing the returned <code>marker</code> value in the
     * <code>marker</code> parameter and retrying the request. </p> <p>Constraints: You
     * can specify either the <code>ClusterIdentifier</code> parameter, or the
     * <code>marker</code> parameter, but not both.</p>
     */
    inline DescribeClusterDbRevisionsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
