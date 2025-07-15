/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/TableSseAlgorithm.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{

  /**
   * <p> The encryption settings for an S3 Metadata journal table or inventory table
   * configuration. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/MetadataTableEncryptionConfiguration">AWS
   * API Reference</a></p>
   */
  class MetadataTableEncryptionConfiguration
  {
  public:
    AWS_S3_API MetadataTableEncryptionConfiguration() = default;
    AWS_S3_API MetadataTableEncryptionConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API MetadataTableEncryptionConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p> The encryption type specified for a metadata table. To specify server-side
     * encryption with Key Management Service (KMS) keys (SSE-KMS), use the
     * <code>aws:kms</code> value. To specify server-side encryption with Amazon S3
     * managed keys (SSE-S3), use the <code>AES256</code> value. </p>
     */
    inline TableSseAlgorithm GetSseAlgorithm() const { return m_sseAlgorithm; }
    inline bool SseAlgorithmHasBeenSet() const { return m_sseAlgorithmHasBeenSet; }
    inline void SetSseAlgorithm(TableSseAlgorithm value) { m_sseAlgorithmHasBeenSet = true; m_sseAlgorithm = value; }
    inline MetadataTableEncryptionConfiguration& WithSseAlgorithm(TableSseAlgorithm value) { SetSseAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> If server-side encryption with Key Management Service (KMS) keys (SSE-KMS)
     * is specified, you must also specify the KMS key Amazon Resource Name (ARN). You
     * must specify a customer-managed KMS key that's located in the same Region as the
     * general purpose bucket that corresponds to the metadata table configuration.
     * </p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    MetadataTableEncryptionConfiguration& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}
  private:

    TableSseAlgorithm m_sseAlgorithm{TableSseAlgorithm::NOT_SET};
    bool m_sseAlgorithmHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
