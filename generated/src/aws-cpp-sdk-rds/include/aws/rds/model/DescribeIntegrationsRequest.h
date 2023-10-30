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
  class DescribeIntegrationsRequest : public RDSRequest
  {
  public:
    AWS_RDS_API DescribeIntegrationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeIntegrations"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The unique identifier of the integration.</p>
     */
    inline const Aws::String& GetIntegrationIdentifier() const{ return m_integrationIdentifier; }

    /**
     * <p>The unique identifier of the integration.</p>
     */
    inline bool IntegrationIdentifierHasBeenSet() const { return m_integrationIdentifierHasBeenSet; }

    /**
     * <p>The unique identifier of the integration.</p>
     */
    inline void SetIntegrationIdentifier(const Aws::String& value) { m_integrationIdentifierHasBeenSet = true; m_integrationIdentifier = value; }

    /**
     * <p>The unique identifier of the integration.</p>
     */
    inline void SetIntegrationIdentifier(Aws::String&& value) { m_integrationIdentifierHasBeenSet = true; m_integrationIdentifier = std::move(value); }

    /**
     * <p>The unique identifier of the integration.</p>
     */
    inline void SetIntegrationIdentifier(const char* value) { m_integrationIdentifierHasBeenSet = true; m_integrationIdentifier.assign(value); }

    /**
     * <p>The unique identifier of the integration.</p>
     */
    inline DescribeIntegrationsRequest& WithIntegrationIdentifier(const Aws::String& value) { SetIntegrationIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the integration.</p>
     */
    inline DescribeIntegrationsRequest& WithIntegrationIdentifier(Aws::String&& value) { SetIntegrationIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the integration.</p>
     */
    inline DescribeIntegrationsRequest& WithIntegrationIdentifier(const char* value) { SetIntegrationIdentifier(value); return *this;}


    /**
     * <p>A filter that specifies one or more resources to return.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>A filter that specifies one or more resources to return.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>A filter that specifies one or more resources to return.</p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A filter that specifies one or more resources to return.</p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A filter that specifies one or more resources to return.</p>
     */
    inline DescribeIntegrationsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>A filter that specifies one or more resources to return.</p>
     */
    inline DescribeIntegrationsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>A filter that specifies one or more resources to return.</p>
     */
    inline DescribeIntegrationsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>A filter that specifies one or more resources to return.</p>
     */
    inline DescribeIntegrationsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that you can retrieve the
     * remaining results.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum
     * 100.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that you can retrieve the
     * remaining results.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum
     * 100.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that you can retrieve the
     * remaining results.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum
     * 100.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of records to include in the response. If more records
     * exist than the specified <code>MaxRecords</code> value, a pagination token
     * called a marker is included in the response so that you can retrieve the
     * remaining results.</p> <p>Default: 100</p> <p>Constraints: Minimum 20, maximum
     * 100.</p>
     */
    inline DescribeIntegrationsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeIntegrations</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeIntegrations</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeIntegrations</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeIntegrations</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeIntegrations</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeIntegrations</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeIntegrationsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeIntegrations</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeIntegrationsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional pagination token provided by a previous
     * <code>DescribeIntegrations</code> request. If this parameter is specified, the
     * response includes only records beyond the marker, up to the value specified by
     * <code>MaxRecords</code>.</p>
     */
    inline DescribeIntegrationsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_integrationIdentifier;
    bool m_integrationIdentifierHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
