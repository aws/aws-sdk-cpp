/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/payment-cryptography/PaymentCryptography_EXPORTS.h>
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
  class GetPublicKeyCertificateResult
  {
  public:
    AWS_PAYMENTCRYPTOGRAPHY_API GetPublicKeyCertificateResult();
    AWS_PAYMENTCRYPTOGRAPHY_API GetPublicKeyCertificateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PAYMENTCRYPTOGRAPHY_API GetPublicKeyCertificateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The public key component of the asymmetric key pair in a certificate PEM
     * format (base64 encoded). It is signed by the root certificate authority (CA).
     * The certificate expires in 90 days.</p>
     */
    inline const Aws::String& GetKeyCertificate() const{ return m_keyCertificate; }

    /**
     * <p>The public key component of the asymmetric key pair in a certificate PEM
     * format (base64 encoded). It is signed by the root certificate authority (CA).
     * The certificate expires in 90 days.</p>
     */
    inline void SetKeyCertificate(const Aws::String& value) { m_keyCertificate = value; }

    /**
     * <p>The public key component of the asymmetric key pair in a certificate PEM
     * format (base64 encoded). It is signed by the root certificate authority (CA).
     * The certificate expires in 90 days.</p>
     */
    inline void SetKeyCertificate(Aws::String&& value) { m_keyCertificate = std::move(value); }

    /**
     * <p>The public key component of the asymmetric key pair in a certificate PEM
     * format (base64 encoded). It is signed by the root certificate authority (CA).
     * The certificate expires in 90 days.</p>
     */
    inline void SetKeyCertificate(const char* value) { m_keyCertificate.assign(value); }

    /**
     * <p>The public key component of the asymmetric key pair in a certificate PEM
     * format (base64 encoded). It is signed by the root certificate authority (CA).
     * The certificate expires in 90 days.</p>
     */
    inline GetPublicKeyCertificateResult& WithKeyCertificate(const Aws::String& value) { SetKeyCertificate(value); return *this;}

    /**
     * <p>The public key component of the asymmetric key pair in a certificate PEM
     * format (base64 encoded). It is signed by the root certificate authority (CA).
     * The certificate expires in 90 days.</p>
     */
    inline GetPublicKeyCertificateResult& WithKeyCertificate(Aws::String&& value) { SetKeyCertificate(std::move(value)); return *this;}

    /**
     * <p>The public key component of the asymmetric key pair in a certificate PEM
     * format (base64 encoded). It is signed by the root certificate authority (CA).
     * The certificate expires in 90 days.</p>
     */
    inline GetPublicKeyCertificateResult& WithKeyCertificate(const char* value) { SetKeyCertificate(value); return *this;}


    /**
     * <p>The root certificate authority (CA) that signed the public key certificate in
     * PEM format (base64 encoded) of the asymmetric key pair.</p>
     */
    inline const Aws::String& GetKeyCertificateChain() const{ return m_keyCertificateChain; }

    /**
     * <p>The root certificate authority (CA) that signed the public key certificate in
     * PEM format (base64 encoded) of the asymmetric key pair.</p>
     */
    inline void SetKeyCertificateChain(const Aws::String& value) { m_keyCertificateChain = value; }

    /**
     * <p>The root certificate authority (CA) that signed the public key certificate in
     * PEM format (base64 encoded) of the asymmetric key pair.</p>
     */
    inline void SetKeyCertificateChain(Aws::String&& value) { m_keyCertificateChain = std::move(value); }

    /**
     * <p>The root certificate authority (CA) that signed the public key certificate in
     * PEM format (base64 encoded) of the asymmetric key pair.</p>
     */
    inline void SetKeyCertificateChain(const char* value) { m_keyCertificateChain.assign(value); }

    /**
     * <p>The root certificate authority (CA) that signed the public key certificate in
     * PEM format (base64 encoded) of the asymmetric key pair.</p>
     */
    inline GetPublicKeyCertificateResult& WithKeyCertificateChain(const Aws::String& value) { SetKeyCertificateChain(value); return *this;}

    /**
     * <p>The root certificate authority (CA) that signed the public key certificate in
     * PEM format (base64 encoded) of the asymmetric key pair.</p>
     */
    inline GetPublicKeyCertificateResult& WithKeyCertificateChain(Aws::String&& value) { SetKeyCertificateChain(std::move(value)); return *this;}

    /**
     * <p>The root certificate authority (CA) that signed the public key certificate in
     * PEM format (base64 encoded) of the asymmetric key pair.</p>
     */
    inline GetPublicKeyCertificateResult& WithKeyCertificateChain(const char* value) { SetKeyCertificateChain(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetPublicKeyCertificateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetPublicKeyCertificateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetPublicKeyCertificateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_keyCertificate;

    Aws::String m_keyCertificateChain;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PaymentCryptography
} // namespace Aws
