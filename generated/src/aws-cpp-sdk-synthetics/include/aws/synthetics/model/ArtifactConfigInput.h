/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/synthetics/model/S3EncryptionConfig.h>
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
namespace Synthetics
{
namespace Model
{

  /**
   * <p>A structure that contains the configuration for canary artifacts, including
   * the encryption-at-rest settings for artifacts that the canary uploads to Amazon
   * S3.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/ArtifactConfigInput">AWS
   * API Reference</a></p>
   */
  class ArtifactConfigInput
  {
  public:
    AWS_SYNTHETICS_API ArtifactConfigInput() = default;
    AWS_SYNTHETICS_API ArtifactConfigInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API ArtifactConfigInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A structure that contains the configuration of the encryption-at-rest
     * settings for artifacts that the canary uploads to Amazon S3. Artifact encryption
     * functionality is available only for canaries that use Synthetics runtime version
     * syn-nodejs-puppeteer-3.3 or later. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_artifact_encryption.html">Encrypting
     * canary artifacts</a> </p>
     */
    inline const S3EncryptionConfig& GetS3Encryption() const { return m_s3Encryption; }
    inline bool S3EncryptionHasBeenSet() const { return m_s3EncryptionHasBeenSet; }
    template<typename S3EncryptionT = S3EncryptionConfig>
    void SetS3Encryption(S3EncryptionT&& value) { m_s3EncryptionHasBeenSet = true; m_s3Encryption = std::forward<S3EncryptionT>(value); }
    template<typename S3EncryptionT = S3EncryptionConfig>
    ArtifactConfigInput& WithS3Encryption(S3EncryptionT&& value) { SetS3Encryption(std::forward<S3EncryptionT>(value)); return *this;}
    ///@}
  private:

    S3EncryptionConfig m_s3Encryption;
    bool m_s3EncryptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
