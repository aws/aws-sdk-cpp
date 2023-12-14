/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/PrivateGraphEndpointSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NeptuneGraph
{
namespace Model
{

PrivateGraphEndpointSummary::PrivateGraphEndpointSummary() : 
    m_vpcIdHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_status(PrivateGraphEndpointStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_vpcEndpointIdHasBeenSet(false)
{
}

PrivateGraphEndpointSummary::PrivateGraphEndpointSummary(JsonView jsonValue) : 
    m_vpcIdHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_status(PrivateGraphEndpointStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_vpcEndpointIdHasBeenSet(false)
{
  *this = jsonValue;
}

PrivateGraphEndpointSummary& PrivateGraphEndpointSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("vpcId"))
  {
    m_vpcId = jsonValue.GetString("vpcId");

    m_vpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("subnetIds"))
  {
    Aws::Utils::Array<JsonView> subnetIdsJsonList = jsonValue.GetArray("subnetIds");
    for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
    {
      m_subnetIds.push_back(subnetIdsJsonList[subnetIdsIndex].AsString());
    }
    m_subnetIdsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = PrivateGraphEndpointStatusMapper::GetPrivateGraphEndpointStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpcEndpointId"))
  {
    m_vpcEndpointId = jsonValue.GetString("vpcEndpointId");

    m_vpcEndpointIdHasBeenSet = true;
  }

  return *this;
}

JsonValue PrivateGraphEndpointSummary::Jsonize() const
{
  JsonValue payload;

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("vpcId", m_vpcId);

  }

  if(m_subnetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> subnetIdsJsonList(m_subnetIds.size());
   for(unsigned subnetIdsIndex = 0; subnetIdsIndex < subnetIdsJsonList.GetLength(); ++subnetIdsIndex)
   {
     subnetIdsJsonList[subnetIdsIndex].AsString(m_subnetIds[subnetIdsIndex]);
   }
   payload.WithArray("subnetIds", std::move(subnetIdsJsonList));

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", PrivateGraphEndpointStatusMapper::GetNameForPrivateGraphEndpointStatus(m_status));
  }

  if(m_vpcEndpointIdHasBeenSet)
  {
   payload.WithString("vpcEndpointId", m_vpcEndpointId);

  }

  return payload;
}

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
