/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3-crt/S3CrtRequest.h>
#include <aws/s3-crt/S3Crt_EXPORTS.h>
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
class DeleteObjectAnnotationRequest : public S3CrtRequest {
 public:
  AWS_S3CRT_API DeleteObjectAnnotationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteObjectAnnotation"; }

  AWS_S3CRT_API Aws::String SerializePayload() const override;

  AWS_S3CRT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  AWS_S3CRT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_S3CRT_API EndpointParameters GetEndpointContextParams() const override;

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
  DeleteObjectAnnotationRequest& WithBucket(BucketT&& value) {
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
  DeleteObjectAnnotationRequest& WithKey(KeyT&& value) {
    SetKey(std::forward<KeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the annotation to delete. Annotation names are UTF-8 encoded and
   * cannot start with <code>aws</code> or <code>s3</code> (case-insensitive).</p>
   * <p>Length Constraints: Minimum length of 1. Maximum length of 512 bytes.</p>
   */
  inline const Aws::String& GetAnnotationName() const { return m_annotationName; }
  inline bool AnnotationNameHasBeenSet() const { return m_annotationNameHasBeenSet; }
  template <typename AnnotationNameT = Aws::String>
  void SetAnnotationName(AnnotationNameT&& value) {
    m_annotationNameHasBeenSet = true;
    m_annotationName = std::forward<AnnotationNameT>(value);
  }
  template <typename AnnotationNameT = Aws::String>
  DeleteObjectAnnotationRequest& WithAnnotationName(AnnotationNameT&& value) {
    SetAnnotationName(std::forward<AnnotationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version ID of the object.</p>
   */
  inline const Aws::String& GetVersionId() const { return m_versionId; }
  inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
  template <typename VersionIdT = Aws::String>
  void SetVersionId(VersionIdT&& value) {
    m_versionIdHasBeenSet = true;
    m_versionId = std::forward<VersionIdT>(value);
  }
  template <typename VersionIdT = Aws::String>
  DeleteObjectAnnotationRequest& WithVersionId(VersionIdT&& value) {
    SetVersionId(std::forward<VersionIdT>(value));
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
  inline DeleteObjectAnnotationRequest& WithRequestPayer(RequestPayer value) {
    SetRequestPayer(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The account ID of the expected bucket owner.</p>
   */
  inline const Aws::String& GetExpectedBucketOwner() const { return m_expectedBucketOwner; }
  inline bool ExpectedBucketOwnerHasBeenSet() const { return m_expectedBucketOwnerHasBeenSet; }
  template <typename ExpectedBucketOwnerT = Aws::String>
  void SetExpectedBucketOwner(ExpectedBucketOwnerT&& value) {
    m_expectedBucketOwnerHasBeenSet = true;
    m_expectedBucketOwner = std::forward<ExpectedBucketOwnerT>(value);
  }
  template <typename ExpectedBucketOwnerT = Aws::String>
  DeleteObjectAnnotationRequest& WithExpectedBucketOwner(ExpectedBucketOwnerT&& value) {
    SetExpectedBucketOwner(std::forward<ExpectedBucketOwnerT>(value));
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
  DeleteObjectAnnotationRequest& WithObjectIfMatch(ObjectIfMatchT&& value) {
    SetObjectIfMatch(std::forward<ObjectIfMatchT>(value));
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
  DeleteObjectAnnotationRequest& WithCustomizedAccessLogTag(CustomizedAccessLogTagT&& value) {
    SetCustomizedAccessLogTag(std::forward<CustomizedAccessLogTagT>(value));
    return *this;
  }
  template <typename CustomizedAccessLogTagKeyT = Aws::String, typename CustomizedAccessLogTagValueT = Aws::String>
  DeleteObjectAnnotationRequest& AddCustomizedAccessLogTag(CustomizedAccessLogTagKeyT&& key, CustomizedAccessLogTagValueT&& value) {
    m_customizedAccessLogTagHasBeenSet = true;
    m_customizedAccessLogTag.emplace(std::forward<CustomizedAccessLogTagKeyT>(key), std::forward<CustomizedAccessLogTagValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bucket;

  Aws::String m_key;

  Aws::String m_annotationName;

  Aws::String m_versionId;

  RequestPayer m_requestPayer{RequestPayer::NOT_SET};

  Aws::String m_expectedBucketOwner;

  Aws::String m_objectIfMatch;

  Aws::Map<Aws::String, Aws::String> m_customizedAccessLogTag;
  bool m_bucketHasBeenSet = false;
  bool m_keyHasBeenSet = false;
  bool m_annotationNameHasBeenSet = false;
  bool m_versionIdHasBeenSet = false;
  bool m_requestPayerHasBeenSet = false;
  bool m_expectedBucketOwnerHasBeenSet = false;
  bool m_objectIfMatchHasBeenSet = false;
  bool m_customizedAccessLogTagHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Crt
}  // namespace Aws
