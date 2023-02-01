/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AxisLabelOptions.h>
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

AxisLabelOptions::AxisLabelOptions() : 
    m_fontConfigurationHasBeenSet(false),
    m_customLabelHasBeenSet(false),
    m_applyToHasBeenSet(false)
{
}

AxisLabelOptions::AxisLabelOptions(JsonView jsonValue) : 
    m_fontConfigurationHasBeenSet(false),
    m_customLabelHasBeenSet(false),
    m_applyToHasBeenSet(false)
{
  *this = jsonValue;
}

AxisLabelOptions& AxisLabelOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FontConfiguration"))
  {
    m_fontConfiguration = jsonValue.GetObject("FontConfiguration");

    m_fontConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomLabel"))
  {
    m_customLabel = jsonValue.GetString("CustomLabel");

    m_customLabelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplyTo"))
  {
    m_applyTo = jsonValue.GetObject("ApplyTo");

    m_applyToHasBeenSet = true;
  }

  return *this;
}

JsonValue AxisLabelOptions::Jsonize() const
{
  JsonValue payload;

  if(m_fontConfigurationHasBeenSet)
  {
   payload.WithObject("FontConfiguration", m_fontConfiguration.Jsonize());

  }

  if(m_customLabelHasBeenSet)
  {
   payload.WithString("CustomLabel", m_customLabel);

  }

  if(m_applyToHasBeenSet)
  {
   payload.WithObject("ApplyTo", m_applyTo.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
