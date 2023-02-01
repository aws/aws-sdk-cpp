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
   * href="http://docs.aws.amazon.com/goto/WebAPI/pipes-2015-10-07/MSKAccessCredentials">AWS
   * API Reference</a></p>
   */
  class MSKAccessCredentials
  {
  public:
    AWS_PIPES_API MSKAccessCredentials();
    AWS_PIPES_API MSKAccessCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API MSKAccessCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PIPES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the Secrets Manager secret.</p>
     */
    inline const Aws::String& GetClientCertificateTlsAuth() const{ return m_clientCertificateTlsAuth; }

    /**
     * <p>The ARN of the Secrets Manager secret.</p>
     */
    inline bool ClientCertificateTlsAuthHasBeenSet() const { return m_clientCertificateTlsAuthHasBeenSet; }

    /**
     * <p>The ARN of the Secrets Manager secret.</p>
     */
    inline void SetClientCertificateTlsAuth(const Aws::String& value) { m_clientCertificateTlsAuthHasBeenSet = true; m_clientCertificateTlsAuth = value; }

    /**
     * <p>The ARN of the Secrets Manager secret.</p>
     */
    inline void SetClientCertificateTlsAuth(Aws::String&& value) { m_clientCertificateTlsAuthHasBeenSet = true; m_clientCertificateTlsAuth = std::move(value); }

    /**
     * <p>The ARN of the Secrets Manager secret.</p>
     */
    inline void SetClientCertificateTlsAuth(const char* value) { m_clientCertificateTlsAuthHasBeenSet = true; m_clientCertificateTlsAuth.assign(value); }

    /**
     * <p>The ARN of the Secrets Manager secret.</p>
     */
    inline MSKAccessCredentials& WithClientCertificateTlsAuth(const Aws::String& value) { SetClientCertificateTlsAuth(value); return *this;}

    /**
     * <p>The ARN of the Secrets Manager secret.</p>
     */
    inline MSKAccessCredentials& WithClientCertificateTlsAuth(Aws::String&& value) { SetClientCertificateTlsAuth(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Secrets Manager secret.</p>
     */
    inline MSKAccessCredentials& WithClientCertificateTlsAuth(const char* value) { SetClientCertificateTlsAuth(value); return *this;}


    /**
     * <p>The ARN of the Secrets Manager secret.</p>
     */
    inline const Aws::String& GetSaslScram512Auth() const{ return m_saslScram512Auth; }

    /**
     * <p>The ARN of the Secrets Manager secret.</p>
     */
    inline bool SaslScram512AuthHasBeenSet() const { return m_saslScram512AuthHasBeenSet; }

    /**
     * <p>The ARN of the Secrets Manager secret.</p>
     */
    inline void SetSaslScram512Auth(const Aws::String& value) { m_saslScram512AuthHasBeenSet = true; m_saslScram512Auth = value; }

    /**
     * <p>The ARN of the Secrets Manager secret.</p>
     */
    inline void SetSaslScram512Auth(Aws::String&& value) { m_saslScram512AuthHasBeenSet = true; m_saslScram512Auth = std::move(value); }

    /**
     * <p>The ARN of the Secrets Manager secret.</p>
     */
    inline void SetSaslScram512Auth(const char* value) { m_saslScram512AuthHasBeenSet = true; m_saslScram512Auth.assign(value); }

    /**
     * <p>The ARN of the Secrets Manager secret.</p>
     */
    inline MSKAccessCredentials& WithSaslScram512Auth(const Aws::String& value) { SetSaslScram512Auth(value); return *this;}

    /**
     * <p>The ARN of the Secrets Manager secret.</p>
     */
    inline MSKAccessCredentials& WithSaslScram512Auth(Aws::String&& value) { SetSaslScram512Auth(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Secrets Manager secret.</p>
     */
    inline MSKAccessCredentials& WithSaslScram512Auth(const char* value) { SetSaslScram512Auth(value); return *this;}

  private:

    Aws::String m_clientCertificateTlsAuth;
    bool m_clientCertificateTlsAuthHasBeenSet = false;

    Aws::String m_saslScram512Auth;
    bool m_saslScram512AuthHasBeenSet = false;
  };

} // namespace Model
} // namespace Pipes
} // namespace Aws
