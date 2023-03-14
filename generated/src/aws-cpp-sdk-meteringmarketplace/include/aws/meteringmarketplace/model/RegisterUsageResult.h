/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/meteringmarketplace/MarketplaceMetering_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace MarketplaceMetering
{
namespace Model
{
  class RegisterUsageResult
  {
  public:
    AWS_MARKETPLACEMETERING_API RegisterUsageResult();
    AWS_MARKETPLACEMETERING_API RegisterUsageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MARKETPLACEMETERING_API RegisterUsageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>(Optional) Only included when public key version has expired</p>
     */
    inline const Aws::Utils::DateTime& GetPublicKeyRotationTimestamp() const{ return m_publicKeyRotationTimestamp; }

    /**
     * <p>(Optional) Only included when public key version has expired</p>
     */
    inline void SetPublicKeyRotationTimestamp(const Aws::Utils::DateTime& value) { m_publicKeyRotationTimestamp = value; }

    /**
     * <p>(Optional) Only included when public key version has expired</p>
     */
    inline void SetPublicKeyRotationTimestamp(Aws::Utils::DateTime&& value) { m_publicKeyRotationTimestamp = std::move(value); }

    /**
     * <p>(Optional) Only included when public key version has expired</p>
     */
    inline RegisterUsageResult& WithPublicKeyRotationTimestamp(const Aws::Utils::DateTime& value) { SetPublicKeyRotationTimestamp(value); return *this;}

    /**
     * <p>(Optional) Only included when public key version has expired</p>
     */
    inline RegisterUsageResult& WithPublicKeyRotationTimestamp(Aws::Utils::DateTime&& value) { SetPublicKeyRotationTimestamp(std::move(value)); return *this;}


    /**
     * <p>JWT Token</p>
     */
    inline const Aws::String& GetSignature() const{ return m_signature; }

    /**
     * <p>JWT Token</p>
     */
    inline void SetSignature(const Aws::String& value) { m_signature = value; }

    /**
     * <p>JWT Token</p>
     */
    inline void SetSignature(Aws::String&& value) { m_signature = std::move(value); }

    /**
     * <p>JWT Token</p>
     */
    inline void SetSignature(const char* value) { m_signature.assign(value); }

    /**
     * <p>JWT Token</p>
     */
    inline RegisterUsageResult& WithSignature(const Aws::String& value) { SetSignature(value); return *this;}

    /**
     * <p>JWT Token</p>
     */
    inline RegisterUsageResult& WithSignature(Aws::String&& value) { SetSignature(std::move(value)); return *this;}

    /**
     * <p>JWT Token</p>
     */
    inline RegisterUsageResult& WithSignature(const char* value) { SetSignature(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline RegisterUsageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline RegisterUsageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline RegisterUsageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::DateTime m_publicKeyRotationTimestamp;

    Aws::String m_signature;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MarketplaceMetering
} // namespace Aws
