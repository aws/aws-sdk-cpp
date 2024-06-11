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
    AWS_CLOUDWATCHRUM_API MetricDefinition();
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
    inline const Aws::Map<Aws::String, Aws::String>& GetDimensionKeys() const{ return m_dimensionKeys; }
    inline bool DimensionKeysHasBeenSet() const { return m_dimensionKeysHasBeenSet; }
    inline void SetDimensionKeys(const Aws::Map<Aws::String, Aws::String>& value) { m_dimensionKeysHasBeenSet = true; m_dimensionKeys = value; }
    inline void SetDimensionKeys(Aws::Map<Aws::String, Aws::String>&& value) { m_dimensionKeysHasBeenSet = true; m_dimensionKeys = std::move(value); }
    inline MetricDefinition& WithDimensionKeys(const Aws::Map<Aws::String, Aws::String>& value) { SetDimensionKeys(value); return *this;}
    inline MetricDefinition& WithDimensionKeys(Aws::Map<Aws::String, Aws::String>&& value) { SetDimensionKeys(std::move(value)); return *this;}
    inline MetricDefinition& AddDimensionKeys(const Aws::String& key, const Aws::String& value) { m_dimensionKeysHasBeenSet = true; m_dimensionKeys.emplace(key, value); return *this; }
    inline MetricDefinition& AddDimensionKeys(Aws::String&& key, const Aws::String& value) { m_dimensionKeysHasBeenSet = true; m_dimensionKeys.emplace(std::move(key), value); return *this; }
    inline MetricDefinition& AddDimensionKeys(const Aws::String& key, Aws::String&& value) { m_dimensionKeysHasBeenSet = true; m_dimensionKeys.emplace(key, std::move(value)); return *this; }
    inline MetricDefinition& AddDimensionKeys(Aws::String&& key, Aws::String&& value) { m_dimensionKeysHasBeenSet = true; m_dimensionKeys.emplace(std::move(key), std::move(value)); return *this; }
    inline MetricDefinition& AddDimensionKeys(const char* key, Aws::String&& value) { m_dimensionKeysHasBeenSet = true; m_dimensionKeys.emplace(key, std::move(value)); return *this; }
    inline MetricDefinition& AddDimensionKeys(Aws::String&& key, const char* value) { m_dimensionKeysHasBeenSet = true; m_dimensionKeys.emplace(std::move(key), value); return *this; }
    inline MetricDefinition& AddDimensionKeys(const char* key, const char* value) { m_dimensionKeysHasBeenSet = true; m_dimensionKeys.emplace(key, value); return *this; }
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
    inline const Aws::String& GetEventPattern() const{ return m_eventPattern; }
    inline bool EventPatternHasBeenSet() const { return m_eventPatternHasBeenSet; }
    inline void SetEventPattern(const Aws::String& value) { m_eventPatternHasBeenSet = true; m_eventPattern = value; }
    inline void SetEventPattern(Aws::String&& value) { m_eventPatternHasBeenSet = true; m_eventPattern = std::move(value); }
    inline void SetEventPattern(const char* value) { m_eventPatternHasBeenSet = true; m_eventPattern.assign(value); }
    inline MetricDefinition& WithEventPattern(const Aws::String& value) { SetEventPattern(value); return *this;}
    inline MetricDefinition& WithEventPattern(Aws::String&& value) { SetEventPattern(std::move(value)); return *this;}
    inline MetricDefinition& WithEventPattern(const char* value) { SetEventPattern(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of this metric definition.</p>
     */
    inline const Aws::String& GetMetricDefinitionId() const{ return m_metricDefinitionId; }
    inline bool MetricDefinitionIdHasBeenSet() const { return m_metricDefinitionIdHasBeenSet; }
    inline void SetMetricDefinitionId(const Aws::String& value) { m_metricDefinitionIdHasBeenSet = true; m_metricDefinitionId = value; }
    inline void SetMetricDefinitionId(Aws::String&& value) { m_metricDefinitionIdHasBeenSet = true; m_metricDefinitionId = std::move(value); }
    inline void SetMetricDefinitionId(const char* value) { m_metricDefinitionIdHasBeenSet = true; m_metricDefinitionId.assign(value); }
    inline MetricDefinition& WithMetricDefinitionId(const Aws::String& value) { SetMetricDefinitionId(value); return *this;}
    inline MetricDefinition& WithMetricDefinitionId(Aws::String&& value) { SetMetricDefinitionId(std::move(value)); return *this;}
    inline MetricDefinition& WithMetricDefinitionId(const char* value) { SetMetricDefinitionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the metric that is defined in this structure.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline MetricDefinition& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline MetricDefinition& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline MetricDefinition& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this metric definition is for a custom metric instead of an extended
     * metric, this field displays the metric namespace that the custom metric is
     * published to.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }
    inline MetricDefinition& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}
    inline MetricDefinition& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}
    inline MetricDefinition& WithNamespace(const char* value) { SetNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this field only if you are sending this metric to CloudWatch. It defines
     * the CloudWatch metric unit that this metric is measured in. </p>
     */
    inline const Aws::String& GetUnitLabel() const{ return m_unitLabel; }
    inline bool UnitLabelHasBeenSet() const { return m_unitLabelHasBeenSet; }
    inline void SetUnitLabel(const Aws::String& value) { m_unitLabelHasBeenSet = true; m_unitLabel = value; }
    inline void SetUnitLabel(Aws::String&& value) { m_unitLabelHasBeenSet = true; m_unitLabel = std::move(value); }
    inline void SetUnitLabel(const char* value) { m_unitLabelHasBeenSet = true; m_unitLabel.assign(value); }
    inline MetricDefinition& WithUnitLabel(const Aws::String& value) { SetUnitLabel(value); return *this;}
    inline MetricDefinition& WithUnitLabel(Aws::String&& value) { SetUnitLabel(std::move(value)); return *this;}
    inline MetricDefinition& WithUnitLabel(const char* value) { SetUnitLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The field within the event object that the metric value is sourced from.</p>
     */
    inline const Aws::String& GetValueKey() const{ return m_valueKey; }
    inline bool ValueKeyHasBeenSet() const { return m_valueKeyHasBeenSet; }
    inline void SetValueKey(const Aws::String& value) { m_valueKeyHasBeenSet = true; m_valueKey = value; }
    inline void SetValueKey(Aws::String&& value) { m_valueKeyHasBeenSet = true; m_valueKey = std::move(value); }
    inline void SetValueKey(const char* value) { m_valueKeyHasBeenSet = true; m_valueKey.assign(value); }
    inline MetricDefinition& WithValueKey(const Aws::String& value) { SetValueKey(value); return *this;}
    inline MetricDefinition& WithValueKey(Aws::String&& value) { SetValueKey(std::move(value)); return *this;}
    inline MetricDefinition& WithValueKey(const char* value) { SetValueKey(value); return *this;}
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
