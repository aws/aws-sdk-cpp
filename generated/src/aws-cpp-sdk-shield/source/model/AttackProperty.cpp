/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/AttackProperty.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Shield
{
namespace Model
{

AttackProperty::AttackProperty() : 
    m_attackLayer(AttackLayer::NOT_SET),
    m_attackLayerHasBeenSet(false),
    m_attackPropertyIdentifier(AttackPropertyIdentifier::NOT_SET),
    m_attackPropertyIdentifierHasBeenSet(false),
    m_topContributorsHasBeenSet(false),
    m_unit(Unit::NOT_SET),
    m_unitHasBeenSet(false),
    m_total(0),
    m_totalHasBeenSet(false)
{
}

AttackProperty::AttackProperty(JsonView jsonValue) : 
    m_attackLayer(AttackLayer::NOT_SET),
    m_attackLayerHasBeenSet(false),
    m_attackPropertyIdentifier(AttackPropertyIdentifier::NOT_SET),
    m_attackPropertyIdentifierHasBeenSet(false),
    m_topContributorsHasBeenSet(false),
    m_unit(Unit::NOT_SET),
    m_unitHasBeenSet(false),
    m_total(0),
    m_totalHasBeenSet(false)
{
  *this = jsonValue;
}

AttackProperty& AttackProperty::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AttackLayer"))
  {
    m_attackLayer = AttackLayerMapper::GetAttackLayerForName(jsonValue.GetString("AttackLayer"));

    m_attackLayerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttackPropertyIdentifier"))
  {
    m_attackPropertyIdentifier = AttackPropertyIdentifierMapper::GetAttackPropertyIdentifierForName(jsonValue.GetString("AttackPropertyIdentifier"));

    m_attackPropertyIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TopContributors"))
  {
    Aws::Utils::Array<JsonView> topContributorsJsonList = jsonValue.GetArray("TopContributors");
    for(unsigned topContributorsIndex = 0; topContributorsIndex < topContributorsJsonList.GetLength(); ++topContributorsIndex)
    {
      m_topContributors.push_back(topContributorsJsonList[topContributorsIndex].AsObject());
    }
    m_topContributorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Unit"))
  {
    m_unit = UnitMapper::GetUnitForName(jsonValue.GetString("Unit"));

    m_unitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Total"))
  {
    m_total = jsonValue.GetInt64("Total");

    m_totalHasBeenSet = true;
  }

  return *this;
}

JsonValue AttackProperty::Jsonize() const
{
  JsonValue payload;

  if(m_attackLayerHasBeenSet)
  {
   payload.WithString("AttackLayer", AttackLayerMapper::GetNameForAttackLayer(m_attackLayer));
  }

  if(m_attackPropertyIdentifierHasBeenSet)
  {
   payload.WithString("AttackPropertyIdentifier", AttackPropertyIdentifierMapper::GetNameForAttackPropertyIdentifier(m_attackPropertyIdentifier));
  }

  if(m_topContributorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> topContributorsJsonList(m_topContributors.size());
   for(unsigned topContributorsIndex = 0; topContributorsIndex < topContributorsJsonList.GetLength(); ++topContributorsIndex)
   {
     topContributorsJsonList[topContributorsIndex].AsObject(m_topContributors[topContributorsIndex].Jsonize());
   }
   payload.WithArray("TopContributors", std::move(topContributorsJsonList));

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("Unit", UnitMapper::GetNameForUnit(m_unit));
  }

  if(m_totalHasBeenSet)
  {
   payload.WithInt64("Total", m_total);

  }

  return payload;
}

} // namespace Model
} // namespace Shield
} // namespace Aws
