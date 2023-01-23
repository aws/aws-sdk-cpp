/**
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
  /**
   * <p>The RetrieveDomainAuthCode response includes the following
   * element.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/RetrieveDomainAuthCodeResponse">AWS
   * API Reference</a></p>
   */
  class RetrieveDomainAuthCodeResult
  {
  public:
    AWS_ROUTE53DOMAINS_API RetrieveDomainAuthCodeResult();
    AWS_ROUTE53DOMAINS_API RetrieveDomainAuthCodeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53DOMAINS_API RetrieveDomainAuthCodeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The authorization code for the domain.</p>
     */
    inline const Aws::String& GetAuthCode() const{ return m_authCode; }

    /**
     * <p>The authorization code for the domain.</p>
     */
    inline void SetAuthCode(const Aws::String& value) { m_authCode = value; }

    /**
     * <p>The authorization code for the domain.</p>
     */
    inline void SetAuthCode(Aws::String&& value) { m_authCode = std::move(value); }

    /**
     * <p>The authorization code for the domain.</p>
     */
    inline void SetAuthCode(const char* value) { m_authCode.assign(value); }

    /**
     * <p>The authorization code for the domain.</p>
     */
    inline RetrieveDomainAuthCodeResult& WithAuthCode(const Aws::String& value) { SetAuthCode(value); return *this;}

    /**
     * <p>The authorization code for the domain.</p>
     */
    inline RetrieveDomainAuthCodeResult& WithAuthCode(Aws::String&& value) { SetAuthCode(std::move(value)); return *this;}

    /**
     * <p>The authorization code for the domain.</p>
     */
    inline RetrieveDomainAuthCodeResult& WithAuthCode(const char* value) { SetAuthCode(value); return *this;}

  private:

    Aws::String m_authCode;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
