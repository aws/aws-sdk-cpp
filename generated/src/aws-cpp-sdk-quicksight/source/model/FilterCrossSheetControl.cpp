/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FilterCrossSheetControl.h>
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

FilterCrossSheetControl::FilterCrossSheetControl(JsonView jsonValue)
{
  *this = jsonValue;
}

FilterCrossSheetControl& FilterCrossSheetControl::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FilterControlId"))
  {
    m_filterControlId = jsonValue.GetString("FilterControlId");
    m_filterControlIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceFilterId"))
  {
    m_sourceFilterId = jsonValue.GetString("SourceFilterId");
    m_sourceFilterIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CascadingControlConfiguration"))
  {
    m_cascadingControlConfiguration = jsonValue.GetObject("CascadingControlConfiguration");
    m_cascadingControlConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue FilterCrossSheetControl::Jsonize() const
{
  JsonValue payload;

  if(m_filterControlIdHasBeenSet)
  {
   payload.WithString("FilterControlId", m_filterControlId);

  }

  if(m_sourceFilterIdHasBeenSet)
  {
   payload.WithString("SourceFilterId", m_sourceFilterId);

  }

  if(m_cascadingControlConfigurationHasBeenSet)
  {
   payload.WithObject("CascadingControlConfiguration", m_cascadingControlConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
