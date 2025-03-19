/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Information about the OIDC-compliant identity provider (IdP) used to
   * authenticate end users of an Amazon Q Business web experience.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/OpenIDConnectProviderConfiguration">AWS
   * API Reference</a></p>
   */
  class OpenIDConnectProviderConfiguration
  {
  public:
    AWS_QBUSINESS_API OpenIDConnectProviderConfiguration() = default;
    AWS_QBUSINESS_API OpenIDConnectProviderConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API OpenIDConnectProviderConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a Secrets Manager secret containing the
     * OIDC client secret.</p>
     */
    inline const Aws::String& GetSecretsArn() const { return m_secretsArn; }
    inline bool SecretsArnHasBeenSet() const { return m_secretsArnHasBeenSet; }
    template<typename SecretsArnT = Aws::String>
    void SetSecretsArn(SecretsArnT&& value) { m_secretsArnHasBeenSet = true; m_secretsArn = std::forward<SecretsArnT>(value); }
    template<typename SecretsArnT = Aws::String>
    OpenIDConnectProviderConfiguration& WithSecretsArn(SecretsArnT&& value) { SetSecretsArn(std::forward<SecretsArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An IAM role with permissions to access KMS to decrypt the Secrets Manager
     * secret containing your OIDC client secret.</p>
     */
    inline const Aws::String& GetSecretsRole() const { return m_secretsRole; }
    inline bool SecretsRoleHasBeenSet() const { return m_secretsRoleHasBeenSet; }
    template<typename SecretsRoleT = Aws::String>
    void SetSecretsRole(SecretsRoleT&& value) { m_secretsRoleHasBeenSet = true; m_secretsRole = std::forward<SecretsRoleT>(value); }
    template<typename SecretsRoleT = Aws::String>
    OpenIDConnectProviderConfiguration& WithSecretsRole(SecretsRoleT&& value) { SetSecretsRole(std::forward<SecretsRoleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_secretsArn;
    bool m_secretsArnHasBeenSet = false;

    Aws::String m_secretsRole;
    bool m_secretsRoleHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
