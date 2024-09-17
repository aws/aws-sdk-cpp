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
    AWS_ROUTE53_API CreateHostedZoneResult();
    AWS_ROUTE53_API CreateHostedZoneResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API CreateHostedZoneResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A complex type that contains general information about the hosted zone.</p>
     */
    inline const HostedZone& GetHostedZone() const{ return m_hostedZone; }
    inline void SetHostedZone(const HostedZone& value) { m_hostedZone = value; }
    inline void SetHostedZone(HostedZone&& value) { m_hostedZone = std::move(value); }
    inline CreateHostedZoneResult& WithHostedZone(const HostedZone& value) { SetHostedZone(value); return *this;}
    inline CreateHostedZoneResult& WithHostedZone(HostedZone&& value) { SetHostedZone(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains information about the
     * <code>CreateHostedZone</code> request.</p>
     */
    inline const ChangeInfo& GetChangeInfo() const{ return m_changeInfo; }
    inline void SetChangeInfo(const ChangeInfo& value) { m_changeInfo = value; }
    inline void SetChangeInfo(ChangeInfo&& value) { m_changeInfo = std::move(value); }
    inline CreateHostedZoneResult& WithChangeInfo(const ChangeInfo& value) { SetChangeInfo(value); return *this;}
    inline CreateHostedZoneResult& WithChangeInfo(ChangeInfo&& value) { SetChangeInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that describes the name servers for this hosted zone.</p>
     */
    inline const DelegationSet& GetDelegationSet() const{ return m_delegationSet; }
    inline void SetDelegationSet(const DelegationSet& value) { m_delegationSet = value; }
    inline void SetDelegationSet(DelegationSet&& value) { m_delegationSet = std::move(value); }
    inline CreateHostedZoneResult& WithDelegationSet(const DelegationSet& value) { SetDelegationSet(value); return *this;}
    inline CreateHostedZoneResult& WithDelegationSet(DelegationSet&& value) { SetDelegationSet(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A complex type that contains information about an Amazon VPC that you
     * associated with this hosted zone.</p>
     */
    inline const VPC& GetVPC() const{ return m_vPC; }
    inline void SetVPC(const VPC& value) { m_vPC = value; }
    inline void SetVPC(VPC&& value) { m_vPC = std::move(value); }
    inline CreateHostedZoneResult& WithVPC(const VPC& value) { SetVPC(value); return *this;}
    inline CreateHostedZoneResult& WithVPC(VPC&& value) { SetVPC(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique URL representing the new hosted zone.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline void SetLocation(const Aws::String& value) { m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_location.assign(value); }
    inline CreateHostedZoneResult& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline CreateHostedZoneResult& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline CreateHostedZoneResult& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateHostedZoneResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateHostedZoneResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateHostedZoneResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    HostedZone m_hostedZone;

    ChangeInfo m_changeInfo;

    DelegationSet m_delegationSet;

    VPC m_vPC;

    Aws::String m_location;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
