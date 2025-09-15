/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
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
namespace S3Control
{
namespace Model
{

  /**
   * <p>A filter that returns objects that are encrypted by server-side encryption
   * with Amazon Web Services KMS (SSE-KMS).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/SSEKMSFilter">AWS
   * API Reference</a></p>
   */
  class SSEKMSFilter
  {
  public:
    AWS_S3CONTROL_API SSEKMSFilter() = default;
    AWS_S3CONTROL_API SSEKMSFilter(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3CONTROL_API SSEKMSFilter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3CONTROL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed KMS key to use for the
     * filter to return objects that are encrypted by the specified key. For best
     * performance, we recommend using the <code>KMSKeyArn</code> filter in conjunction
     * with other object metadata filters, like <code>MatchAnyPrefix</code>,
     * <code>CreatedAfter</code>, or <code>MatchAnyStorageClass</code>.</p> 
     * <p>You must provide the full KMS Key ARN. You can't use an alias name or alias
     * ARN. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html#key-id-key-ARN">
     * KMS keys</a> in the <i>Amazon Web Services Key Management Service Developer
     * Guide</i>.</p> 
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    SSEKMSFilter& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether Amazon S3 should use an S3 Bucket Key for object encryption
     * with server-side encryption using Amazon Web Services Key Management Service
     * (Amazon Web Services KMS) keys (SSE-KMS). If specified, will filter SSE-KMS
     * encrypted objects by S3 Bucket Key status. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/bucket-key.html">Reducing
     * the cost of SSE-KMS with Amazon S3 Bucket Keys</a> in the <i>Amazon S3 User
     * Guide</i>.</p>
     */
    inline bool GetBucketKeyEnabled() const { return m_bucketKeyEnabled; }
    inline bool BucketKeyEnabledHasBeenSet() const { return m_bucketKeyEnabledHasBeenSet; }
    inline void SetBucketKeyEnabled(bool value) { m_bucketKeyEnabledHasBeenSet = true; m_bucketKeyEnabled = value; }
    inline SSEKMSFilter& WithBucketKeyEnabled(bool value) { SetBucketKeyEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    bool m_bucketKeyEnabled{false};
    bool m_bucketKeyEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
