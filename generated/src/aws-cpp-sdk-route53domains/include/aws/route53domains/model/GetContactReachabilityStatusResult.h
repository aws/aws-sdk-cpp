/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53domains/model/ReachabilityStatus.h>
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
  class GetContactReachabilityStatusResult
  {
  public:
    AWS_ROUTE53DOMAINS_API GetContactReachabilityStatusResult() = default;
    AWS_ROUTE53DOMAINS_API GetContactReachabilityStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53DOMAINS_API GetContactReachabilityStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The domain name for which you requested the reachability status.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    GetContactReachabilityStatusResult& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the registrant contact has responded. Values include the
     * following:</p> <dl> <dt>PENDING</dt> <dd> <p>We sent the confirmation email and
     * haven't received a response yet.</p> </dd> <dt>DONE</dt> <dd> <p>We sent the
     * email and got confirmation from the registrant contact.</p> </dd>
     * <dt>EXPIRED</dt> <dd> <p>The time limit expired before the registrant contact
     * responded.</p> </dd> </dl>
     */
    inline ReachabilityStatus GetStatus() const { return m_status; }
    inline void SetStatus(ReachabilityStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetContactReachabilityStatusResult& WithStatus(ReachabilityStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetContactReachabilityStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    ReachabilityStatus m_status{ReachabilityStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
