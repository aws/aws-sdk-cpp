/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/BatchDescribeUserLimitsError.h>
#include <aws/quicksight/model/UserLimits.h>

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
class BatchDescribeUserLimitsResult {
 public:
  AWS_QUICKSIGHT_API BatchDescribeUserLimitsResult() = default;
  AWS_QUICKSIGHT_API BatchDescribeUserLimitsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API BatchDescribeUserLimitsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of user limits results. Each entry contains the effective limits for a
   * user.</p>
   */
  inline const Aws::Vector<UserLimits>& GetUserLimits() const { return m_userLimits; }
  template <typename UserLimitsT = Aws::Vector<UserLimits>>
  void SetUserLimits(UserLimitsT&& value) {
    m_userLimitsHasBeenSet = true;
    m_userLimits = std::forward<UserLimitsT>(value);
  }
  template <typename UserLimitsT = Aws::Vector<UserLimits>>
  BatchDescribeUserLimitsResult& WithUserLimits(UserLimitsT&& value) {
    SetUserLimits(std::forward<UserLimitsT>(value));
    return *this;
  }
  template <typename UserLimitsT = UserLimits>
  BatchDescribeUserLimitsResult& AddUserLimits(UserLimitsT&& value) {
    m_userLimitsHasBeenSet = true;
    m_userLimits.emplace_back(std::forward<UserLimitsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of errors for users whose limits could not be described.</p>
   */
  inline const Aws::Vector<BatchDescribeUserLimitsError>& GetErrors() const { return m_errors; }
  template <typename ErrorsT = Aws::Vector<BatchDescribeUserLimitsError>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<BatchDescribeUserLimitsError>>
  BatchDescribeUserLimitsResult& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  template <typename ErrorsT = BatchDescribeUserLimitsError>
  BatchDescribeUserLimitsResult& AddErrors(ErrorsT&& value) {
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
  BatchDescribeUserLimitsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<UserLimits> m_userLimits;

  Aws::Vector<BatchDescribeUserLimitsError> m_errors;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_userLimitsHasBeenSet = false;
  bool m_errorsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
