﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
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
   * <p>A complex type that contains the response information from a
   * <code>CreateVPCAssociationAuthorization</code> request.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/CreateVPCAssociationAuthorizationResponse">AWS
   * API Reference</a></p>
   */
  class CreateVPCAssociationAuthorizationResult
  {
  public:
    AWS_ROUTE53_API CreateVPCAssociationAuthorizationResult();
    AWS_ROUTE53_API CreateVPCAssociationAuthorizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API CreateVPCAssociationAuthorizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the hosted zone that you authorized associating a VPC with.</p>
     */
    inline const Aws::String& GetHostedZoneId() const{ return m_hostedZoneId; }
    inline void SetHostedZoneId(const Aws::String& value) { m_hostedZoneId = value; }
    inline void SetHostedZoneId(Aws::String&& value) { m_hostedZoneId = std::move(value); }
    inline void SetHostedZoneId(const char* value) { m_hostedZoneId.assign(value); }
    inline CreateVPCAssociationAuthorizationResult& WithHostedZoneId(const Aws::String& value) { SetHostedZoneId(value); return *this;}
    inline CreateVPCAssociationAuthorizationResult& WithHostedZoneId(Aws::String&& value) { SetHostedZoneId(std::move(value)); return *this;}
    inline CreateVPCAssociationAuthorizationResult& WithHostedZoneId(const char* value) { SetHostedZoneId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC that you authorized associating with a hosted zone.</p>
     */
    inline const VPC& GetVPC() const{ return m_vPC; }
    inline void SetVPC(const VPC& value) { m_vPC = value; }
    inline void SetVPC(VPC&& value) { m_vPC = std::move(value); }
    inline CreateVPCAssociationAuthorizationResult& WithVPC(const VPC& value) { SetVPC(value); return *this;}
    inline CreateVPCAssociationAuthorizationResult& WithVPC(VPC&& value) { SetVPC(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateVPCAssociationAuthorizationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateVPCAssociationAuthorizationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateVPCAssociationAuthorizationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_hostedZoneId;

    VPC m_vPC;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
