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
    AWS_PAYMENTCRYPTOGRAPHY_API ExportKeyResult() = default;
    AWS_PAYMENTCRYPTOGRAPHY_API ExportKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PAYMENTCRYPTOGRAPHY_API ExportKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The key material under export as a TR-34 WrappedKeyBlock or a TR-31
     * WrappedKeyBlock. or a RSA WrappedKeyCryptogram.</p>
     */
    inline const WrappedKey& GetWrappedKey() const { return m_wrappedKey; }
    template<typename WrappedKeyT = WrappedKey>
    void SetWrappedKey(WrappedKeyT&& value) { m_wrappedKeyHasBeenSet = true; m_wrappedKey = std::forward<WrappedKeyT>(value); }
    template<typename WrappedKeyT = WrappedKey>
    ExportKeyResult& WithWrappedKey(WrappedKeyT&& value) { SetWrappedKey(std::forward<WrappedKeyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ExportKeyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    WrappedKey m_wrappedKey;
    bool m_wrappedKeyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
