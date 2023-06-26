/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>The credentials for access to a private registry.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsCodeBuildProjectEnvironmentRegistryCredential">AWS
   * API Reference</a></p>
   */
  class AwsCodeBuildProjectEnvironmentRegistryCredential
  {
  public:
    AWS_SECURITYHUB_API AwsCodeBuildProjectEnvironmentRegistryCredential();
    AWS_SECURITYHUB_API AwsCodeBuildProjectEnvironmentRegistryCredential(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCodeBuildProjectEnvironmentRegistryCredential& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN or name of credentials created using Secrets Manager.</p> 
     * <p>The credential can use the name of the credentials only if they exist in your
     * current Amazon Web Services Region. </p> 
     */
    inline const Aws::String& GetCredential() const{ return m_credential; }

    /**
     * <p>The ARN or name of credentials created using Secrets Manager.</p> 
     * <p>The credential can use the name of the credentials only if they exist in your
     * current Amazon Web Services Region. </p> 
     */
    inline bool CredentialHasBeenSet() const { return m_credentialHasBeenSet; }

    /**
     * <p>The ARN or name of credentials created using Secrets Manager.</p> 
     * <p>The credential can use the name of the credentials only if they exist in your
     * current Amazon Web Services Region. </p> 
     */
    inline void SetCredential(const Aws::String& value) { m_credentialHasBeenSet = true; m_credential = value; }

    /**
     * <p>The ARN or name of credentials created using Secrets Manager.</p> 
     * <p>The credential can use the name of the credentials only if they exist in your
     * current Amazon Web Services Region. </p> 
     */
    inline void SetCredential(Aws::String&& value) { m_credentialHasBeenSet = true; m_credential = std::move(value); }

    /**
     * <p>The ARN or name of credentials created using Secrets Manager.</p> 
     * <p>The credential can use the name of the credentials only if they exist in your
     * current Amazon Web Services Region. </p> 
     */
    inline void SetCredential(const char* value) { m_credentialHasBeenSet = true; m_credential.assign(value); }

    /**
     * <p>The ARN or name of credentials created using Secrets Manager.</p> 
     * <p>The credential can use the name of the credentials only if they exist in your
     * current Amazon Web Services Region. </p> 
     */
    inline AwsCodeBuildProjectEnvironmentRegistryCredential& WithCredential(const Aws::String& value) { SetCredential(value); return *this;}

    /**
     * <p>The ARN or name of credentials created using Secrets Manager.</p> 
     * <p>The credential can use the name of the credentials only if they exist in your
     * current Amazon Web Services Region. </p> 
     */
    inline AwsCodeBuildProjectEnvironmentRegistryCredential& WithCredential(Aws::String&& value) { SetCredential(std::move(value)); return *this;}

    /**
     * <p>The ARN or name of credentials created using Secrets Manager.</p> 
     * <p>The credential can use the name of the credentials only if they exist in your
     * current Amazon Web Services Region. </p> 
     */
    inline AwsCodeBuildProjectEnvironmentRegistryCredential& WithCredential(const char* value) { SetCredential(value); return *this;}


    /**
     * <p>The service that created the credentials to access a private Docker
     * registry.</p> <p>The valid value,<code> SECRETS_MANAGER</code>, is for Secrets
     * Manager.</p>
     */
    inline const Aws::String& GetCredentialProvider() const{ return m_credentialProvider; }

    /**
     * <p>The service that created the credentials to access a private Docker
     * registry.</p> <p>The valid value,<code> SECRETS_MANAGER</code>, is for Secrets
     * Manager.</p>
     */
    inline bool CredentialProviderHasBeenSet() const { return m_credentialProviderHasBeenSet; }

    /**
     * <p>The service that created the credentials to access a private Docker
     * registry.</p> <p>The valid value,<code> SECRETS_MANAGER</code>, is for Secrets
     * Manager.</p>
     */
    inline void SetCredentialProvider(const Aws::String& value) { m_credentialProviderHasBeenSet = true; m_credentialProvider = value; }

    /**
     * <p>The service that created the credentials to access a private Docker
     * registry.</p> <p>The valid value,<code> SECRETS_MANAGER</code>, is for Secrets
     * Manager.</p>
     */
    inline void SetCredentialProvider(Aws::String&& value) { m_credentialProviderHasBeenSet = true; m_credentialProvider = std::move(value); }

    /**
     * <p>The service that created the credentials to access a private Docker
     * registry.</p> <p>The valid value,<code> SECRETS_MANAGER</code>, is for Secrets
     * Manager.</p>
     */
    inline void SetCredentialProvider(const char* value) { m_credentialProviderHasBeenSet = true; m_credentialProvider.assign(value); }

    /**
     * <p>The service that created the credentials to access a private Docker
     * registry.</p> <p>The valid value,<code> SECRETS_MANAGER</code>, is for Secrets
     * Manager.</p>
     */
    inline AwsCodeBuildProjectEnvironmentRegistryCredential& WithCredentialProvider(const Aws::String& value) { SetCredentialProvider(value); return *this;}

    /**
     * <p>The service that created the credentials to access a private Docker
     * registry.</p> <p>The valid value,<code> SECRETS_MANAGER</code>, is for Secrets
     * Manager.</p>
     */
    inline AwsCodeBuildProjectEnvironmentRegistryCredential& WithCredentialProvider(Aws::String&& value) { SetCredentialProvider(std::move(value)); return *this;}

    /**
     * <p>The service that created the credentials to access a private Docker
     * registry.</p> <p>The valid value,<code> SECRETS_MANAGER</code>, is for Secrets
     * Manager.</p>
     */
    inline AwsCodeBuildProjectEnvironmentRegistryCredential& WithCredentialProvider(const char* value) { SetCredentialProvider(value); return *this;}

  private:

    Aws::String m_credential;
    bool m_credentialHasBeenSet = false;

    Aws::String m_credentialProvider;
    bool m_credentialProviderHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
