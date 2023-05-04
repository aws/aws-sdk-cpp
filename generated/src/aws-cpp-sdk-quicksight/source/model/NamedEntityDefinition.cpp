/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/NamedEntityDefinition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

NamedEntityDefinition::NamedEntityDefinition() : 
    m_fieldNameHasBeenSet(false),
    m_propertyNameHasBeenSet(false),
    m_propertyRole(PropertyRole::NOT_SET),
    m_propertyRoleHasBeenSet(false),
    m_propertyUsage(PropertyUsage::NOT_SET),
    m_propertyUsageHasBeenSet(false),
    m_metricHasBeenSet(false)
{
}

NamedEntityDefinition::NamedEntityDefinition(JsonView jsonValue) : 
    m_fieldNameHasBeenSet(false),
    m_propertyNameHasBeenSet(false),
    m_propertyRole(PropertyRole::NOT_SET),
    m_propertyRoleHasBeenSet(false),
    m_propertyUsage(PropertyUsage::NOT_SET),
    m_propertyUsageHasBeenSet(false),
    m_metricHasBeenSet(false)
{
  *this = jsonValue;
}

NamedEntityDefinition& NamedEntityDefinition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldName"))
  {
    m_fieldName = jsonValue.GetString("FieldName");

    m_fieldNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PropertyName"))
  {
    m_propertyName = jsonValue.GetString("PropertyName");

    m_propertyNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PropertyRole"))
  {
    m_propertyRole = PropertyRoleMapper::GetPropertyRoleForName(jsonValue.GetString("PropertyRole"));

    m_propertyRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PropertyUsage"))
  {
    m_propertyUsage = PropertyUsageMapper::GetPropertyUsageForName(jsonValue.GetString("PropertyUsage"));

    m_propertyUsageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Metric"))
  {
    m_metric = jsonValue.GetObject("Metric");

    m_metricHasBeenSet = true;
  }

  return *this;
}

JsonValue NamedEntityDefinition::Jsonize() const
{
  JsonValue payload;

  if(m_fieldNameHasBeenSet)
  {
   payload.WithString("FieldName", m_fieldName);

  }

  if(m_propertyNameHasBeenSet)
  {
   payload.WithString("PropertyName", m_propertyName);

  }

  if(m_propertyRoleHasBeenSet)
  {
   payload.WithString("PropertyRole", PropertyRoleMapper::GetNameForPropertyRole(m_propertyRole));
  }

  if(m_propertyUsageHasBeenSet)
  {
   payload.WithString("PropertyUsage", PropertyUsageMapper::GetNameForPropertyUsage(m_propertyUsage));
  }

  if(m_metricHasBeenSet)
  {
   payload.WithObject("Metric", m_metric.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
