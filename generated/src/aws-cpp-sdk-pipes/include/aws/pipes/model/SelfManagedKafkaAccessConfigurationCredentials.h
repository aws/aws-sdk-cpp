﻿/**
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
    AWS_PIPES_API SelfManagedKafkaAccessConfigurationCredentials();
    AWS_PIPES_API SelfManagedKafkaAccessConfigurationCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API SelfManagedKafkaAccessConfigurationCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the Secrets Manager secret.</p>
     */
    inline const Aws::String& GetBasicAuth() const{ return m_basicAuth; }
    inline bool BasicAuthHasBeenSet() const { return m_basicAuthHasBeenSet; }
    inline void SetBasicAuth(const Aws::String& value) { m_basicAuthHasBeenSet = true; m_basicAuth = value; }
    inline void SetBasicAuth(Aws::String&& value) { m_basicAuthHasBeenSet = true; m_basicAuth = std::move(value); }
    inline void SetBasicAuth(const char* value) { m_basicAuthHasBeenSet = true; m_basicAuth.assign(value); }
    inline SelfManagedKafkaAccessConfigurationCredentials& WithBasicAuth(const Aws::String& value) { SetBasicAuth(value); return *this;}
    inline SelfManagedKafkaAccessConfigurationCredentials& WithBasicAuth(Aws::String&& value) { SetBasicAuth(std::move(value)); return *this;}
    inline SelfManagedKafkaAccessConfigurationCredentials& WithBasicAuth(const char* value) { SetBasicAuth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Secrets Manager secret.</p>
     */
    inline const Aws::String& GetSaslScram512Auth() const{ return m_saslScram512Auth; }
    inline bool SaslScram512AuthHasBeenSet() const { return m_saslScram512AuthHasBeenSet; }
    inline void SetSaslScram512Auth(const Aws::String& value) { m_saslScram512AuthHasBeenSet = true; m_saslScram512Auth = value; }
    inline void SetSaslScram512Auth(Aws::String&& value) { m_saslScram512AuthHasBeenSet = true; m_saslScram512Auth = std::move(value); }
    inline void SetSaslScram512Auth(const char* value) { m_saslScram512AuthHasBeenSet = true; m_saslScram512Auth.assign(value); }
    inline SelfManagedKafkaAccessConfigurationCredentials& WithSaslScram512Auth(const Aws::String& value) { SetSaslScram512Auth(value); return *this;}
    inline SelfManagedKafkaAccessConfigurationCredentials& WithSaslScram512Auth(Aws::String&& value) { SetSaslScram512Auth(std::move(value)); return *this;}
    inline SelfManagedKafkaAccessConfigurationCredentials& WithSaslScram512Auth(const char* value) { SetSaslScram512Auth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Secrets Manager secret.</p>
     */
    inline const Aws::String& GetSaslScram256Auth() const{ return m_saslScram256Auth; }
    inline bool SaslScram256AuthHasBeenSet() const { return m_saslScram256AuthHasBeenSet; }
    inline void SetSaslScram256Auth(const Aws::String& value) { m_saslScram256AuthHasBeenSet = true; m_saslScram256Auth = value; }
    inline void SetSaslScram256Auth(Aws::String&& value) { m_saslScram256AuthHasBeenSet = true; m_saslScram256Auth = std::move(value); }
    inline void SetSaslScram256Auth(const char* value) { m_saslScram256AuthHasBeenSet = true; m_saslScram256Auth.assign(value); }
    inline SelfManagedKafkaAccessConfigurationCredentials& WithSaslScram256Auth(const Aws::String& value) { SetSaslScram256Auth(value); return *this;}
    inline SelfManagedKafkaAccessConfigurationCredentials& WithSaslScram256Auth(Aws::String&& value) { SetSaslScram256Auth(std::move(value)); return *this;}
    inline SelfManagedKafkaAccessConfigurationCredentials& WithSaslScram256Auth(const char* value) { SetSaslScram256Auth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Secrets Manager secret.</p>
     */
    inline const Aws::String& GetClientCertificateTlsAuth() const{ return m_clientCertificateTlsAuth; }
    inline bool ClientCertificateTlsAuthHasBeenSet() const { return m_clientCertificateTlsAuthHasBeenSet; }
    inline void SetClientCertificateTlsAuth(const Aws::String& value) { m_clientCertificateTlsAuthHasBeenSet = true; m_clientCertificateTlsAuth = value; }
    inline void SetClientCertificateTlsAuth(Aws::String&& value) { m_clientCertificateTlsAuthHasBeenSet = true; m_clientCertificateTlsAuth = std::move(value); }
    inline void SetClientCertificateTlsAuth(const char* value) { m_clientCertificateTlsAuthHasBeenSet = true; m_clientCertificateTlsAuth.assign(value); }
    inline SelfManagedKafkaAccessConfigurationCredentials& WithClientCertificateTlsAuth(const Aws::String& value) { SetClientCertificateTlsAuth(value); return *this;}
    inline SelfManagedKafkaAccessConfigurationCredentials& WithClientCertificateTlsAuth(Aws::String&& value) { SetClientCertificateTlsAuth(std::move(value)); return *this;}
    inline SelfManagedKafkaAccessConfigurationCredentials& WithClientCertificateTlsAuth(const char* value) { SetClientCertificateTlsAuth(value); return *this;}
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
