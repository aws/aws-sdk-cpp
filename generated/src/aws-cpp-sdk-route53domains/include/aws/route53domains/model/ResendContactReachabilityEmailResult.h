﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
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
  class ResendContactReachabilityEmailResult
  {
  public:
    AWS_ROUTE53DOMAINS_API ResendContactReachabilityEmailResult();
    AWS_ROUTE53DOMAINS_API ResendContactReachabilityEmailResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53DOMAINS_API ResendContactReachabilityEmailResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The domain name for which you requested a confirmation email.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline void SetDomainName(const Aws::String& value) { m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainName.assign(value); }
    inline ResendContactReachabilityEmailResult& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline ResendContactReachabilityEmailResult& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline ResendContactReachabilityEmailResult& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address for the registrant contact at the time that we sent the
     * verification email.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddress = value; }
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddress = std::move(value); }
    inline void SetEmailAddress(const char* value) { m_emailAddress.assign(value); }
    inline ResendContactReachabilityEmailResult& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}
    inline ResendContactReachabilityEmailResult& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}
    inline ResendContactReachabilityEmailResult& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>True</code> if the email address for the registrant contact has
     * already been verified, and <code>false</code> otherwise. If the email address
     * has already been verified, we don't send another confirmation email.</p>
     */
    inline bool GetIsAlreadyVerified() const{ return m_isAlreadyVerified; }
    inline void SetIsAlreadyVerified(bool value) { m_isAlreadyVerified = value; }
    inline ResendContactReachabilityEmailResult& WithIsAlreadyVerified(bool value) { SetIsAlreadyVerified(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ResendContactReachabilityEmailResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ResendContactReachabilityEmailResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ResendContactReachabilityEmailResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;

    Aws::String m_emailAddress;

    bool m_isAlreadyVerified;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
