/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/OAuthClientApplication.h>

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
class DescribeOAuthClientApplicationResult {
 public:
  AWS_QUICKSIGHT_API DescribeOAuthClientApplicationResult() = default;
  AWS_QUICKSIGHT_API DescribeOAuthClientApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API DescribeOAuthClientApplicationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The information about the OAuthClientApplication.</p>
   */
  inline const OAuthClientApplication& GetOAuthClientApplication() const { return m_oAuthClientApplication; }
  template <typename OAuthClientApplicationT = OAuthClientApplication>
  void SetOAuthClientApplication(OAuthClientApplicationT&& value) {
    m_oAuthClientApplicationHasBeenSet = true;
    m_oAuthClientApplication = std::forward<OAuthClientApplicationT>(value);
  }
  template <typename OAuthClientApplicationT = OAuthClientApplication>
  DescribeOAuthClientApplicationResult& WithOAuthClientApplication(OAuthClientApplicationT&& value) {
    SetOAuthClientApplication(std::forward<OAuthClientApplicationT>(value));
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
  DescribeOAuthClientApplicationResult& WithRequestId(RequestIdT&& value) {
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
  inline DescribeOAuthClientApplicationResult& WithStatus(int value) {
    SetStatus(value);
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  OAuthClientApplication m_oAuthClientApplication;

  Aws::String m_requestId;

  int m_status{0};
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_oAuthClientApplicationHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
