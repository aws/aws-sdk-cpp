/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/BatchDeleteKnowledgeBaseFailure.h>
#include <aws/quicksight/model/BatchDeleteKnowledgeBaseSuccess.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {
class BatchDeleteKnowledgeBaseResult {
 public:
  AWS_QUICKSIGHT_API BatchDeleteKnowledgeBaseResult() = default;
  AWS_QUICKSIGHT_API BatchDeleteKnowledgeBaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API BatchDeleteKnowledgeBaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of knowledge bases that were successfully deleted.</p>
   */
  inline const Aws::Vector<BatchDeleteKnowledgeBaseSuccess>& GetDeleted() const { return m_deleted; }
  template <typename DeletedT = Aws::Vector<BatchDeleteKnowledgeBaseSuccess>>
  void SetDeleted(DeletedT&& value) {
    m_deletedHasBeenSet = true;
    m_deleted = std::forward<DeletedT>(value);
  }
  template <typename DeletedT = Aws::Vector<BatchDeleteKnowledgeBaseSuccess>>
  BatchDeleteKnowledgeBaseResult& WithDeleted(DeletedT&& value) {
    SetDeleted(std::forward<DeletedT>(value));
    return *this;
  }
  template <typename DeletedT = BatchDeleteKnowledgeBaseSuccess>
  BatchDeleteKnowledgeBaseResult& AddDeleted(DeletedT&& value) {
    m_deletedHasBeenSet = true;
    m_deleted.emplace_back(std::forward<DeletedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of knowledge bases that failed to be deleted.</p>
   */
  inline const Aws::Vector<BatchDeleteKnowledgeBaseFailure>& GetErrors() const { return m_errors; }
  template <typename ErrorsT = Aws::Vector<BatchDeleteKnowledgeBaseFailure>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<BatchDeleteKnowledgeBaseFailure>>
  BatchDeleteKnowledgeBaseResult& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  template <typename ErrorsT = BatchDeleteKnowledgeBaseFailure>
  BatchDeleteKnowledgeBaseResult& AddErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors.emplace_back(std::forward<ErrorsT>(value));
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
  BatchDeleteKnowledgeBaseResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The HTTP status of the request.</p>
   */
  inline int GetStatus() const { return m_status; }
  inline void SetStatus(int value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline BatchDeleteKnowledgeBaseResult& WithStatus(int value) {
    SetStatus(value);
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<BatchDeleteKnowledgeBaseSuccess> m_deleted;

  Aws::Vector<BatchDeleteKnowledgeBaseFailure> m_errors;

  Aws::String m_requestId;

  int m_status{0};
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_deletedHasBeenSet = false;
  bool m_errorsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
