/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/network-firewall/model/VpcEndpointAssociation.h>
#include <aws/network-firewall/model/VpcEndpointAssociationStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace NetworkFirewall
{
namespace Model
{
  class DeleteVpcEndpointAssociationResult
  {
  public:
    AWS_NETWORKFIREWALL_API DeleteVpcEndpointAssociationResult() = default;
    AWS_NETWORKFIREWALL_API DeleteVpcEndpointAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API DeleteVpcEndpointAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The configuration settings for the VPC endpoint association. These settings
     * include the firewall and the VPC and subnet to use for the firewall endpoint.
     * </p>
     */
    inline const VpcEndpointAssociation& GetVpcEndpointAssociation() const { return m_vpcEndpointAssociation; }
    template<typename VpcEndpointAssociationT = VpcEndpointAssociation>
    void SetVpcEndpointAssociation(VpcEndpointAssociationT&& value) { m_vpcEndpointAssociationHasBeenSet = true; m_vpcEndpointAssociation = std::forward<VpcEndpointAssociationT>(value); }
    template<typename VpcEndpointAssociationT = VpcEndpointAssociation>
    DeleteVpcEndpointAssociationResult& WithVpcEndpointAssociation(VpcEndpointAssociationT&& value) { SetVpcEndpointAssociation(std::forward<VpcEndpointAssociationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed information about the current status of a
     * <a>VpcEndpointAssociation</a>. You can retrieve this by calling
     * <a>DescribeVpcEndpointAssociation</a> and providing the VPC endpoint association
     * ARN.</p>
     */
    inline const VpcEndpointAssociationStatus& GetVpcEndpointAssociationStatus() const { return m_vpcEndpointAssociationStatus; }
    template<typename VpcEndpointAssociationStatusT = VpcEndpointAssociationStatus>
    void SetVpcEndpointAssociationStatus(VpcEndpointAssociationStatusT&& value) { m_vpcEndpointAssociationStatusHasBeenSet = true; m_vpcEndpointAssociationStatus = std::forward<VpcEndpointAssociationStatusT>(value); }
    template<typename VpcEndpointAssociationStatusT = VpcEndpointAssociationStatus>
    DeleteVpcEndpointAssociationResult& WithVpcEndpointAssociationStatus(VpcEndpointAssociationStatusT&& value) { SetVpcEndpointAssociationStatus(std::forward<VpcEndpointAssociationStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteVpcEndpointAssociationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    VpcEndpointAssociation m_vpcEndpointAssociation;
    bool m_vpcEndpointAssociationHasBeenSet = false;

    VpcEndpointAssociationStatus m_vpcEndpointAssociationStatus;
    bool m_vpcEndpointAssociationStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
