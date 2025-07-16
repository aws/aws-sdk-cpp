/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace mediapackagev2
{
namespace Model
{

  /**
   * <p>The settings to enable CDN authorization headers in
   * MediaPackage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/CdnAuthConfiguration">AWS
   * API Reference</a></p>
   */
  class CdnAuthConfiguration
  {
  public:
    AWS_MEDIAPACKAGEV2_API CdnAuthConfiguration() = default;
    AWS_MEDIAPACKAGEV2_API CdnAuthConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API CdnAuthConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN for the secret in Secrets Manager that your CDN uses for
     * authorization to access the endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCdnIdentifierSecretArns() const { return m_cdnIdentifierSecretArns; }
    inline bool CdnIdentifierSecretArnsHasBeenSet() const { return m_cdnIdentifierSecretArnsHasBeenSet; }
    template<typename CdnIdentifierSecretArnsT = Aws::Vector<Aws::String>>
    void SetCdnIdentifierSecretArns(CdnIdentifierSecretArnsT&& value) { m_cdnIdentifierSecretArnsHasBeenSet = true; m_cdnIdentifierSecretArns = std::forward<CdnIdentifierSecretArnsT>(value); }
    template<typename CdnIdentifierSecretArnsT = Aws::Vector<Aws::String>>
    CdnAuthConfiguration& WithCdnIdentifierSecretArns(CdnIdentifierSecretArnsT&& value) { SetCdnIdentifierSecretArns(std::forward<CdnIdentifierSecretArnsT>(value)); return *this;}
    template<typename CdnIdentifierSecretArnsT = Aws::String>
    CdnAuthConfiguration& AddCdnIdentifierSecretArns(CdnIdentifierSecretArnsT&& value) { m_cdnIdentifierSecretArnsHasBeenSet = true; m_cdnIdentifierSecretArns.emplace_back(std::forward<CdnIdentifierSecretArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN for the IAM role that gives MediaPackage read access to Secrets
     * Manager and KMS for CDN authorization.</p>
     */
    inline const Aws::String& GetSecretsRoleArn() const { return m_secretsRoleArn; }
    inline bool SecretsRoleArnHasBeenSet() const { return m_secretsRoleArnHasBeenSet; }
    template<typename SecretsRoleArnT = Aws::String>
    void SetSecretsRoleArn(SecretsRoleArnT&& value) { m_secretsRoleArnHasBeenSet = true; m_secretsRoleArn = std::forward<SecretsRoleArnT>(value); }
    template<typename SecretsRoleArnT = Aws::String>
    CdnAuthConfiguration& WithSecretsRoleArn(SecretsRoleArnT&& value) { SetSecretsRoleArn(std::forward<SecretsRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_cdnIdentifierSecretArns;
    bool m_cdnIdentifierSecretArnsHasBeenSet = false;

    Aws::String m_secretsRoleArn;
    bool m_secretsRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
