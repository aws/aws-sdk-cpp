/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography-data/PaymentCryptographyData_EXPORTS.h>
#include <aws/payment-cryptography-data/model/WrappedWorkingKey.h>
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
namespace PaymentCryptographyData
{
namespace Model
{
  class TranslateKeyMaterialResult
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHYDATA_API TranslateKeyMaterialResult() = default;
    AWS_PAYMENTCRYPTOGRAPHYDATA_API TranslateKeyMaterialResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PAYMENTCRYPTOGRAPHYDATA_API TranslateKeyMaterialResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The outgoing KEK wrapped TR31WrappedKeyBlock.</p>
     */
    inline const WrappedWorkingKey& GetWrappedKey() const { return m_wrappedKey; }
    template<typename WrappedKeyT = WrappedWorkingKey>
    void SetWrappedKey(WrappedKeyT&& value) { m_wrappedKeyHasBeenSet = true; m_wrappedKey = std::forward<WrappedKeyT>(value); }
    template<typename WrappedKeyT = WrappedWorkingKey>
    TranslateKeyMaterialResult& WithWrappedKey(WrappedKeyT&& value) { SetWrappedKey(std::forward<WrappedKeyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    TranslateKeyMaterialResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    WrappedWorkingKey m_wrappedKey;
    bool m_wrappedKeyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PaymentCryptographyData
} // namespace Aws
