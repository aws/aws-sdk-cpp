/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/RecentlyActive.h>
#include <aws/monitoring/model/DimensionFilter.h>
#include <utility>

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

  /**
   */
  class ListMetricsRequest : public CloudWatchRequest
  {
  public:
    AWS_CLOUDWATCH_API ListMetricsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMetrics"; }

    AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  protected:
    AWS_CLOUDWATCH_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The metric namespace to filter against. Only the namespace that matches
     * exactly will be returned.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    ListMetricsRequest& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the metric to filter against. Only the metrics with names that
     * match exactly will be returned.</p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    ListMetricsRequest& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dimensions to filter against. Only the dimension with names that match
     * exactly will be returned. If you specify one dimension name and a metric has
     * that dimension and also other dimensions, it will be returned.</p>
     */
    inline const Aws::Vector<DimensionFilter>& GetDimensions() const { return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    template<typename DimensionsT = Aws::Vector<DimensionFilter>>
    void SetDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::forward<DimensionsT>(value); }
    template<typename DimensionsT = Aws::Vector<DimensionFilter>>
    ListMetricsRequest& WithDimensions(DimensionsT&& value) { SetDimensions(std::forward<DimensionsT>(value)); return *this;}
    template<typename DimensionsT = DimensionFilter>
    ListMetricsRequest& AddDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace_back(std::forward<DimensionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token returned by a previous call to indicate that there is more data
     * available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMetricsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To filter the results to show only metrics that have had data points
     * published in the past three hours, specify this parameter with a value of
     * <code>PT3H</code>. This is the only valid value for this parameter.</p> <p>The
     * results that are returned are an approximation of the value you specify. There
     * is a low probability that the returned results include metrics with last
     * published data as much as 50 minutes more than the specified time interval.</p>
     */
    inline RecentlyActive GetRecentlyActive() const { return m_recentlyActive; }
    inline bool RecentlyActiveHasBeenSet() const { return m_recentlyActiveHasBeenSet; }
    inline void SetRecentlyActive(RecentlyActive value) { m_recentlyActiveHasBeenSet = true; m_recentlyActive = value; }
    inline ListMetricsRequest& WithRecentlyActive(RecentlyActive value) { SetRecentlyActive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you are using this operation in a monitoring account, specify
     * <code>true</code> to include metrics from source accounts in the returned
     * data.</p> <p>The default is <code>false</code>.</p>
     */
    inline bool GetIncludeLinkedAccounts() const { return m_includeLinkedAccounts; }
    inline bool IncludeLinkedAccountsHasBeenSet() const { return m_includeLinkedAccountsHasBeenSet; }
    inline void SetIncludeLinkedAccounts(bool value) { m_includeLinkedAccountsHasBeenSet = true; m_includeLinkedAccounts = value; }
    inline ListMetricsRequest& WithIncludeLinkedAccounts(bool value) { SetIncludeLinkedAccounts(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When you use this operation in a monitoring account, use this field to return
     * metrics only from one source account. To do so, specify that source account ID
     * in this field, and also specify <code>true</code> for
     * <code>IncludeLinkedAccounts</code>.</p>
     */
    inline const Aws::String& GetOwningAccount() const { return m_owningAccount; }
    inline bool OwningAccountHasBeenSet() const { return m_owningAccountHasBeenSet; }
    template<typename OwningAccountT = Aws::String>
    void SetOwningAccount(OwningAccountT&& value) { m_owningAccountHasBeenSet = true; m_owningAccount = std::forward<OwningAccountT>(value); }
    template<typename OwningAccountT = Aws::String>
    ListMetricsRequest& WithOwningAccount(OwningAccountT&& value) { SetOwningAccount(std::forward<OwningAccountT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::Vector<DimensionFilter> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    RecentlyActive m_recentlyActive{RecentlyActive::NOT_SET};
    bool m_recentlyActiveHasBeenSet = false;

    bool m_includeLinkedAccounts{false};
    bool m_includeLinkedAccountsHasBeenSet = false;

    Aws::String m_owningAccount;
    bool m_owningAccountHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
