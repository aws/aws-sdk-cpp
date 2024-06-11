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
    AWS_NETWORKMANAGER_API TransitGatewayRegistration();
    AWS_NETWORKMANAGER_API TransitGatewayRegistration(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API TransitGatewayRegistration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the global network.</p>
     */
    inline const Aws::String& GetGlobalNetworkId() const{ return m_globalNetworkId; }
    inline bool GlobalNetworkIdHasBeenSet() const { return m_globalNetworkIdHasBeenSet; }
    inline void SetGlobalNetworkId(const Aws::String& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = value; }
    inline void SetGlobalNetworkId(Aws::String&& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = std::move(value); }
    inline void SetGlobalNetworkId(const char* value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId.assign(value); }
    inline TransitGatewayRegistration& WithGlobalNetworkId(const Aws::String& value) { SetGlobalNetworkId(value); return *this;}
    inline TransitGatewayRegistration& WithGlobalNetworkId(Aws::String&& value) { SetGlobalNetworkId(std::move(value)); return *this;}
    inline TransitGatewayRegistration& WithGlobalNetworkId(const char* value) { SetGlobalNetworkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the transit gateway.</p>
     */
    inline const Aws::String& GetTransitGatewayArn() const{ return m_transitGatewayArn; }
    inline bool TransitGatewayArnHasBeenSet() const { return m_transitGatewayArnHasBeenSet; }
    inline void SetTransitGatewayArn(const Aws::String& value) { m_transitGatewayArnHasBeenSet = true; m_transitGatewayArn = value; }
    inline void SetTransitGatewayArn(Aws::String&& value) { m_transitGatewayArnHasBeenSet = true; m_transitGatewayArn = std::move(value); }
    inline void SetTransitGatewayArn(const char* value) { m_transitGatewayArnHasBeenSet = true; m_transitGatewayArn.assign(value); }
    inline TransitGatewayRegistration& WithTransitGatewayArn(const Aws::String& value) { SetTransitGatewayArn(value); return *this;}
    inline TransitGatewayRegistration& WithTransitGatewayArn(Aws::String&& value) { SetTransitGatewayArn(std::move(value)); return *this;}
    inline TransitGatewayRegistration& WithTransitGatewayArn(const char* value) { SetTransitGatewayArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the transit gateway registration.</p>
     */
    inline const TransitGatewayRegistrationStateReason& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const TransitGatewayRegistrationStateReason& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(TransitGatewayRegistrationStateReason&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline TransitGatewayRegistration& WithState(const TransitGatewayRegistrationStateReason& value) { SetState(value); return *this;}
    inline TransitGatewayRegistration& WithState(TransitGatewayRegistrationStateReason&& value) { SetState(std::move(value)); return *this;}
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
