/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ReferenceLineDataConfiguration.h>
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

ReferenceLineDataConfiguration::ReferenceLineDataConfiguration() : 
    m_staticConfigurationHasBeenSet(false),
    m_dynamicConfigurationHasBeenSet(false),
    m_axisBinding(AxisBinding::NOT_SET),
    m_axisBindingHasBeenSet(false)
{
}

ReferenceLineDataConfiguration::ReferenceLineDataConfiguration(JsonView jsonValue) : 
    m_staticConfigurationHasBeenSet(false),
    m_dynamicConfigurationHasBeenSet(false),
    m_axisBinding(AxisBinding::NOT_SET),
    m_axisBindingHasBeenSet(false)
{
  *this = jsonValue;
}

ReferenceLineDataConfiguration& ReferenceLineDataConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StaticConfiguration"))
  {
    m_staticConfiguration = jsonValue.GetObject("StaticConfiguration");

    m_staticConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DynamicConfiguration"))
  {
    m_dynamicConfiguration = jsonValue.GetObject("DynamicConfiguration");

    m_dynamicConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AxisBinding"))
  {
    m_axisBinding = AxisBindingMapper::GetAxisBindingForName(jsonValue.GetString("AxisBinding"));

    m_axisBindingHasBeenSet = true;
  }

  return *this;
}

JsonValue ReferenceLineDataConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_staticConfigurationHasBeenSet)
  {
   payload.WithObject("StaticConfiguration", m_staticConfiguration.Jsonize());

  }

  if(m_dynamicConfigurationHasBeenSet)
  {
   payload.WithObject("DynamicConfiguration", m_dynamicConfiguration.Jsonize());

  }

  if(m_axisBindingHasBeenSet)
  {
   payload.WithString("AxisBinding", AxisBindingMapper::GetNameForAxisBinding(m_axisBinding));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
