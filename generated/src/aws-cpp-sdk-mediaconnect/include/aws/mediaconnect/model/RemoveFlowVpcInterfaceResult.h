/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class RemoveFlowVpcInterfaceResult
  {
  public:
    AWS_MEDIACONNECT_API RemoveFlowVpcInterfaceResult() = default;
    AWS_MEDIACONNECT_API RemoveFlowVpcInterfaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIACONNECT_API RemoveFlowVpcInterfaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The ARN of the flow that is associated with the VPC interface you
     * removed.</p>
     */
    inline const Aws::String& GetFlowArn() const { return m_flowArn; }
    template<typename FlowArnT = Aws::String>
    void SetFlowArn(FlowArnT&& value) { m_flowArnHasBeenSet = true; m_flowArn = std::forward<FlowArnT>(value); }
    template<typename FlowArnT = Aws::String>
    RemoveFlowVpcInterfaceResult& WithFlowArn(FlowArnT&& value) { SetFlowArn(std::forward<FlowArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> IDs of network interfaces associated with the removed VPC interface that
     * MediaConnect was unable to remove.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNonDeletedNetworkInterfaceIds() const { return m_nonDeletedNetworkInterfaceIds; }
    template<typename NonDeletedNetworkInterfaceIdsT = Aws::Vector<Aws::String>>
    void SetNonDeletedNetworkInterfaceIds(NonDeletedNetworkInterfaceIdsT&& value) { m_nonDeletedNetworkInterfaceIdsHasBeenSet = true; m_nonDeletedNetworkInterfaceIds = std::forward<NonDeletedNetworkInterfaceIdsT>(value); }
    template<typename NonDeletedNetworkInterfaceIdsT = Aws::Vector<Aws::String>>
    RemoveFlowVpcInterfaceResult& WithNonDeletedNetworkInterfaceIds(NonDeletedNetworkInterfaceIdsT&& value) { SetNonDeletedNetworkInterfaceIds(std::forward<NonDeletedNetworkInterfaceIdsT>(value)); return *this;}
    template<typename NonDeletedNetworkInterfaceIdsT = Aws::String>
    RemoveFlowVpcInterfaceResult& AddNonDeletedNetworkInterfaceIds(NonDeletedNetworkInterfaceIdsT&& value) { m_nonDeletedNetworkInterfaceIdsHasBeenSet = true; m_nonDeletedNetworkInterfaceIds.emplace_back(std::forward<NonDeletedNetworkInterfaceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The name of the VPC interface that was removed.</p>
     */
    inline const Aws::String& GetVpcInterfaceName() const { return m_vpcInterfaceName; }
    template<typename VpcInterfaceNameT = Aws::String>
    void SetVpcInterfaceName(VpcInterfaceNameT&& value) { m_vpcInterfaceNameHasBeenSet = true; m_vpcInterfaceName = std::forward<VpcInterfaceNameT>(value); }
    template<typename VpcInterfaceNameT = Aws::String>
    RemoveFlowVpcInterfaceResult& WithVpcInterfaceName(VpcInterfaceNameT&& value) { SetVpcInterfaceName(std::forward<VpcInterfaceNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RemoveFlowVpcInterfaceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_flowArn;
    bool m_flowArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_nonDeletedNetworkInterfaceIds;
    bool m_nonDeletedNetworkInterfaceIdsHasBeenSet = false;

    Aws::String m_vpcInterfaceName;
    bool m_vpcInterfaceNameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
