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
  /**
   * <p>A complex type that contains the response to the
   * <code>GetReusableDelegationSet</code> request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetReusableDelegationSetResponse">AWS
   * API Reference</a></p>
   */
  class GetReusableDelegationSetResult
  {
  public:
    AWS_ROUTE53_API GetReusableDelegationSetResult();
    AWS_ROUTE53_API GetReusableDelegationSetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ROUTE53_API GetReusableDelegationSetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A complex type that contains information about the reusable delegation
     * set.</p>
     */
    inline const DelegationSet& GetDelegationSet() const{ return m_delegationSet; }

    /**
     * <p>A complex type that contains information about the reusable delegation
     * set.</p>
     */
    inline void SetDelegationSet(const DelegationSet& value) { m_delegationSet = value; }

    /**
     * <p>A complex type that contains information about the reusable delegation
     * set.</p>
     */
    inline void SetDelegationSet(DelegationSet&& value) { m_delegationSet = std::move(value); }

    /**
     * <p>A complex type that contains information about the reusable delegation
     * set.</p>
     */
    inline GetReusableDelegationSetResult& WithDelegationSet(const DelegationSet& value) { SetDelegationSet(value); return *this;}

    /**
     * <p>A complex type that contains information about the reusable delegation
     * set.</p>
     */
    inline GetReusableDelegationSetResult& WithDelegationSet(DelegationSet&& value) { SetDelegationSet(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetReusableDelegationSetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetReusableDelegationSetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetReusableDelegationSetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    DelegationSet m_delegationSet;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
