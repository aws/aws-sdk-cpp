/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/HostedZone.h>
#include <aws/route53/model/ChangeInfo.h>
#include <aws/route53/model/DelegationSet.h>
#include <aws/route53/model/VPC.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A complex type containing the response information for the hosted
   * zone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/CreateHostedZoneResponse">AWS
   * API Reference</a></p>
   */
  class CreateHostedZoneResult
  {
  public:
    AWS_ROUTE53_API CreateHostedZoneResult() = default;
    AWS_ROUTE53_API CreateHostedZoneResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API CreateHostedZoneResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A complex type that contains general information about the hosted zone.</p>
     */
    inline const HostedZone& GetHostedZone() const { return m_hostedZone; }
    template<typename HostedZoneT = HostedZone>
    void SetHostedZone(HostedZoneT&& value) { m_hostedZoneHasBeenSet = true; m_hostedZone = std::forward<HostedZoneT>(value); }
    template<typename HostedZoneT = HostedZone>
    CreateHostedZoneResult& WithHostedZone(HostedZoneT&& value) { SetHostedZone(std::forward<HostedZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains information about the
     * <code>CreateHostedZone</code> request.</p>
     */
    inline const ChangeInfo& GetChangeInfo() const { return m_changeInfo; }
    template<typename ChangeInfoT = ChangeInfo>
    void SetChangeInfo(ChangeInfoT&& value) { m_changeInfoHasBeenSet = true; m_changeInfo = std::forward<ChangeInfoT>(value); }
    template<typename ChangeInfoT = ChangeInfo>
    CreateHostedZoneResult& WithChangeInfo(ChangeInfoT&& value) { SetChangeInfo(std::forward<ChangeInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that describes the name servers for this hosted zone.</p>
     */
    inline const DelegationSet& GetDelegationSet() const { return m_delegationSet; }
    template<typename DelegationSetT = DelegationSet>
    void SetDelegationSet(DelegationSetT&& value) { m_delegationSetHasBeenSet = true; m_delegationSet = std::forward<DelegationSetT>(value); }
    template<typename DelegationSetT = DelegationSet>
    CreateHostedZoneResult& WithDelegationSet(DelegationSetT&& value) { SetDelegationSet(std::forward<DelegationSetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains information about an Amazon VPC that you
     * associated with this hosted zone.</p>
     */
    inline const VPC& GetVPC() const { return m_vPC; }
    template<typename VPCT = VPC>
    void SetVPC(VPCT&& value) { m_vPCHasBeenSet = true; m_vPC = std::forward<VPCT>(value); }
    template<typename VPCT = VPC>
    CreateHostedZoneResult& WithVPC(VPCT&& value) { SetVPC(std::forward<VPCT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique URL representing the new hosted zone.</p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    CreateHostedZoneResult& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateHostedZoneResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    HostedZone m_hostedZone;
    bool m_hostedZoneHasBeenSet = false;

    ChangeInfo m_changeInfo;
    bool m_changeInfoHasBeenSet = false;

    DelegationSet m_delegationSet;
    bool m_delegationSetHasBeenSet = false;

    VPC m_vPC;
    bool m_vPCHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
