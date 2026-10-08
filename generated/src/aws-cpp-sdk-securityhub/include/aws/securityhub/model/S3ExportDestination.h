/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/SecurityHub_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {

/**
 * <p>The Amazon S3 destination for an export, including the bucket, the Amazon Web
 * Services KMS key used for encryption, and an optional object key
 * prefix.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/S3ExportDestination">AWS
 * API Reference</a></p>
 */
class S3ExportDestination {
 public:
  AWS_SECURITYHUB_API S3ExportDestination() = default;
  AWS_SECURITYHUB_API S3ExportDestination(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API S3ExportDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket that Security Hub
   * writes the export to. You must own the bucket, and its bucket policy must grant
   * the Security Hub service principal
   * (<code>exportv2.securityhub.amazonaws.com</code>) permission to write objects.
   * For the required bucket policy, see the Examples section of
   * <code>StartExportJobV2</code>.</p>
   */
  inline const Aws::String& GetBucketArn() const { return m_bucketArn; }
  inline bool BucketArnHasBeenSet() const { return m_bucketArnHasBeenSet; }
  template <typename BucketArnT = Aws::String>
  void SetBucketArn(BucketArnT&& value) {
    m_bucketArnHasBeenSet = true;
    m_bucketArn = std::forward<BucketArnT>(value);
  }
  template <typename BucketArnT = Aws::String>
  S3ExportDestination& WithBucketArn(BucketArnT&& value) {
    SetBucketArn(std::forward<BucketArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the Amazon Web Services KMS key that Security Hub uses to encrypt
   * the export objects with server-side encryption. The key policy must allow the
   * Security Hub service principal (<code>exportv2.securityhub.amazonaws.com</code>)
   * to use the key through Amazon S3. For the required key policy, see the Examples
   * section of <code>StartExportJobV2</code>.</p> <p>The key must meet all of the
   * following requirements:</p> <ul> <li> <p>It must be a symmetric key with a key
   * usage of <code>ENCRYPT_DECRYPT</code>.</p> </li> <li> <p>It must be a
   * single-Region key. Multi-Region keys, whose key IDs begin with
   * <code>mrk-</code>, are rejected.</p> </li> <li> <p>You must specify the full key
   * ARN. Key IDs and aliases are rejected.</p> </li> <li> <p>The key must be in the
   * same Amazon Web Services account as the export job.</p> </li> <li> <p>The key
   * must be in the same Amazon Web Services Region as the export job.</p> </li> <li>
   * <p>The key must be in the <code>aws</code>, <code>aws-cn</code>, or
   * <code>aws-us-gov</code> partition.</p> </li> </ul>
   */
  inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
  inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
  template <typename KmsKeyArnT = Aws::String>
  void SetKmsKeyArn(KmsKeyArnT&& value) {
    m_kmsKeyArnHasBeenSet = true;
    m_kmsKeyArn = std::forward<KmsKeyArnT>(value);
  }
  template <typename KmsKeyArnT = Aws::String>
  S3ExportDestination& WithKmsKeyArn(KmsKeyArnT&& value) {
    SetKmsKeyArn(std::forward<KmsKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional key prefix that Security Hub prepends to the Amazon S3 object
   * keys of the export output. Use a prefix to organize exports within the bucket.
   * The value can be up to 512 characters.</p>
   */
  inline const Aws::String& GetObjectPrefix() const { return m_objectPrefix; }
  inline bool ObjectPrefixHasBeenSet() const { return m_objectPrefixHasBeenSet; }
  template <typename ObjectPrefixT = Aws::String>
  void SetObjectPrefix(ObjectPrefixT&& value) {
    m_objectPrefixHasBeenSet = true;
    m_objectPrefix = std::forward<ObjectPrefixT>(value);
  }
  template <typename ObjectPrefixT = Aws::String>
  S3ExportDestination& WithObjectPrefix(ObjectPrefixT&& value) {
    SetObjectPrefix(std::forward<ObjectPrefixT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bucketArn;

  Aws::String m_kmsKeyArn;

  Aws::String m_objectPrefix;
  bool m_bucketArnHasBeenSet = false;
  bool m_kmsKeyArnHasBeenSet = false;
  bool m_objectPrefixHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
