﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/ChangeInfo.h>
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
  class DisableHostedZoneDNSSECResult
  {
  public:
    AWS_ROUTE53_API DisableHostedZoneDNSSECResult();
    AWS_ROUTE53_API DisableHostedZoneDNSSECResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API DisableHostedZoneDNSSECResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const ChangeInfo& GetChangeInfo() const{ return m_changeInfo; }
    inline void SetChangeInfo(const ChangeInfo& value) { m_changeInfo = value; }
    inline void SetChangeInfo(ChangeInfo&& value) { m_changeInfo = std::move(value); }
    inline DisableHostedZoneDNSSECResult& WithChangeInfo(const ChangeInfo& value) { SetChangeInfo(value); return *this;}
    inline DisableHostedZoneDNSSECResult& WithChangeInfo(ChangeInfo&& value) { SetChangeInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DisableHostedZoneDNSSECResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DisableHostedZoneDNSSECResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DisableHostedZoneDNSSECResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ChangeInfo m_changeInfo;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
