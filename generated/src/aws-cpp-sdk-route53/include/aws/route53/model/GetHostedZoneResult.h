/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/HostedZone.h>
#include <aws/route53/model/DelegationSet.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53/model/VPC.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace Route53
{
namespace Model
{
  /**
   * <p>A complex type that contain the response to a <code>GetHostedZone</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetHostedZoneResponse">AWS
   * API Reference</a></p>
   */
  class GetHostedZoneResult
  {
  public:
    AWS_ROUTE53_API GetHostedZoneResult() = default;
    AWS_ROUTE53_API GetHostedZoneResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API GetHostedZoneResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A complex type that contains general information about the specified hosted
     * zone.</p>
     */
    inline const HostedZone& GetHostedZone() const { return m_hostedZone; }
    template<typename HostedZoneT = HostedZone>
    void SetHostedZone(HostedZoneT&& value) { m_hostedZoneHasBeenSet = true; m_hostedZone = std::forward<HostedZoneT>(value); }
    template<typename HostedZoneT = HostedZone>
    GetHostedZoneResult& WithHostedZone(HostedZoneT&& value) { SetHostedZone(std::forward<HostedZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that lists the Amazon Route 53 name servers for the specified
     * hosted zone.</p>
     */
    inline const DelegationSet& GetDelegationSet() const { return m_delegationSet; }
    template<typename DelegationSetT = DelegationSet>
    void SetDelegationSet(DelegationSetT&& value) { m_delegationSetHasBeenSet = true; m_delegationSet = std::forward<DelegationSetT>(value); }
    template<typename DelegationSetT = DelegationSet>
    GetHostedZoneResult& WithDelegationSet(DelegationSetT&& value) { SetDelegationSet(std::forward<DelegationSetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains information about the VPCs that are associated
     * with the specified hosted zone.</p>
     */
    inline const Aws::Vector<VPC>& GetVPCs() const { return m_vPCs; }
    template<typename VPCsT = Aws::Vector<VPC>>
    void SetVPCs(VPCsT&& value) { m_vPCsHasBeenSet = true; m_vPCs = std::forward<VPCsT>(value); }
    template<typename VPCsT = Aws::Vector<VPC>>
    GetHostedZoneResult& WithVPCs(VPCsT&& value) { SetVPCs(std::forward<VPCsT>(value)); return *this;}
    template<typename VPCsT = VPC>
    GetHostedZoneResult& AddVPCs(VPCsT&& value) { m_vPCsHasBeenSet = true; m_vPCs.emplace_back(std::forward<VPCsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetHostedZoneResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    HostedZone m_hostedZone;
    bool m_hostedZoneHasBeenSet = false;

    DelegationSet m_delegationSet;
    bool m_delegationSetHasBeenSet = false;

    Aws::Vector<VPC> m_vPCs;
    bool m_vPCsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
