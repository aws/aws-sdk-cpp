/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2RouteTableDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEc2RouteTableDetails::AwsEc2RouteTableDetails() : 
    m_associationSetHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_propagatingVgwSetHasBeenSet(false),
    m_routeTableIdHasBeenSet(false),
    m_routeSetHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

AwsEc2RouteTableDetails::AwsEc2RouteTableDetails(JsonView jsonValue) : 
    m_associationSetHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_propagatingVgwSetHasBeenSet(false),
    m_routeTableIdHasBeenSet(false),
    m_routeSetHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2RouteTableDetails& AwsEc2RouteTableDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssociationSet"))
  {
    Aws::Utils::Array<JsonView> associationSetJsonList = jsonValue.GetArray("AssociationSet");
    for(unsigned associationSetIndex = 0; associationSetIndex < associationSetJsonList.GetLength(); ++associationSetIndex)
    {
      m_associationSet.push_back(associationSetJsonList[associationSetIndex].AsObject());
    }
    m_associationSetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerId"))
  {
    m_ownerId = jsonValue.GetString("OwnerId");

    m_ownerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PropagatingVgwSet"))
  {
    Aws::Utils::Array<JsonView> propagatingVgwSetJsonList = jsonValue.GetArray("PropagatingVgwSet");
    for(unsigned propagatingVgwSetIndex = 0; propagatingVgwSetIndex < propagatingVgwSetJsonList.GetLength(); ++propagatingVgwSetIndex)
    {
      m_propagatingVgwSet.push_back(propagatingVgwSetJsonList[propagatingVgwSetIndex].AsObject());
    }
    m_propagatingVgwSetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RouteTableId"))
  {
    m_routeTableId = jsonValue.GetString("RouteTableId");

    m_routeTableIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RouteSet"))
  {
    Aws::Utils::Array<JsonView> routeSetJsonList = jsonValue.GetArray("RouteSet");
    for(unsigned routeSetIndex = 0; routeSetIndex < routeSetJsonList.GetLength(); ++routeSetIndex)
    {
      m_routeSet.push_back(routeSetJsonList[routeSetIndex].AsObject());
    }
    m_routeSetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2RouteTableDetails::Jsonize() const
{
  JsonValue payload;

  if(m_associationSetHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> associationSetJsonList(m_associationSet.size());
   for(unsigned associationSetIndex = 0; associationSetIndex < associationSetJsonList.GetLength(); ++associationSetIndex)
   {
     associationSetJsonList[associationSetIndex].AsObject(m_associationSet[associationSetIndex].Jsonize());
   }
   payload.WithArray("AssociationSet", std::move(associationSetJsonList));

  }

  if(m_ownerIdHasBeenSet)
  {
   payload.WithString("OwnerId", m_ownerId);

  }

  if(m_propagatingVgwSetHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> propagatingVgwSetJsonList(m_propagatingVgwSet.size());
   for(unsigned propagatingVgwSetIndex = 0; propagatingVgwSetIndex < propagatingVgwSetJsonList.GetLength(); ++propagatingVgwSetIndex)
   {
     propagatingVgwSetJsonList[propagatingVgwSetIndex].AsObject(m_propagatingVgwSet[propagatingVgwSetIndex].Jsonize());
   }
   payload.WithArray("PropagatingVgwSet", std::move(propagatingVgwSetJsonList));

  }

  if(m_routeTableIdHasBeenSet)
  {
   payload.WithString("RouteTableId", m_routeTableId);

  }

  if(m_routeSetHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> routeSetJsonList(m_routeSet.size());
   for(unsigned routeSetIndex = 0; routeSetIndex < routeSetJsonList.GetLength(); ++routeSetIndex)
   {
     routeSetJsonList[routeSetIndex].AsObject(m_routeSet[routeSetIndex].Jsonize());
   }
   payload.WithArray("RouteSet", std::move(routeSetJsonList));

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
