/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconnect/model/VpcInterface.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace MediaConnect
{
namespace Model
{
  class AddFlowVpcInterfacesResult
  {
  public:
    AWS_MEDIACONNECT_API AddFlowVpcInterfacesResult() = default;
    AWS_MEDIACONNECT_API AddFlowVpcInterfacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API AddFlowVpcInterfacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The ARN of the flow that these VPC interfaces were added to.</p>
     */
    inline const Aws::String& GetFlowArn() const { return m_flowArn; }
    template<typename FlowArnT = Aws::String>
    void SetFlowArn(FlowArnT&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::forward<FlowArnT>(value); }
    template<typename FlowArnT = Aws::String>
    AddFlowVpcInterfacesResult& WithFlowArn(FlowArnT&& value) { SetFlowArn(std::forward<FlowArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The details of the newly added VPC interfaces.</p>
     */
    inline const Aws::Vector<VpcInterface>& GetVpcInterfaces() const { return m_vpcInterfaces; }
    template<typename VpcInterfacesT = Aws::Vector<VpcInterface>>
    void SetVpcInterfaces(VpcInterfacesT&& value) { m_vpcInterfacesHasBeenSet = true; m_vpcInterfaces = std::forward<VpcInterfacesT>(value); }
    template<typename VpcInterfacesT = Aws::Vector<VpcInterface>>
    AddFlowVpcInterfacesResult& WithVpcInterfaces(VpcInterfacesT&& value) { SetVpcInterfaces(std::forward<VpcInterfacesT>(value)); return *this;}
    template<typename VpcInterfacesT = VpcInterface>
    AddFlowVpcInterfacesResult& AddVpcInterfaces(VpcInterfacesT&& value) { m_vpcInterfacesHasBeenSet = true; m_vpcInterfaces.emplace_back(std::forward<VpcInterfacesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AddFlowVpcInterfacesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet = false;

    Aws::Vector<VpcInterface> m_vpcInterfaces;
    bool m_vpcInterfacesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
