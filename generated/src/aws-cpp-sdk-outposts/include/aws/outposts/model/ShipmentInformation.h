/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/ShipmentCarrier.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Outposts
{
namespace Model
{

  /**
   * <p> Information about a line item shipment. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/ShipmentInformation">AWS
   * API Reference</a></p>
   */
  class ShipmentInformation
  {
  public:
    AWS_OUTPOSTS_API ShipmentInformation() = default;
    AWS_OUTPOSTS_API ShipmentInformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API ShipmentInformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The tracking number of the shipment. </p>
     */
    inline const Aws::String& GetShipmentTrackingNumber() const { return m_shipmentTrackingNumber; }
    inline bool ShipmentTrackingNumberHasBeenSet() const { return m_shipmentTrackingNumberHasBeenSet; }
    template<typename ShipmentTrackingNumberT = Aws::String>
    void SetShipmentTrackingNumber(ShipmentTrackingNumberT&& value) { m_shipmentTrackingNumberHasBeenSet = true; m_shipmentTrackingNumber = std::forward<ShipmentTrackingNumberT>(value); }
    template<typename ShipmentTrackingNumberT = Aws::String>
    ShipmentInformation& WithShipmentTrackingNumber(ShipmentTrackingNumberT&& value) { SetShipmentTrackingNumber(std::forward<ShipmentTrackingNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The carrier of the shipment. </p>
     */
    inline ShipmentCarrier GetShipmentCarrier() const { return m_shipmentCarrier; }
    inline bool ShipmentCarrierHasBeenSet() const { return m_shipmentCarrierHasBeenSet; }
    inline void SetShipmentCarrier(ShipmentCarrier value) { m_shipmentCarrierHasBeenSet = true; m_shipmentCarrier = value; }
    inline ShipmentInformation& WithShipmentCarrier(ShipmentCarrier value) { SetShipmentCarrier(value); return *this;}
    ///@}
  private:

    Aws::String m_shipmentTrackingNumber;
    bool m_shipmentTrackingNumberHasBeenSet = false;

    ShipmentCarrier m_shipmentCarrier{ShipmentCarrier::NOT_SET};
    bool m_shipmentCarrierHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
