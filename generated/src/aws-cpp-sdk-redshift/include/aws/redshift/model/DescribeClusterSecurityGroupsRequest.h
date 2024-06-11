﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeClusterSecurityGroupsMessage">AWS
   * API Reference</a></p>
   */
  class DescribeClusterSecurityGroupsRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API DescribeClusterSecurityGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeClusterSecurityGroups"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of a cluster security group for which you are requesting details.
     * You must specify either the <b>Marker</b> parameter or a
     * <b>ClusterSecurityGroupName</b> parameter, but not both. </p> <p> Example:
     * <code>securitygroup1</code> </p>
     */
    inline const Aws::String& GetClusterSecurityGroupName() const{ return m_clusterSecurityGroupName; }
    inline bool ClusterSecurityGroupNameHasBeenSet() const { return m_clusterSecurityGroupNameHasBeenSet; }
    inline void SetClusterSecurityGroupName(const Aws::String& value) { m_clusterSecurityGroupNameHasBeenSet = true; m_clusterSecurityGroupName = value; }
    inline void SetClusterSecurityGroupName(Aws::String&& value) { m_clusterSecurityGroupNameHasBeenSet = true; m_clusterSecurityGroupName = std::move(value); }
    inline void SetClusterSecurityGroupName(const char* value) { m_clusterSecurityGroupNameHasBeenSet = true; m_clusterSecurityGroupName.assign(value); }
    inline DescribeClusterSecurityGroupsRequest& WithClusterSecurityGroupName(const Aws::String& value) { SetClusterSecurityGroupName(value); return *this;}
    inline DescribeClusterSecurityGroupsRequest& WithClusterSecurityGroupName(Aws::String&& value) { SetClusterSecurityGroupName(std::move(value)); return *this;}
    inline DescribeClusterSecurityGroupsRequest& WithClusterSecurityGroupName(const char* value) { SetClusterSecurityGroupName(value); return *this;}
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
    inline int GetMaxRecords() const{ return m_maxRecords; }
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }
    inline DescribeClusterSecurityGroupsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeClusterSecurityGroups</a>
     * request exceed the value specified in <code>MaxRecords</code>, Amazon Web
     * Services returns a value in the <code>Marker</code> field of the response. You
     * can retrieve the next set of response records by providing the returned marker
     * value in the <code>Marker</code> parameter and retrying the request. </p>
     * <p>Constraints: You must specify either the <b>ClusterSecurityGroupName</b>
     * parameter or the <b>Marker</b> parameter, but not both. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }
    inline DescribeClusterSecurityGroupsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeClusterSecurityGroupsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeClusterSecurityGroupsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A tag key or keys for which you want to return all matching cluster security
     * groups that are associated with the specified key or keys. For example, suppose
     * that you have security groups that are tagged with keys called
     * <code>owner</code> and <code>environment</code>. If you specify both of these
     * tag keys in the request, Amazon Redshift returns a response with the security
     * groups that have either or both of these tag keys associated with them.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }
    inline DescribeClusterSecurityGroupsRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}
    inline DescribeClusterSecurityGroupsRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}
    inline DescribeClusterSecurityGroupsRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }
    inline DescribeClusterSecurityGroupsRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }
    inline DescribeClusterSecurityGroupsRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A tag value or values for which you want to return all matching cluster
     * security groups that are associated with the specified tag value or values. For
     * example, suppose that you have security groups that are tagged with values
     * called <code>admin</code> and <code>test</code>. If you specify both of these
     * tag values in the request, Amazon Redshift returns a response with the security
     * groups that have either or both of these tag values associated with them.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagValues() const{ return m_tagValues; }
    inline bool TagValuesHasBeenSet() const { return m_tagValuesHasBeenSet; }
    inline void SetTagValues(const Aws::Vector<Aws::String>& value) { m_tagValuesHasBeenSet = true; m_tagValues = value; }
    inline void SetTagValues(Aws::Vector<Aws::String>&& value) { m_tagValuesHasBeenSet = true; m_tagValues = std::move(value); }
    inline DescribeClusterSecurityGroupsRequest& WithTagValues(const Aws::Vector<Aws::String>& value) { SetTagValues(value); return *this;}
    inline DescribeClusterSecurityGroupsRequest& WithTagValues(Aws::Vector<Aws::String>&& value) { SetTagValues(std::move(value)); return *this;}
    inline DescribeClusterSecurityGroupsRequest& AddTagValues(const Aws::String& value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(value); return *this; }
    inline DescribeClusterSecurityGroupsRequest& AddTagValues(Aws::String&& value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(std::move(value)); return *this; }
    inline DescribeClusterSecurityGroupsRequest& AddTagValues(const char* value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_clusterSecurityGroupName;
    bool m_clusterSecurityGroupNameHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagValues;
    bool m_tagValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
