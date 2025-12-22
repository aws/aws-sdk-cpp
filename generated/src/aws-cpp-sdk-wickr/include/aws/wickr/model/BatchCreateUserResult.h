/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wickr/Wickr_EXPORTS.h>
#include <aws/wickr/model/BatchUserErrorResponseItem.h>
#include <aws/wickr/model/User.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Wickr {
namespace Model {
class BatchCreateUserResult {
 public:
  AWS_WICKR_API BatchCreateUserResult() = default;
  AWS_WICKR_API BatchCreateUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WICKR_API BatchCreateUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A message indicating the overall result of the batch operation.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  BatchCreateUserResult& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of user objects that were successfully created, including their
   * assigned user IDs and invite codes.</p>
   */
  inline const Aws::Vector<User>& GetSuccessful() const { return m_successful; }
  template <typename SuccessfulT = Aws::Vector<User>>
  void SetSuccessful(SuccessfulT&& value) {
    m_successfulHasBeenSet = true;
    m_successful = std::forward<SuccessfulT>(value);
  }
  template <typename SuccessfulT = Aws::Vector<User>>
  BatchCreateUserResult& WithSuccessful(SuccessfulT&& value) {
    SetSuccessful(std::forward<SuccessfulT>(value));
    return *this;
  }
  template <typename SuccessfulT = User>
  BatchCreateUserResult& AddSuccessful(SuccessfulT&& value) {
    m_successfulHasBeenSet = true;
    m_successful.emplace_back(std::forward<SuccessfulT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of user creation attempts that failed, including error details
   * explaining why each user could not be created.</p>
   */
  inline const Aws::Vector<BatchUserErrorResponseItem>& GetFailed() const { return m_failed; }
  template <typename FailedT = Aws::Vector<BatchUserErrorResponseItem>>
  void SetFailed(FailedT&& value) {
    m_failedHasBeenSet = true;
    m_failed = std::forward<FailedT>(value);
  }
  template <typename FailedT = Aws::Vector<BatchUserErrorResponseItem>>
  BatchCreateUserResult& WithFailed(FailedT&& value) {
    SetFailed(std::forward<FailedT>(value));
    return *this;
  }
  template <typename FailedT = BatchUserErrorResponseItem>
  BatchCreateUserResult& AddFailed(FailedT&& value) {
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
  BatchCreateUserResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_message;

  Aws::Vector<User> m_successful;

  Aws::Vector<BatchUserErrorResponseItem> m_failed;

  Aws::String m_requestId;
  bool m_messageHasBeenSet = false;
  bool m_successfulHasBeenSet = false;
  bool m_failedHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
