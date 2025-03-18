/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/Anchor.h>
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

Anchor::Anchor(JsonView jsonValue)
{
  *this = jsonValue;
}

Anchor& Anchor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AnchorType"))
  {
    m_anchorType = AnchorTypeMapper::GetAnchorTypeForName(jsonValue.GetString("AnchorType"));
    m_anchorTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimeGranularity"))
  {
    m_timeGranularity = TimeGranularityMapper::GetTimeGranularityForName(jsonValue.GetString("TimeGranularity"));
    m_timeGranularityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Offset"))
  {
    m_offset = jsonValue.GetInteger("Offset");
    m_offsetHasBeenSet = true;
  }
  return *this;
}

JsonValue Anchor::Jsonize() const
{
  JsonValue payload;

  if(m_anchorTypeHasBeenSet)
  {
   payload.WithString("AnchorType", AnchorTypeMapper::GetNameForAnchorType(m_anchorType));
  }

  if(m_timeGranularityHasBeenSet)
  {
   payload.WithString("TimeGranularity", TimeGranularityMapper::GetNameForTimeGranularity(m_timeGranularity));
  }

  if(m_offsetHasBeenSet)
  {
   payload.WithInteger("Offset", m_offset);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
