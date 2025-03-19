/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/Dimension.h>
#include <aws/monitoring/model/AnomalyDetectorType.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class DescribeAnomalyDetectorsRequest : public CloudWatchRequest
  {
  public:
    AWS_CLOUDWATCH_API DescribeAnomalyDetectorsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAnomalyDetectors"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Use the token returned by the previous operation to request the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeAnomalyDetectorsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in one operation. The maximum value
     * that you can specify is 100.</p> <p>To retrieve the remaining results, make
     * another call with the returned <code>NextToken</code> value. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeAnomalyDetectorsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Limits the results to only the anomaly detection models that are associated
     * with the specified namespace.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    DescribeAnomalyDetectorsRequest& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Limits the results to only the anomaly detection models that are associated
     * with the specified metric name. If there are multiple metrics with this name in
     * different namespaces that have anomaly detection models, they're all
     * returned.</p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    DescribeAnomalyDetectorsRequest& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Limits the results to only the anomaly detection models that are associated
     * with the specified metric dimensions. If there are multiple metrics that have
     * these dimensions and have anomaly detection models associated, they're all
     * returned.</p>
     */
    inline const Aws::Vector<Dimension>& GetDimensions() const { return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    template<typename DimensionsT = Aws::Vector<Dimension>>
    void SetDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::forward<DimensionsT>(value); }
    template<typename DimensionsT = Aws::Vector<Dimension>>
    DescribeAnomalyDetectorsRequest& WithDimensions(DimensionsT&& value) { SetDimensions(std::forward<DimensionsT>(value)); return *this;}
    template<typename DimensionsT = Dimension>
    DescribeAnomalyDetectorsRequest& AddDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace_back(std::forward<DimensionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The anomaly detector types to request when using
     * <code>DescribeAnomalyDetectorsInput</code>. If empty, defaults to
     * <code>SINGLE_METRIC</code>.</p>
     */
    inline const Aws::Vector<AnomalyDetectorType>& GetAnomalyDetectorTypes() const { return m_anomalyDetectorTypes; }
    inline bool AnomalyDetectorTypesHasBeenSet() const { return m_anomalyDetectorTypesHasBeenSet; }
    template<typename AnomalyDetectorTypesT = Aws::Vector<AnomalyDetectorType>>
    void SetAnomalyDetectorTypes(AnomalyDetectorTypesT&& value) { m_anomalyDetectorTypesHasBeenSet = true; m_anomalyDetectorTypes = std::forward<AnomalyDetectorTypesT>(value); }
    template<typename AnomalyDetectorTypesT = Aws::Vector<AnomalyDetectorType>>
    DescribeAnomalyDetectorsRequest& WithAnomalyDetectorTypes(AnomalyDetectorTypesT&& value) { SetAnomalyDetectorTypes(std::forward<AnomalyDetectorTypesT>(value)); return *this;}
    inline DescribeAnomalyDetectorsRequest& AddAnomalyDetectorTypes(AnomalyDetectorType value) { m_anomalyDetectorTypesHasBeenSet = true; m_anomalyDetectorTypes.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::Vector<Dimension> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    Aws::Vector<AnomalyDetectorType> m_anomalyDetectorTypes;
    bool m_anomalyDetectorTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
