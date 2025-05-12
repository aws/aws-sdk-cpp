/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/supplychain/SupplyChainRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SupplyChain
{
namespace Model
{

  /**
   * <p>The request parameters for GetDataIntegrationEvent.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/GetDataIntegrationEventRequest">AWS
   * API Reference</a></p>
   */
  class GetDataIntegrationEventRequest : public SupplyChainRequest
  {
  public:
    AWS_SUPPLYCHAIN_API GetDataIntegrationEventRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDataIntegrationEvent"; }

    AWS_SUPPLYCHAIN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Web Services Supply Chain instance identifier.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    GetDataIntegrationEventRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique event identifier.</p>
     */
    inline const Aws::String& GetEventId() const { return m_eventId; }
    inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
    template<typename EventIdT = Aws::String>
    void SetEventId(EventIdT&& value) { m_eventIdHasBeenSet = true; m_eventId = std::forward<EventIdT>(value); }
    template<typename EventIdT = Aws::String>
    GetDataIntegrationEventRequest& WithEventId(EventIdT&& value) { SetEventId(std::forward<EventIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_eventId;
    bool m_eventIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
