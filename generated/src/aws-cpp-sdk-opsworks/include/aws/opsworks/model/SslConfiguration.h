/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes an app's SSL configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/SslConfiguration">AWS
   * API Reference</a></p>
   */
  class SslConfiguration
  {
  public:
    AWS_OPSWORKS_API SslConfiguration();
    AWS_OPSWORKS_API SslConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API SslConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The contents of the certificate's domain.crt file.</p>
     */
    inline const Aws::String& GetCertificate() const{ return m_certificate; }
    inline bool CertificateHasBeenSet() const { return m_certificateHasBeenSet; }
    inline void SetCertificate(const Aws::String& value) { m_certificateHasBeenSet = true; m_certificate = value; }
    inline void SetCertificate(Aws::String&& value) { m_certificateHasBeenSet = true; m_certificate = std::move(value); }
    inline void SetCertificate(const char* value) { m_certificateHasBeenSet = true; m_certificate.assign(value); }
    inline SslConfiguration& WithCertificate(const Aws::String& value) { SetCertificate(value); return *this;}
    inline SslConfiguration& WithCertificate(Aws::String&& value) { SetCertificate(std::move(value)); return *this;}
    inline SslConfiguration& WithCertificate(const char* value) { SetCertificate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private key; the contents of the certificate's domain.kex file.</p>
     */
    inline const Aws::String& GetPrivateKey() const{ return m_privateKey; }
    inline bool PrivateKeyHasBeenSet() const { return m_privateKeyHasBeenSet; }
    inline void SetPrivateKey(const Aws::String& value) { m_privateKeyHasBeenSet = true; m_privateKey = value; }
    inline void SetPrivateKey(Aws::String&& value) { m_privateKeyHasBeenSet = true; m_privateKey = std::move(value); }
    inline void SetPrivateKey(const char* value) { m_privateKeyHasBeenSet = true; m_privateKey.assign(value); }
    inline SslConfiguration& WithPrivateKey(const Aws::String& value) { SetPrivateKey(value); return *this;}
    inline SslConfiguration& WithPrivateKey(Aws::String&& value) { SetPrivateKey(std::move(value)); return *this;}
    inline SslConfiguration& WithPrivateKey(const char* value) { SetPrivateKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional. Can be used to specify an intermediate certificate authority key or
     * client authentication.</p>
     */
    inline const Aws::String& GetChain() const{ return m_chain; }
    inline bool ChainHasBeenSet() const { return m_chainHasBeenSet; }
    inline void SetChain(const Aws::String& value) { m_chainHasBeenSet = true; m_chain = value; }
    inline void SetChain(Aws::String&& value) { m_chainHasBeenSet = true; m_chain = std::move(value); }
    inline void SetChain(const char* value) { m_chainHasBeenSet = true; m_chain.assign(value); }
    inline SslConfiguration& WithChain(const Aws::String& value) { SetChain(value); return *this;}
    inline SslConfiguration& WithChain(Aws::String&& value) { SetChain(std::move(value)); return *this;}
    inline SslConfiguration& WithChain(const char* value) { SetChain(value); return *this;}
    ///@}
  private:

    Aws::String m_certificate;
    bool m_certificateHasBeenSet = false;

    Aws::String m_privateKey;
    bool m_privateKeyHasBeenSet = false;

    Aws::String m_chain;
    bool m_chainHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
