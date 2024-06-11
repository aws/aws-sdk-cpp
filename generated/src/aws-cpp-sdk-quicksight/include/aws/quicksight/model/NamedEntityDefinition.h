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
    AWS_QUICKSIGHT_API NamedEntityDefinition();
    AWS_QUICKSIGHT_API NamedEntityDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API NamedEntityDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the entity.</p>
     */
    inline const Aws::String& GetFieldName() const{ return m_fieldName; }
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
    inline void SetFieldName(const Aws::String& value) { m_fieldNameHasBeenSet = true; m_fieldName = value; }
    inline void SetFieldName(Aws::String&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::move(value); }
    inline void SetFieldName(const char* value) { m_fieldNameHasBeenSet = true; m_fieldName.assign(value); }
    inline NamedEntityDefinition& WithFieldName(const Aws::String& value) { SetFieldName(value); return *this;}
    inline NamedEntityDefinition& WithFieldName(Aws::String&& value) { SetFieldName(std::move(value)); return *this;}
    inline NamedEntityDefinition& WithFieldName(const char* value) { SetFieldName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The property name to be used for the named entity.</p>
     */
    inline const Aws::String& GetPropertyName() const{ return m_propertyName; }
    inline bool PropertyNameHasBeenSet() const { return m_propertyNameHasBeenSet; }
    inline void SetPropertyName(const Aws::String& value) { m_propertyNameHasBeenSet = true; m_propertyName = value; }
    inline void SetPropertyName(Aws::String&& value) { m_propertyNameHasBeenSet = true; m_propertyName = std::move(value); }
    inline void SetPropertyName(const char* value) { m_propertyNameHasBeenSet = true; m_propertyName.assign(value); }
    inline NamedEntityDefinition& WithPropertyName(const Aws::String& value) { SetPropertyName(value); return *this;}
    inline NamedEntityDefinition& WithPropertyName(Aws::String&& value) { SetPropertyName(std::move(value)); return *this;}
    inline NamedEntityDefinition& WithPropertyName(const char* value) { SetPropertyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The property role. Valid values for this structure are <code>PRIMARY</code>
     * and <code>ID</code>.</p>
     */
    inline const PropertyRole& GetPropertyRole() const{ return m_propertyRole; }
    inline bool PropertyRoleHasBeenSet() const { return m_propertyRoleHasBeenSet; }
    inline void SetPropertyRole(const PropertyRole& value) { m_propertyRoleHasBeenSet = true; m_propertyRole = value; }
    inline void SetPropertyRole(PropertyRole&& value) { m_propertyRoleHasBeenSet = true; m_propertyRole = std::move(value); }
    inline NamedEntityDefinition& WithPropertyRole(const PropertyRole& value) { SetPropertyRole(value); return *this;}
    inline NamedEntityDefinition& WithPropertyRole(PropertyRole&& value) { SetPropertyRole(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The property usage. Valid values for this structure are <code>INHERIT</code>,
     * <code>DIMENSION</code>, and <code>MEASURE</code>.</p>
     */
    inline const PropertyUsage& GetPropertyUsage() const{ return m_propertyUsage; }
    inline bool PropertyUsageHasBeenSet() const { return m_propertyUsageHasBeenSet; }
    inline void SetPropertyUsage(const PropertyUsage& value) { m_propertyUsageHasBeenSet = true; m_propertyUsage = value; }
    inline void SetPropertyUsage(PropertyUsage&& value) { m_propertyUsageHasBeenSet = true; m_propertyUsage = std::move(value); }
    inline NamedEntityDefinition& WithPropertyUsage(const PropertyUsage& value) { SetPropertyUsage(value); return *this;}
    inline NamedEntityDefinition& WithPropertyUsage(PropertyUsage&& value) { SetPropertyUsage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of a metric.</p>
     */
    inline const NamedEntityDefinitionMetric& GetMetric() const{ return m_metric; }
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }
    inline void SetMetric(const NamedEntityDefinitionMetric& value) { m_metricHasBeenSet = true; m_metric = value; }
    inline void SetMetric(NamedEntityDefinitionMetric&& value) { m_metricHasBeenSet = true; m_metric = std::move(value); }
    inline NamedEntityDefinition& WithMetric(const NamedEntityDefinitionMetric& value) { SetMetric(value); return *this;}
    inline NamedEntityDefinition& WithMetric(NamedEntityDefinitionMetric&& value) { SetMetric(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_fieldName;
    bool m_fieldNameHasBeenSet = false;

    Aws::String m_propertyName;
    bool m_propertyNameHasBeenSet = false;

    PropertyRole m_propertyRole;
    bool m_propertyRoleHasBeenSet = false;

    PropertyUsage m_propertyUsage;
    bool m_propertyUsageHasBeenSet = false;

    NamedEntityDefinitionMetric m_metric;
    bool m_metricHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
