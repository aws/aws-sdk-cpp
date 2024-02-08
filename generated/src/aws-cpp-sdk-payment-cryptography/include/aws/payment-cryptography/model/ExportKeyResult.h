/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/payment-cryptography/model/WrappedKey.h>
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
  class ExportKeyResult
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API ExportKeyResult();
    AWS_PAYMENTCRYPTOGRAPHY_API ExportKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PAYMENTCRYPTOGRAPHY_API ExportKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The key material under export as a TR-34 WrappedKeyBlock or a TR-31
     * WrappedKeyBlock. or a RSA WrappedKeyCryptogram.</p>
     */
    inline const WrappedKey& GetWrappedKey() const{ return m_wrappedKey; }

    /**
     * <p>The key material under export as a TR-34 WrappedKeyBlock or a TR-31
     * WrappedKeyBlock. or a RSA WrappedKeyCryptogram.</p>
     */
    inline void SetWrappedKey(const WrappedKey& value) { m_wrappedKey = value; }

    /**
     * <p>The key material under export as a TR-34 WrappedKeyBlock or a TR-31
     * WrappedKeyBlock. or a RSA WrappedKeyCryptogram.</p>
     */
    inline void SetWrappedKey(WrappedKey&& value) { m_wrappedKey = std::move(value); }

    /**
     * <p>The key material under export as a TR-34 WrappedKeyBlock or a TR-31
     * WrappedKeyBlock. or a RSA WrappedKeyCryptogram.</p>
     */
    inline ExportKeyResult& WithWrappedKey(const WrappedKey& value) { SetWrappedKey(value); return *this;}

    /**
     * <p>The key material under export as a TR-34 WrappedKeyBlock or a TR-31
     * WrappedKeyBlock. or a RSA WrappedKeyCryptogram.</p>
     */
    inline ExportKeyResult& WithWrappedKey(WrappedKey&& value) { SetWrappedKey(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ExportKeyResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ExportKeyResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ExportKeyResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    WrappedKey m_wrappedKey;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
