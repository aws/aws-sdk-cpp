﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payment-cryptography/model/KeyAlgorithm.h>
#include <aws/core/utils/DateTime.h>
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
  class GetParametersForImportResult
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API GetParametersForImportResult();
    AWS_PAYMENTCRYPTOGRAPHY_API GetParametersForImportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PAYMENTCRYPTOGRAPHY_API GetParametersForImportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The wrapping key certificate in PEM format (base64 encoded) of the wrapping
     * key for use within the TR-34 key block. The certificate expires in 7 days.</p>
     */
    inline const Aws::String& GetWrappingKeyCertificate() const{ return m_wrappingKeyCertificate; }
    inline void SetWrappingKeyCertificate(const Aws::String& value) { m_wrappingKeyCertificate = value; }
    inline void SetWrappingKeyCertificate(Aws::String&& value) { m_wrappingKeyCertificate = std::move(value); }
    inline void SetWrappingKeyCertificate(const char* value) { m_wrappingKeyCertificate.assign(value); }
    inline GetParametersForImportResult& WithWrappingKeyCertificate(const Aws::String& value) { SetWrappingKeyCertificate(value); return *this;}
    inline GetParametersForImportResult& WithWrappingKeyCertificate(Aws::String&& value) { SetWrappingKeyCertificate(std::move(value)); return *this;}
    inline GetParametersForImportResult& WithWrappingKeyCertificate(const char* value) { SetWrappingKeyCertificate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Payment Cryptography root certificate authority (CA)
     * that signed the wrapping key certificate in PEM format (base64 encoded).</p>
     */
    inline const Aws::String& GetWrappingKeyCertificateChain() const{ return m_wrappingKeyCertificateChain; }
    inline void SetWrappingKeyCertificateChain(const Aws::String& value) { m_wrappingKeyCertificateChain = value; }
    inline void SetWrappingKeyCertificateChain(Aws::String&& value) { m_wrappingKeyCertificateChain = std::move(value); }
    inline void SetWrappingKeyCertificateChain(const char* value) { m_wrappingKeyCertificateChain.assign(value); }
    inline GetParametersForImportResult& WithWrappingKeyCertificateChain(const Aws::String& value) { SetWrappingKeyCertificateChain(value); return *this;}
    inline GetParametersForImportResult& WithWrappingKeyCertificateChain(Aws::String&& value) { SetWrappingKeyCertificateChain(std::move(value)); return *this;}
    inline GetParametersForImportResult& WithWrappingKeyCertificateChain(const char* value) { SetWrappingKeyCertificateChain(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The algorithm of the wrapping key for use within TR-34 WrappedKeyBlock or RSA
     * WrappedKeyCryptogram.</p>
     */
    inline const KeyAlgorithm& GetWrappingKeyAlgorithm() const{ return m_wrappingKeyAlgorithm; }
    inline void SetWrappingKeyAlgorithm(const KeyAlgorithm& value) { m_wrappingKeyAlgorithm = value; }
    inline void SetWrappingKeyAlgorithm(KeyAlgorithm&& value) { m_wrappingKeyAlgorithm = std::move(value); }
    inline GetParametersForImportResult& WithWrappingKeyAlgorithm(const KeyAlgorithm& value) { SetWrappingKeyAlgorithm(value); return *this;}
    inline GetParametersForImportResult& WithWrappingKeyAlgorithm(KeyAlgorithm&& value) { SetWrappingKeyAlgorithm(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The import token to initiate key import into Amazon Web Services Payment
     * Cryptography. The import token expires after 7 days. You can use the same import
     * token to import multiple keys to the same service account.</p>
     */
    inline const Aws::String& GetImportToken() const{ return m_importToken; }
    inline void SetImportToken(const Aws::String& value) { m_importToken = value; }
    inline void SetImportToken(Aws::String&& value) { m_importToken = std::move(value); }
    inline void SetImportToken(const char* value) { m_importToken.assign(value); }
    inline GetParametersForImportResult& WithImportToken(const Aws::String& value) { SetImportToken(value); return *this;}
    inline GetParametersForImportResult& WithImportToken(Aws::String&& value) { SetImportToken(std::move(value)); return *this;}
    inline GetParametersForImportResult& WithImportToken(const char* value) { SetImportToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The validity period of the import token.</p>
     */
    inline const Aws::Utils::DateTime& GetParametersValidUntilTimestamp() const{ return m_parametersValidUntilTimestamp; }
    inline void SetParametersValidUntilTimestamp(const Aws::Utils::DateTime& value) { m_parametersValidUntilTimestamp = value; }
    inline void SetParametersValidUntilTimestamp(Aws::Utils::DateTime&& value) { m_parametersValidUntilTimestamp = std::move(value); }
    inline GetParametersForImportResult& WithParametersValidUntilTimestamp(const Aws::Utils::DateTime& value) { SetParametersValidUntilTimestamp(value); return *this;}
    inline GetParametersForImportResult& WithParametersValidUntilTimestamp(Aws::Utils::DateTime&& value) { SetParametersValidUntilTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetParametersForImportResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetParametersForImportResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetParametersForImportResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_wrappingKeyCertificate;

    Aws::String m_wrappingKeyCertificateChain;

    KeyAlgorithm m_wrappingKeyAlgorithm;

    Aws::String m_importToken;

    Aws::Utils::DateTime m_parametersValidUntilTimestamp;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
