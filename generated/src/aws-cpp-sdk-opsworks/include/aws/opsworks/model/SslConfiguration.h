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
    AWS_OPSWORKS_API SslConfiguration() = default;
    AWS_OPSWORKS_API SslConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API SslConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The contents of the certificate's domain.crt file.</p>
     */
    inline const Aws::String& GetCertificate() const { return m_certificate; }
    inline bool CertificateHasBeenSet() const { return m_certificateHasBeenSet; }
    template<typename CertificateT = Aws::String>
    void SetCertificate(CertificateT&& value) { m_certificateHasBeenSet = true; m_certificate = std::forward<CertificateT>(value); }
    template<typename CertificateT = Aws::String>
    SslConfiguration& WithCertificate(CertificateT&& value) { SetCertificate(std::forward<CertificateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private key; the contents of the certificate's domain.kex file.</p>
     */
    inline const Aws::String& GetPrivateKey() const { return m_privateKey; }
    inline bool PrivateKeyHasBeenSet() const { return m_privateKeyHasBeenSet; }
    template<typename PrivateKeyT = Aws::String>
    void SetPrivateKey(PrivateKeyT&& value) { m_privateKeyHasBeenSet = true; m_privateKey = std::forward<PrivateKeyT>(value); }
    template<typename PrivateKeyT = Aws::String>
    SslConfiguration& WithPrivateKey(PrivateKeyT&& value) { SetPrivateKey(std::forward<PrivateKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional. Can be used to specify an intermediate certificate authority key or
     * client authentication.</p>
     */
    inline const Aws::String& GetChain() const { return m_chain; }
    inline bool ChainHasBeenSet() const { return m_chainHasBeenSet; }
    template<typename ChainT = Aws::String>
    void SetChain(ChainT&& value) { m_chainHasBeenSet = true; m_chain = std::forward<ChainT>(value); }
    template<typename ChainT = Aws::String>
    SslConfiguration& WithChain(ChainT&& value) { SetChain(std::forward<ChainT>(value)); return *this;}
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
