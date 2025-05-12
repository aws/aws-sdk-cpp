/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/supplychain/model/DataIntegrationEventType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SupplyChain
  {
    namespace Model
    {
      namespace DataIntegrationEventTypeMapper
      {

        static const int scn_data_forecast_HASH = HashingUtils::HashString("scn.data.forecast");
        static const int scn_data_inventorylevel_HASH = HashingUtils::HashString("scn.data.inventorylevel");
        static const int scn_data_inboundorder_HASH = HashingUtils::HashString("scn.data.inboundorder");
        static const int scn_data_inboundorderline_HASH = HashingUtils::HashString("scn.data.inboundorderline");
        static const int scn_data_inboundorderlineschedule_HASH = HashingUtils::HashString("scn.data.inboundorderlineschedule");
        static const int scn_data_outboundorderline_HASH = HashingUtils::HashString("scn.data.outboundorderline");
        static const int scn_data_outboundshipment_HASH = HashingUtils::HashString("scn.data.outboundshipment");
        static const int scn_data_processheader_HASH = HashingUtils::HashString("scn.data.processheader");
        static const int scn_data_processoperation_HASH = HashingUtils::HashString("scn.data.processoperation");
        static const int scn_data_processproduct_HASH = HashingUtils::HashString("scn.data.processproduct");
        static const int scn_data_reservation_HASH = HashingUtils::HashString("scn.data.reservation");
        static const int scn_data_shipment_HASH = HashingUtils::HashString("scn.data.shipment");
        static const int scn_data_shipmentstop_HASH = HashingUtils::HashString("scn.data.shipmentstop");
        static const int scn_data_shipmentstoporder_HASH = HashingUtils::HashString("scn.data.shipmentstoporder");
        static const int scn_data_supplyplan_HASH = HashingUtils::HashString("scn.data.supplyplan");
        static const int scn_data_dataset_HASH = HashingUtils::HashString("scn.data.dataset");


        DataIntegrationEventType GetDataIntegrationEventTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == scn_data_forecast_HASH)
          {
            return DataIntegrationEventType::scn_data_forecast;
          }
          else if (hashCode == scn_data_inventorylevel_HASH)
          {
            return DataIntegrationEventType::scn_data_inventorylevel;
          }
          else if (hashCode == scn_data_inboundorder_HASH)
          {
            return DataIntegrationEventType::scn_data_inboundorder;
          }
          else if (hashCode == scn_data_inboundorderline_HASH)
          {
            return DataIntegrationEventType::scn_data_inboundorderline;
          }
          else if (hashCode == scn_data_inboundorderlineschedule_HASH)
          {
            return DataIntegrationEventType::scn_data_inboundorderlineschedule;
          }
          else if (hashCode == scn_data_outboundorderline_HASH)
          {
            return DataIntegrationEventType::scn_data_outboundorderline;
          }
          else if (hashCode == scn_data_outboundshipment_HASH)
          {
            return DataIntegrationEventType::scn_data_outboundshipment;
          }
          else if (hashCode == scn_data_processheader_HASH)
          {
            return DataIntegrationEventType::scn_data_processheader;
          }
          else if (hashCode == scn_data_processoperation_HASH)
          {
            return DataIntegrationEventType::scn_data_processoperation;
          }
          else if (hashCode == scn_data_processproduct_HASH)
          {
            return DataIntegrationEventType::scn_data_processproduct;
          }
          else if (hashCode == scn_data_reservation_HASH)
          {
            return DataIntegrationEventType::scn_data_reservation;
          }
          else if (hashCode == scn_data_shipment_HASH)
          {
            return DataIntegrationEventType::scn_data_shipment;
          }
          else if (hashCode == scn_data_shipmentstop_HASH)
          {
            return DataIntegrationEventType::scn_data_shipmentstop;
          }
          else if (hashCode == scn_data_shipmentstoporder_HASH)
          {
            return DataIntegrationEventType::scn_data_shipmentstoporder;
          }
          else if (hashCode == scn_data_supplyplan_HASH)
          {
            return DataIntegrationEventType::scn_data_supplyplan;
          }
          else if (hashCode == scn_data_dataset_HASH)
          {
            return DataIntegrationEventType::scn_data_dataset;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataIntegrationEventType>(hashCode);
          }

          return DataIntegrationEventType::NOT_SET;
        }

        Aws::String GetNameForDataIntegrationEventType(DataIntegrationEventType enumValue)
        {
          switch(enumValue)
          {
          case DataIntegrationEventType::NOT_SET:
            return {};
          case DataIntegrationEventType::scn_data_forecast:
            return "scn.data.forecast";
          case DataIntegrationEventType::scn_data_inventorylevel:
            return "scn.data.inventorylevel";
          case DataIntegrationEventType::scn_data_inboundorder:
            return "scn.data.inboundorder";
          case DataIntegrationEventType::scn_data_inboundorderline:
            return "scn.data.inboundorderline";
          case DataIntegrationEventType::scn_data_inboundorderlineschedule:
            return "scn.data.inboundorderlineschedule";
          case DataIntegrationEventType::scn_data_outboundorderline:
            return "scn.data.outboundorderline";
          case DataIntegrationEventType::scn_data_outboundshipment:
            return "scn.data.outboundshipment";
          case DataIntegrationEventType::scn_data_processheader:
            return "scn.data.processheader";
          case DataIntegrationEventType::scn_data_processoperation:
            return "scn.data.processoperation";
          case DataIntegrationEventType::scn_data_processproduct:
            return "scn.data.processproduct";
          case DataIntegrationEventType::scn_data_reservation:
            return "scn.data.reservation";
          case DataIntegrationEventType::scn_data_shipment:
            return "scn.data.shipment";
          case DataIntegrationEventType::scn_data_shipmentstop:
            return "scn.data.shipmentstop";
          case DataIntegrationEventType::scn_data_shipmentstoporder:
            return "scn.data.shipmentstoporder";
          case DataIntegrationEventType::scn_data_supplyplan:
            return "scn.data.supplyplan";
          case DataIntegrationEventType::scn_data_dataset:
            return "scn.data.dataset";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataIntegrationEventTypeMapper
    } // namespace Model
  } // namespace SupplyChain
} // namespace Aws
