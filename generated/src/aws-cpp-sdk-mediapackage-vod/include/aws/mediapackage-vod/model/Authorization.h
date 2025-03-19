/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
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
namespace MediaPackageVod
{
namespace Model
{

  /**
   * CDN Authorization credentials<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackage-vod-2018-11-07/Authorization">AWS
   * API Reference</a></p>
   */
  class Authorization
  {
  public:
    AWS_MEDIAPACKAGEVOD_API Authorization() = default;
    AWS_MEDIAPACKAGEVOD_API Authorization(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEVOD_API Authorization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEVOD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The Amazon Resource Name (ARN) for the secret in AWS Secrets Manager that is
     * used for CDN authorization.
     */
    inline const Aws::String& GetCdnIdentifierSecret() const { return m_cdnIdentifierSecret; }
    inline bool CdnIdentifierSecretHasBeenSet() const { return m_cdnIdentifierSecretHasBeenSet; }
    template<typename CdnIdentifierSecretT = Aws::String>
    void SetCdnIdentifierSecret(CdnIdentifierSecretT&& value) { m_cdnIdentifierSecretHasBeenSet = true; m_cdnIdentifierSecret = std::forward<CdnIdentifierSecretT>(value); }
    template<typename CdnIdentifierSecretT = Aws::String>
    Authorization& WithCdnIdentifierSecret(CdnIdentifierSecretT&& value) { SetCdnIdentifierSecret(std::forward<CdnIdentifierSecretT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The Amazon Resource Name (ARN) for the IAM role that allows MediaPackage to
     * communicate with AWS Secrets Manager.
     */
    inline const Aws::String& GetSecretsRoleArn() const { return m_secretsRoleArn; }
    inline bool SecretsRoleArnHasBeenSet() const { return m_secretsRoleArnHasBeenSet; }
    template<typename SecretsRoleArnT = Aws::String>
    void SetSecretsRoleArn(SecretsRoleArnT&& value) { m_secretsRoleArnHasBeenSet = true; m_secretsRoleArn = std::forward<SecretsRoleArnT>(value); }
    template<typename SecretsRoleArnT = Aws::String>
    Authorization& WithSecretsRoleArn(SecretsRoleArnT&& value) { SetSecretsRoleArn(std::forward<SecretsRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cdnIdentifierSecret;
    bool m_cdnIdentifierSecretHasBeenSet = false;

    Aws::String m_secretsRoleArn;
    bool m_secretsRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
