/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CloudWatchRUM
{
namespace Model
{

  /**
   * <p>A structure that displays the definition of one extended metric that RUM
   * sends to CloudWatch or CloudWatch Evidently. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-RUM-vended-metrics.html">
   * Additional metrics that you can send to CloudWatch and CloudWatch
   * Evidently</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rum-2018-05-10/MetricDefinition">AWS
   * API Reference</a></p>
   */
  class MetricDefinition
  {
  public:
    AWS_CLOUDWATCHRUM_API MetricDefinition() = default;
    AWS_CLOUDWATCHRUM_API MetricDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHRUM_API MetricDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHRUM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This field is a map of field paths to dimension names. It defines the
     * dimensions to associate with this metric in CloudWatch The value of this field
     * is used only if the metric destination is <code>CloudWatch</code>. If the metric
     * destination is <code>Evidently</code>, the value of <code>DimensionKeys</code>
     * is ignored.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDimensionKeys() const { return m_dimensionKeys; }
    inline bool DimensionKeysHasBeenSet() const { return m_dimensionKeysHasBeenSet; }
    template<typename DimensionKeysT = Aws::Map<Aws::String, Aws::String>>
    void SetDimensionKeys(DimensionKeysT&& value) { m_dimensionKeysHasBeenSet = true; m_dimensionKeys = std::forward<DimensionKeysT>(value); }
    template<typename DimensionKeysT = Aws::Map<Aws::String, Aws::String>>
    MetricDefinition& WithDimensionKeys(DimensionKeysT&& value) { SetDimensionKeys(std::forward<DimensionKeysT>(value)); return *this;}
    template<typename DimensionKeysKeyT = Aws::String, typename DimensionKeysValueT = Aws::String>
    MetricDefinition& AddDimensionKeys(DimensionKeysKeyT&& key, DimensionKeysValueT&& value) {
      m_dimensionKeysHasBeenSet = true; m_dimensionKeys.emplace(std::forward<DimensionKeysKeyT>(key), std::forward<DimensionKeysValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The pattern that defines the metric. RUM checks events that happen in a
     * user's session against the pattern, and events that match the pattern are sent
     * to the metric destination.</p> <p>If the metrics destination is
     * <code>CloudWatch</code> and the event also matches a value in
     * <code>DimensionKeys</code>, then the metric is published with the specified
     * dimensions. </p>
     */
    inline const Aws::String& GetEventPattern() const { return m_eventPattern; }
    inline bool EventPatternHasBeenSet() const { return m_eventPatternHasBeenSet; }
    template<typename EventPatternT = Aws::String>
    void SetEventPattern(EventPatternT&& value) { m_eventPatternHasBeenSet = true; m_eventPattern = std::forward<EventPatternT>(value); }
    template<typename EventPatternT = Aws::String>
    MetricDefinition& WithEventPattern(EventPatternT&& value) { SetEventPattern(std::forward<EventPatternT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of this metric definition.</p>
     */
    inline const Aws::String& GetMetricDefinitionId() const { return m_metricDefinitionId; }
    inline bool MetricDefinitionIdHasBeenSet() const { return m_metricDefinitionIdHasBeenSet; }
    template<typename MetricDefinitionIdT = Aws::String>
    void SetMetricDefinitionId(MetricDefinitionIdT&& value) { m_metricDefinitionIdHasBeenSet = true; m_metricDefinitionId = std::forward<MetricDefinitionIdT>(value); }
    template<typename MetricDefinitionIdT = Aws::String>
    MetricDefinition& WithMetricDefinitionId(MetricDefinitionIdT&& value) { SetMetricDefinitionId(std::forward<MetricDefinitionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the metric that is defined in this structure.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    MetricDefinition& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this metric definition is for a custom metric instead of an extended
     * metric, this field displays the metric namespace that the custom metric is
     * published to.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    MetricDefinition& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this field only if you are sending this metric to CloudWatch. It defines
     * the CloudWatch metric unit that this metric is measured in. </p>
     */
    inline const Aws::String& GetUnitLabel() const { return m_unitLabel; }
    inline bool UnitLabelHasBeenSet() const { return m_unitLabelHasBeenSet; }
    template<typename UnitLabelT = Aws::String>
    void SetUnitLabel(UnitLabelT&& value) { m_unitLabelHasBeenSet = true; m_unitLabel = std::forward<UnitLabelT>(value); }
    template<typename UnitLabelT = Aws::String>
    MetricDefinition& WithUnitLabel(UnitLabelT&& value) { SetUnitLabel(std::forward<UnitLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field within the event object that the metric value is sourced from.</p>
     */
    inline const Aws::String& GetValueKey() const { return m_valueKey; }
    inline bool ValueKeyHasBeenSet() const { return m_valueKeyHasBeenSet; }
    template<typename ValueKeyT = Aws::String>
    void SetValueKey(ValueKeyT&& value) { m_valueKeyHasBeenSet = true; m_valueKey = std::forward<ValueKeyT>(value); }
    template<typename ValueKeyT = Aws::String>
    MetricDefinition& WithValueKey(ValueKeyT&& value) { SetValueKey(std::forward<ValueKeyT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_dimensionKeys;
    bool m_dimensionKeysHasBeenSet = false;

    Aws::String m_eventPattern;
    bool m_eventPatternHasBeenSet = false;

    Aws::String m_metricDefinitionId;
    bool m_metricDefinitionIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_unitLabel;
    bool m_unitLabelHasBeenSet = false;

    Aws::String m_valueKey;
    bool m_valueKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
