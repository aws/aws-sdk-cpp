/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/GrantEntitlementRequest.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   * A request to grant entitlements on a flow.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/GrantFlowEntitlementsRequest">AWS
   * API Reference</a></p>
   */
  class GrantFlowEntitlementsRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API GrantFlowEntitlementsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GrantFlowEntitlements"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The list of entitlements that you want to grant.
     */
    inline const Aws::Vector<GrantEntitlementRequest>& GetEntitlements() const{ return m_entitlements; }
    inline bool EntitlementsHasBeenSet() const { return m_entitlementsHasBeenSet; }
    inline void SetEntitlements(const Aws::Vector<GrantEntitlementRequest>& value) { m_entitlementsHasBeenSet = true; m_entitlements = value; }
    inline void SetEntitlements(Aws::Vector<GrantEntitlementRequest>&& value) { m_entitlementsHasBeenSet = true; m_entitlements = std::move(value); }
    inline GrantFlowEntitlementsRequest& WithEntitlements(const Aws::Vector<GrantEntitlementRequest>& value) { SetEntitlements(value); return *this;}
    inline GrantFlowEntitlementsRequest& WithEntitlements(Aws::Vector<GrantEntitlementRequest>&& value) { SetEntitlements(std::move(value)); return *this;}
    inline GrantFlowEntitlementsRequest& AddEntitlements(const GrantEntitlementRequest& value) { m_entitlementsHasBeenSet = true; m_entitlements.push_back(value); return *this; }
    inline GrantFlowEntitlementsRequest& AddEntitlements(GrantEntitlementRequest&& value) { m_entitlementsHasBeenSet = true; m_entitlements.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * The flow that you want to grant entitlements on.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }
    inline void SetFlowArn(const Aws::String& value) { m_flowArnHasBeenSet = true; m_flowArn = value; }
    inline void SetFlowArn(Aws::String&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::move(value); }
    inline void SetFlowArn(const char* value) { m_flowArnHasBeenSet = true; m_flowArn.assign(value); }
    inline GrantFlowEntitlementsRequest& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}
    inline GrantFlowEntitlementsRequest& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}
    inline GrantFlowEntitlementsRequest& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}
    ///@}
  private:

    Aws::Vector<GrantEntitlementRequest> m_entitlements;
    bool m_entitlementsHasBeenSet = false;

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
