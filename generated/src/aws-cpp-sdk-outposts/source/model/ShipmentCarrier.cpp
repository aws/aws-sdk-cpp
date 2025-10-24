﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/outposts/model/ShipmentCarrier.h>

using namespace Aws::Utils;

namespace Aws {
namespace Outposts {
namespace Model {
namespace ShipmentCarrierMapper {

static const int DHL_HASH = HashingUtils::HashString("DHL");
static const int DBS_HASH = HashingUtils::HashString("DBS");
static const int FEDEX_HASH = HashingUtils::HashString("FEDEX");
static const int UPS_HASH = HashingUtils::HashString("UPS");
static const int EXPEDITORS_HASH = HashingUtils::HashString("EXPEDITORS");

ShipmentCarrier GetShipmentCarrierForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == DHL_HASH) {
    return ShipmentCarrier::DHL;
  } else if (hashCode == DBS_HASH) {
    return ShipmentCarrier::DBS;
  } else if (hashCode == FEDEX_HASH) {
    return ShipmentCarrier::FEDEX;
  } else if (hashCode == UPS_HASH) {
    return ShipmentCarrier::UPS;
  } else if (hashCode == EXPEDITORS_HASH) {
    return ShipmentCarrier::EXPEDITORS;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ShipmentCarrier>(hashCode);
  }

  return ShipmentCarrier::NOT_SET;
}

Aws::String GetNameForShipmentCarrier(ShipmentCarrier enumValue) {
  switch (enumValue) {
    case ShipmentCarrier::NOT_SET:
      return {};
    case ShipmentCarrier::DHL:
      return "DHL";
    case ShipmentCarrier::DBS:
      return "DBS";
    case ShipmentCarrier::FEDEX:
      return "FEDEX";
    case ShipmentCarrier::UPS:
      return "UPS";
    case ShipmentCarrier::EXPEDITORS:
      return "EXPEDITORS";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ShipmentCarrierMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
