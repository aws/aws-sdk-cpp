/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/pi/PIRequest.h>
#include <aws/pi/model/ServiceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace PI
{
namespace Model
{

  /**
   */
  class ListAvailableResourceMetricsRequest : public PIRequest
  {
  public:
    AWS_PI_API ListAvailableResourceMetricsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAvailableResourceMetrics"; }

    AWS_PI_API Aws::String SerializePayload() const override;

    AWS_PI_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Web Services service for which Performance Insights returns
     * metrics.</p>
     */
    inline const ServiceType& GetServiceType() const{ return m_serviceType; }
    inline bool ServiceTypeHasBeenSet() const { return m_serviceTypeHasBeenSet; }
    inline void SetServiceType(const ServiceType& value) { m_serviceTypeHasBeenSet = true; m_serviceType = value; }
    inline void SetServiceType(ServiceType&& value) { m_serviceTypeHasBeenSet = true; m_serviceType = std::move(value); }
    inline ListAvailableResourceMetricsRequest& WithServiceType(const ServiceType& value) { SetServiceType(value); return *this;}
    inline ListAvailableResourceMetricsRequest& WithServiceType(ServiceType&& value) { SetServiceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An immutable identifier for a data source that is unique within an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. To
     * use an Amazon RDS DB instance as a data source, specify its
     * <code>DbiResourceId</code> value. For example, specify
     * <code>db-ABCDEFGHIJKLMNOPQRSTU1VWZ</code>. </p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline ListAvailableResourceMetricsRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline ListAvailableResourceMetricsRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline ListAvailableResourceMetricsRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The types of metrics to return in the response. Valid values in the array
     * include the following:</p> <ul> <li> <p> <code>os</code> (OS counter metrics) -
     * All engines</p> </li> <li> <p> <code>db</code> (DB load metrics) - All engines
     * except for Amazon DocumentDB</p> </li> <li> <p> <code>db.sql.stats</code>
     * (per-SQL metrics) - All engines except for Amazon DocumentDB</p> </li> <li> <p>
     * <code>db.sql_tokenized.stats</code> (per-SQL digest metrics) - All engines
     * except for Amazon DocumentDB</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetMetricTypes() const{ return m_metricTypes; }
    inline bool MetricTypesHasBeenSet() const { return m_metricTypesHasBeenSet; }
    inline void SetMetricTypes(const Aws::Vector<Aws::String>& value) { m_metricTypesHasBeenSet = true; m_metricTypes = value; }
    inline void SetMetricTypes(Aws::Vector<Aws::String>&& value) { m_metricTypesHasBeenSet = true; m_metricTypes = std::move(value); }
    inline ListAvailableResourceMetricsRequest& WithMetricTypes(const Aws::Vector<Aws::String>& value) { SetMetricTypes(value); return *this;}
    inline ListAvailableResourceMetricsRequest& WithMetricTypes(Aws::Vector<Aws::String>&& value) { SetMetricTypes(std::move(value)); return *this;}
    inline ListAvailableResourceMetricsRequest& AddMetricTypes(const Aws::String& value) { m_metricTypesHasBeenSet = true; m_metricTypes.push_back(value); return *this; }
    inline ListAvailableResourceMetricsRequest& AddMetricTypes(Aws::String&& value) { m_metricTypesHasBeenSet = true; m_metricTypes.push_back(std::move(value)); return *this; }
    inline ListAvailableResourceMetricsRequest& AddMetricTypes(const char* value) { m_metricTypesHasBeenSet = true; m_metricTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListAvailableResourceMetricsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAvailableResourceMetricsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAvailableResourceMetricsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return. If the <code>MaxRecords</code> value
     * is less than the number of existing items, the response includes a pagination
     * token. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAvailableResourceMetricsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    ServiceType m_serviceType;
    bool m_serviceTypeHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_metricTypes;
    bool m_metricTypesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
