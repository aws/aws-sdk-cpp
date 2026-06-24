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
class ListObjectAnnotationsRequest : public S3CrtRequest {
 public:
  AWS_S3CRT_API ListObjectAnnotationsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListObjectAnnotations"; }

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
  ListObjectAnnotationsRequest& WithBucket(BucketT&& value) {
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
  ListObjectAnnotationsRequest& WithKey(KeyT&& value) {
    SetKey(std::forward<KeyT>(value));
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
  ListObjectAnnotationsRequest& WithVersionId(VersionIdT&& value) {
    SetVersionId(std::forward<VersionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of annotations to return in the response. Maximum is
   * 1,000.</p>
   */
  inline int GetMaxAnnotationResults() const { return m_maxAnnotationResults; }
  inline bool MaxAnnotationResultsHasBeenSet() const { return m_maxAnnotationResultsHasBeenSet; }
  inline void SetMaxAnnotationResults(int value) {
    m_maxAnnotationResultsHasBeenSet = true;
    m_maxAnnotationResults = value;
  }
  inline ListObjectAnnotationsRequest& WithMaxAnnotationResults(int value) {
    SetMaxAnnotationResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter results to annotations whose name begins with the specified
   * prefix.</p>
   */
  inline const Aws::String& GetAnnotationPrefix() const { return m_annotationPrefix; }
  inline bool AnnotationPrefixHasBeenSet() const { return m_annotationPrefixHasBeenSet; }
  template <typename AnnotationPrefixT = Aws::String>
  void SetAnnotationPrefix(AnnotationPrefixT&& value) {
    m_annotationPrefixHasBeenSet = true;
    m_annotationPrefix = std::forward<AnnotationPrefixT>(value);
  }
  template <typename AnnotationPrefixT = Aws::String>
  ListObjectAnnotationsRequest& WithAnnotationPrefix(AnnotationPrefixT&& value) {
    SetAnnotationPrefix(std::forward<AnnotationPrefixT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Continuation token returned by a previous request to retrieve the next
   * page.</p>
   */
  inline const Aws::String& GetContinuationToken() const { return m_continuationToken; }
  inline bool ContinuationTokenHasBeenSet() const { return m_continuationTokenHasBeenSet; }
  template <typename ContinuationTokenT = Aws::String>
  void SetContinuationToken(ContinuationTokenT&& value) {
    m_continuationTokenHasBeenSet = true;
    m_continuationToken = std::forward<ContinuationTokenT>(value);
  }
  template <typename ContinuationTokenT = Aws::String>
  ListObjectAnnotationsRequest& WithContinuationToken(ContinuationTokenT&& value) {
    SetContinuationToken(std::forward<ContinuationTokenT>(value));
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
  inline ListObjectAnnotationsRequest& WithRequestPayer(RequestPayer value) {
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
  ListObjectAnnotationsRequest& WithExpectedBucketOwner(ExpectedBucketOwnerT&& value) {
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
  ListObjectAnnotationsRequest& WithCustomizedAccessLogTag(CustomizedAccessLogTagT&& value) {
    SetCustomizedAccessLogTag(std::forward<CustomizedAccessLogTagT>(value));
    return *this;
  }
  template <typename CustomizedAccessLogTagKeyT = Aws::String, typename CustomizedAccessLogTagValueT = Aws::String>
  ListObjectAnnotationsRequest& AddCustomizedAccessLogTag(CustomizedAccessLogTagKeyT&& key, CustomizedAccessLogTagValueT&& value) {
    m_customizedAccessLogTagHasBeenSet = true;
    m_customizedAccessLogTag.emplace(std::forward<CustomizedAccessLogTagKeyT>(key), std::forward<CustomizedAccessLogTagValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bucket;

  Aws::String m_key;

  Aws::String m_versionId;

  int m_maxAnnotationResults{0};

  Aws::String m_annotationPrefix;

  Aws::String m_continuationToken;

  RequestPayer m_requestPayer{RequestPayer::NOT_SET};

  Aws::String m_expectedBucketOwner;

  Aws::Map<Aws::String, Aws::String> m_customizedAccessLogTag;
  bool m_bucketHasBeenSet = false;
  bool m_keyHasBeenSet = false;
  bool m_versionIdHasBeenSet = false;
  bool m_maxAnnotationResultsHasBeenSet = false;
  bool m_annotationPrefixHasBeenSet = false;
  bool m_continuationTokenHasBeenSet = false;
  bool m_requestPayerHasBeenSet = false;
  bool m_expectedBucketOwnerHasBeenSet = false;
  bool m_customizedAccessLogTagHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Crt
}  // namespace Aws
