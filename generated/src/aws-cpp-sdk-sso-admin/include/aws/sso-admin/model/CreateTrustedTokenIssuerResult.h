/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
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
namespace SSOAdmin
{
namespace Model
{
  class CreateTrustedTokenIssuerResult
  {
  public:
    AWS_SSOADMIN_API CreateTrustedTokenIssuerResult();
    AWS_SSOADMIN_API CreateTrustedTokenIssuerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API CreateTrustedTokenIssuerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the new trusted token issuer configuration.</p>
     */
    inline const Aws::String& GetTrustedTokenIssuerArn() const{ return m_trustedTokenIssuerArn; }

    /**
     * <p>The ARN of the new trusted token issuer configuration.</p>
     */
    inline void SetTrustedTokenIssuerArn(const Aws::String& value) { m_trustedTokenIssuerArn = value; }

    /**
     * <p>The ARN of the new trusted token issuer configuration.</p>
     */
    inline void SetTrustedTokenIssuerArn(Aws::String&& value) { m_trustedTokenIssuerArn = std::move(value); }

    /**
     * <p>The ARN of the new trusted token issuer configuration.</p>
     */
    inline void SetTrustedTokenIssuerArn(const char* value) { m_trustedTokenIssuerArn.assign(value); }

    /**
     * <p>The ARN of the new trusted token issuer configuration.</p>
     */
    inline CreateTrustedTokenIssuerResult& WithTrustedTokenIssuerArn(const Aws::String& value) { SetTrustedTokenIssuerArn(value); return *this;}

    /**
     * <p>The ARN of the new trusted token issuer configuration.</p>
     */
    inline CreateTrustedTokenIssuerResult& WithTrustedTokenIssuerArn(Aws::String&& value) { SetTrustedTokenIssuerArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the new trusted token issuer configuration.</p>
     */
    inline CreateTrustedTokenIssuerResult& WithTrustedTokenIssuerArn(const char* value) { SetTrustedTokenIssuerArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateTrustedTokenIssuerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateTrustedTokenIssuerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateTrustedTokenIssuerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_trustedTokenIssuerArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
