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
    AWS_PI_API ListAvailableResourceMetricsRequest() = default;

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
    inline ServiceType GetServiceType() const { return m_serviceType; }
    inline bool ServiceTypeHasBeenSet() const { return m_serviceTypeHasBeenSet; }
    inline void SetServiceType(ServiceType value) { m_serviceTypeHasBeenSet = true; m_serviceType = value; }
    inline ListAvailableResourceMetricsRequest& WithServiceType(ServiceType value) { SetServiceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An immutable identifier for a data source that is unique within an Amazon Web
     * Services Region. Performance Insights gathers metrics from this data source. To
     * use an Amazon RDS DB instance as a data source, specify its
     * <code>DbiResourceId</code> value. For example, specify
     * <code>db-ABCDEFGHIJKLMNOPQRSTU1VWZ</code>. </p>
     */
    inline const Aws::String& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::String>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::String>
    ListAvailableResourceMetricsRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
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
    inline const Aws::Vector<Aws::String>& GetMetricTypes() const { return m_metricTypes; }
    inline bool MetricTypesHasBeenSet() const { return m_metricTypesHasBeenSet; }
    template<typename MetricTypesT = Aws::Vector<Aws::String>>
    void SetMetricTypes(MetricTypesT&& value) { m_metricTypesHasBeenSet = true; m_metricTypes = std::forward<MetricTypesT>(value); }
    template<typename MetricTypesT = Aws::Vector<Aws::String>>
    ListAvailableResourceMetricsRequest& WithMetricTypes(MetricTypesT&& value) { SetMetricTypes(std::forward<MetricTypesT>(value)); return *this;}
    template<typename MetricTypesT = Aws::String>
    ListAvailableResourceMetricsRequest& AddMetricTypes(MetricTypesT&& value) { m_metricTypesHasBeenSet = true; m_metricTypes.emplace_back(std::forward<MetricTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the token, up
     * to the value specified by <code>MaxRecords</code>. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAvailableResourceMetricsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return. If the <code>MaxRecords</code> value
     * is less than the number of existing items, the response includes a pagination
     * token. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAvailableResourceMetricsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    ServiceType m_serviceType{ServiceType::NOT_SET};
    bool m_serviceTypeHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::Vector<Aws::String> m_metricTypes;
    bool m_metricTypesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
