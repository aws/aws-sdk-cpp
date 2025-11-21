/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/EncryptionType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace S3 {
namespace Model {

/**
 * <p>A bucket-level setting for Amazon S3 general purpose buckets used to prevent
 * the upload of new objects encrypted with the specified server-side encryption
 * type. For example, blocking an encryption type will block
 * <code>PutObject</code>, <code>CopyObject</code>, <code>PostObject</code>,
 * multipart upload, and replication requests to the bucket for objects with the
 * specified encryption type. However, you can continue to read and list any
 * pre-existing objects already encrypted with the specified encryption type. For
 * more information, see <a
 * href="https://docs.aws.amazon.com/AmazonS3/userguide/block-encryption-type.html">Blocking
 * an encryption type for a general purpose bucket</a>. </p> <p>This data type is
 * used with the following actions:</p> <ul> <li> <p> <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_PutBucketEncryption.html">PutBucketEncryption</a>
 * </p> </li> <li> <p> <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_GetBucketEncryption.html">GetBucketEncryption</a>
 * </p> </li> <li> <p> <a
 * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_DeleteBucketEncryption.html">DeleteBucketEncryption</a>
 * </p> </li> </ul> <dl> <dt>Permissions</dt> <dd> <p>You must have the
 * <code>s3:PutEncryptionConfiguration</code> permission to block or unblock an
 * encryption type for a bucket. </p> <p>You must have the
 * <code>s3:GetEncryptionConfiguration</code> permission to view a bucket's
 * encryption type. </p> </dd> </dl><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/BlockedEncryptionTypes">AWS
 * API Reference</a></p>
 */
class BlockedEncryptionTypes {
 public:
  AWS_S3_API BlockedEncryptionTypes() = default;
  AWS_S3_API BlockedEncryptionTypes(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_S3_API BlockedEncryptionTypes& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>The object encryption type that you want to block or unblock for an Amazon S3
   * general purpose bucket.</p>  <p>Currently, this parameter only supports
   * blocking or unblocking server side encryption with customer-provided keys
   * (SSE-C). For more information about SSE-C, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/ServerSideEncryptionCustomerKeys.html">Using
   * server-side encryption with customer-provided keys (SSE-C)</a>.</p>
   */
  inline const Aws::Vector<EncryptionType>& GetEncryptionType() const { return m_encryptionType; }
  inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }
  template <typename EncryptionTypeT = Aws::Vector<EncryptionType>>
  void SetEncryptionType(EncryptionTypeT&& value) {
    m_encryptionTypeHasBeenSet = true;
    m_encryptionType = std::forward<EncryptionTypeT>(value);
  }
  template <typename EncryptionTypeT = Aws::Vector<EncryptionType>>
  BlockedEncryptionTypes& WithEncryptionType(EncryptionTypeT&& value) {
    SetEncryptionType(std::forward<EncryptionTypeT>(value));
    return *this;
  }
  inline BlockedEncryptionTypes& AddEncryptionType(EncryptionType value) {
    m_encryptionTypeHasBeenSet = true;
    m_encryptionType.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<EncryptionType> m_encryptionType;
  bool m_encryptionTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3
}  // namespace Aws
