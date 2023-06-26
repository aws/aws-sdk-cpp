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
    AWS_MEDIAPACKAGEVOD_API Authorization();
    AWS_MEDIAPACKAGEVOD_API Authorization(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEVOD_API Authorization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEVOD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The Amazon Resource Name (ARN) for the secret in AWS Secrets Manager that is
     * used for CDN authorization.
     */
    inline const Aws::String& GetCdnIdentifierSecret() const{ return m_cdnIdentifierSecret; }

    /**
     * The Amazon Resource Name (ARN) for the secret in AWS Secrets Manager that is
     * used for CDN authorization.
     */
    inline bool CdnIdentifierSecretHasBeenSet() const { return m_cdnIdentifierSecretHasBeenSet; }

    /**
     * The Amazon Resource Name (ARN) for the secret in AWS Secrets Manager that is
     * used for CDN authorization.
     */
    inline void SetCdnIdentifierSecret(const Aws::String& value) { m_cdnIdentifierSecretHasBeenSet = true; m_cdnIdentifierSecret = value; }

    /**
     * The Amazon Resource Name (ARN) for the secret in AWS Secrets Manager that is
     * used for CDN authorization.
     */
    inline void SetCdnIdentifierSecret(Aws::String&& value) { m_cdnIdentifierSecretHasBeenSet = true; m_cdnIdentifierSecret = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) for the secret in AWS Secrets Manager that is
     * used for CDN authorization.
     */
    inline void SetCdnIdentifierSecret(const char* value) { m_cdnIdentifierSecretHasBeenSet = true; m_cdnIdentifierSecret.assign(value); }

    /**
     * The Amazon Resource Name (ARN) for the secret in AWS Secrets Manager that is
     * used for CDN authorization.
     */
    inline Authorization& WithCdnIdentifierSecret(const Aws::String& value) { SetCdnIdentifierSecret(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) for the secret in AWS Secrets Manager that is
     * used for CDN authorization.
     */
    inline Authorization& WithCdnIdentifierSecret(Aws::String&& value) { SetCdnIdentifierSecret(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) for the secret in AWS Secrets Manager that is
     * used for CDN authorization.
     */
    inline Authorization& WithCdnIdentifierSecret(const char* value) { SetCdnIdentifierSecret(value); return *this;}


    /**
     * The Amazon Resource Name (ARN) for the IAM role that allows MediaPackage to
     * communicate with AWS Secrets Manager.
     */
    inline const Aws::String& GetSecretsRoleArn() const{ return m_secretsRoleArn; }

    /**
     * The Amazon Resource Name (ARN) for the IAM role that allows MediaPackage to
     * communicate with AWS Secrets Manager.
     */
    inline bool SecretsRoleArnHasBeenSet() const { return m_secretsRoleArnHasBeenSet; }

    /**
     * The Amazon Resource Name (ARN) for the IAM role that allows MediaPackage to
     * communicate with AWS Secrets Manager.
     */
    inline void SetSecretsRoleArn(const Aws::String& value) { m_secretsRoleArnHasBeenSet = true; m_secretsRoleArn = value; }

    /**
     * The Amazon Resource Name (ARN) for the IAM role that allows MediaPackage to
     * communicate with AWS Secrets Manager.
     */
    inline void SetSecretsRoleArn(Aws::String&& value) { m_secretsRoleArnHasBeenSet = true; m_secretsRoleArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) for the IAM role that allows MediaPackage to
     * communicate with AWS Secrets Manager.
     */
    inline void SetSecretsRoleArn(const char* value) { m_secretsRoleArnHasBeenSet = true; m_secretsRoleArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) for the IAM role that allows MediaPackage to
     * communicate with AWS Secrets Manager.
     */
    inline Authorization& WithSecretsRoleArn(const Aws::String& value) { SetSecretsRoleArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) for the IAM role that allows MediaPackage to
     * communicate with AWS Secrets Manager.
     */
    inline Authorization& WithSecretsRoleArn(Aws::String&& value) { SetSecretsRoleArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) for the IAM role that allows MediaPackage to
     * communicate with AWS Secrets Manager.
     */
    inline Authorization& WithSecretsRoleArn(const char* value) { SetSecretsRoleArn(value); return *this;}

  private:

    Aws::String m_cdnIdentifierSecret;
    bool m_cdnIdentifierSecretHasBeenSet = false;

    Aws::String m_secretsRoleArn;
    bool m_secretsRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
