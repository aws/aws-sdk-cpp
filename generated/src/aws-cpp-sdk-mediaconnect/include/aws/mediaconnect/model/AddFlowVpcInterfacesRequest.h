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
   * A request to add VPC interfaces to the flow.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AddFlowVpcInterfacesRequest">AWS
   * API Reference</a></p>
   */
  class AddFlowVpcInterfacesRequest : public MediaConnectRequest
  {
  public:
    AWS_MEDIACONNECT_API AddFlowVpcInterfacesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddFlowVpcInterfaces"; }

    AWS_MEDIACONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * The flow that you want to mutate.
     */
    inline const Aws::String& GetFlowArn() const{ return m_flowArn; }
    inline bool FlowArnHasBeenSet() const { return m_flowArnHasBeenSet; }
    inline void SetFlowArn(const Aws::String& value) { m_flowArnHasBeenSet = true; m_flowArn = value; }
    inline void SetFlowArn(Aws::String&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::move(value); }
    inline void SetFlowArn(const char* value) { m_flowArnHasBeenSet = true; m_flowArn.assign(value); }
    inline AddFlowVpcInterfacesRequest& WithFlowArn(const Aws::String& value) { SetFlowArn(value); return *this;}
    inline AddFlowVpcInterfacesRequest& WithFlowArn(Aws::String&& value) { SetFlowArn(std::move(value)); return *this;}
    inline AddFlowVpcInterfacesRequest& WithFlowArn(const char* value) { SetFlowArn(value); return *this;}
    ///@}

    ///@{
    /**
     * A list of VPC interfaces that you want to add.
     */
    inline const Aws::Vector<VpcInterfaceRequest>& GetVpcInterfaces() const{ return m_vpcInterfaces; }
    inline bool VpcInterfacesHasBeenSet() const { return m_vpcInterfacesHasBeenSet; }
    inline void SetVpcInterfaces(const Aws::Vector<VpcInterfaceRequest>& value) { m_vpcInterfacesHasBeenSet = true; m_vpcInterfaces = value; }
    inline void SetVpcInterfaces(Aws::Vector<VpcInterfaceRequest>&& value) { m_vpcInterfacesHasBeenSet = true; m_vpcInterfaces = std::move(value); }
    inline AddFlowVpcInterfacesRequest& WithVpcInterfaces(const Aws::Vector<VpcInterfaceRequest>& value) { SetVpcInterfaces(value); return *this;}
    inline AddFlowVpcInterfacesRequest& WithVpcInterfaces(Aws::Vector<VpcInterfaceRequest>&& value) { SetVpcInterfaces(std::move(value)); return *this;}
    inline AddFlowVpcInterfacesRequest& AddVpcInterfaces(const VpcInterfaceRequest& value) { m_vpcInterfacesHasBeenSet = true; m_vpcInterfaces.push_back(value); return *this; }
    inline AddFlowVpcInterfacesRequest& AddVpcInterfaces(VpcInterfaceRequest&& value) { m_vpcInterfacesHasBeenSet = true; m_vpcInterfaces.push_back(std::move(value)); return *this; }
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
