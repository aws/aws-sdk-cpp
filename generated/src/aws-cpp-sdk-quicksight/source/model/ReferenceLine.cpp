/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ReferenceLine.h>
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

ReferenceLine::ReferenceLine() : 
    m_status(WidgetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_dataConfigurationHasBeenSet(false),
    m_styleConfigurationHasBeenSet(false),
    m_labelConfigurationHasBeenSet(false)
{
}

ReferenceLine::ReferenceLine(JsonView jsonValue) : 
    m_status(WidgetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_dataConfigurationHasBeenSet(false),
    m_styleConfigurationHasBeenSet(false),
    m_labelConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

ReferenceLine& ReferenceLine::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = WidgetStatusMapper::GetWidgetStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataConfiguration"))
  {
    m_dataConfiguration = jsonValue.GetObject("DataConfiguration");

    m_dataConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StyleConfiguration"))
  {
    m_styleConfiguration = jsonValue.GetObject("StyleConfiguration");

    m_styleConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LabelConfiguration"))
  {
    m_labelConfiguration = jsonValue.GetObject("LabelConfiguration");

    m_labelConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ReferenceLine::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", WidgetStatusMapper::GetNameForWidgetStatus(m_status));
  }

  if(m_dataConfigurationHasBeenSet)
  {
   payload.WithObject("DataConfiguration", m_dataConfiguration.Jsonize());

  }

  if(m_styleConfigurationHasBeenSet)
  {
   payload.WithObject("StyleConfiguration", m_styleConfiguration.Jsonize());

  }

  if(m_labelConfigurationHasBeenSet)
  {
   payload.WithObject("LabelConfiguration", m_labelConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
