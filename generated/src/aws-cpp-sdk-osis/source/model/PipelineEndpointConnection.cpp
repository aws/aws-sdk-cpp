/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/osis/model/PipelineEndpointConnection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OSIS
{
namespace Model
{

PipelineEndpointConnection::PipelineEndpointConnection(JsonView jsonValue)
{
  *this = jsonValue;
}

PipelineEndpointConnection& PipelineEndpointConnection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PipelineArn"))
  {
    m_pipelineArn = jsonValue.GetString("PipelineArn");
    m_pipelineArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndpointId"))
  {
    m_endpointId = jsonValue.GetString("EndpointId");
    m_endpointIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = PipelineEndpointStatusMapper::GetPipelineEndpointStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VpcEndpointOwner"))
  {
    m_vpcEndpointOwner = jsonValue.GetString("VpcEndpointOwner");
    m_vpcEndpointOwnerHasBeenSet = true;
  }
  return *this;
}

JsonValue PipelineEndpointConnection::Jsonize() const
{
  JsonValue payload;

  if(m_pipelineArnHasBeenSet)
  {
   payload.WithString("PipelineArn", m_pipelineArn);

  }

  if(m_endpointIdHasBeenSet)
  {
   payload.WithString("EndpointId", m_endpointId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", PipelineEndpointStatusMapper::GetNameForPipelineEndpointStatus(m_status));
  }

  if(m_vpcEndpointOwnerHasBeenSet)
  {
   payload.WithString("VpcEndpointOwner", m_vpcEndpointOwner);

  }

  return payload;
}

} // namespace Model
} // namespace OSIS
} // namespace Aws
