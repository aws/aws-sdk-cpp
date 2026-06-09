/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/DeleteCodeReviewFailure.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {
/**
 * <p>Output for the BatchDeleteCodeReviews operation.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/BatchDeleteCodeReviewsOutput">AWS
 * API Reference</a></p>
 */
class BatchDeleteCodeReviewsResult {
 public:
  AWS_SECURITYAGENT_API BatchDeleteCodeReviewsResult() = default;
  AWS_SECURITYAGENT_API BatchDeleteCodeReviewsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYAGENT_API BatchDeleteCodeReviewsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of identifiers of the code reviews that were successfully
   * deleted.</p>
   */
  inline const Aws::Vector<Aws::String>& GetDeleted() const { return m_deleted; }
  template <typename DeletedT = Aws::Vector<Aws::String>>
  void SetDeleted(DeletedT&& value) {
    m_deletedHasBeenSet = true;
    m_deleted = std::forward<DeletedT>(value);
  }
  template <typename DeletedT = Aws::Vector<Aws::String>>
  BatchDeleteCodeReviewsResult& WithDeleted(DeletedT&& value) {
    SetDeleted(std::forward<DeletedT>(value));
    return *this;
  }
  template <typename DeletedT = Aws::String>
  BatchDeleteCodeReviewsResult& AddDeleted(DeletedT&& value) {
    m_deletedHasBeenSet = true;
    m_deleted.emplace_back(std::forward<DeletedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of code reviews that failed to delete, including the reason for each
   * failure.</p>
   */
  inline const Aws::Vector<DeleteCodeReviewFailure>& GetFailed() const { return m_failed; }
  template <typename FailedT = Aws::Vector<DeleteCodeReviewFailure>>
  void SetFailed(FailedT&& value) {
    m_failedHasBeenSet = true;
    m_failed = std::forward<FailedT>(value);
  }
  template <typename FailedT = Aws::Vector<DeleteCodeReviewFailure>>
  BatchDeleteCodeReviewsResult& WithFailed(FailedT&& value) {
    SetFailed(std::forward<FailedT>(value));
    return *this;
  }
  template <typename FailedT = DeleteCodeReviewFailure>
  BatchDeleteCodeReviewsResult& AddFailed(FailedT&& value) {
    m_failedHasBeenSet = true;
    m_failed.emplace_back(std::forward<FailedT>(value));
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
  BatchDeleteCodeReviewsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<Aws::String> m_deleted;

  Aws::Vector<DeleteCodeReviewFailure> m_failed;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_deletedHasBeenSet = false;
  bool m_failedHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
