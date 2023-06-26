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
  class RestoreKeyResult
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API RestoreKeyResult();
    AWS_PAYMENTCRYPTOGRAPHY_API RestoreKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PAYMENTCRYPTOGRAPHY_API RestoreKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The key material of the restored key. The <code>KeyState</code> will change
     * to <code>CREATE_COMPLETE</code> and value for
     * <code>DeletePendingTimestamp</code> gets removed. </p>
     */
    inline const Key& GetKey() const{ return m_key; }

    /**
     * <p>The key material of the restored key. The <code>KeyState</code> will change
     * to <code>CREATE_COMPLETE</code> and value for
     * <code>DeletePendingTimestamp</code> gets removed. </p>
     */
    inline void SetKey(const Key& value) { m_key = value; }

    /**
     * <p>The key material of the restored key. The <code>KeyState</code> will change
     * to <code>CREATE_COMPLETE</code> and value for
     * <code>DeletePendingTimestamp</code> gets removed. </p>
     */
    inline void SetKey(Key&& value) { m_key = std::move(value); }

    /**
     * <p>The key material of the restored key. The <code>KeyState</code> will change
     * to <code>CREATE_COMPLETE</code> and value for
     * <code>DeletePendingTimestamp</code> gets removed. </p>
     */
    inline RestoreKeyResult& WithKey(const Key& value) { SetKey(value); return *this;}

    /**
     * <p>The key material of the restored key. The <code>KeyState</code> will change
     * to <code>CREATE_COMPLETE</code> and value for
     * <code>DeletePendingTimestamp</code> gets removed. </p>
     */
    inline RestoreKeyResult& WithKey(Key&& value) { SetKey(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline RestoreKeyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline RestoreKeyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline RestoreKeyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Key m_key;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
