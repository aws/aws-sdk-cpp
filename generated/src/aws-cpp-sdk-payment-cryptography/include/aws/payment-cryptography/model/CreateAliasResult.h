/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/payment-cryptography/model/Alias.h>
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
namespace PaymentCryptography
{
namespace Model
{
  class CreateAliasResult
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API CreateAliasResult();
    AWS_PAYMENTCRYPTOGRAPHY_API CreateAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PAYMENTCRYPTOGRAPHY_API CreateAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The alias for the key.</p>
     */
    inline const Alias& GetAlias() const{ return m_alias; }

    /**
     * <p>The alias for the key.</p>
     */
    inline void SetAlias(const Alias& value) { m_alias = value; }

    /**
     * <p>The alias for the key.</p>
     */
    inline void SetAlias(Alias&& value) { m_alias = std::move(value); }

    /**
     * <p>The alias for the key.</p>
     */
    inline CreateAliasResult& WithAlias(const Alias& value) { SetAlias(value); return *this;}

    /**
     * <p>The alias for the key.</p>
     */
    inline CreateAliasResult& WithAlias(Alias&& value) { SetAlias(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateAliasResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateAliasResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateAliasResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Alias m_alias;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
