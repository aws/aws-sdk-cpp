/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/RequestCharged.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Xml {
class XmlDocument;
}  // namespace Xml
}  // namespace Utils
namespace S3 {
namespace Model {
class DeleteObjectAnnotationResult {
 public:
  AWS_S3_API DeleteObjectAnnotationResult() = default;
  AWS_S3_API DeleteObjectAnnotationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
  AWS_S3_API DeleteObjectAnnotationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

  ///@{
  /**
   * <p>The version ID of the object that the annotation was deleted from.</p>
   */
  inline const Aws::String& GetObjectVersionId() const { return m_objectVersionId; }
  template <typename ObjectVersionIdT = Aws::String>
  void SetObjectVersionId(ObjectVersionIdT&& value) {
    m_objectVersionIdHasBeenSet = true;
    m_objectVersionId = std::forward<ObjectVersionIdT>(value);
  }
  template <typename ObjectVersionIdT = Aws::String>
  DeleteObjectAnnotationResult& WithObjectVersionId(ObjectVersionIdT&& value) {
    SetObjectVersionId(std::forward<ObjectVersionIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline RequestCharged GetRequestCharged() const { return m_requestCharged; }
  inline void SetRequestCharged(RequestCharged value) {
    m_requestChargedHasBeenSet = true;
    m_requestCharged = value;
  }
  inline DeleteObjectAnnotationResult& WithRequestCharged(RequestCharged value) {
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
  DeleteObjectAnnotationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_objectVersionId;

  RequestCharged m_requestCharged{RequestCharged::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_objectVersionIdHasBeenSet = false;
  bool m_requestChargedHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3
}  // namespace Aws
