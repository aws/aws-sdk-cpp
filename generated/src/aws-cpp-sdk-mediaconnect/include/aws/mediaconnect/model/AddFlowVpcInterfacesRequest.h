/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/model/VpcInterfaceRequest.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   */
  class AddFlowVpcInterfacesRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API AddFlowVpcInterfacesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddFlowVpcInterfaces"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the flow that you want to update.</p>
     */
    inline const Aws::String& GetFlowArn() const { return m_flowArn; }
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }
    template<typename FlowArnT = Aws::String>
    void SetFlowArn(FlowArnT&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::forward<FlowArnT>(value); }
    template<typename FlowArnT = Aws::String>
    AddFlowVpcInterfacesRequest& WithFlowArn(FlowArnT&& value) { SetFlowArn(std::forward<FlowArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of VPC interfaces that you want to add to the flow.</p>
     */
    inline const Aws::Vector<VpcInterfaceRequest>& GetVpcInterfaces() const { return m_vpcInterfaces; }
    inline bool VpcInterfacesHasBeenSet() const { return m_vpcInterfacesHasBeenSet; }
    template<typename VpcInterfacesT = Aws::Vector<VpcInterfaceRequest>>
    void SetVpcInterfaces(VpcInterfacesT&& value) { m_vpcInterfacesHasBeenSet = true; m_vpcInterfaces = std::forward<VpcInterfacesT>(value); }
    template<typename VpcInterfacesT = Aws::Vector<VpcInterfaceRequest>>
    AddFlowVpcInterfacesRequest& WithVpcInterfaces(VpcInterfacesT&& value) { SetVpcInterfaces(std::forward<VpcInterfacesT>(value)); return *this;}
    template<typename VpcInterfacesT = VpcInterfaceRequest>
    AddFlowVpcInterfacesRequest& AddVpcInterfaces(VpcInterfacesT&& value) { m_vpcInterfacesHasBeenSet = true; m_vpcInterfaces.emplace_back(std::forward<VpcInterfacesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet = false;

    Aws::Vector<VpcInterfaceRequest> m_vpcInterfaces;
    bool m_vpcInterfacesHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
