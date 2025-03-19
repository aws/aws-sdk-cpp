/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   */
  class RevokeFlowEntitlementRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API RevokeFlowEntitlementRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RevokeFlowEntitlement"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the entitlement that you want to
     * revoke.</p>
     */
    inline const Aws::String& GetEntitlementArn() const { return m_entitlementArn; }
    inline bool EntitlementArnHasBeenSet() const { return m_entitlementArnHasBeenSet; }
    template<typename EntitlementArnT = Aws::String>
    void SetEntitlementArn(EntitlementArnT&& value) { m_entitlementArnHasBeenSet = true; m_entitlementArn = std::forward<EntitlementArnT>(value); }
    template<typename EntitlementArnT = Aws::String>
    RevokeFlowEntitlementRequest& WithEntitlementArn(EntitlementArnT&& value) { SetEntitlementArn(std::forward<EntitlementArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The flow that you want to revoke an entitlement from.</p>
     */
    inline const Aws::String& GetFlowArn() const { return m_flowArn; }
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }
    template<typename FlowArnT = Aws::String>
    void SetFlowArn(FlowArnT&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::forward<FlowArnT>(value); }
    template<typename FlowArnT = Aws::String>
    RevokeFlowEntitlementRequest& WithFlowArn(FlowArnT&& value) { SetFlowArn(std::forward<FlowArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_entitlementArn;
    bool m_entitlementArnHasBeenSet = false;

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
