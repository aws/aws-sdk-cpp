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
  class DeleteKeyResult
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API DeleteKeyResult();
    AWS_PAYMENTCRYPTOGRAPHY_API DeleteKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PAYMENTCRYPTOGRAPHY_API DeleteKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>KeyARN</code> of the key that is scheduled for deletion.</p>
     */
    inline const Key& GetKey() const{ return m_key; }

    /**
     * <p>The <code>KeyARN</code> of the key that is scheduled for deletion.</p>
     */
    inline void SetKey(const Key& value) { m_key = value; }

    /**
     * <p>The <code>KeyARN</code> of the key that is scheduled for deletion.</p>
     */
    inline void SetKey(Key&& value) { m_key = std::move(value); }

    /**
     * <p>The <code>KeyARN</code> of the key that is scheduled for deletion.</p>
     */
    inline DeleteKeyResult& WithKey(const Key& value) { SetKey(value); return *this;}

    /**
     * <p>The <code>KeyARN</code> of the key that is scheduled for deletion.</p>
     */
    inline DeleteKeyResult& WithKey(Key&& value) { SetKey(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteKeyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteKeyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteKeyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Key m_key;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
