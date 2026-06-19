/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/model/AnnotationEntry.h>
#include <aws/s3-crt/model/RequestCharged.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace S3Crt {
namespace Model {
class ListObjectAnnotationsResult {
 public:
  AWS_S3CRT_API ListObjectAnnotationsResult() = default;
  AWS_S3CRT_API ListObjectAnnotationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_S3CRT_API ListObjectAnnotationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The list of annotations attached to the object.</p>
   */
  inline const Aws::Vector<AnnotationEntry>& GetAnnotations() const { return m_annotations; }
  template <typename AnnotationsT = Aws::Vector<AnnotationEntry>>
  void SetAnnotations(AnnotationsT&& value) {
    m_annotationsHasBeenSet = true;
    m_annotations = std::forward<AnnotationsT>(value);
  }
  template <typename AnnotationsT = Aws::Vector<AnnotationEntry>>
  ListObjectAnnotationsResult& WithAnnotations(AnnotationsT&& value) {
    SetAnnotations(std::forward<AnnotationsT>(value));
    return *this;
  }
  template <typename AnnotationsT = AnnotationEntry>
  ListObjectAnnotationsResult& AddAnnotations(AnnotationsT&& value) {
    m_annotationsHasBeenSet = true;
    m_annotations.emplace_back(std::forward<AnnotationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The bucket name.</p>
   */
  inline const Aws::String& GetBucket() const { return m_bucket; }
  template <typename BucketT = Aws::String>
  void SetBucket(BucketT&& value) {
    m_bucketHasBeenSet = true;
    m_bucket = std::forward<BucketT>(value);
  }
  template <typename BucketT = Aws::String>
  ListObjectAnnotationsResult& WithBucket(BucketT&& value) {
    SetBucket(std::forward<BucketT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The object key.</p>
   */
  inline const Aws::String& GetKey() const { return m_key; }
  template <typename KeyT = Aws::String>
  void SetKey(KeyT&& value) {
    m_keyHasBeenSet = true;
    m_key = std::forward<KeyT>(value);
  }
  template <typename KeyT = Aws::String>
  ListObjectAnnotationsResult& WithKey(KeyT&& value) {
    SetKey(std::forward<KeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version ID of the object.</p>
   */
  inline const Aws::String& GetObjectVersionId() const { return m_objectVersionId; }
  template <typename ObjectVersionIdT = Aws::String>
  void SetObjectVersionId(ObjectVersionIdT&& value) {
    m_objectVersionIdHasBeenSet = true;
    m_objectVersionId = std::forward<ObjectVersionIdT>(value);
  }
  template <typename ObjectVersionIdT = Aws::String>
  ListObjectAnnotationsResult& WithObjectVersionId(ObjectVersionIdT&& value) {
    SetObjectVersionId(std::forward<ObjectVersionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The prefix used to filter the response.</p>
   */
  inline const Aws::String& GetAnnotationPrefix() const { return m_annotationPrefix; }
  template <typename AnnotationPrefixT = Aws::String>
  void SetAnnotationPrefix(AnnotationPrefixT&& value) {
    m_annotationPrefixHasBeenSet = true;
    m_annotationPrefix = std::forward<AnnotationPrefixT>(value);
  }
  template <typename AnnotationPrefixT = Aws::String>
  ListObjectAnnotationsResult& WithAnnotationPrefix(AnnotationPrefixT&& value) {
    SetAnnotationPrefix(std::forward<AnnotationPrefixT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of annotations returned in the response.</p>
   */
  inline int GetMaxAnnotationResults() const { return m_maxAnnotationResults; }
  inline void SetMaxAnnotationResults(int value) {
    m_maxAnnotationResultsHasBeenSet = true;
    m_maxAnnotationResults = value;
  }
  inline ListObjectAnnotationsResult& WithMaxAnnotationResults(int value) {
    SetMaxAnnotationResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of annotations returned.</p>
   */
  inline int GetAnnotationCount() const { return m_annotationCount; }
  inline void SetAnnotationCount(int value) {
    m_annotationCountHasBeenSet = true;
    m_annotationCount = value;
  }
  inline ListObjectAnnotationsResult& WithAnnotationCount(int value) {
    SetAnnotationCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The continuation token used in this request.</p>
   */
  inline const Aws::String& GetContinuationToken() const { return m_continuationToken; }
  template <typename ContinuationTokenT = Aws::String>
  void SetContinuationToken(ContinuationTokenT&& value) {
    m_continuationTokenHasBeenSet = true;
    m_continuationToken = std::forward<ContinuationTokenT>(value);
  }
  template <typename ContinuationTokenT = Aws::String>
  ListObjectAnnotationsResult& WithContinuationToken(ContinuationTokenT&& value) {
    SetContinuationToken(std::forward<ContinuationTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The continuation token to use to retrieve the next page of results.</p>
   */
  inline const Aws::String& GetNextContinuationToken() const { return m_nextContinuationToken; }
  template <typename NextContinuationTokenT = Aws::String>
  void SetNextContinuationToken(NextContinuationTokenT&& value) {
    m_nextContinuationTokenHasBeenSet = true;
    m_nextContinuationToken = std::forward<NextContinuationTokenT>(value);
  }
  template <typename NextContinuationTokenT = Aws::String>
  ListObjectAnnotationsResult& WithNextContinuationToken(NextContinuationTokenT&& value) {
    SetNextContinuationToken(std::forward<NextContinuationTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline RequestCharged GetRequestCharged() const { return m_requestCharged; }
  inline void SetRequestCharged(RequestCharged value) {
    m_requestChargedHasBeenSet = true;
    m_requestCharged = value;
  }
  inline ListObjectAnnotationsResult& WithRequestCharged(RequestCharged value) {
    SetRequestCharged(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ListObjectAnnotationsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<AnnotationEntry> m_annotations;

  Aws::String m_bucket;

  Aws::String m_key;

  Aws::String m_objectVersionId;

  Aws::String m_annotationPrefix;

  int m_maxAnnotationResults{0};

  int m_annotationCount{0};

  Aws::String m_continuationToken;

  Aws::String m_nextContinuationToken;

  RequestCharged m_requestCharged{RequestCharged::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_annotationsHasBeenSet = false;
  bool m_bucketHasBeenSet = false;
  bool m_keyHasBeenSet = false;
  bool m_objectVersionIdHasBeenSet = false;
  bool m_annotationPrefixHasBeenSet = false;
  bool m_maxAnnotationResultsHasBeenSet = false;
  bool m_annotationCountHasBeenSet = false;
  bool m_continuationTokenHasBeenSet = false;
  bool m_nextContinuationTokenHasBeenSet = false;
  bool m_requestChargedHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Crt
}  // namespace Aws
