/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ArcAxisDisplayRange.h>
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

ArcAxisDisplayRange::ArcAxisDisplayRange() : 
    m_min(0.0),
    m_minHasBeenSet(false),
    m_max(0.0),
    m_maxHasBeenSet(false)
{
}

ArcAxisDisplayRange::ArcAxisDisplayRange(JsonView jsonValue) : 
    m_min(0.0),
    m_minHasBeenSet(false),
    m_max(0.0),
    m_maxHasBeenSet(false)
{
  *this = jsonValue;
}

ArcAxisDisplayRange& ArcAxisDisplayRange::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Min"))
  {
    m_min = jsonValue.GetDouble("Min");

    m_minHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Max"))
  {
    m_max = jsonValue.GetDouble("Max");

    m_maxHasBeenSet = true;
  }

  return *this;
}

JsonValue ArcAxisDisplayRange::Jsonize() const
{
  JsonValue payload;

  if(m_minHasBeenSet)
  {
   payload.WithDouble("Min", m_min);

  }

  if(m_maxHasBeenSet)
  {
   payload.WithDouble("Max", m_max);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
