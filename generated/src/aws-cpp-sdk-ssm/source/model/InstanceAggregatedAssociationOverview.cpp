/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/InstanceAggregatedAssociationOverview.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

InstanceAggregatedAssociationOverview::InstanceAggregatedAssociationOverview() : 
    m_detailedStatusHasBeenSet(false),
    m_instanceAssociationStatusAggregatedCountHasBeenSet(false)
{
}

InstanceAggregatedAssociationOverview::InstanceAggregatedAssociationOverview(JsonView jsonValue) : 
    m_detailedStatusHasBeenSet(false),
    m_instanceAssociationStatusAggregatedCountHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceAggregatedAssociationOverview& InstanceAggregatedAssociationOverview::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DetailedStatus"))
  {
    m_detailedStatus = jsonValue.GetString("DetailedStatus");

    m_detailedStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceAssociationStatusAggregatedCount"))
  {
    Aws::Map<Aws::String, JsonView> instanceAssociationStatusAggregatedCountJsonMap = jsonValue.GetObject("InstanceAssociationStatusAggregatedCount").GetAllObjects();
    for(auto& instanceAssociationStatusAggregatedCountItem : instanceAssociationStatusAggregatedCountJsonMap)
    {
      m_instanceAssociationStatusAggregatedCount[instanceAssociationStatusAggregatedCountItem.first] = instanceAssociationStatusAggregatedCountItem.second.AsInteger();
    }
    m_instanceAssociationStatusAggregatedCountHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceAggregatedAssociationOverview::Jsonize() const
{
  JsonValue payload;

  if(m_detailedStatusHasBeenSet)
  {
   payload.WithString("DetailedStatus", m_detailedStatus);

  }

  if(m_instanceAssociationStatusAggregatedCountHasBeenSet)
  {
   JsonValue instanceAssociationStatusAggregatedCountJsonMap;
   for(auto& instanceAssociationStatusAggregatedCountItem : m_instanceAssociationStatusAggregatedCount)
   {
     instanceAssociationStatusAggregatedCountJsonMap.WithInteger(instanceAssociationStatusAggregatedCountItem.first, instanceAssociationStatusAggregatedCountItem.second);
   }
   payload.WithObject("InstanceAssociationStatusAggregatedCount", std::move(instanceAssociationStatusAggregatedCountJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
