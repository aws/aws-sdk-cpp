/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/payment-cryptography/model/Key.h>
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
  class ImportKeyResult
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API ImportKeyResult();
    AWS_PAYMENTCRYPTOGRAPHY_API ImportKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PAYMENTCRYPTOGRAPHY_API ImportKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>KeyARN</code> of the key material imported within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline const Key& GetKey() const{ return m_key; }

    /**
     * <p>The <code>KeyARN</code> of the key material imported within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline void SetKey(const Key& value) { m_key = value; }

    /**
     * <p>The <code>KeyARN</code> of the key material imported within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline void SetKey(Key&& value) { m_key = std::move(value); }

    /**
     * <p>The <code>KeyARN</code> of the key material imported within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline ImportKeyResult& WithKey(const Key& value) { SetKey(value); return *this;}

    /**
     * <p>The <code>KeyARN</code> of the key material imported within Amazon Web
     * Services Payment Cryptography.</p>
     */
    inline ImportKeyResult& WithKey(Key&& value) { SetKey(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ImportKeyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ImportKeyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ImportKeyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Key m_key;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
