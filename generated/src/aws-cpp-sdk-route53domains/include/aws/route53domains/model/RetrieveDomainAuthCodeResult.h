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
    AWS_ROUTE53DOMAINS_API RetrieveDomainAuthCodeResult() = default;
    AWS_ROUTE53DOMAINS_API RetrieveDomainAuthCodeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53DOMAINS_API RetrieveDomainAuthCodeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The authorization code for the domain.</p>
     */
    inline const Aws::String& GetAuthCode() const { return m_authCode; }
    template<typename AuthCodeT = Aws::String>
    void SetAuthCode(AuthCodeT&& value) { m_authCodeHasBeenSet = true; m_authCode = std::forward<AuthCodeT>(value); }
    template<typename AuthCodeT = Aws::String>
    RetrieveDomainAuthCodeResult& WithAuthCode(AuthCodeT&& value) { SetAuthCode(std::forward<AuthCodeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RetrieveDomainAuthCodeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_authCode;
    bool m_authCodeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
