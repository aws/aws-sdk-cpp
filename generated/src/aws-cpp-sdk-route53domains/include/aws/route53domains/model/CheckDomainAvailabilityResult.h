/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/model/DomainAvailability.h>
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
namespace Route53Domains
{
namespace Model
{
  /**
   * <p>The CheckDomainAvailability response includes the following
   * elements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/CheckDomainAvailabilityResponse">AWS
   * API Reference</a></p>
   */
  class CheckDomainAvailabilityResult
  {
  public:
    AWS_ROUTE53DOMAINS_API CheckDomainAvailabilityResult();
    AWS_ROUTE53DOMAINS_API CheckDomainAvailabilityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53DOMAINS_API CheckDomainAvailabilityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Whether the domain name is available for registering.</p>  <p>You can
     * register only domains designated as <code>AVAILABLE</code>.</p>  <p>Valid
     * values:</p> <dl> <dt>AVAILABLE</dt> <dd> <p>The domain name is available.</p>
     * </dd> <dt>AVAILABLE_RESERVED</dt> <dd> <p>The domain name is reserved under
     * specific conditions.</p> </dd> <dt>AVAILABLE_PREORDER</dt> <dd> <p>The domain
     * name is available and can be preordered.</p> </dd> <dt>DONT_KNOW</dt> <dd>
     * <p>The TLD registry didn't reply with a definitive answer about whether the
     * domain name is available. Route 53 can return this response for a variety of
     * reasons, for example, the registry is performing maintenance. Try again
     * later.</p> </dd> <dt>PENDING</dt> <dd> <p>The TLD registry didn't return a
     * response in the expected amount of time. When the response is delayed, it
     * usually takes just a few extra seconds. You can resubmit the request
     * immediately.</p> </dd> <dt>RESERVED</dt> <dd> <p>The domain name has been
     * reserved for another person or organization.</p> </dd> <dt>UNAVAILABLE</dt> <dd>
     * <p>The domain name is not available.</p> </dd> <dt>UNAVAILABLE_PREMIUM</dt> <dd>
     * <p>The domain name is not available.</p> </dd> <dt>UNAVAILABLE_RESTRICTED</dt>
     * <dd> <p>The domain name is forbidden.</p> </dd> </dl>
     */
    inline const DomainAvailability& GetAvailability() const{ return m_availability; }

    /**
     * <p>Whether the domain name is available for registering.</p>  <p>You can
     * register only domains designated as <code>AVAILABLE</code>.</p>  <p>Valid
     * values:</p> <dl> <dt>AVAILABLE</dt> <dd> <p>The domain name is available.</p>
     * </dd> <dt>AVAILABLE_RESERVED</dt> <dd> <p>The domain name is reserved under
     * specific conditions.</p> </dd> <dt>AVAILABLE_PREORDER</dt> <dd> <p>The domain
     * name is available and can be preordered.</p> </dd> <dt>DONT_KNOW</dt> <dd>
     * <p>The TLD registry didn't reply with a definitive answer about whether the
     * domain name is available. Route 53 can return this response for a variety of
     * reasons, for example, the registry is performing maintenance. Try again
     * later.</p> </dd> <dt>PENDING</dt> <dd> <p>The TLD registry didn't return a
     * response in the expected amount of time. When the response is delayed, it
     * usually takes just a few extra seconds. You can resubmit the request
     * immediately.</p> </dd> <dt>RESERVED</dt> <dd> <p>The domain name has been
     * reserved for another person or organization.</p> </dd> <dt>UNAVAILABLE</dt> <dd>
     * <p>The domain name is not available.</p> </dd> <dt>UNAVAILABLE_PREMIUM</dt> <dd>
     * <p>The domain name is not available.</p> </dd> <dt>UNAVAILABLE_RESTRICTED</dt>
     * <dd> <p>The domain name is forbidden.</p> </dd> </dl>
     */
    inline void SetAvailability(const DomainAvailability& value) { m_availability = value; }

