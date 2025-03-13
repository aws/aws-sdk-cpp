/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/UpdateSiteRackPhysicalPropertiesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Outposts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateSiteRackPhysicalPropertiesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_powerDrawKvaHasBeenSet)
  {
   payload.WithString("PowerDrawKva", PowerDrawKvaMapper::GetNameForPowerDrawKva(m_powerDrawKva));
  }

  if(m_powerPhaseHasBeenSet)
  {
   payload.WithString("PowerPhase", PowerPhaseMapper::GetNameForPowerPhase(m_powerPhase));
  }

  if(m_powerConnectorHasBeenSet)
  {
   payload.WithString("PowerConnector", PowerConnectorMapper::GetNameForPowerConnector(m_powerConnector));
  }

  if(m_powerFeedDropHasBeenSet)
  {
   payload.WithString("PowerFeedDrop", PowerFeedDropMapper::GetNameForPowerFeedDrop(m_powerFeedDrop));
  }

  if(m_uplinkGbpsHasBeenSet)
  {
   payload.WithString("UplinkGbps", UplinkGbpsMapper::GetNameForUplinkGbps(m_uplinkGbps));
  }

  if(m_uplinkCountHasBeenSet)
  {
   payload.WithString("UplinkCount", UplinkCountMapper::GetNameForUplinkCount(m_uplinkCount));
  }

  if(m_fiberOpticCableTypeHasBeenSet)
  {
   payload.WithString("FiberOpticCableType", FiberOpticCableTypeMapper::GetNameForFiberOpticCableType(m_fiberOpticCableType));
  }

  if(m_opticalStandardHasBeenSet)
  {
   payload.WithString("OpticalStandard", OpticalStandardMapper::GetNameForOpticalStandard(m_opticalStandard));
  }

  if(m_maximumSupportedWeightLbsHasBeenSet)
  {
   payload.WithString("MaximumSupportedWeightLbs", MaximumSupportedWeightLbsMapper::GetNameForMaximumSupportedWeightLbs(m_maximumSupportedWeightLbs));
  }

  return payload.View().WriteReadable();
}




