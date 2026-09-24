/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/CloudWatchRequest.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/model/OTelEnrichmentMetricSelector.h>

#include <utility>

namespace Aws {
namespace CloudWatch {
namespace Model {

/**
 */
class UpdateOTelEnrichmentRequest : public CloudWatchRequest {
 public:
  AWS_CLOUDWATCH_API UpdateOTelEnrichmentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateOTelEnrichment"; }

  AWS_CLOUDWATCH_API Aws::String SerializePayload() const override;

  AWS_CLOUDWATCH_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The metric namespaces, and the metric names, to enrich. If this parameter is
   * omitted, every namespace that Amazon CloudWatch supports for enrichment is in
   * scope.</p> <p>A maximum of 100 filters is allowed across
   * <code>IncludeFilters</code> and <code>ExcludeFilters</code> combined.</p>
   */
  inline const Aws::Vector<OTelEnrichmentMetricSelector>& GetIncludeFilters() const { return m_includeFilters; }
  inline bool IncludeFiltersHasBeenSet() const { return m_includeFiltersHasBeenSet; }
  template <typename IncludeFiltersT = Aws::Vector<OTelEnrichmentMetricSelector>>
  void SetIncludeFilters(IncludeFiltersT&& value) {
    m_includeFiltersHasBeenSet = true;
    m_includeFilters = std::forward<IncludeFiltersT>(value);
  }
  template <typename IncludeFiltersT = Aws::Vector<OTelEnrichmentMetricSelector>>
  UpdateOTelEnrichmentRequest& WithIncludeFilters(IncludeFiltersT&& value) {
    SetIncludeFilters(std::forward<IncludeFiltersT>(value));
    return *this;
  }
  template <typename IncludeFiltersT = OTelEnrichmentMetricSelector>
  UpdateOTelEnrichmentRequest& AddIncludeFilters(IncludeFiltersT&& value) {
    m_includeFiltersHasBeenSet = true;
    m_includeFilters.emplace_back(std::forward<IncludeFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The metric namespaces, and the metric names, to leave unenriched. If this
   * parameter is omitted, nothing is excluded.</p> <p>Amazon CloudWatch applies
   * <code>ExcludeFilters</code> after <code>IncludeFilters</code>, so a metric that
   * both parameters match is not enriched.</p> <p>A maximum of 100 filters is
   * allowed across <code>IncludeFilters</code> and <code>ExcludeFilters</code>
   * combined.</p>
   */
  inline const Aws::Vector<OTelEnrichmentMetricSelector>& GetExcludeFilters() const { return m_excludeFilters; }
  inline bool ExcludeFiltersHasBeenSet() const { return m_excludeFiltersHasBeenSet; }
  template <typename ExcludeFiltersT = Aws::Vector<OTelEnrichmentMetricSelector>>
  void SetExcludeFilters(ExcludeFiltersT&& value) {
    m_excludeFiltersHasBeenSet = true;
    m_excludeFilters = std::forward<ExcludeFiltersT>(value);
  }
  template <typename ExcludeFiltersT = Aws::Vector<OTelEnrichmentMetricSelector>>
  UpdateOTelEnrichmentRequest& WithExcludeFilters(ExcludeFiltersT&& value) {
    SetExcludeFilters(std::forward<ExcludeFiltersT>(value));
    return *this;
  }
  template <typename ExcludeFiltersT = OTelEnrichmentMetricSelector>
  UpdateOTelEnrichmentRequest& AddExcludeFilters(ExcludeFiltersT&& value) {
    m_excludeFiltersHasBeenSet = true;
    m_excludeFilters.emplace_back(std::forward<ExcludeFiltersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<OTelEnrichmentMetricSelector> m_includeFilters;

  Aws::Vector<OTelEnrichmentMetricSelector> m_excludeFilters;
  bool m_includeFiltersHasBeenSet = false;
  bool m_excludeFiltersHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
