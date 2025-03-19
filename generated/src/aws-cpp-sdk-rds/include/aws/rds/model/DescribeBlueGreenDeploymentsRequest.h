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
  class DescribeBlueGreenDeploymentsRequest : public RDSRequest
  {
  public:
    AWS_RDS_API DescribeBlueGreenDeploymentsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeBlueGreenDeployments"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The blue/green deployment identifier. If you specify this parameter, the
     * response only includes information about the specific blue/green deployment.
     * This parameter isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * match an existing blue/green deployment identifier.</p> </li> </ul>
     */
    inline const Aws::String& GetBlueGreenDeploymentIdentifier() const { return m_blueGreenDeploymentIdentifier; }
    inline bool BlueGreenDeploymentIdentifierHasBeenSet() const { return m_blueGreenDeploymentIdentifierHasBeenSet; }
    template<typename BlueGreenDeploymentIdentifierT = Aws::String>
    void SetBlueGreenDeploymentIdentifier(BlueGreenDeploymentIdentifierT&& value) { m_blueGreenDeploymentIdentifierHasBeenSet = true; m_blueGreenDeploymentIdentifier = std::forward<BlueGreenDeploymentIdentifierT>(value); }
    template<typename BlueGreenDeploymentIdentifierT = Aws::String>
    DescribeBlueGreenDeploymentsRequest& WithBlueGreenDeploymentIdentifier(BlueGreenDeploymentIdentifierT&& value) { SetBlueGreenDeploymentIdentifier(std::forward<BlueGreenDeploymentIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter that specifies one or more blue/green deployments to describe.</p>
     * <p>Valid Values:</p> <ul> <li> <p> <code>blue-green-deployment-identifier</code>
     * - Accepts system-generated identifiers for blue/green deployments. The results
     * list only includes information about the blue/green deployments with the
     * specified identifiers.</p> </li> <li> <p>
     * <code>blue-green-deployment-name</code> - Accepts user-supplied names for
     * blue/green deployments. The results list only includes information about the
     * blue/green deployments with the specified names.</p> </li> <li> <p>
     * <code>source</code> - Accepts source databases for a blue/green deployment. The
     * results list only includes information about the blue/green deployments with the
     * specified source databases.</p> </li> <li> <p> <code>target</code> - Accepts
     * target databases for a blue/green deployment. The results list only includes
     * information about the blue/green deployments with the specified target
     * databases.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeBlueGreenDeploymentsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeBlueGreenDeploymentsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeBlueGreenDeployments</code> request. If you specify this
     * parameter, the response only includes records beyond the marker, up to the value
     * specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeBlueGreenDeploymentsRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so you can retrieve the remaining
     * results.</p> <p>Default: 100</p> <p>Constraints:</p> <ul> <li> <p>Must be a
     * minimum of 20.</p> </li> <li> <p>Can't exceed 100.</p> </li> </ul>
     */
    inline int GetMaxRecords() const { return m_maxRecords; }
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }
    inline DescribeBlueGreenDeploymentsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}
    ///@}
  private:

    Aws::String m_blueGreenDeploymentIdentifier;
    bool m_blueGreenDeploymentIdentifierHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    int m_maxRecords{0};
    bool m_maxRecordsHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
