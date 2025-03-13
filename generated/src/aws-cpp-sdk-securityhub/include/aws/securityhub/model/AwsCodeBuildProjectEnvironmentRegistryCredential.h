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
    AWS_SECURITYHUB_API AwsCodeBuildProjectEnvironmentRegistryCredential() = default;
    AWS_SECURITYHUB_API AwsCodeBuildProjectEnvironmentRegistryCredential(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsCodeBuildProjectEnvironmentRegistryCredential& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN or name of credentials created using Secrets Manager.</p> 
     * <p>The credential can use the name of the credentials only if they exist in your
     * current Amazon Web Services Region. </p> 
     */
    inline const Aws::String& GetCredential() const { return m_credential; }
    inline bool CredentialHasBeenSet() const { return m_credentialHasBeenSet; }
    template<typename CredentialT = Aws::String>
    void SetCredential(CredentialT&& value) { m_credentialHasBeenSet = true; m_credential = std::forward<CredentialT>(value); }
    template<typename CredentialT = Aws::String>
    AwsCodeBuildProjectEnvironmentRegistryCredential& WithCredential(CredentialT&& value) { SetCredential(std::forward<CredentialT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service that created the credentials to access a private Docker
     * registry.</p> <p>The valid value,<code> SECRETS_MANAGER</code>, is for Secrets
     * Manager.</p>
     */
    inline const Aws::String& GetCredentialProvider() const { return m_credentialProvider; }
    inline bool CredentialProviderHasBeenSet() const { return m_credentialProviderHasBeenSet; }
    template<typename CredentialProviderT = Aws::String>
    void SetCredentialProvider(CredentialProviderT&& value) { m_credentialProviderHasBeenSet = true; m_credentialProvider = std::forward<CredentialProviderT>(value); }
    template<typename CredentialProviderT = Aws::String>
    AwsCodeBuildProjectEnvironmentRegistryCredential& WithCredentialProvider(CredentialProviderT&& value) { SetCredentialProvider(std::forward<CredentialProviderT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_credential;
    bool m_credentialHasBeenSet = false;

    Aws::String m_credentialProvider;
    bool m_credentialProviderHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
