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
    AWS_ROUTE53DOMAINS_API GetContactReachabilityStatusResult();
    AWS_ROUTE53DOMAINS_API GetContactReachabilityStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53DOMAINS_API GetContactReachabilityStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The domain name for which you requested the reachability status.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The domain name for which you requested the reachability status.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainName = value; }

    /**
     * <p>The domain name for which you requested the reachability status.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainName = std::move(value); }

    /**
     * <p>The domain name for which you requested the reachability status.</p>
     */
    inline void SetDomainName(const char* value) { m_domainName.assign(value); }

    /**
     * <p>The domain name for which you requested the reachability status.</p>
     */
    inline GetContactReachabilityStatusResult& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain name for which you requested the reachability status.</p>
     */
    inline GetContactReachabilityStatusResult& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The domain name for which you requested the reachability status.</p>
     */
    inline GetContactReachabilityStatusResult& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>Whether the registrant contact has responded. Values include the
     * following:</p> <dl> <dt>PENDING</dt> <dd> <p>We sent the confirmation email and
     * haven't received a response yet.</p> </dd> <dt>DONE</dt> <dd> <p>We sent the
     * email and got confirmation from the registrant contact.</p> </dd>
     * <dt>EXPIRED</dt> <dd> <p>The time limit expired before the registrant contact
     * responded.</p> </dd> </dl>
     */
    inline const ReachabilityStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Whether the registrant contact has responded. Values include the
     * following:</p> <dl> <dt>PENDING</dt> <dd> <p>We sent the confirmation email and
     * haven't received a response yet.</p> </dd> <dt>DONE</dt> <dd> <p>We sent the
     * email and got confirmation from the registrant contact.</p> </dd>
     * <dt>EXPIRED</dt> <dd> <p>The time limit expired before the registrant contact
     * responded.</p> </dd> </dl>
     */
    inline void SetStatus(const ReachabilityStatus& value) { m_status = value; }

    /**
     * <p>Whether the registrant contact has responded. Values include the
     * following:</p> <dl> <dt>PENDING</dt> <dd> <p>We sent the confirmation email and
     * haven't received a response yet.</p> </dd> <dt>DONE</dt> <dd> <p>We sent the
     * email and got confirmation from the registrant contact.</p> </dd>
     * <dt>EXPIRED</dt> <dd> <p>The time limit expired before the registrant contact
     * responded.</p> </dd> </dl>
     */
    inline void SetStatus(ReachabilityStatus&& value) { m_status = std::move(value); }

    /**
     * <p>Whether the registrant contact has responded. Values include the
     * following:</p> <dl> <dt>PENDING</dt> <dd> <p>We sent the confirmation email and
     * haven't received a response yet.</p> </dd> <dt>DONE</dt> <dd> <p>We sent the
     * email and got confirmation from the registrant contact.</p> </dd>
     * <dt>EXPIRED</dt> <dd> <p>The time limit expired before the registrant contact
     * responded.</p> </dd> </dl>
     */
    inline GetContactReachabilityStatusResult& WithStatus(const ReachabilityStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Whether the registrant contact has responded. Values include the
     * following:</p> <dl> <dt>PENDING</dt> <dd> <p>We sent the confirmation email and
     * haven't received a response yet.</p> </dd> <dt>DONE</dt> <dd> <p>We sent the
     * email and got confirmation from the registrant contact.</p> </dd>
     * <dt>EXPIRED</dt> <dd> <p>The time limit expired before the registrant contact
     * responded.</p> </dd> </dl>
     */
    inline GetContactReachabilityStatusResult& WithStatus(ReachabilityStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetContactReachabilityStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetContactReachabilityStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetContactReachabilityStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_domainName;

    ReachabilityStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
