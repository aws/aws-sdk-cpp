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
  class CreateKeyResult
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API CreateKeyResult();
    AWS_PAYMENTCRYPTOGRAPHY_API CreateKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PAYMENTCRYPTOGRAPHY_API CreateKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The key material that contains all the key attributes.</p>
     */
    inline const Key& GetKey() const{ return m_key; }

    /**
     * <p>The key material that contains all the key attributes.</p>
     */
    inline void SetKey(const Key& value) { m_key = value; }

    /**
     * <p>The key material that contains all the key attributes.</p>
     */
    inline void SetKey(Key&& value) { m_key = std::move(value); }

    /**
     * <p>The key material that contains all the key attributes.</p>
     */
    inline CreateKeyResult& WithKey(const Key& value) { SetKey(value); return *this;}

    /**
     * <p>The key material that contains all the key attributes.</p>
     */
    inline CreateKeyResult& WithKey(Key&& value) { SetKey(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateKeyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateKeyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateKeyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Key m_key;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
