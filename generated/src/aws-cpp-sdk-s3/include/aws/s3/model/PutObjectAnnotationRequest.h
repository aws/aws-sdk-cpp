/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/S3Request.h>
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/ChecksumAlgorithm.h>
#include <aws/s3/model/RequestPayer.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace S3 {
namespace Model {

/**
 */
class PutObjectAnnotationRequest : public StreamingS3Request {
 public:
  AWS_S3_API PutObjectAnnotationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutObjectAnnotation"; }

  AWS_S3_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  AWS_S3_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  AWS_S3_API Aws::String GetChecksumAlgorithmName() const override;
  AWS_S3_API bool ChecksumAlgorithmIsSet() const override;
  AWS_S3_API bool IsStreaming() const override { return false; }

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_S3_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>The name of the bucket that contains the object.</p>
   */
  inline const Aws::String& GetBucket() const { return m_bucket; }
  inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
  template <typename BucketT = Aws::String>
  void SetBucket(BucketT&& value) {
    m_bucketHasBeenSet = true;
    m_bucket = std::forward<BucketT>(value);
  }
  template <typename BucketT = Aws::String>
  PutObjectAnnotationRequest& WithBucket(BucketT&& value) {
    SetBucket(std::forward<BucketT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The object key.</p>
   */
  inline const Aws::String& GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  template <typename KeyT = Aws::String>
  void SetKey(KeyT&& value) {
    m_keyHasBeenSet = true;
    m_key = std::forward<KeyT>(value);
  }
  template <typename KeyT = Aws::String>
  PutObjectAnnotationRequest& WithKey(KeyT&& value) {
    SetKey(std::forward<KeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version ID of the object to attach the annotation to.</p>
   */
  inline const Aws::String& GetVersionId() const { return m_versionId; }
  inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
  template <typename VersionIdT = Aws::String>
  void SetVersionId(VersionIdT&& value) {
    m_versionIdHasBeenSet = true;
    m_versionId = std::forward<VersionIdT>(value);
  }
  template <typename VersionIdT = Aws::String>
  PutObjectAnnotationRequest& WithVersionId(VersionIdT&& value) {
    SetVersionId(std::forward<VersionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the annotation.</p> <p>Length Constraints: Minimum length of 1.
   * Maximum length of 512 bytes.</p>
   */
  inline const Aws::String& GetAnnotationName() const { return m_annotationName; }
  inline bool AnnotationNameHasBeenSet() const { return m_annotationNameHasBeenSet; }
  template <typename AnnotationNameT = Aws::String>
  void SetAnnotationName(AnnotationNameT&& value) {
    m_annotationNameHasBeenSet = true;
    m_annotationName = std::forward<AnnotationNameT>(value);
  }
  template <typename AnnotationNameT = Aws::String>
  PutObjectAnnotationRequest& WithAnnotationName(AnnotationNameT&& value) {
    SetAnnotationName(std::forward<AnnotationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If specified, the operation only succeeds if the object's ETag matches the
   * provided value.</p>
   */
  inline const Aws::String& GetObjectIfMatch() const { return m_objectIfMatch; }
  inline bool ObjectIfMatchHasBeenSet() const { return m_objectIfMatchHasBeenSet; }
  template <typename ObjectIfMatchT = Aws::String>
  void SetObjectIfMatch(ObjectIfMatchT&& value) {
    m_objectIfMatchHasBeenSet = true;
    m_objectIfMatch = std::forward<ObjectIfMatchT>(value);
  }
  template <typename ObjectIfMatchT = Aws::String>
  PutObjectAnnotationRequest& WithObjectIfMatch(ObjectIfMatchT&& value) {
    SetObjectIfMatch(std::forward<ObjectIfMatchT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The checksum algorithm to use. Supported values: <code>CRC32</code>,
   * <code>CRC32C</code>, <code>CRC64NVME</code>, <code>SHA1</code>,
   * <code>SHA256</code>, <code>SHA512</code>, <code>MD5</code>,
   * <code>XXHASH64</code>, <code>XXHASH3</code>, <code>XXHASH128</code>.</p>
   */
  inline ChecksumAlgorithm GetChecksumAlgorithm() const { return m_checksumAlgorithm; }
  inline bool ChecksumAlgorithmHasBeenSet() const { return m_checksumAlgorithmHasBeenSet; }
  inline void SetChecksumAlgorithm(ChecksumAlgorithm value) {
    m_checksumAlgorithmHasBeenSet = true;
    m_checksumAlgorithm = value;
  }
  inline PutObjectAnnotationRequest& WithChecksumAlgorithm(ChecksumAlgorithm value) {
    SetChecksumAlgorithm(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Base64-encoded CRC32 checksum of the annotation payload.</p>
   */
  inline const Aws::String& GetChecksumCRC32() const { return m_checksumCRC32; }
  inline bool ChecksumCRC32HasBeenSet() const { return m_checksumCRC32HasBeenSet; }
  template <typename ChecksumCRC32T = Aws::String>
  void SetChecksumCRC32(ChecksumCRC32T&& value) {
    m_checksumCRC32HasBeenSet = true;
    m_checksumCRC32 = std::forward<ChecksumCRC32T>(value);
    SetChecksumAlgorithm(ChecksumAlgorithm::CRC32);
  }
  inline void SetChecksumCRC32(const char* value) {
    m_checksumCRC32HasBeenSet = true;
    m_checksumCRC32.assign(value);
    SetChecksumAlgorithm(ChecksumAlgorithm::CRC32);
  }
  template <typename ChecksumCRC32T = Aws::String>
  PutObjectAnnotationRequest& WithChecksumCRC32(ChecksumCRC32T&& value) {
    SetChecksumCRC32(std::forward<ChecksumCRC32T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Base64-encoded CRC32C checksum of the annotation payload.</p>
   */
  inline const Aws::String& GetChecksumCRC32C() const { return m_checksumCRC32C; }
  inline bool ChecksumCRC32CHasBeenSet() const { return m_checksumCRC32CHasBeenSet; }
  template <typename ChecksumCRC32CT = Aws::String>
  void SetChecksumCRC32C(ChecksumCRC32CT&& value) {
    m_checksumCRC32CHasBeenSet = true;
    m_checksumCRC32C = std::forward<ChecksumCRC32CT>(value);
    SetChecksumAlgorithm(ChecksumAlgorithm::CRC32C);
  }
  inline void SetChecksumCRC32C(const char* value) {
    m_checksumCRC32CHasBeenSet = true;
    m_checksumCRC32C.assign(value);
    SetChecksumAlgorithm(ChecksumAlgorithm::CRC32C);
  }
  template <typename ChecksumCRC32CT = Aws::String>
  PutObjectAnnotationRequest& WithChecksumCRC32C(ChecksumCRC32CT&& value) {
    SetChecksumCRC32C(std::forward<ChecksumCRC32CT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Base64-encoded CRC64NVME checksum of the annotation payload.</p>
   */
  inline const Aws::String& GetChecksumCRC64NVME() const { return m_checksumCRC64NVME; }
  inline bool ChecksumCRC64NVMEHasBeenSet() const { return m_checksumCRC64NVMEHasBeenSet; }
  template <typename ChecksumCRC64NVMET = Aws::String>
  void SetChecksumCRC64NVME(ChecksumCRC64NVMET&& value) {
    m_checksumCRC64NVMEHasBeenSet = true;
    m_checksumCRC64NVME = std::forward<ChecksumCRC64NVMET>(value);
  }
  template <typename ChecksumCRC64NVMET = Aws::String>
  PutObjectAnnotationRequest& WithChecksumCRC64NVME(ChecksumCRC64NVMET&& value) {
    SetChecksumCRC64NVME(std::forward<ChecksumCRC64NVMET>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Base64-encoded SHA1 checksum of the annotation payload.</p>
   */
  inline const Aws::String& GetChecksumSHA1() const { return m_checksumSHA1; }
  inline bool ChecksumSHA1HasBeenSet() const { return m_checksumSHA1HasBeenSet; }
  template <typename ChecksumSHA1T = Aws::String>
  void SetChecksumSHA1(ChecksumSHA1T&& value) {
    m_checksumSHA1HasBeenSet = true;
    m_checksumSHA1 = std::forward<ChecksumSHA1T>(value);
    SetChecksumAlgorithm(ChecksumAlgorithm::SHA1);
  }
  inline void SetChecksumSHA1(const char* value) {
    m_checksumSHA1HasBeenSet = true;
    m_checksumSHA1.assign(value);
    SetChecksumAlgorithm(ChecksumAlgorithm::SHA1);
  }
  template <typename ChecksumSHA1T = Aws::String>
  PutObjectAnnotationRequest& WithChecksumSHA1(ChecksumSHA1T&& value) {
    SetChecksumSHA1(std::forward<ChecksumSHA1T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Base64-encoded SHA256 checksum of the annotation payload.</p>
   */
  inline const Aws::String& GetChecksumSHA256() const { return m_checksumSHA256; }
  inline bool ChecksumSHA256HasBeenSet() const { return m_checksumSHA256HasBeenSet; }
  template <typename ChecksumSHA256T = Aws::String>
  void SetChecksumSHA256(ChecksumSHA256T&& value) {
    m_checksumSHA256HasBeenSet = true;
    m_checksumSHA256 = std::forward<ChecksumSHA256T>(value);
    SetChecksumAlgorithm(ChecksumAlgorithm::SHA256);
  }
  inline void SetChecksumSHA256(const char* value) {
    m_checksumSHA256HasBeenSet = true;
    m_checksumSHA256.assign(value);
    SetChecksumAlgorithm(ChecksumAlgorithm::SHA256);
  }
  template <typename ChecksumSHA256T = Aws::String>
  PutObjectAnnotationRequest& WithChecksumSHA256(ChecksumSHA256T&& value) {
    SetChecksumSHA256(std::forward<ChecksumSHA256T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Base64-encoded SHA512 checksum of the annotation payload.</p>
   */
  inline const Aws::String& GetChecksumSHA512() const { return m_checksumSHA512; }
  inline bool ChecksumSHA512HasBeenSet() const { return m_checksumSHA512HasBeenSet; }
  template <typename ChecksumSHA512T = Aws::String>
  void SetChecksumSHA512(ChecksumSHA512T&& value) {
    m_checksumSHA512HasBeenSet = true;
    m_checksumSHA512 = std::forward<ChecksumSHA512T>(value);
    SetChecksumAlgorithm(ChecksumAlgorithm::SHA512);
  }
  inline void SetChecksumSHA512(const char* value) {
    m_checksumSHA512HasBeenSet = true;
    m_checksumSHA512.assign(value);
    SetChecksumAlgorithm(ChecksumAlgorithm::SHA512);
  }
  template <typename ChecksumSHA512T = Aws::String>
  PutObjectAnnotationRequest& WithChecksumSHA512(ChecksumSHA512T&& value) {
    SetChecksumSHA512(std::forward<ChecksumSHA512T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Base64-encoded MD5 checksum of the annotation payload.</p>
   */
  inline const Aws::String& GetChecksumMD5() const { return m_checksumMD5; }
  inline bool ChecksumMD5HasBeenSet() const { return m_checksumMD5HasBeenSet; }
  template <typename ChecksumMD5T = Aws::String>
  void SetChecksumMD5(ChecksumMD5T&& value) {
    m_checksumMD5HasBeenSet = true;
    m_checksumMD5 = std::forward<ChecksumMD5T>(value);
    SetChecksumAlgorithm(ChecksumAlgorithm::MD5);
  }
  inline void SetChecksumMD5(const char* value) {
    m_checksumMD5HasBeenSet = true;
    m_checksumMD5.assign(value);
    SetChecksumAlgorithm(ChecksumAlgorithm::MD5);
  }
  template <typename ChecksumMD5T = Aws::String>
  PutObjectAnnotationRequest& WithChecksumMD5(ChecksumMD5T&& value) {
    SetChecksumMD5(std::forward<ChecksumMD5T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Base64-encoded XXHASH64 checksum of the annotation payload.</p>
   */
  inline const Aws::String& GetChecksumXXHASH64() const { return m_checksumXXHASH64; }
  inline bool ChecksumXXHASH64HasBeenSet() const { return m_checksumXXHASH64HasBeenSet; }
  template <typename ChecksumXXHASH64T = Aws::String>
  void SetChecksumXXHASH64(ChecksumXXHASH64T&& value) {
    m_checksumXXHASH64HasBeenSet = true;
    m_checksumXXHASH64 = std::forward<ChecksumXXHASH64T>(value);
    SetChecksumAlgorithm(ChecksumAlgorithm::XXHASH64);
  }
  inline void SetChecksumXXHASH64(const char* value) {
    m_checksumXXHASH64HasBeenSet = true;
    m_checksumXXHASH64.assign(value);
    SetChecksumAlgorithm(ChecksumAlgorithm::XXHASH64);
  }
  template <typename ChecksumXXHASH64T = Aws::String>
  PutObjectAnnotationRequest& WithChecksumXXHASH64(ChecksumXXHASH64T&& value) {
    SetChecksumXXHASH64(std::forward<ChecksumXXHASH64T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Base64-encoded XXHASH3 checksum of the annotation payload.</p>
   */
  inline const Aws::String& GetChecksumXXHASH3() const { return m_checksumXXHASH3; }
  inline bool ChecksumXXHASH3HasBeenSet() const { return m_checksumXXHASH3HasBeenSet; }
  template <typename ChecksumXXHASH3T = Aws::String>
  void SetChecksumXXHASH3(ChecksumXXHASH3T&& value) {
    m_checksumXXHASH3HasBeenSet = true;
    m_checksumXXHASH3 = std::forward<ChecksumXXHASH3T>(value);
    SetChecksumAlgorithm(ChecksumAlgorithm::XXHASH3);
  }
  inline void SetChecksumXXHASH3(const char* value) {
    m_checksumXXHASH3HasBeenSet = true;
    m_checksumXXHASH3.assign(value);
    SetChecksumAlgorithm(ChecksumAlgorithm::XXHASH3);
  }
  template <typename ChecksumXXHASH3T = Aws::String>
  PutObjectAnnotationRequest& WithChecksumXXHASH3(ChecksumXXHASH3T&& value) {
    SetChecksumXXHASH3(std::forward<ChecksumXXHASH3T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Base64-encoded XXHASH128 checksum of the annotation payload.</p>
   */
  inline const Aws::String& GetChecksumXXHASH128() const { return m_checksumXXHASH128; }
  inline bool ChecksumXXHASH128HasBeenSet() const { return m_checksumXXHASH128HasBeenSet; }
  template <typename ChecksumXXHASH128T = Aws::String>
  void SetChecksumXXHASH128(ChecksumXXHASH128T&& value) {
    m_checksumXXHASH128HasBeenSet = true;
    m_checksumXXHASH128 = std::forward<ChecksumXXHASH128T>(value);
    SetChecksumAlgorithm(ChecksumAlgorithm::XXHASH128);
  }
  inline void SetChecksumXXHASH128(const char* value) {
    m_checksumXXHASH128HasBeenSet = true;
    m_checksumXXHASH128.assign(value);
    SetChecksumAlgorithm(ChecksumAlgorithm::XXHASH128);
  }
  template <typename ChecksumXXHASH128T = Aws::String>
  PutObjectAnnotationRequest& WithChecksumXXHASH128(ChecksumXXHASH128T&& value) {
    SetChecksumXXHASH128(std::forward<ChecksumXXHASH128T>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Base64-encoded MD5 digest of the message.</p>
   */
  inline const Aws::String& GetContentMD5() const { return m_contentMD5; }
  inline bool ContentMD5HasBeenSet() const { return m_contentMD5HasBeenSet; }
  template <typename ContentMD5T = Aws::String>
  void SetContentMD5(ContentMD5T&& value) {
    m_contentMD5HasBeenSet = true;
    m_contentMD5 = std::forward<ContentMD5T>(value);
  }
  template <typename ContentMD5T = Aws::String>
  PutObjectAnnotationRequest& WithContentMD5(ContentMD5T&& value) {
    SetContentMD5(std::forward<ContentMD5T>(value));
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
  inline PutObjectAnnotationRequest& WithRequestPayer(RequestPayer value) {
    SetRequestPayer(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The account ID of the expected bucket owner. If the bucket is owned by a
   * different account, the request fails with an HTTP 403 (Access Denied) error.</p>
   */
  inline const Aws::String& GetExpectedBucketOwner() const { return m_expectedBucketOwner; }
  inline bool ExpectedBucketOwnerHasBeenSet() const { return m_expectedBucketOwnerHasBeenSet; }
  template <typename ExpectedBucketOwnerT = Aws::String>
  void SetExpectedBucketOwner(ExpectedBucketOwnerT&& value) {
    m_expectedBucketOwnerHasBeenSet = true;
    m_expectedBucketOwner = std::forward<ExpectedBucketOwnerT>(value);
  }
  template <typename ExpectedBucketOwnerT = Aws::String>
  PutObjectAnnotationRequest& WithExpectedBucketOwner(ExpectedBucketOwnerT&& value) {
    SetExpectedBucketOwner(std::forward<ExpectedBucketOwnerT>(value));
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
  PutObjectAnnotationRequest& WithCustomizedAccessLogTag(CustomizedAccessLogTagT&& value) {
    SetCustomizedAccessLogTag(std::forward<CustomizedAccessLogTagT>(value));
    return *this;
  }
  template <typename CustomizedAccessLogTagKeyT = Aws::String, typename CustomizedAccessLogTagValueT = Aws::String>
  PutObjectAnnotationRequest& AddCustomizedAccessLogTag(CustomizedAccessLogTagKeyT&& key, CustomizedAccessLogTagValueT&& value) {
    m_customizedAccessLogTagHasBeenSet = true;
    m_customizedAccessLogTag.emplace(std::forward<CustomizedAccessLogTagKeyT>(key), std::forward<CustomizedAccessLogTagValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bucket;

  Aws::String m_key;

  Aws::String m_versionId;

  Aws::String m_annotationName;

  Aws::String m_objectIfMatch;

  ChecksumAlgorithm m_checksumAlgorithm{ChecksumAlgorithm::NOT_SET};

  Aws::String m_checksumCRC32;

  Aws::String m_checksumCRC32C;

  Aws::String m_checksumCRC64NVME;

  Aws::String m_checksumSHA1;

  Aws::String m_checksumSHA256;

  Aws::String m_checksumSHA512;

  Aws::String m_checksumMD5;

  Aws::String m_checksumXXHASH64;

  Aws::String m_checksumXXHASH3;

  Aws::String m_checksumXXHASH128;

  Aws::String m_contentMD5;

  RequestPayer m_requestPayer{RequestPayer::NOT_SET};

  Aws::String m_expectedBucketOwner;

  Aws::Map<Aws::String, Aws::String> m_customizedAccessLogTag;
  bool m_bucketHasBeenSet = false;
  bool m_keyHasBeenSet = false;
  bool m_versionIdHasBeenSet = false;
  bool m_annotationNameHasBeenSet = false;
  bool m_objectIfMatchHasBeenSet = false;
  bool m_checksumAlgorithmHasBeenSet = false;
  bool m_checksumCRC32HasBeenSet = false;
  bool m_checksumCRC32CHasBeenSet = false;
  bool m_checksumCRC64NVMEHasBeenSet = false;
  bool m_checksumSHA1HasBeenSet = false;
  bool m_checksumSHA256HasBeenSet = false;
  bool m_checksumSHA512HasBeenSet = false;
  bool m_checksumMD5HasBeenSet = false;
  bool m_checksumXXHASH64HasBeenSet = false;
  bool m_checksumXXHASH3HasBeenSet = false;
  bool m_checksumXXHASH128HasBeenSet = false;
  bool m_contentMD5HasBeenSet = false;
  bool m_requestPayerHasBeenSet = false;
  bool m_expectedBucketOwnerHasBeenSet = false;
  bool m_customizedAccessLogTagHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3
}  // namespace Aws
