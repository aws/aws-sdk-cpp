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
    AWS_SNOWBALL_API UpdateJobShipmentStateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateJobShipmentState"; }

    AWS_SNOWBALL_API Aws::String SerializePayload() const override;

    AWS_SNOWBALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The job ID of the job whose shipment date you want to update, for example
     * <code>JID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    UpdateJobShipmentStateRequest& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of a device when it is being shipped. </p> <p>Set to
     * <code>RECEIVED</code> when the device arrives at your location.</p> <p>Set to
     * <code>RETURNED</code> when you have returned the device to Amazon Web
     * Services.</p>
     */
    inline ShipmentState GetShipmentState() const { return m_shipmentState; }
    inline bool ShipmentStateHasBeenSet() const { return m_shipmentStateHasBeenSet; }
    inline void SetShipmentState(ShipmentState value) { m_shipmentStateHasBeenSet = true; m_shipmentState = value; }
    inline UpdateJobShipmentStateRequest& WithShipmentState(ShipmentState value) { SetShipmentState(value); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    ShipmentState m_shipmentState{ShipmentState::NOT_SET};
    bool m_shipmentStateHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
