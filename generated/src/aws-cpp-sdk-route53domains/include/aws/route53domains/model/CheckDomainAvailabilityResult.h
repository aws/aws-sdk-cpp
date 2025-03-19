/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/model/DomainAvailability.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_ROUTE53DOMAINS_API CheckDomainAvailabilityResult() = default;
    AWS_ROUTE53DOMAINS_API CheckDomainAvailabilityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53DOMAINS_API CheckDomainAvailabilityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
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
     * later.</p> </dd> <dt>INVALID_NAME_FOR_TLD</dt> <dd> <p>The TLD isn't valid. For
     * example, it can contain characters that aren't allowed.</p> </dd>
     * <dt>PENDING</dt> <dd> <p>The TLD registry didn't return a response in the
     * expected amount of time. When the response is delayed, it usually takes just a
     * few extra seconds. You can resubmit the request immediately.</p> </dd>
     * <dt>RESERVED</dt> <dd> <p>The domain name has been reserved for another person
     * or organization.</p> </dd> <dt>UNAVAILABLE</dt> <dd> <p>The domain name is not
     * available.</p> </dd> <dt>UNAVAILABLE_PREMIUM</dt> <dd> <p>The domain name is not
     * available.</p> </dd> <dt>UNAVAILABLE_RESTRICTED</dt> <dd> <p>The domain name is
     * forbidden.</p> </dd> </dl>
     */
    inline DomainAvailability GetAvailability() const { return m_availability; }
    inline void SetAvailability(DomainAvailability value) { m_availabilityHasBeenSet = true; m_availability = value; }
    inline CheckDomainAvailabilityResult& WithAvailability(DomainAvailability value) { SetAvailability(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CheckDomainAvailabilityResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    DomainAvailability m_availability{DomainAvailability::NOT_SET};
    bool m_availabilityHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
