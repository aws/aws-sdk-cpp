/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/TransitGatewayRegistrationStateReason.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes the registration of a transit gateway to a global
   * network.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/TransitGatewayRegistration">AWS
   * API Reference</a></p>
   */
  class TransitGatewayRegistration
  {
  public:
    AWS_NETWORKMANAGER_API TransitGatewayRegistration() = default;
    AWS_NETWORKMANAGER_API TransitGatewayRegistration(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API TransitGatewayRegistration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the global network.</p>
     */
    inline const Aws::String& GetGlobalNetworkId() const { return m_globalNetworkId; }
    inline bool GlobalNetworkIdHasBeenSet() const { return m_globalNetworkIdHasBeenSet; }
    template<typename GlobalNetworkIdT = Aws::String>
    void SetGlobalNetworkId(GlobalNetworkIdT&& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = std::forward<GlobalNetworkIdT>(value); }
    template<typename GlobalNetworkIdT = Aws::String>
    TransitGatewayRegistration& WithGlobalNetworkId(GlobalNetworkIdT&& value) { SetGlobalNetworkId(std::forward<GlobalNetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the transit gateway.</p>
     */
    inline const Aws::String& GetTransitGatewayArn() const { return m_transitGatewayArn; }
    inline bool TransitGatewayArnHasBeenSet() const { return m_transitGatewayArnHasBeenSet; }
    template<typename TransitGatewayArnT = Aws::String>
    void SetTransitGatewayArn(TransitGatewayArnT&& value) { m_transitGatewayArnHasBeenSet = true; m_transitGatewayArn = std::forward<TransitGatewayArnT>(value); }
    template<typename TransitGatewayArnT = Aws::String>
    TransitGatewayRegistration& WithTransitGatewayArn(TransitGatewayArnT&& value) { SetTransitGatewayArn(std::forward<TransitGatewayArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the transit gateway registration.</p>
     */
    inline const TransitGatewayRegistrationStateReason& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = TransitGatewayRegistrationStateReason>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = TransitGatewayRegistrationStateReason>
    TransitGatewayRegistration& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_globalNetworkId;
    bool m_globalNetworkIdHasBeenSet = false;

    Aws::String m_transitGatewayArn;
    bool m_transitGatewayArnHasBeenSet = false;

    TransitGatewayRegistrationStateReason m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
