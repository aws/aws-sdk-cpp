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
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DescribeClustersMessage">AWS
   * API Reference</a></p>
   */
  class DescribeClustersRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API DescribeClustersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeClusters"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The unique identifier of a cluster whose properties you are requesting. This
     * parameter is case sensitive.</p> <p>The default is that all clusters defined for
     * an account are returned.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }
    inline DescribeClustersRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}
    inline DescribeClustersRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}
    inline DescribeClustersRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}
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
    inline DescribeClustersRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <a>DescribeClusters</a> request exceed
     * the value specified in <code>MaxRecords</code>, Amazon Web Services returns a
     * value in the <code>Marker</code> field of the response. You can retrieve the
     * next set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p> <p>Constraints: You
     * can specify either the <b>ClusterIdentifier</b> parameter or the <b>Marker</b>
     * parameter, but not both. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }
    inline DescribeClustersRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeClustersRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeClustersRequest& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A tag key or keys for which you want to return all matching clusters that are
     * associated with the specified key or keys. For example, suppose that you have
     * clusters that are tagged with keys called <code>owner</code> and
     * <code>environment</code>. If you specify both of these tag keys in the request,
     * Amazon Redshift returns a response with the clusters that have either or both of
     * these tag keys associated with them.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }
    inline DescribeClustersRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}
    inline DescribeClustersRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}
    inline DescribeClustersRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }
    inline DescribeClustersRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }
    inline DescribeClustersRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A tag value or values for which you want to return all matching clusters that
     * are associated with the specified tag value or values. For example, suppose that
     * you have clusters that are tagged with values called <code>admin</code> and
     * <code>test</code>. If you specify both of these tag values in the request,
     * Amazon Redshift returns a response with the clusters that have either or both of
     * these tag values associated with them.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagValues() const{ return m_tagValues; }
    inline bool TagValuesHasBeenSet() const { return m_tagValuesHasBeenSet; }
    inline void SetTagValues(const Aws::Vector<Aws::String>& value) { m_tagValuesHasBeenSet = true; m_tagValues = value; }
    inline void SetTagValues(Aws::Vector<Aws::String>&& value) { m_tagValuesHasBeenSet = true; m_tagValues = std::move(value); }
    inline DescribeClustersRequest& WithTagValues(const Aws::Vector<Aws::String>& value) { SetTagValues(value); return *this;}
    inline DescribeClustersRequest& WithTagValues(Aws::Vector<Aws::String>&& value) { SetTagValues(std::move(value)); return *this;}
    inline DescribeClustersRequest& AddTagValues(const Aws::String& value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(value); return *this; }
    inline DescribeClustersRequest& AddTagValues(Aws::String&& value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(std::move(value)); return *this; }
    inline DescribeClustersRequest& AddTagValues(const char* value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

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
