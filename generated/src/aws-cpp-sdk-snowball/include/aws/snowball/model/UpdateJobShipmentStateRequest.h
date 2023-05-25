/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/SnowballRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snowball/model/ShipmentState.h>
#include <utility>

namespace Aws
{
namespace Snowball
{
namespace Model
{

  /**
   */
  class UpdateJobShipmentStateRequest : public SnowballRequest
  {
  public:
    AWS_SNOWBALL_API UpdateJobShipmentStateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateJobShipmentState"; }

    AWS_SNOWBALL_API Aws::String SerializePayload() const override;

    AWS_SNOWBALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The job ID of the job whose shipment date you want to update, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The job ID of the job whose shipment date you want to update, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The job ID of the job whose shipment date you want to update, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The job ID of the job whose shipment date you want to update, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The job ID of the job whose shipment date you want to update, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The job ID of the job whose shipment date you want to update, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline UpdateJobShipmentStateRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The job ID of the job whose shipment date you want to update, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline UpdateJobShipmentStateRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The job ID of the job whose shipment date you want to update, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline UpdateJobShipmentStateRequest& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The state of a device when it is being shipped. </p> <p>Set to
     * <code>RECEIVED</code> when the device arrives at your location.</p> <p>Set to
     * <code>RETURNED</code> when you have returned the device to Amazon Web
     * Services.</p>
     */
    inline const ShipmentState& GetShipmentState() const{ return m_shipmentState; }

    /**
     * <p>The state of a device when it is being shipped. </p> <p>Set to
     * <code>RECEIVED</code> when the device arrives at your location.</p> <p>Set to
     * <code>RETURNED</code> when you have returned the device to Amazon Web
     * Services.</p>
     */
    inline bool ShipmentStateHasBeenSet() const { return m_shipmentStateHasBeenSet; }

    /**
     * <p>The state of a device when it is being shipped. </p> <p>Set to
     * <code>RECEIVED</code> when the device arrives at your location.</p> <p>Set to
     * <code>RETURNED</code> when you have returned the device to Amazon Web
     * Services.</p>
     */
    inline void SetShipmentState(const ShipmentState& value) { m_shipmentStateHasBeenSet = true; m_shipmentState = value; }

    /**
     * <p>The state of a device when it is being shipped. </p> <p>Set to
     * <code>RECEIVED</code> when the device arrives at your location.</p> <p>Set to
     * <code>RETURNED</code> when you have returned the device to Amazon Web
     * Services.</p>
     */
    inline void SetShipmentState(ShipmentState&& value) { m_shipmentStateHasBeenSet = true; m_shipmentState = std::move(value); }

    /**
     * <p>The state of a device when it is being shipped. </p> <p>Set to
     * <code>RECEIVED</code> when the device arrives at your location.</p> <p>Set to
     * <code>RETURNED</code> when you have returned the device to Amazon Web
     * Services.</p>
     */
    inline UpdateJobShipmentStateRequest& WithShipmentState(const ShipmentState& value) { SetShipmentState(value); return *this;}

    /**
     * <p>The state of a device when it is being shipped. </p> <p>Set to
     * <code>RECEIVED</code> when the device arrives at your location.</p> <p>Set to
     * <code>RETURNED</code> when you have returned the device to Amazon Web
     * Services.</p>
     */
    inline UpdateJobShipmentStateRequest& WithShipmentState(ShipmentState&& value) { SetShipmentState(std::move(value)); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    ShipmentState m_shipmentState;
    bool m_shipmentStateHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
