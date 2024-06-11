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
  class RemoveFlowVpcInterfaceRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API RemoveFlowVpcInterfaceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveFlowVpcInterface"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The flow that you want to remove a VPC interface from.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }
    inline void SetFlowArn(const Aws::String& value) { m_flowArnHasBeenSet = true; m_flowArn = value; }
    inline void SetFlowArn(Aws::String&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::move(value); }
    inline void SetFlowArn(const char* value) { m_flowArnHasBeenSet = true; m_flowArn.assign(value); }
    inline RemoveFlowVpcInterfaceRequest& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}
    inline RemoveFlowVpcInterfaceRequest& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}
    inline RemoveFlowVpcInterfaceRequest& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}
    ///@}

    ///@{
    /**
     * The name of the VPC interface that you want to remove.
     */
    inline const Aws::String& GetVpcInterfaceName() const{ return m_vpcInterfaceName; }
    inline bool VpcInterfaceNameHasBeenSet() const { return m_vpcInterfaceNameHasBeenSet; }
    inline void SetVpcInterfaceName(const Aws::String& value) { m_vpcInterfaceNameHasBeenSet = true; m_vpcInterfaceName = value; }
    inline void SetVpcInterfaceName(Aws::String&& value) { m_vpcInterfaceNameHasBeenSet = true; m_vpcInterfaceName = std::move(value); }
    inline void SetVpcInterfaceName(const char* value) { m_vpcInterfaceNameHasBeenSet = true; m_vpcInterfaceName.assign(value); }
    inline RemoveFlowVpcInterfaceRequest& WithVpcInterfaceName(const Aws::String& value) { SetVpcInterfaceName(value); return *this;}
    inline RemoveFlowVpcInterfaceRequest& WithVpcInterfaceName(Aws::String&& value) { SetVpcInterfaceName(std::move(value)); return *this;}
    inline RemoveFlowVpcInterfaceRequest& WithVpcInterfaceName(const char* value) { SetVpcInterfaceName(value); return *this;}
    ///@}
  private:

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet = false;

    Aws::String m_vpcInterfaceName;
    bool m_vpcInterfaceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
