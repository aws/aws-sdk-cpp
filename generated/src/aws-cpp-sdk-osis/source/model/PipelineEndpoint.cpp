/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/osis/model/PipelineEndpoint.h>
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

PipelineEndpoint::PipelineEndpoint(JsonView jsonValue)
{
  *this = jsonValue;
}

PipelineEndpoint& PipelineEndpoint::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");
    m_vpcIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VpcOptions"))
  {
    m_vpcOptions = jsonValue.GetObject("VpcOptions");
    m_vpcOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IngestEndpointUrl"))
  {
    m_ingestEndpointUrl = jsonValue.GetString("IngestEndpointUrl");
    m_ingestEndpointUrlHasBeenSet = true;
  }
  return *this;
}

JsonValue PipelineEndpoint::Jsonize() const
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

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  if(m_vpcOptionsHasBeenSet)
  {
   payload.WithObject("VpcOptions", m_vpcOptions.Jsonize());

  }

  if(m_ingestEndpointUrlHasBeenSet)
  {
   payload.WithString("IngestEndpointUrl", m_ingestEndpointUrl);

  }

  return payload;
}

} // namespace Model
} // namespace OSIS
} // namespace Aws
