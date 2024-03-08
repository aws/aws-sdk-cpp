/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/TrustedTokenIssuerConfiguration.h>
#include <aws/sso-admin/model/TrustedTokenIssuerType.h>
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
  class DescribeTrustedTokenIssuerResult
  {
  public:
    AWS_SSOADMIN_API DescribeTrustedTokenIssuerResult();
    AWS_SSOADMIN_API DescribeTrustedTokenIssuerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOADMIN_API DescribeTrustedTokenIssuerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the trusted token issuer configuration.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the trusted token issuer configuration.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the trusted token issuer configuration.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the trusted token issuer configuration.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the trusted token issuer configuration.</p>
     */
    inline DescribeTrustedTokenIssuerResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the trusted token issuer configuration.</p>
     */
    inline DescribeTrustedTokenIssuerResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the trusted token issuer configuration.</p>
     */
    inline DescribeTrustedTokenIssuerResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ARN of the trusted token issuer configuration.</p>
     */
    inline const Aws::String& GetTrustedTokenIssuerArn() const{ return m_trustedTokenIssuerArn; }

    /**
     * <p>The ARN of the trusted token issuer configuration.</p>
     */
    inline void SetTrustedTokenIssuerArn(const Aws::String& value) { m_trustedTokenIssuerArn = value; }

    /**
     * <p>The ARN of the trusted token issuer configuration.</p>
     */
    inline void SetTrustedTokenIssuerArn(Aws::String&& value) { m_trustedTokenIssuerArn = std::move(value); }

    /**
     * <p>The ARN of the trusted token issuer configuration.</p>
     */
    inline void SetTrustedTokenIssuerArn(const char* value) { m_trustedTokenIssuerArn.assign(value); }

    /**
     * <p>The ARN of the trusted token issuer configuration.</p>
     */
    inline DescribeTrustedTokenIssuerResult& WithTrustedTokenIssuerArn(const Aws::String& value) { SetTrustedTokenIssuerArn(value); return *this;}

    /**
     * <p>The ARN of the trusted token issuer configuration.</p>
     */
    inline DescribeTrustedTokenIssuerResult& WithTrustedTokenIssuerArn(Aws::String&& value) { SetTrustedTokenIssuerArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the trusted token issuer configuration.</p>
     */
    inline DescribeTrustedTokenIssuerResult& WithTrustedTokenIssuerArn(const char* value) { SetTrustedTokenIssuerArn(value); return *this;}


    /**
     * <p>A structure the describes the settings that apply of this trusted token
     * issuer.</p>
     */
    inline const TrustedTokenIssuerConfiguration& GetTrustedTokenIssuerConfiguration() const{ return m_trustedTokenIssuerConfiguration; }

    /**
     * <p>A structure the describes the settings that apply of this trusted token
     * issuer.</p>
     */
    inline void SetTrustedTokenIssuerConfiguration(const TrustedTokenIssuerConfiguration& value) { m_trustedTokenIssuerConfiguration = value; }

    /**
     * <p>A structure the describes the settings that apply of this trusted token
     * issuer.</p>
     */
    inline void SetTrustedTokenIssuerConfiguration(TrustedTokenIssuerConfiguration&& value) { m_trustedTokenIssuerConfiguration = std::move(value); }

    /**
     * <p>A structure the describes the settings that apply of this trusted token
     * issuer.</p>
     */
    inline DescribeTrustedTokenIssuerResult& WithTrustedTokenIssuerConfiguration(const TrustedTokenIssuerConfiguration& value) { SetTrustedTokenIssuerConfiguration(value); return *this;}

    /**
     * <p>A structure the describes the settings that apply of this trusted token
     * issuer.</p>
     */
    inline DescribeTrustedTokenIssuerResult& WithTrustedTokenIssuerConfiguration(TrustedTokenIssuerConfiguration&& value) { SetTrustedTokenIssuerConfiguration(std::move(value)); return *this;}


    /**
     * <p>The type of the trusted token issuer.</p>
     */
    inline const TrustedTokenIssuerType& GetTrustedTokenIssuerType() const{ return m_trustedTokenIssuerType; }

    /**
     * <p>The type of the trusted token issuer.</p>
     */
    inline void SetTrustedTokenIssuerType(const TrustedTokenIssuerType& value) { m_trustedTokenIssuerType = value; }

    /**
     * <p>The type of the trusted token issuer.</p>
     */
    inline void SetTrustedTokenIssuerType(TrustedTokenIssuerType&& value) { m_trustedTokenIssuerType = std::move(value); }

    /**
     * <p>The type of the trusted token issuer.</p>
     */
    inline DescribeTrustedTokenIssuerResult& WithTrustedTokenIssuerType(const TrustedTokenIssuerType& value) { SetTrustedTokenIssuerType(value); return *this;}

    /**
     * <p>The type of the trusted token issuer.</p>
     */
    inline DescribeTrustedTokenIssuerResult& WithTrustedTokenIssuerType(TrustedTokenIssuerType&& value) { SetTrustedTokenIssuerType(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeTrustedTokenIssuerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeTrustedTokenIssuerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeTrustedTokenIssuerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_name;

    Aws::String m_trustedTokenIssuerArn;

    TrustedTokenIssuerConfiguration m_trustedTokenIssuerConfiguration;

    TrustedTokenIssuerType m_trustedTokenIssuerType;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
