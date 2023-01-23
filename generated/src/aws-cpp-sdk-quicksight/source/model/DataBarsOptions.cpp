/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DataBarsOptions.h>
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

DataBarsOptions::DataBarsOptions() : 
    m_fieldIdHasBeenSet(false),
    m_positiveColorHasBeenSet(false),
    m_negativeColorHasBeenSet(false)
{
}

DataBarsOptions::DataBarsOptions(JsonView jsonValue) : 
    m_fieldIdHasBeenSet(false),
    m_positiveColorHasBeenSet(false),
    m_negativeColorHasBeenSet(false)
{
  *this = jsonValue;
}

DataBarsOptions& DataBarsOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FieldId"))
  {
    m_fieldId = jsonValue.GetString("FieldId");

    m_fieldIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PositiveColor"))
  {
    m_positiveColor = jsonValue.GetString("PositiveColor");

    m_positiveColorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NegativeColor"))
  {
    m_negativeColor = jsonValue.GetString("NegativeColor");

    m_negativeColorHasBeenSet = true;
  }

  return *this;
}

JsonValue DataBarsOptions::Jsonize() const
{
  JsonValue payload;

  if(m_fieldIdHasBeenSet)
  {
   payload.WithString("FieldId", m_fieldId);

  }

  if(m_positiveColorHasBeenSet)
  {
   payload.WithString("PositiveColor", m_positiveColor);

  }

  if(m_negativeColorHasBeenSet)
  {
   payload.WithString("NegativeColor", m_negativeColor);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
