/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/monitoring/model/QueryType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatch {
namespace Model {

/**
 * <p>Summary information about a metric data query definition. To get the
 * expression, call <code>GetMetricDataQueryDefinition</code>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/MetricDataQueryDefinitionSummary">AWS
 * API Reference</a></p>
 */
class MetricDataQueryDefinitionSummary {
 public:
  AWS_CLOUDWATCH_API MetricDataQueryDefinitionSummary() = default;
  AWS_CLOUDWATCH_API MetricDataQueryDefinitionSummary(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API MetricDataQueryDefinitionSummary& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCH_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The ID of the metric data query definition.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  MetricDataQueryDefinitionSummary& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The path of the metric data query definition.</p>
   */
  inline const Aws::String& GetPath() const { return m_path; }
  inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
  template <typename PathT = Aws::String>
  void SetPath(PathT&& value) {
    m_pathHasBeenSet = true;
    m_path = std::forward<PathT>(value);
  }
  template <typename PathT = Aws::String>
  MetricDataQueryDefinitionSummary& WithPath(PathT&& value) {
    SetPath(std::forward<PathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The language of the expression. Valid values are the following:</p> <ul> <li>
   * <p> <code>PROMQL</code> – A PromQL query.</p> </li> <li> <p> <code>SQL</code> –
   * A CloudWatch Metrics Insights query.</p> </li> <li> <p> <code>METRIC_MATH</code>
   * – A metric math expression.</p> </li> </ul>
   */
  inline QueryType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(QueryType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline MetricDataQueryDefinitionSummary& WithType(QueryType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when you last updated the metric data query definition.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  MetricDataQueryDefinitionSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_path;

  QueryType m_type{QueryType::NOT_SET};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_idHasBeenSet = false;
  bool m_pathHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws
