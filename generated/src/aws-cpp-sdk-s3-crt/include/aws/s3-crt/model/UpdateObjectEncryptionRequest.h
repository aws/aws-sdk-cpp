/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3-crt/S3CrtRequest.h>
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/model/ChecksumAlgorithm.h>
#include <aws/s3-crt/model/ObjectEncryption.h>
#include <aws/s3-crt/model/RequestPayer.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace S3Crt {
namespace Model {

/**
 */
class UpdateObjectEncryptionRequest : public S3CrtRequest {
 public:
  AWS_S3CRT_API UpdateObjectEncryptionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateObjectEncryption"; }

  AWS_S3CRT_API Aws::String SerializePayload() const override;

  AWS_S3CRT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  AWS_S3CRT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  AWS_S3CRT_API Aws::String GetChecksumAlgorithmName() const override;
  inline bool RequestChecksumRequired() const override { return true; };

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_S3CRT_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p> The name of the general purpose bucket that contains the specified object
   * key name. </p> <p>When you use this operation with an access point attached to a
   * general purpose bucket, you must either provide the alias of the access point in
   * place of the bucket name or you must specify the access point Amazon Resource
   * Name (ARN). When using the access point ARN, you must direct requests to the
   * access point hostname. The access point hostname takes the form <code>
   * <i>AccessPointName</i>-<i>AccountId</i>.s3-accesspoint.<i>Region</i>.amazonaws.com</code>.
   * When using this operation with an access point through the Amazon Web Services
   * SDKs, you provide the access point ARN in place of the bucket name. For more
   * information about access point ARNs, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/access-points-naming.html">
   * Referencing access points</a> in the <i>Amazon S3 User Guide</i>.</p>
   */
  inline const Aws::String& GetBucket() const { return m_bucket; }
  inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
  template <typename BucketT = Aws::String>
  void SetBucket(BucketT&& value) {
    m_bucketHasBeenSet = true;
    m_bucket = std::forward<BucketT>(value);
  }
  template <typename BucketT = Aws::String>
  UpdateObjectEncryptionRequest& WithBucket(BucketT&& value) {
    SetBucket(std::forward<BucketT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The key name of the object that you want to update the server-side
   * encryption type for. </p>
   */
  inline const Aws::String& GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  template <typename KeyT = Aws::String>
  void SetKey(KeyT&& value) {
    m_keyHasBeenSet = true;
    m_key = std::forward<KeyT>(value);
  }
  template <typename KeyT = Aws::String>
  UpdateObjectEncryptionRequest& WithKey(KeyT&& value) {
    SetKey(std::forward<KeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The version ID of the object that you want to update the server-side
   * encryption type for. </p>
   */
  inline const Aws::String& GetVersionId() const { return m_versionId; }
  inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
  template <typename VersionIdT = Aws::String>
  void SetVersionId(VersionIdT&& value) {
    m_versionIdHasBeenSet = true;
    m_versionId = std::forward<VersionIdT>(value);
  }
  template <typename VersionIdT = Aws::String>
  UpdateObjectEncryptionRequest& WithVersionId(VersionIdT&& value) {
    SetVersionId(std::forward<VersionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The updated server-side encryption type for this object. The
   * <code>UpdateObjectEncryption</code> operation supports the SSE-S3 and SSE-KMS
   * encryption types. </p> <p>Valid Values: <code>SSES3</code> | <code>SSEKMS</code>
   * </p>
   */
  inline const ObjectEncryption& GetObjectEncryption() const { return m_objectEncryption; }
  inline bool ObjectEncryptionHasBeenSet() const { return m_objectEncryptionHasBeenSet; }
  template <typename ObjectEncryptionT = ObjectEncryption>
  void SetObjectEncryption(ObjectEncryptionT&& value) {
    m_objectEncryptionHasBeenSet = true;
    m_objectEncryption = std::forward<ObjectEncryptionT>(value);
  }
  template <typename ObjectEncryptionT = ObjectEncryption>
  UpdateObjectEncryptionRequest& WithObjectEncryption(ObjectEncryptionT&& value) {
    SetObjectEncryption(std::forward<ObjectEncryptionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline RequestPayer GetRequestPayer() const { return m_requestPayer; }
  inline bool RequestPayerHasBeenSet() const { return m_requestPayerHasBeenSet; }
  inline void SetRequestPayer(RequestPayer value) {
    m_requestPayerHasBeenSet = true;
    m_requestPayer = value;
  }
  inline UpdateObjectEncryptionRequest& WithRequestPayer(RequestPayer value) {
    SetRequestPayer(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The account ID of the expected bucket owner. If the account ID that you
   * provide doesn't match the actual owner of the bucket, the request fails with the
   * HTTP status code <code>403 Forbidden</code> (access denied). </p>
   */
  inline const Aws::String& GetExpectedBucketOwner() const { return m_expectedBucketOwner; }
  inline bool ExpectedBucketOwnerHasBeenSet() const { return m_expectedBucketOwnerHasBeenSet; }
  template <typename ExpectedBucketOwnerT = Aws::String>
  void SetExpectedBucketOwner(ExpectedBucketOwnerT&& value) {
    m_expectedBucketOwnerHasBeenSet = true;
    m_expectedBucketOwner = std::forward<ExpectedBucketOwnerT>(value);
  }
  template <typename ExpectedBucketOwnerT = Aws::String>
  UpdateObjectEncryptionRequest& WithExpectedBucketOwner(ExpectedBucketOwnerT&& value) {
    SetExpectedBucketOwner(std::forward<ExpectedBucketOwnerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The MD5 hash for the request body. For requests made using the Amazon Web
   * Services Command Line Interface (CLI) or Amazon Web Services SDKs, this field is
   * calculated automatically. </p>
   */
  inline const Aws::String& GetContentMD5() const { return m_contentMD5; }
  inline bool ContentMD5HasBeenSet() const { return m_contentMD5HasBeenSet; }
  template <typename ContentMD5T = Aws::String>
  void SetContentMD5(ContentMD5T&& value) {
    m_contentMD5HasBeenSet = true;
    m_contentMD5 = std::forward<ContentMD5T>(value);
  }
  template <typename ContentMD5T = Aws::String>
  UpdateObjectEncryptionRequest& WithContentMD5(ContentMD5T&& value) {
    SetContentMD5(std::forward<ContentMD5T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Indicates the algorithm used to create the checksum for the object when you
   * use an Amazon Web Services SDK. This header doesn't provide any additional
   * functionality if you don't use the SDK. When you send this header, there must be
   * a corresponding <code>x-amz-checksum</code> or <code>x-amz-trailer</code> header
   * sent. Otherwise, Amazon S3 fails the request with the HTTP status code <code>400
   * Bad Request</code>. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/checking-object-integrity.html">
   * Checking object integrity </a> in the <i>Amazon S3 User Guide</i>. </p> <p>If
   * you provide an individual checksum, Amazon S3 ignores any provided
   * <code>ChecksumAlgorithm</code> parameter.</p>
   */
  inline ChecksumAlgorithm GetChecksumAlgorithm() const { return m_checksumAlgorithm; }
  inline bool ChecksumAlgorithmHasBeenSet() const { return m_checksumAlgorithmHasBeenSet; }
  inline void SetChecksumAlgorithm(ChecksumAlgorithm value) {
    m_checksumAlgorithmHasBeenSet = true;
    m_checksumAlgorithm = value;
  }
  inline UpdateObjectEncryptionRequest& WithChecksumAlgorithm(ChecksumAlgorithm value) {
    SetChecksumAlgorithm(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetCustomizedAccessLogTag() const { return m_customizedAccessLogTag; }
  inline bool CustomizedAccessLogTagHasBeenSet() const { return m_customizedAccessLogTagHasBeenSet; }
  template <typename CustomizedAccessLogTagT = Aws::Map<Aws::String, Aws::String>>
  void SetCustomizedAccessLogTag(CustomizedAccessLogTagT&& value) {
    m_customizedAccessLogTagHasBeenSet = true;
    m_customizedAccessLogTag = std::forward<CustomizedAccessLogTagT>(value);
  }
  template <typename CustomizedAccessLogTagT = Aws::Map<Aws::String, Aws::String>>
  UpdateObjectEncryptionRequest& WithCustomizedAccessLogTag(CustomizedAccessLogTagT&& value) {
    SetCustomizedAccessLogTag(std::forward<CustomizedAccessLogTagT>(value));
    return *this;
  }
  template <typename CustomizedAccessLogTagKeyT = Aws::String, typename CustomizedAccessLogTagValueT = Aws::String>
  UpdateObjectEncryptionRequest& AddCustomizedAccessLogTag(CustomizedAccessLogTagKeyT&& key, CustomizedAccessLogTagValueT&& value) {
    m_customizedAccessLogTagHasBeenSet = true;
    m_customizedAccessLogTag.emplace(std::forward<CustomizedAccessLogTagKeyT>(key), std::forward<CustomizedAccessLogTagValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bucket;

  Aws::String m_key;

  Aws::String m_versionId;

  ObjectEncryption m_objectEncryption;

  RequestPayer m_requestPayer{RequestPayer::NOT_SET};

  Aws::String m_expectedBucketOwner;

  Aws::String m_contentMD5;

  ChecksumAlgorithm m_checksumAlgorithm{ChecksumAlgorithm::NOT_SET};

  Aws::Map<Aws::String, Aws::String> m_customizedAccessLogTag;
  bool m_bucketHasBeenSet = false;
  bool m_keyHasBeenSet = false;
  bool m_versionIdHasBeenSet = false;
  bool m_objectEncryptionHasBeenSet = false;
  bool m_requestPayerHasBeenSet = false;
  bool m_expectedBucketOwnerHasBeenSet = false;
  bool m_contentMD5HasBeenSet = false;
  bool m_checksumAlgorithmHasBeenSet = false;
  bool m_customizedAccessLogTagHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Crt
}  // namespace Aws
