/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GeospatialNullDataSettings.h>
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

GeospatialNullDataSettings::GeospatialNullDataSettings(JsonView jsonValue)
{
  *this = jsonValue;
}

GeospatialNullDataSettings& GeospatialNullDataSettings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SymbolStyle"))
  {
    m_symbolStyle = jsonValue.GetObject("SymbolStyle");
    m_symbolStyleHasBeenSet = true;
  }
  return *this;
}

JsonValue GeospatialNullDataSettings::Jsonize() const
{
  JsonValue payload;

  if(m_symbolStyleHasBeenSet)
  {
   payload.WithObject("SymbolStyle", m_symbolStyle.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
