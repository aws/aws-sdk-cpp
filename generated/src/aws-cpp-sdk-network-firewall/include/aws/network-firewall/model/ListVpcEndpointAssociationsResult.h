/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/network-firewall/model/VpcEndpointAssociationMetadata.h>
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
  class ListVpcEndpointAssociationsResult
  {
  public:
    AWS_NETWORKFIREWALL_API ListVpcEndpointAssociationsResult() = default;
    AWS_NETWORKFIREWALL_API ListVpcEndpointAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NETWORKFIREWALL_API ListVpcEndpointAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>When you request a list of objects with a <code>MaxResults</code> setting, if
     * the number of objects that are still available for retrieval exceeds the maximum
     * you requested, Network Firewall returns a <code>NextToken</code> value in the
     * response. To retrieve the next batch of objects, use the token returned from the
     * prior request in your next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListVpcEndpointAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC endpoint assocation metadata objects for the firewall that you
     * specified. If you didn't specify a firewall, this is all VPC endpoint
     * associations that you have defined. </p> <p>Depending on your setting for max
     * results and the number of firewalls you have, a single call might not be the
     * full list. </p>
     */
    inline const Aws::Vector<VpcEndpointAssociationMetadata>& GetVpcEndpointAssociations() const { return m_vpcEndpointAssociations; }
    template<typename VpcEndpointAssociationsT = Aws::Vector<VpcEndpointAssociationMetadata>>
    void SetVpcEndpointAssociations(VpcEndpointAssociationsT&& value) { m_vpcEndpointAssociationsHasBeenSet = true; m_vpcEndpointAssociations = std::forward<VpcEndpointAssociationsT>(value); }
    template<typename VpcEndpointAssociationsT = Aws::Vector<VpcEndpointAssociationMetadata>>
    ListVpcEndpointAssociationsResult& WithVpcEndpointAssociations(VpcEndpointAssociationsT&& value) { SetVpcEndpointAssociations(std::forward<VpcEndpointAssociationsT>(value)); return *this;}
    template<typename VpcEndpointAssociationsT = VpcEndpointAssociationMetadata>
    ListVpcEndpointAssociationsResult& AddVpcEndpointAssociations(VpcEndpointAssociationsT&& value) { m_vpcEndpointAssociationsHasBeenSet = true; m_vpcEndpointAssociations.emplace_back(std::forward<VpcEndpointAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListVpcEndpointAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<VpcEndpointAssociationMetadata> m_vpcEndpointAssociations;
    bool m_vpcEndpointAssociationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
