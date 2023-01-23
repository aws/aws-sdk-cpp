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
  class DescribeClusterTracksRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API DescribeClusterTracksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeClusterTracks"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the maintenance track. </p>
     */
    inline const Aws::String& GetMaintenanceTrackName() const{ return m_maintenanceTrackName; }

    /**
     * <p>The name of the maintenance track. </p>
     */
    inline bool MaintenanceTrackNameHasBeenSet() const { return m_maintenanceTrackNameHasBeenSet; }

    /**
     * <p>The name of the maintenance track. </p>
     */
    inline void SetMaintenanceTrackName(const Aws::String& value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName = value; }

    /**
     * <p>The name of the maintenance track. </p>
     */
    inline void SetMaintenanceTrackName(Aws::String&& value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName = std::move(value); }

    /**
     * <p>The name of the maintenance track. </p>
     */
    inline void SetMaintenanceTrackName(const char* value) { m_maintenanceTrackNameHasBeenSet = true; m_maintenanceTrackName.assign(value); }

    /**
     * <p>The name of the maintenance track. </p>
     */
    inline DescribeClusterTracksRequest& WithMaintenanceTrackName(const Aws::String& value) { SetMaintenanceTrackName(value); return *this;}

    /**
     * <p>The name of the maintenance track. </p>
     */
    inline DescribeClusterTracksRequest& WithMaintenanceTrackName(Aws::String&& value) { SetMaintenanceTrackName(std::move(value)); return *this;}

    /**
     * <p>The name of the maintenance track. </p>
     */
    inline DescribeClusterTracksRequest& WithMaintenanceTrackName(const char* value) { SetMaintenanceTrackName(value); return *this;}


    /**
     * <p>An integer value for the maximum number of maintenance tracks to return.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>An integer value for the maximum number of maintenance tracks to return.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>An integer value for the maximum number of maintenance tracks to return.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>An integer value for the maximum number of maintenance tracks to return.</p>
     */
    inline DescribeClusterTracksRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <code>DescribeClusterTracks</code>
     * request exceed the value specified in <code>MaxRecords</code>, Amazon Redshift
     * returns a value in the <code>Marker</code> field of the response. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <code>DescribeClusterTracks</code>
     * request exceed the value specified in <code>MaxRecords</code>, Amazon Redshift
     * returns a value in the <code>Marker</code> field of the response. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <code>DescribeClusterTracks</code>
     * request exceed the value specified in <code>MaxRecords</code>, Amazon Redshift
     * returns a value in the <code>Marker</code> field of the response. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <code>DescribeClusterTracks</code>
     * request exceed the value specified in <code>MaxRecords</code>, Amazon Redshift
     * returns a value in the <code>Marker</code> field of the response. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <code>DescribeClusterTracks</code>
     * request exceed the value specified in <code>MaxRecords</code>, Amazon Redshift
     * returns a value in the <code>Marker</code> field of the response. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <code>DescribeClusterTracks</code>
     * request exceed the value specified in <code>MaxRecords</code>, Amazon Redshift
     * returns a value in the <code>Marker</code> field of the response. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline DescribeClusterTracksRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <code>DescribeClusterTracks</code>
     * request exceed the value specified in <code>MaxRecords</code>, Amazon Redshift
     * returns a value in the <code>Marker</code> field of the response. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline DescribeClusterTracksRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <code>DescribeClusterTracks</code>
     * request exceed the value specified in <code>MaxRecords</code>, Amazon Redshift
     * returns a value in the <code>Marker</code> field of the response. You can
     * retrieve the next set of response records by providing the returned marker value
     * in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline DescribeClusterTracksRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_maintenanceTrackName;
    bool m_maintenanceTrackNameHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
