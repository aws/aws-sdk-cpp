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
  class GetAliasResult
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API GetAliasResult();
    AWS_PAYMENTCRYPTOGRAPHY_API GetAliasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PAYMENTCRYPTOGRAPHY_API GetAliasResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The alias of the Amazon Web Services Payment Cryptography key.</p>
     */
    inline const Alias& GetAlias() const{ return m_alias; }

    /**
     * <p>The alias of the Amazon Web Services Payment Cryptography key.</p>
     */
    inline void SetAlias(const Alias& value) { m_alias = value; }

    /**
     * <p>The alias of the Amazon Web Services Payment Cryptography key.</p>
     */
    inline void SetAlias(Alias&& value) { m_alias = std::move(value); }

    /**
     * <p>The alias of the Amazon Web Services Payment Cryptography key.</p>
     */
    inline GetAliasResult& WithAlias(const Alias& value) { SetAlias(value); return *this;}

    /**
     * <p>The alias of the Amazon Web Services Payment Cryptography key.</p>
     */
    inline GetAliasResult& WithAlias(Alias&& value) { SetAlias(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAliasResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAliasResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAliasResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Alias m_alias;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
