/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3-crt/S3Crt_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace S3Crt {
namespace Model {

/**
 * <p> If <code>SSEKMS</code> is specified for <code>ObjectEncryption</code>, this
 * data type specifies the Amazon Web Services KMS key Amazon Resource Name (ARN)
 * to use and whether to use an S3 Bucket Key for server-side encryption using Key
 * Management Service (KMS) keys (SSE-KMS). </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/SSEKMSEncryption">AWS
 * API Reference</a></p>
 */
class SSEKMSEncryption {
 public:
  AWS_S3CRT_API SSEKMSEncryption() = default;
  AWS_S3CRT_API SSEKMSEncryption(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_S3CRT_API SSEKMSEncryption& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_S3CRT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p> Specifies the Amazon Web Services KMS key Amazon Resource Name (ARN) to use
   * for the updated server-side encryption type. Required if
   * <code>ObjectEncryption</code> specifies <code>SSEKMS</code>. </p>  <p>You
   * must specify the full Amazon Web Services KMS key ARN. The KMS key ID and KMS
   * key alias aren't supported.</p>  <p>Pattern:
   * (<code>arn:aws[-a-z0-9]*:kms:[-a-z0-9]*:[0-9]{12}:key/.+</code>)</p>
   */
  inline const Aws::String& GetKMSKeyArn() const { return m_kMSKeyArn; }
  inline bool KMSKeyArnHasBeenSet() const { return m_kMSKeyArnHasBeenSet; }
  template <typename KMSKeyArnT = Aws::String>
  void SetKMSKeyArn(KMSKeyArnT&& value) {
    m_kMSKeyArnHasBeenSet = true;
    m_kMSKeyArn = std::forward<KMSKeyArnT>(value);
  }
  template <typename KMSKeyArnT = Aws::String>
  SSEKMSEncryption& WithKMSKeyArn(KMSKeyArnT&& value) {
    SetKMSKeyArn(std::forward<KMSKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Specifies whether Amazon S3 should use an S3 Bucket Key for object
   * encryption with server-side encryption using Key Management Service (KMS) keys
   * (SSE-KMS). If this value isn't specified, it defaults to <code>false</code>.
   * Setting this value to <code>true</code> causes Amazon S3 to use an S3 Bucket Key
   * for object encryption with SSE-KMS. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/bucket-key.html">
   * Using Amazon S3 Bucket Keys</a> in the <i>Amazon S3 User Guide</i>. </p>
   * <p>Valid Values: <code>true</code> | <code>false</code> </p>
   */
  inline bool GetBucketKeyEnabled() const { return m_bucketKeyEnabled; }
  inline bool BucketKeyEnabledHasBeenSet() const { return m_bucketKeyEnabledHasBeenSet; }
  inline void SetBucketKeyEnabled(bool value) {
    m_bucketKeyEnabledHasBeenSet = true;
    m_bucketKeyEnabled = value;
  }
  inline SSEKMSEncryption& WithBucketKeyEnabled(bool value) {
    SetBucketKeyEnabled(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_kMSKeyArn;

  bool m_bucketKeyEnabled{false};
  bool m_kMSKeyArnHasBeenSet = false;
  bool m_bucketKeyEnabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Crt
}  // namespace Aws
