/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/Outposts_EXPORTS.h>

namespace Aws {
namespace Outposts {
namespace Model {
enum class ShipmentCarrier { NOT_SET, DHL, DBS, FEDEX, UPS, EXPEDITORS };

namespace ShipmentCarrierMapper {
AWS_OUTPOSTS_API ShipmentCarrier GetShipmentCarrierForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForShipmentCarrier(ShipmentCarrier value);
}  // namespace ShipmentCarrierMapper
}  // namespace Model
}  // namespace Outposts
}  // namespace Aws
