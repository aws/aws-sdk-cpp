/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/SSEAlgorithm.h>
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
namespace S3Tables
{
namespace Model
{

  /**
   * <p>Configuration specifying how data should be encrypted. This structure defines
   * the encryption algorithm and optional KMS key to be used for server-side
   * encryption.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/EncryptionConfiguration">AWS
   * API Reference</a></p>
   */
  class EncryptionConfiguration
  {
  public:
    AWS_S3TABLES_API EncryptionConfiguration() = default;
    AWS_S3TABLES_API EncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3TABLES_API EncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The server-side encryption algorithm to use. Valid values are
     * <code>AES256</code> for S3-managed encryption keys, or <code>aws:kms</code> for
     * Amazon Web Services KMS-managed encryption keys. If you choose SSE-KMS
     * encryption you must grant the S3 Tables maintenance principal access to your KMS
     * key. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-tables-kms-permissions.html">Permissions
     * requirements for S3 Tables SSE-KMS encryption</a>.</p>
     */
    inline SSEAlgorithm GetSseAlgorithm() const { return m_sseAlgorithm; }
    inline bool SseAlgorithmHasBeenSet() const { return m_sseAlgorithmHasBeenSet; }
    inline void SetSseAlgorithm(SSEAlgorithm value) { m_sseAlgorithmHasBeenSet = true; m_sseAlgorithm = value; }
    inline EncryptionConfiguration& WithSseAlgorithm(SSEAlgorithm value) { SetSseAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to use for encryption. This
     * field is required only when <code>sseAlgorithm</code> is set to
     * <code>aws:kms</code>.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    EncryptionConfiguration& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}
  private:

    SSEAlgorithm m_sseAlgorithm{SSEAlgorithm::NOT_SET};
    bool m_sseAlgorithmHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
