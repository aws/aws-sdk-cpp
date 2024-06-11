﻿/**
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
    AWS_ROUTE53_API GetHostedZoneResult();
    AWS_ROUTE53_API GetHostedZoneResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API GetHostedZoneResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A complex type that contains general information about the specified hosted
     * zone.</p>
     */
    inline const HostedZone& GetHostedZone() const{ return m_hostedZone; }
    inline void SetHostedZone(const HostedZone& value) { m_hostedZone = value; }
    inline void SetHostedZone(HostedZone&& value) { m_hostedZone = std::move(value); }
    inline GetHostedZoneResult& WithHostedZone(const HostedZone& value) { SetHostedZone(value); return *this;}
    inline GetHostedZoneResult& WithHostedZone(HostedZone&& value) { SetHostedZone(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that lists the Amazon Route 53 name servers for the specified
     * hosted zone.</p>
     */
    inline const DelegationSet& GetDelegationSet() const{ return m_delegationSet; }
    inline void SetDelegationSet(const DelegationSet& value) { m_delegationSet = value; }
    inline void SetDelegationSet(DelegationSet&& value) { m_delegationSet = std::move(value); }
    inline GetHostedZoneResult& WithDelegationSet(const DelegationSet& value) { SetDelegationSet(value); return *this;}
    inline GetHostedZoneResult& WithDelegationSet(DelegationSet&& value) { SetDelegationSet(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains information about the VPCs that are associated
     * with the specified hosted zone.</p>
     */
    inline const Aws::Vector<VPC>& GetVPCs() const{ return m_vPCs; }
    inline void SetVPCs(const Aws::Vector<VPC>& value) { m_vPCs = value; }
    inline void SetVPCs(Aws::Vector<VPC>&& value) { m_vPCs = std::move(value); }
    inline GetHostedZoneResult& WithVPCs(const Aws::Vector<VPC>& value) { SetVPCs(value); return *this;}
    inline GetHostedZoneResult& WithVPCs(Aws::Vector<VPC>&& value) { SetVPCs(std::move(value)); return *this;}
    inline GetHostedZoneResult& AddVPCs(const VPC& value) { m_vPCs.push_back(value); return *this; }
    inline GetHostedZoneResult& AddVPCs(VPC&& value) { m_vPCs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetHostedZoneResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetHostedZoneResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetHostedZoneResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    HostedZone m_hostedZone;

    DelegationSet m_delegationSet;

    Aws::Vector<VPC> m_vPCs;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
