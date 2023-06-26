/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/ReservedNodesOffering.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

ReservedNodesOffering::ReservedNodesOffering() : 
    m_reservedNodesOfferingIdHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_fixedPrice(0.0),
    m_fixedPriceHasBeenSet(false),
    m_offeringTypeHasBeenSet(false),
    m_recurringChargesHasBeenSet(false)
{
}

ReservedNodesOffering::ReservedNodesOffering(JsonView jsonValue) : 
    m_reservedNodesOfferingIdHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_fixedPrice(0.0),
    m_fixedPriceHasBeenSet(false),
    m_offeringTypeHasBeenSet(false),
    m_recurringChargesHasBeenSet(false)
{
  *this = jsonValue;
}

ReservedNodesOffering& ReservedNodesOffering::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReservedNodesOfferingId"))
  {
    m_reservedNodesOfferingId = jsonValue.GetString("ReservedNodesOfferingId");

    m_reservedNodesOfferingIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NodeType"))
  {
    m_nodeType = jsonValue.GetString("NodeType");

    m_nodeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Duration"))
  {
    m_duration = jsonValue.GetInteger("Duration");

    m_durationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FixedPrice"))
  {
    m_fixedPrice = jsonValue.GetDouble("FixedPrice");

    m_fixedPriceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OfferingType"))
  {
    m_offeringType = jsonValue.GetString("OfferingType");

    m_offeringTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecurringCharges"))
  {
    Aws::Utils::Array<JsonView> recurringChargesJsonList = jsonValue.GetArray("RecurringCharges");
    for(unsigned recurringChargesIndex = 0; recurringChargesIndex < recurringChargesJsonList.GetLength(); ++recurringChargesIndex)
    {
      m_recurringCharges.push_back(recurringChargesJsonList[recurringChargesIndex].AsObject());
    }
    m_recurringChargesHasBeenSet = true;
  }

  return *this;
}

JsonValue ReservedNodesOffering::Jsonize() const
{
  JsonValue payload;

  if(m_reservedNodesOfferingIdHasBeenSet)
  {
   payload.WithString("ReservedNodesOfferingId", m_reservedNodesOfferingId);

  }

  if(m_nodeTypeHasBeenSet)
  {
   payload.WithString("NodeType", m_nodeType);

  }

  if(m_durationHasBeenSet)
  {
   payload.WithInteger("Duration", m_duration);

  }

  if(m_fixedPriceHasBeenSet)
  {
   payload.WithDouble("FixedPrice", m_fixedPrice);

  }

  if(m_offeringTypeHasBeenSet)
  {
   payload.WithString("OfferingType", m_offeringType);

  }

  if(m_recurringChargesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recurringChargesJsonList(m_recurringCharges.size());
   for(unsigned recurringChargesIndex = 0; recurringChargesIndex < recurringChargesJsonList.GetLength(); ++recurringChargesIndex)
   {
     recurringChargesJsonList[recurringChargesIndex].AsObject(m_recurringCharges[recurringChargesIndex].Jsonize());
   }
   payload.WithArray("RecurringCharges", std::move(recurringChargesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
