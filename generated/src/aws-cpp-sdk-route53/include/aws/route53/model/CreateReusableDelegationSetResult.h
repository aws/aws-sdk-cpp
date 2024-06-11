﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/route53/model/DelegationSet.h>
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
  class CreateReusableDelegationSetResult
  {
  public:
    AWS_ROUTE53_API CreateReusableDelegationSetResult();
    AWS_ROUTE53_API CreateReusableDelegationSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API CreateReusableDelegationSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A complex type that contains name server information.</p>
     */
    inline const DelegationSet& GetDelegationSet() const{ return m_delegationSet; }
    inline void SetDelegationSet(const DelegationSet& value) { m_delegationSet = value; }
    inline void SetDelegationSet(DelegationSet&& value) { m_delegationSet = std::move(value); }
    inline CreateReusableDelegationSetResult& WithDelegationSet(const DelegationSet& value) { SetDelegationSet(value); return *this;}
    inline CreateReusableDelegationSetResult& WithDelegationSet(DelegationSet&& value) { SetDelegationSet(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique URL representing the new reusable delegation set.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline void SetLocation(const Aws::String& value) { m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_location.assign(value); }
    inline CreateReusableDelegationSetResult& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline CreateReusableDelegationSetResult& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline CreateReusableDelegationSetResult& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateReusableDelegationSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateReusableDelegationSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateReusableDelegationSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    DelegationSet m_delegationSet;

    Aws::String m_location;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
