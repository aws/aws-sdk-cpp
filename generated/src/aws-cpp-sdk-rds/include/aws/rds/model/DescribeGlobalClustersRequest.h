/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Filter.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class DescribeGlobalClustersRequest : public RDSRequest
  {
  public:
    AWS_RDS_API DescribeGlobalClustersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeGlobalClusters"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The user-supplied DB cluster identifier. If this parameter is specified,
     * information from only the specific DB cluster is returned. This parameter isn't
     * case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>If supplied, must match an
     * existing DBClusterIdentifier.</p> </li> </ul>
     */
    inline const Aws::String& GetGlobalClusterIdentifier() const { return m_globalClusterIdentifier; }
    inline bool GlobalClusterIdentifierHasBeenSet() const { return m_globalClusterIdentifierHasBeenSet; }
    template<typename GlobalClusterIdentifierT = Aws::String>
    void SetGlobalClusterIdentifier(GlobalClusterIdentifierT&& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = std::forward<GlobalClusterIdentifierT>(value); }
    template<typename GlobalClusterIdentifierT = Aws::String>
    DescribeGlobalClustersRequest& WithGlobalClusterIdentifier(GlobalClusterIdentifierT&& value) { SetGlobalClusterIdentifier(std::forward<GlobalClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that specifies one or more global database clusters to describe.
     * This parameter is case-sensitive.</p> <p>Currently, the only supported filter is
     * <code>region</code>.</p> <p>If used, the request returns information about any
     * global cluster with at least one member (primary or secondary) in the specified
     * Amazon Web Services Regions.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeGlobalClustersRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeGlobalClustersRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that you can retrieve the
     * remaining results.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum
     * 100.</p>
     */
    inline int GetMaxRecords() const { return m_maxRecords; }
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }
    inline DescribeGlobalClustersRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeGlobalClusters</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeGlobalClustersRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_globalClusterIdentifier;
    bool m_globalClusterIdentifierHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxRecords{0};
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
