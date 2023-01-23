/**
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


    /**
     * <p>A complex type that contains name server information.</p>
     */
    inline const DelegationSet& GetDelegationSet() const{ return m_delegationSet; }

    /**
     * <p>A complex type that contains name server information.</p>
     */
    inline void SetDelegationSet(const DelegationSet& value) { m_delegationSet = value; }

    /**
     * <p>A complex type that contains name server information.</p>
     */
    inline void SetDelegationSet(DelegationSet&& value) { m_delegationSet = std::move(value); }

    /**
     * <p>A complex type that contains name server information.</p>
     */
    inline CreateReusableDelegationSetResult& WithDelegationSet(const DelegationSet& value) { SetDelegationSet(value); return *this;}

    /**
     * <p>A complex type that contains name server information.</p>
     */
    inline CreateReusableDelegationSetResult& WithDelegationSet(DelegationSet&& value) { SetDelegationSet(std::move(value)); return *this;}


    /**
     * <p>The unique URL representing the new reusable delegation set.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p>The unique URL representing the new reusable delegation set.</p>
     */
    inline void SetLocation(const Aws::String& value) { m_location = value; }

    /**
     * <p>The unique URL representing the new reusable delegation set.</p>
     */
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }

    /**
     * <p>The unique URL representing the new reusable delegation set.</p>
     */
    inline void SetLocation(const char* value) { m_location.assign(value); }

    /**
     * <p>The unique URL representing the new reusable delegation set.</p>
     */
    inline CreateReusableDelegationSetResult& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p>The unique URL representing the new reusable delegation set.</p>
     */
    inline CreateReusableDelegationSetResult& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p>The unique URL representing the new reusable delegation set.</p>
     */
    inline CreateReusableDelegationSetResult& WithLocation(const char* value) { SetLocation(value); return *this;}

  private:

    DelegationSet m_delegationSet;

    Aws::String m_location;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
