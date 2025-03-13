/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pipes/Pipes_EXPORTS.h>
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
namespace Pipes
{
namespace Model
{

  /**
   * <p>The Secrets Manager secret that stores your stream credentials.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/SelfManagedKafkaAccessConfigurationCredentials">AWS
   * API Reference</a></p>
   */
  class SelfManagedKafkaAccessConfigurationCredentials
  {
  public:
    AWS_PIPES_API SelfManagedKafkaAccessConfigurationCredentials() = default;
    AWS_PIPES_API SelfManagedKafkaAccessConfigurationCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API SelfManagedKafkaAccessConfigurationCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the Secrets Manager secret.</p>
     */
    inline const Aws::String& GetBasicAuth() const { return m_basicAuth; }
    inline bool BasicAuthHasBeenSet() const { return m_basicAuthHasBeenSet; }
    template<typename BasicAuthT = Aws::String>
    void SetBasicAuth(BasicAuthT&& value) { m_basicAuthHasBeenSet = true; m_basicAuth = std::forward<BasicAuthT>(value); }
    template<typename BasicAuthT = Aws::String>
    SelfManagedKafkaAccessConfigurationCredentials& WithBasicAuth(BasicAuthT&& value) { SetBasicAuth(std::forward<BasicAuthT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Secrets Manager secret.</p>
     */
    inline const Aws::String& GetSaslScram512Auth() const { return m_saslScram512Auth; }
    inline bool SaslScram512AuthHasBeenSet() const { return m_saslScram512AuthHasBeenSet; }
    template<typename SaslScram512AuthT = Aws::String>
    void SetSaslScram512Auth(SaslScram512AuthT&& value) { m_saslScram512AuthHasBeenSet = true; m_saslScram512Auth = std::forward<SaslScram512AuthT>(value); }
    template<typename SaslScram512AuthT = Aws::String>
    SelfManagedKafkaAccessConfigurationCredentials& WithSaslScram512Auth(SaslScram512AuthT&& value) { SetSaslScram512Auth(std::forward<SaslScram512AuthT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Secrets Manager secret.</p>
     */
    inline const Aws::String& GetSaslScram256Auth() const { return m_saslScram256Auth; }
    inline bool SaslScram256AuthHasBeenSet() const { return m_saslScram256AuthHasBeenSet; }
    template<typename SaslScram256AuthT = Aws::String>
    void SetSaslScram256Auth(SaslScram256AuthT&& value) { m_saslScram256AuthHasBeenSet = true; m_saslScram256Auth = std::forward<SaslScram256AuthT>(value); }
    template<typename SaslScram256AuthT = Aws::String>
    SelfManagedKafkaAccessConfigurationCredentials& WithSaslScram256Auth(SaslScram256AuthT&& value) { SetSaslScram256Auth(std::forward<SaslScram256AuthT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Secrets Manager secret.</p>
     */
    inline const Aws::String& GetClientCertificateTlsAuth() const { return m_clientCertificateTlsAuth; }
    inline bool ClientCertificateTlsAuthHasBeenSet() const { return m_clientCertificateTlsAuthHasBeenSet; }
    template<typename ClientCertificateTlsAuthT = Aws::String>
    void SetClientCertificateTlsAuth(ClientCertificateTlsAuthT&& value) { m_clientCertificateTlsAuthHasBeenSet = true; m_clientCertificateTlsAuth = std::forward<ClientCertificateTlsAuthT>(value); }
    template<typename ClientCertificateTlsAuthT = Aws::String>
    SelfManagedKafkaAccessConfigurationCredentials& WithClientCertificateTlsAuth(ClientCertificateTlsAuthT&& value) { SetClientCertificateTlsAuth(std::forward<ClientCertificateTlsAuthT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_basicAuth;
    bool m_basicAuthHasBeenSet = false;

    Aws::String m_saslScram512Auth;
    bool m_saslScram512AuthHasBeenSet = false;

    Aws::String m_saslScram256Auth;
    bool m_saslScram256AuthHasBeenSet = false;

    Aws::String m_clientCertificateTlsAuth;
    bool m_clientCertificateTlsAuthHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