    /**
     * <p>Whether the domain name is available for registering.</p>  <p>You can
     * register only domains designated as <code>AVAILABLE</code>.</p>  <p>Valid
     * values:</p> <dl> <dt>AVAILABLE</dt> <dd> <p>The domain name is available.</p>
     * </dd> <dt>AVAILABLE_RESERVED</dt> <dd> <p>The domain name is reserved under
     * specific conditions.</p> </dd> <dt>AVAILABLE_PREORDER</dt> <dd> <p>The domain
     * name is available and can be preordered.</p> </dd> <dt>DONT_KNOW</dt> <dd>
     * <p>The TLD registry didn't reply with a definitive answer about whether the
     * domain name is available. Route 53 can return this response for a variety of
     * reasons, for example, the registry is performing maintenance. Try again
     * later.</p> </dd> <dt>PENDING</dt> <dd> <p>The TLD registry didn't return a
     * response in the expected amount of time. When the response is delayed, it
     * usually takes just a few extra seconds. You can resubmit the request
     * immediately.</p> </dd> <dt>RESERVED</dt> <dd> <p>The domain name has been
     * reserved for another person or organization.</p> </dd> <dt>UNAVAILABLE</dt> <dd>
     * <p>The domain name is not available.</p> </dd> <dt>UNAVAILABLE_PREMIUM</dt> <dd>
     * <p>The domain name is not available.</p> </dd> <dt>UNAVAILABLE_RESTRICTED</dt>
     * <dd> <p>The domain name is forbidden.</p> </dd> </dl>
     */
    inline void SetAvailability(DomainAvailability&& value) { m_availability = std::move(value); }

    /**
     * <p>Whether the domain name is available for registering.</p>  <p>You can
     * register only domains designated as <code>AVAILABLE</code>.</p>  <p>Valid
     * values:</p> <dl> <dt>AVAILABLE</dt> <dd> <p>The domain name is available.</p>
     * </dd> <dt>AVAILABLE_RESERVED</dt> <dd> <p>The domain name is reserved under
     * specific conditions.</p> </dd> <dt>AVAILABLE_PREORDER</dt> <dd> <p>The domain
     * name is available and can be preordered.</p> </dd> <dt>DONT_KNOW</dt> <dd>
     * <p>The TLD registry didn't reply with a definitive answer about whether the
     * domain name is available. Route 53 can return this response for a variety of
     * reasons, for example, the registry is performing maintenance. Try again
     * later.</p> </dd> <dt>PENDING</dt> <dd> <p>The TLD registry didn't return a
     * response in the expected amount of time. When the response is delayed, it
     * usually takes just a few extra seconds. You can resubmit the request
     * immediately.</p> </dd> <dt>RESERVED</dt> <dd> <p>The domain name has been
     * reserved for another person or organization.</p> </dd> <dt>UNAVAILABLE</dt> <dd>
     * <p>The domain name is not available.</p> </dd> <dt>UNAVAILABLE_PREMIUM</dt> <dd>
     * <p>The domain name is not available.</p> </dd> <dt>UNAVAILABLE_RESTRICTED</dt>
     * <dd> <p>The domain name is forbidden.</p> </dd> </dl>
     */
    inline CheckDomainAvailabilityResult& WithAvailability(const DomainAvailability& value) { SetAvailability(value); return *this;}

    /**
     * <p>Whether the domain name is available for registering.</p>  <p>You can
     * register only domains designated as <code>AVAILABLE</code>.</p>  <p>Valid
     * values:</p> <dl> <dt>AVAILABLE</dt> <dd> <p>The domain name is available.</p>
     * </dd> <dt>AVAILABLE_RESERVED</dt> <dd> <p>The domain name is reserved under
     * specific conditions.</p> </dd> <dt>AVAILABLE_PREORDER</dt> <dd> <p>The domain
     * name is available and can be preordered.</p> </dd> <dt>DONT_KNOW</dt> <dd>
     * <p>The TLD registry didn't reply with a definitive answer about whether the
     * domain name is available. Route 53 can return this response for a variety of
     * reasons, for example, the registry is performing maintenance. Try again
     * later.</p> </dd> <dt>PENDING</dt> <dd> <p>The TLD registry didn't return a
     * response in the expected amount of time. When the response is delayed, it
     * usually takes just a few extra seconds. You can resubmit the request
     * immediately.</p> </dd> <dt>RESERVED</dt> <dd> <p>The domain name has been
     * reserved for another person or organization.</p> </dd> <dt>UNAVAILABLE</dt> <dd>
     * <p>The domain name is not available.</p> </dd> <dt>UNAVAILABLE_PREMIUM</dt> <dd>
     * <p>The domain name is not available.</p> </dd> <dt>UNAVAILABLE_RESTRICTED</dt>
     * <dd> <p>The domain name is forbidden.</p> </dd> </dl>
     */
    inline CheckDomainAvailabilityResult& WithAvailability(DomainAvailability&& value) { SetAvailability(std::move(value)); return *this;}

  private:

    DomainAvailability m_availability;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
