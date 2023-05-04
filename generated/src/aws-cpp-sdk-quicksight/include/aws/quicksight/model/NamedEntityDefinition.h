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


    /**
     * <p>The name of the entity.</p>
     */
    inline const Aws::String& GetFieldName() const{ return m_fieldName; }

    /**
     * <p>The name of the entity.</p>
     */
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }

    /**
     * <p>The name of the entity.</p>
     */
    inline void SetFieldName(const Aws::String& value) { m_fieldNameHasBeenSet = true; m_fieldName = value; }

    /**
     * <p>The name of the entity.</p>
     */
    inline void SetFieldName(Aws::String&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::move(value); }

    /**
     * <p>The name of the entity.</p>
     */
    inline void SetFieldName(const char* value) { m_fieldNameHasBeenSet = true; m_fieldName.assign(value); }

    /**
     * <p>The name of the entity.</p>
     */
    inline NamedEntityDefinition& WithFieldName(const Aws::String& value) { SetFieldName(value); return *this;}

    /**
     * <p>The name of the entity.</p>
     */
    inline NamedEntityDefinition& WithFieldName(Aws::String&& value) { SetFieldName(std::move(value)); return *this;}

    /**
     * <p>The name of the entity.</p>
     */
    inline NamedEntityDefinition& WithFieldName(const char* value) { SetFieldName(value); return *this;}


    /**
     * <p>The property name to be used for the named entity.</p>
     */
    inline const Aws::String& GetPropertyName() const{ return m_propertyName; }

    /**
     * <p>The property name to be used for the named entity.</p>
     */
    inline bool PropertyNameHasBeenSet() const { return m_propertyNameHasBeenSet; }

    /**
     * <p>The property name to be used for the named entity.</p>
     */
    inline void SetPropertyName(const Aws::String& value) { m_propertyNameHasBeenSet = true; m_propertyName = value; }

    /**
     * <p>The property name to be used for the named entity.</p>
     */
    inline void SetPropertyName(Aws::String&& value) { m_propertyNameHasBeenSet = true; m_propertyName = std::move(value); }

    /**
     * <p>The property name to be used for the named entity.</p>
     */
    inline void SetPropertyName(const char* value) { m_propertyNameHasBeenSet = true; m_propertyName.assign(value); }

    /**
     * <p>The property name to be used for the named entity.</p>
     */
    inline NamedEntityDefinition& WithPropertyName(const Aws::String& value) { SetPropertyName(value); return *this;}

    /**
     * <p>The property name to be used for the named entity.</p>
     */
    inline NamedEntityDefinition& WithPropertyName(Aws::String&& value) { SetPropertyName(std::move(value)); return *this;}

    /**
     * <p>The property name to be used for the named entity.</p>
     */
    inline NamedEntityDefinition& WithPropertyName(const char* value) { SetPropertyName(value); return *this;}


    /**
     * <p>The property role. Valid values for this structure are <code>PRIMARY</code>
     * and <code>ID</code>.</p>
     */
    inline const PropertyRole& GetPropertyRole() const{ return m_propertyRole; }

    /**
     * <p>The property role. Valid values for this structure are <code>PRIMARY</code>
     * and <code>ID</code>.</p>
     */
    inline bool PropertyRoleHasBeenSet() const { return m_propertyRoleHasBeenSet; }

    /**
     * <p>The property role. Valid values for this structure are <code>PRIMARY</code>
     * and <code>ID</code>.</p>
     */
    inline void SetPropertyRole(const PropertyRole& value) { m_propertyRoleHasBeenSet = true; m_propertyRole = value; }

    /**
     * <p>The property role. Valid values for this structure are <code>PRIMARY</code>
     * and <code>ID</code>.</p>
     */
    inline void SetPropertyRole(PropertyRole&& value) { m_propertyRoleHasBeenSet = true; m_propertyRole = std::move(value); }

    /**
     * <p>The property role. Valid values for this structure are <code>PRIMARY</code>
     * and <code>ID</code>.</p>
     */
    inline NamedEntityDefinition& WithPropertyRole(const PropertyRole& value) { SetPropertyRole(value); return *this;}

    /**
     * <p>The property role. Valid values for this structure are <code>PRIMARY</code>
     * and <code>ID</code>.</p>
     */
    inline NamedEntityDefinition& WithPropertyRole(PropertyRole&& value) { SetPropertyRole(std::move(value)); return *this;}


    /**
     * <p>The property usage. Valid values for this structure are <code>INHERIT</code>,
     * <code>DIMENSION</code>, and <code>MEASURE</code>.</p>
     */
    inline const PropertyUsage& GetPropertyUsage() const{ return m_propertyUsage; }

    /**
     * <p>The property usage. Valid values for this structure are <code>INHERIT</code>,
     * <code>DIMENSION</code>, and <code>MEASURE</code>.</p>
     */
    inline bool PropertyUsageHasBeenSet() const { return m_propertyUsageHasBeenSet; }

    /**
     * <p>The property usage. Valid values for this structure are <code>INHERIT</code>,
     * <code>DIMENSION</code>, and <code>MEASURE</code>.</p>
     */
    inline void SetPropertyUsage(const PropertyUsage& value) { m_propertyUsageHasBeenSet = true; m_propertyUsage = value; }

    /**
     * <p>The property usage. Valid values for this structure are <code>INHERIT</code>,
     * <code>DIMENSION</code>, and <code>MEASURE</code>.</p>
     */
    inline void SetPropertyUsage(PropertyUsage&& value) { m_propertyUsageHasBeenSet = true; m_propertyUsage = std::move(value); }

    /**
     * <p>The property usage. Valid values for this structure are <code>INHERIT</code>,
     * <code>DIMENSION</code>, and <code>MEASURE</code>.</p>
     */
    inline NamedEntityDefinition& WithPropertyUsage(const PropertyUsage& value) { SetPropertyUsage(value); return *this;}

    /**
     * <p>The property usage. Valid values for this structure are <code>INHERIT</code>,
     * <code>DIMENSION</code>, and <code>MEASURE</code>.</p>
     */
    inline NamedEntityDefinition& WithPropertyUsage(PropertyUsage&& value) { SetPropertyUsage(std::move(value)); return *this;}


    /**
     * <p>The definition of a metric.</p>
     */
    inline const NamedEntityDefinitionMetric& GetMetric() const{ return m_metric; }

    /**
     * <p>The definition of a metric.</p>
     */
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }

    /**
     * <p>The definition of a metric.</p>
     */
    inline void SetMetric(const NamedEntityDefinitionMetric& value) { m_metricHasBeenSet = true; m_metric = value; }

    /**
     * <p>The definition of a metric.</p>
     */
    inline void SetMetric(NamedEntityDefinitionMetric&& value) { m_metricHasBeenSet = true; m_metric = std::move(value); }

    /**
     * <p>The definition of a metric.</p>
     */
    inline NamedEntityDefinition& WithMetric(const NamedEntityDefinitionMetric& value) { SetMetric(value); return *this;}

    /**
     * <p>The definition of a metric.</p>
     */
    inline NamedEntityDefinition& WithMetric(NamedEntityDefinitionMetric&& value) { SetMetric(std::move(value)); return *this;}

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
