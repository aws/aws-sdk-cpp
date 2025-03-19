/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/PropertyRole.h>
#include <aws/quicksight/model/PropertyUsage.h>
#include <aws/quicksight/model/NamedEntityDefinitionMetric.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A structure that represents a named entity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/NamedEntityDefinition">AWS
   * API Reference</a></p>
   */
  class NamedEntityDefinition
  {
  public:
    AWS_QUICKSIGHT_API NamedEntityDefinition() = default;
    AWS_QUICKSIGHT_API NamedEntityDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API NamedEntityDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the entity.</p>
     */
    inline const Aws::String& GetFieldName() const { return m_fieldName; }
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
    template<typename FieldNameT = Aws::String>
    void SetFieldName(FieldNameT&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::forward<FieldNameT>(value); }
    template<typename FieldNameT = Aws::String>
    NamedEntityDefinition& WithFieldName(FieldNameT&& value) { SetFieldName(std::forward<FieldNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The property name to be used for the named entity.</p>
     */
    inline const Aws::String& GetPropertyName() const { return m_propertyName; }
    inline bool PropertyNameHasBeenSet() const { return m_propertyNameHasBeenSet; }
    template<typename PropertyNameT = Aws::String>
    void SetPropertyName(PropertyNameT&& value) { m_propertyNameHasBeenSet = true; m_propertyName = std::forward<PropertyNameT>(value); }
    template<typename PropertyNameT = Aws::String>
    NamedEntityDefinition& WithPropertyName(PropertyNameT&& value) { SetPropertyName(std::forward<PropertyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The property role. Valid values for this structure are <code>PRIMARY</code>
     * and <code>ID</code>.</p>
     */
    inline PropertyRole GetPropertyRole() const { return m_propertyRole; }
    inline bool PropertyRoleHasBeenSet() const { return m_propertyRoleHasBeenSet; }
    inline void SetPropertyRole(PropertyRole value) { m_propertyRoleHasBeenSet = true; m_propertyRole = value; }
    inline NamedEntityDefinition& WithPropertyRole(PropertyRole value) { SetPropertyRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The property usage. Valid values for this structure are <code>INHERIT</code>,
     * <code>DIMENSION</code>, and <code>MEASURE</code>.</p>
     */
    inline PropertyUsage GetPropertyUsage() const { return m_propertyUsage; }
    inline bool PropertyUsageHasBeenSet() const { return m_propertyUsageHasBeenSet; }
    inline void SetPropertyUsage(PropertyUsage value) { m_propertyUsageHasBeenSet = true; m_propertyUsage = value; }
    inline NamedEntityDefinition& WithPropertyUsage(PropertyUsage value) { SetPropertyUsage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of a metric.</p>
     */
    inline const NamedEntityDefinitionMetric& GetMetric() const { return m_metric; }
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }
    template<typename MetricT = NamedEntityDefinitionMetric>
    void SetMetric(MetricT&& value) { m_metricHasBeenSet = true; m_metric = std::forward<MetricT>(value); }
    template<typename MetricT = NamedEntityDefinitionMetric>
    NamedEntityDefinition& WithMetric(MetricT&& value) { SetMetric(std::forward<MetricT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fieldName;
    bool m_fieldNameHasBeenSet = false;

    Aws::String m_propertyName;
    bool m_propertyNameHasBeenSet = false;

    PropertyRole m_propertyRole{PropertyRole::NOT_SET};
    bool m_propertyRoleHasBeenSet = false;

    PropertyUsage m_propertyUsage{PropertyUsage::NOT_SET};
    bool m_propertyUsageHasBeenSet = false;

    NamedEntityDefinitionMetric m_metric;
    bool m_metricHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
