/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SupplyChain
{
namespace Model
{
  enum class DataIntegrationEventType
  {
    NOT_SET,
    scn_data_forecast,
    scn_data_inventorylevel,
    scn_data_inboundorder,
    scn_data_inboundorderline,
    scn_data_inboundorderlineschedule,
    scn_data_outboundorderline,
    scn_data_outboundshipment,
    scn_data_processheader,
    scn_data_processoperation,
    scn_data_processproduct,
    scn_data_reservation,
    scn_data_shipment,
    scn_data_shipmentstop,
    scn_data_shipmentstoporder,
    scn_data_supplyplan,
    scn_data_dataset
  };

namespace DataIntegrationEventTypeMapper
{
AWS_SUPPLYCHAIN_API DataIntegrationEventType GetDataIntegrationEventTypeForName(const Aws::String& name);

AWS_SUPPLYCHAIN_API Aws::String GetNameForDataIntegrationEventType(DataIntegrationEventType value);
} // namespace DataIntegrationEventTypeMapper
} // namespace Model
} // namespace SupplyChain
} // namespace Aws
