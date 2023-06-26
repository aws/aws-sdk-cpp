/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ArcConfiguration.h>
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

ArcConfiguration::ArcConfiguration() : 
    m_arcAngle(0.0),
    m_arcAngleHasBeenSet(false),
    m_arcThickness(ArcThicknessOptions::NOT_SET),
    m_arcThicknessHasBeenSet(false)
{
}

ArcConfiguration::ArcConfiguration(JsonView jsonValue) : 
    m_arcAngle(0.0),
    m_arcAngleHasBeenSet(false),
    m_arcThickness(ArcThicknessOptions::NOT_SET),
    m_arcThicknessHasBeenSet(false)
{
  *this = jsonValue;
}

ArcConfiguration& ArcConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ArcAngle"))
  {
    m_arcAngle = jsonValue.GetDouble("ArcAngle");

    m_arcAngleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ArcThickness"))
  {
    m_arcThickness = ArcThicknessOptionsMapper::GetArcThicknessOptionsForName(jsonValue.GetString("ArcThickness"));

    m_arcThicknessHasBeenSet = true;
  }

  return *this;
}

JsonValue ArcConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_arcAngleHasBeenSet)
  {
   payload.WithDouble("ArcAngle", m_arcAngle);

  }

  if(m_arcThicknessHasBeenSet)
  {
   payload.WithString("ArcThickness", ArcThicknessOptionsMapper::GetNameForArcThicknessOptions(m_arcThickness));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
