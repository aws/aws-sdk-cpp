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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeOrderableClusterOptionsMessage">AWS
   * API Reference</a></p>
   */
  class DescribeOrderableClusterOptionsRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API DescribeOrderableClusterOptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeOrderableClusterOptions"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The version filter value. Specify this parameter to show only the available
     * offerings matching the specified version.</p> <p>Default: All versions.</p>
     * <p>Constraints: Must be one of the version returned from
     * <a>DescribeClusterVersions</a>.</p>
     */
    inline const Aws::String& GetClusterVersion() const{ return m_clusterVersion; }

    /**
     * <p>The version filter value. Specify this parameter to show only the available
     * offerings matching the specified version.</p> <p>Default: All versions.</p>
     * <p>Constraints: Must be one of the version returned from
     * <a>DescribeClusterVersions</a>.</p>
     */
    inline bool ClusterVersionHasBeenSet() const { return m_clusterVersionHasBeenSet; }

    /**
     * <p>The version filter value. Specify this parameter to show only the available
     * offerings matching the specified version.</p> <p>Default: All versions.</p>
     * <p>Constraints: Must be one of the version returned from
     * <a>DescribeClusterVersions</a>.</p>
     */
    inline void SetClusterVersion(const Aws::String& value) { m_clusterVersionHasBeenSet = true; m_clusterVersion = value; }

    /**
     * <p>The version filter value. Specify this parameter to show only the available
     * offerings matching the specified version.</p> <p>Default: All versions.</p>
     * <p>Constraints: Must be one of the version returned from
     * <a>DescribeClusterVersions</a>.</p>
     */
    inline void SetClusterVersion(Aws::String&& value) { m_clusterVersionHasBeenSet = true; m_clusterVersion = std::move(value); }

    /**
     * <p>The version filter value. Specify this parameter to show only the available
     * offerings matching the specified version.</p> <p>Default: All versions.</p>
     * <p>Constraints: Must be one of the version returned from
     * <a>DescribeClusterVersions</a>.</p>
     */
    inline void SetClusterVersion(const char* value) { m_clusterVersionHasBeenSet = true; m_clusterVersion.assign(value); }

    /**
     * <p>The version filter value. Specify this parameter to show only the available
     * offerings matching the specified version.</p> <p>Default: All versions.</p>
     * <p>Constraints: Must be one of the version returned from
     * <a>DescribeClusterVersions</a>.</p>
     */
    inline DescribeOrderableClusterOptionsRequest& WithClusterVersion(const Aws::String& value) { SetClusterVersion(value); return *this;}

    /**
     * <p>The version filter value. Specify this parameter to show only the available
     * offerings matching the specified version.</p> <p>Default: All versions.</p>
     * <p>Constraints: Must be one of the version returned from
     * <a>DescribeClusterVersions</a>.</p>
     */
    inline DescribeOrderableClusterOptionsRequest& WithClusterVersion(Aws::String&& value) { SetClusterVersion(std::move(value)); return *this;}

    /**
     * <p>The version filter value. Specify this parameter to show only the available
     * offerings matching the specified version.</p> <p>Default: All versions.</p>
     * <p>Constraints: Must be one of the version returned from
     * <a>DescribeClusterVersions</a>.</p>
     */
    inline DescribeOrderableClusterOptionsRequest& WithClusterVersion(const char* value) { SetClusterVersion(value); return *this;}


    /**
     * <p>The node type filter value. Specify this parameter to show only the available
     * offerings matching the specified node type.</p>
     */
    inline const Aws::String& GetNodeType() const{ return m_nodeType; }

    /**
     * <p>The node type filter value. Specify this parameter to show only the available
     * offerings matching the specified node type.</p>
     */
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }

    /**
     * <p>The node type filter value. Specify this parameter to show only the available
     * offerings matching the specified node type.</p>
     */
    inline void SetNodeType(const Aws::String& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }

    /**
     * <p>The node type filter value. Specify this parameter to show only the available
     * offerings matching the specified node type.</p>
     */
    inline void SetNodeType(Aws::String&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }

    /**
     * <p>The node type filter value. Specify this parameter to show only the available
     * offerings matching the specified node type.</p>
     */
    inline void SetNodeType(const char* value) { m_nodeTypeHasBeenSet = true; m_nodeType.assign(value); }

    /**
     * <p>The node type filter value. Specify this parameter to show only the available
     * offerings matching the specified node type.</p>
     */
    inline DescribeOrderableClusterOptionsRequest& WithNodeType(const Aws::String& value) { SetNodeType(value); return *this;}

    /**
     * <p>The node type filter value. Specify this parameter to show only the available
     * offerings matching the specified node type.</p>
     */
    inline DescribeOrderableClusterOptionsRequest& WithNodeType(Aws::String&& value) { SetNodeType(std::move(value)); return *this;}

    /**
     * <p>The node type filter value. Specify this parameter to show only the available
     * offerings matching the specified node type.</p>
     */
    inline DescribeOrderableClusterOptionsRequest& WithNodeType(const char* value) { SetNodeType(value); return *this;}


    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * marker value. </p> <p>Default: <code>100</code> </p> <p>Constraints: minimum 20,
     * maximum 100.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * marker value. </p> <p>Default: <code>100</code> </p> <p>Constraints: minimum 20,
     * maximum 100.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * marker value. </p> <p>Default: <code>100</code> </p> <p>Constraints: minimum 20,
     * maximum 100.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of response records to return in each call. If the number
     * of remaining response records exceeds the specified <code>MaxRecords</code>
     * value, a value is returned in a <code>marker</code> field of the response. You
     * can retrieve the next set of records by retrying the command with the returned
     * marker value. </p> <p>Default: <code>100</code> </p> <p>Constraints: minimum 20,
     * maximum 100.</p>
     */
    inline DescribeOrderableClusterOptionsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeOrderableClusterOptions</a>
     * request exceed the value specified in <code>MaxRecords</code>, Amazon Web
     * Services returns a value in the <code>Marker</code> field of the response. You
     * can retrieve the next set of response records by providing the returned marker
     * value in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeOrderableClusterOptions</a>
     * request exceed the value specified in <code>MaxRecords</code>, Amazon Web
     * Services returns a value in the <code>Marker</code> field of the response. You
     * can retrieve the next set of response records by providing the returned marker
     * value in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeOrderableClusterOptions</a>
     * request exceed the value specified in <code>MaxRecords</code>, Amazon Web
     * Services returns a value in the <code>Marker</code> field of the response. You
     * can retrieve the next set of response records by providing the returned marker
     * value in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeOrderableClusterOptions</a>
     * request exceed the value specified in <code>MaxRecords</code>, Amazon Web
     * Services returns a value in the <code>Marker</code> field of the response. You
     * can retrieve the next set of response records by providing the returned marker
     * value in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeOrderableClusterOptions</a>
     * request exceed the value specified in <code>MaxRecords</code>, Amazon Web
     * Services returns a value in the <code>Marker</code> field of the response. You
     * can retrieve the next set of response records by providing the returned marker
     * value in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeOrderableClusterOptions</a>
     * request exceed the value specified in <code>MaxRecords</code>, Amazon Web
     * Services returns a value in the <code>Marker</code> field of the response. You
     * can retrieve the next set of response records by providing the returned marker
     * value in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline DescribeOrderableClusterOptionsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeOrderableClusterOptions</a>
     * request exceed the value specified in <code>MaxRecords</code>, Amazon Web
     * Services returns a value in the <code>Marker</code> field of the response. You
     * can retrieve the next set of response records by providing the returned marker
     * value in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline DescribeOrderableClusterOptionsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeOrderableClusterOptions</a>
     * request exceed the value specified in <code>MaxRecords</code>, Amazon Web
     * Services returns a value in the <code>Marker</code> field of the response. You
     * can retrieve the next set of response records by providing the returned marker
     * value in the <code>Marker</code> parameter and retrying the request. </p>
     */
    inline DescribeOrderableClusterOptionsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_clusterVersion;
    bool m_clusterVersionHasBeenSet = false;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
