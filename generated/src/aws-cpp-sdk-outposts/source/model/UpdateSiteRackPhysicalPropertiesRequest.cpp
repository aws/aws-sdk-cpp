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

UpdateSiteRackPhysicalPropertiesRequest::UpdateSiteRackPhysicalPropertiesRequest() : 
    m_siteIdHasBeenSet(false),
    m_powerDrawKva(PowerDrawKva::NOT_SET),
    m_powerDrawKvaHasBeenSet(false),
    m_powerPhase(PowerPhase::NOT_SET),
    m_powerPhaseHasBeenSet(false),
    m_powerConnector(PowerConnector::NOT_SET),
    m_powerConnectorHasBeenSet(false),
    m_powerFeedDrop(PowerFeedDrop::NOT_SET),
    m_powerFeedDropHasBeenSet(false),
    m_uplinkGbps(UplinkGbps::NOT_SET),
    m_uplinkGbpsHasBeenSet(false),
    m_uplinkCount(UplinkCount::NOT_SET),
    m_uplinkCountHasBeenSet(false),
    m_fiberOpticCableType(FiberOpticCableType::NOT_SET),
    m_fiberOpticCableTypeHasBeenSet(false),
    m_opticalStandard(OpticalStandard::NOT_SET),
    m_opticalStandardHasBeenSet(false),
    m_maximumSupportedWeightLbs(MaximumSupportedWeightLbs::NOT_SET),
    m_maximumSupportedWeightLbsHasBeenSet(false)
{
}

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




